#include <iostream>
#include <string>
#include <vector>

#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

int preferences[MAX_VOTERS][MAX_CANDIDATES];
int min_2;

struct Candidate {
    std::string name;
    int votes;
    bool eliminated;
};

std::vector<Candidate> candidates;
int voter_count;
int candidate_count;

bool vote(int voter, int rank, std::string name);
void tabulate();
bool print_winner();
int find_min();
bool is_tie(int min);
void eliminate();

int main(int argc, char const *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: runoff [candidate ...]\n";
        return 1;
    }

    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES) {
        std::cout << "Maximum number of candidates is " << MAX_CANDIDATES << "\n";
        return 2;
    }

    for (int i = 0; i < candidate_count; i++) {
        Candidate candidate;
        candidate.name = argv[i + 1];
        candidate.votes = 0;
        candidate.eliminated = false;
        candidates.push_back(candidate);
    }

    std::cout << "Number of voters: ";
    std::cin >> voter_count;
    if (voter_count > MAX_VOTERS) {
        std::cout << "Maximum number of voters is " << MAX_VOTERS << "\n";
        return 3;
    }

    for (int i = 0; i < voter_count; i++) {
        for (int j = 0; j < candidate_count; j++) {
            std::string name;
            std::cout << "Rank " << j + 1 << ": ";
            std::cin >> name;
            if (!vote(i, j, name)) {
                std::cout << "Invalid vote.\n";
                return 4;
            }
        }
        std::cout << "\n";
    }

    while (true) {
        tabulate();
        if (print_winner()) {
            break;
        }
        int min = find_min();
        if (is_tie(min)) {
            for (int i = 0; i < candidate_count; i++) {
                if (!candidates[i].eliminated) {
                    std::cout << candidates[i].name << "\n";
                }
            }
            break;
        }
        eliminate();
        for (int i = 0; i < candidate_count; i++) {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

bool vote(int voter, int rank, std::string name) {
    for (int i = 0; i < candidate_count; i++) {
        if (name == candidates[i].name) {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

void tabulate() {
    for (int z = 0; z < voter_count; z++) {
        for (int w = 0; w < candidate_count; w++) {
            int index = preferences[z][w];
                if (!candidates[index].eliminated) {
                    candidates[index].votes++;
                    break;}
        }
    }
}

bool print_winner() {
    for (int x = 0; x < candidate_count; x++) {
        if (candidates[x].votes > voter_count / 2) {
            std::cout << candidates[x].name;
            return true;
        }
    }
    return false;
}

int find_min() {
    int min_1 = 100;
    for (int x = 0; x < candidate_count; x++) {
        if (!candidates[x].eliminated && candidates[x].votes < min_1) {
            min_1 = candidates[x].votes;
            min_2 = x;
        }
    }
    return min_1;
}

bool is_tie(int min) {
        for (int i = 0; i < candidate_count; i++) {
            if (!candidates[i].eliminated && candidates[i].votes != min) {
                return false;
            }
        }
    return true;
}

void eliminate() {
    candidates[min_2].eliminated = true;
}
