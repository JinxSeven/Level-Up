#include<iostream>
#include<string>
#include<vector>

std::string test = "#";

int main(int argc, char const *argv[]) {
    int floors;
    int count = 0;
    int star_count = 1;
    std::string star = "*";
    std::string space = " ";
    std::cin >> floors;
    std::vector<std::string>pyramid(floors);

    for (int r = 0; r < (floors - 1); r++) {
        for (int t = 0; t < ((floors - 1) - r); t++) {
                pyramid[r] += space;
        }
    }

    for (int x = 0; x < (floors * 2.5); x++) {
        if ((star_count % 2) == 1) {
            for (int p = 0; p < star_count; p++) {
                pyramid[x] += star;
            }
            star_count += 2;
            count++;
        }
        if (count == floors) {
            break;
        }
    }

        for (int r = 0; r < (floors- 1); r++) {
        for (int t = (floors + 1); t < ((floors + floors- r)); t++) {
                pyramid[r] += space;
        }
    }

    for (std::string output : pyramid) {
        std::cout << output << "\n";
    }
    return 0;
}