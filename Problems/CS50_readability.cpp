#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

std::string test_sentence;
int word_count = 1, letter_count = 0, sentence_count = 0;
int counter = 0;

void readability() {
    for (char x : test_sentence) {
        if (std::isalpha(x)) {
            letter_count++;
        }
    }
    for (char x : test_sentence) {
        if (x == ' ') {
            word_count++;
        }
        else if (x == '.' || x == '!' || x == '?') {
            sentence_count++;
        }        
    }
}

void coleman_liau() {
    double L, S;

    std::cout << letter_count << "\n";
    std::cout << word_count << "\n";
    std::cout << sentence_count << "\n";

    L = (letter_count / static_cast<double>(word_count)) * 100;
    S = (sentence_count / static_cast<double>(word_count)) * 100;
    int grade_value = std::round(0.0588 * L - 0.296 * S - 15.8);

    if (grade_value > 16) {
        std::cout << "Grade 16+";
    }
    else if (grade_value <= 16) {
        std::cout << "Grade " << grade_value;
    }
    else {
        std::cout << "Before Grade " << std::max(1, grade_value);
    }
    }

int main() {
    std::cout << "Enter the text: ";
    std::getline(std::cin, test_sentence);

    readability();
    coleman_liau();
}