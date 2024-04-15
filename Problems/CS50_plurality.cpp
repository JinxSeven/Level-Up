#include <iostream>
#include <string>
#include <vector>

#define MAX 10

struct Candidate {
    std::string name;
    int votes;
};

std::vector<Candidate> candidates;
int candidate_count;
int count_votes;

bool vote(std::string name);
void print_winner();

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: ./a.out [candidate ...]" << std::endl;
        return 1;
    }

    candidate_count = argc - 1;
    if (candidate_count > MAX) {
        std::cout << "Maximum number of candidates is " << MAX << std::endl;
        return 2;
    }

    for (int i = 1; i < argc; i++) {
        candidates.push_back({argv[i], 0});
    }

    std::cout << "Number of voters: ";
    std::cin >> count_votes;

    for (int i = 0; i < count_votes; i++) {
        std::string name;
        std::cout << "Vote: ";
        std::cin >> name;
        if (!vote(name)) {
            std::cout << "Invalid vote." << std::endl;
        }
    }

    print_winner();
    return 0;
}

bool vote(std::string name) {
    for (int x = 0; x < candidate_count; x++) {
        if (name == candidates[x].name) {
            candidates[x].votes++;
            return true;
        }
    }
    return false;
}

void print_winner() {
    int position;
    int high_vote = 0;
    for (int x = 0; x < candidate_count; x++) {
        if (candidates[x].votes > high_vote) {
            high_vote = candidates[x].votes;
            position = x;
        }
    }

    for (int j = 0; j < candidate_count; j++) {
        if (high_vote == candidates[j].votes) {
            std::cout << candidates[j].name << std::endl;
        }
    }
}
