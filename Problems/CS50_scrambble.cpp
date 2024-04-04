#include <iostream>
#include <string>

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

void score_keeper(std::string& words_one, std::string& words_two) {
    int position, score_one = 0, score_two = 0;
    for (char x : words_one) {
        if (std::isupper(x)) {
            position = x - 'A';
            score_one += points[position];
        } else if (std::islower(x)) {
            position = x - 'a';
            score_one += points[position];
        }
    }
    for (char z : words_two) {
        if (std::isupper(z)) {
            position = z - 'A';
            score_two += points[position];
        } else if (std::islower(z)) {
            position = z - 'a';
            score_two += points[position];
        }
    }
    if (score_one < score_two) {
        std::cout << "Player two wins!";
    } else if (score_one > score_two) {
        std::cout << "Player one wins!";
    } else {
        std::cout << "Tie!";
    }
}

int main() {
    std::string words_one, words_two;
    std::cout << "Enter word - player one: ";
    std::cin >> words_one;
    std::cout << "Enter word - player two: ";
    std::cin >> words_two;

    score_keeper(words_one, words_two);
}
