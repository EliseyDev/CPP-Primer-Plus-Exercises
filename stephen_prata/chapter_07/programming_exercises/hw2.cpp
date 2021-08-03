#include <iostream>

#define SIZE 10

int get_score(int scores[], int n);

double average_score(const int scores[], int n);

void print_scores(const int scores[], int n);


int main() {
    int scores[SIZE];
    int i;

    for (i = 0; i < SIZE; i++) {
        int result = get_score(scores, i);

        if (result < 0) {
            break;
        }
    }

    print_scores(scores, i);
    std::cout << ". Average score = " << average_score(scores, i) << std::endl;

    return 0;
}

int get_score(int scores[], int n) {
    using namespace std;
    cout << "Enter score of round: " << n + 1 << endl;
    int score;
    while (!(cin >> score)) {
        cin.clear();
        cin.ignore(100, '\n');

        cout << "Enter a number" << endl;
    }

    if (score < 0) {
        return -1;
    }

    return scores[n] = score;
}

double average_score(const int scores[], int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += scores[i];
    }
    return result / n;
}

void print_scores(const int scores[], int n) {
    std::cout << "Scores = ";
    for (int i = 0; i < n; i++) {
        std::cout << scores[i] << " ";
    }
}