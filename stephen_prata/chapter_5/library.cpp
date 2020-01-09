#include <iostream>
#include <fstream>
#include <string>

#define WRONG_ARGUMENT_EXCEPTION "\nWrong argument, please enter correct command number!\n"
#define FILE_PATH "library.txt"
#define TEMP_FILE_PATH "temp.txt"

// -------------------------------- CLASS DEFINE -------------------------------- //

class Book {
public:
    std::string mAuthor;
    std::string mTitle;
    std::string mGenre;

    explicit Book(std::string author = "", std::string title = "", std::string genre = "") : mAuthor(std::move(author)),
                                                                                             mTitle(std::move(title)),
                                                                                             mGenre(std::move(genre)) {}

    friend std::ostream &operator<<(std::ostream &out, const Book &obj) {
        out << obj.mAuthor << ';' << obj.mTitle << ';' << obj.mGenre << std::endl;
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Book &obj) {
        getline(in, obj.mAuthor, ';');
        getline(in, obj.mTitle, ';');
        getline(in, obj.mGenre);
        return in;
    }
};

// -------------------------------- FUNCTIONS DEFINE ---------------------------- //

enum operation {
    PRINT = 1, CREATE = 2, UPDATE = 3, REMOVE = 4, SEARCH = 5, EXIT_PROGRAM = 0
};

Book createEntity();

Book findBook();

void updateEntity();

void removeEntity();

void printAllEntities();

void printWrongArgumentException();

void displayMainMenu();

void createTestDataset();

void saveEntity(const Book &);

void deleteBook(const std::string &);

void printBook(Book);

// -------------------------------- MAIN ------------------------------ //

int main() {
    createTestDataset();
    int command;

    while (true) {
        displayMainMenu();
        std::cin >> command;

        switch (command) {
            case PRINT:
                printAllEntities();
                break;
            case CREATE: {
                Book book = createEntity();
                saveEntity(book);
                break;
            }
            case UPDATE: {
                updateEntity();
                break;
            }
            case REMOVE: {
                removeEntity();
                break;
            }
            case SEARCH: {
                Book book = findBook();
                printBook(book);
                break;
            }
            case EXIT_PROGRAM: {
                exit(0);
            }
            default: {
                printWrongArgumentException();
            }
        }
    }
}

void printBook(Book book) {
    if (!book.mTitle.empty()) {
        std::cout << "\n-----\nAuthor: " << book.mAuthor << "\nTitle: " << book.mTitle << "\nGenre: " << book.mGenre
                  << std::endl;
    } else {
        std::cout << "Book not found" << std::endl;
    }
}

void printAllEntities() {
    std::ifstream in(FILE_PATH);
    Book book;

    std::cout << "BOOKS IN LIBRARY:";

    while (in) {
        in >> book;

        if (!book.mAuthor.empty()) {
            std::cout << "\n-----\nAuthor: " << book.mAuthor << "\nTitle: " << book.mTitle << "\nGenre: " << book.mGenre
                      << std::endl;
        }
    }
    in.close();
}

Book createEntity() {
    using std::cout;
    using std::cin;
    using std::string;

    string author;
    string title;
    string genre;
    cin.ignore();

    cout << "Enter an author: ";
    getline(cin, author);

    cout << "Enter a title: ";
    getline(cin, title);

    cout << "Enter a genre: ";
    getline(cin, genre);

    Book book(author, title, genre);

    return book;
}

Book findBook() {
    std::string title;
    std::cin.ignore();

    std::cout << "Enter a title: ";
    getline(std::cin, title);

    std::ifstream in(FILE_PATH);
    Book book;

    while (in) {
        in >> book;

        if (title == book.mTitle) {
            std::cout << "BOOK FOUND!" << std::endl;
            return book;
        }
    }
    return Book();
}

void saveEntity(const Book &book) {
    std::ofstream out(FILE_PATH, std::ios::app);
    out << book;
    out.close();
}

void updateEntity() {
    Book book = findBook();

    if (!book.mTitle.empty()) {
        deleteBook(book.mTitle);
        book = createEntity();
        saveEntity(book);
    } else {
        std::cout << "THERE IS NO SUCH BOOK IN LIBRARY!" << std::endl;
    }
}

void deleteBook(const std::string &title) {
    Book book;
    std::ifstream in;
    in.open(FILE_PATH);
    std::ofstream temp;
    temp.open(TEMP_FILE_PATH);

    while (in) {
        in >> book;
        if (book.mTitle != title) {
            temp << book;
        }
    }
    temp.close();
    in.close();
    remove(FILE_PATH);
    rename(TEMP_FILE_PATH, FILE_PATH);
}

void removeEntity() {
    std::string removeTitle;

    std::cout << "ENTER BOOK TITLE TO REMOVE: ";
    std::cin.ignore();
    std::getline(std::cin, removeTitle);

    deleteBook(removeTitle);
}

void printWrongArgumentException() {
    std::cout << WRONG_ARGUMENT_EXCEPTION << std::endl;
}

void displayMainMenu() {
    using std::cout;

    cout << "------------------------------\n";
    cout << "Main Menu\n";
    cout << "Please make your selection\n";
    cout << "1 - Print all books from file\n";
    cout << "2 - Create new book\n";
    cout << "3 - Update book\n";
    cout << "4 - Remove book\n";
    cout << "5 - Find book\n";
    cout << "0 - Exit program\n";
    cout << "------------------------------\n";
    cout << "Selection: ";
}

void createTestDataset() {
    Book firstBook("Stephen Prata", "C Primer Plus", "Programming");
    Book secondBook("K&R", "C Programming Language, The", "Programming");
    Book thirdBook("Nietzsche", "Zarathustra", "Philosophy");

    std::ofstream out(FILE_PATH);

    out << firstBook;
    out << secondBook;
    out << thirdBook;

    out.close();
}
