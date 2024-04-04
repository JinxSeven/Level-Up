#include <iostream>
#include <string>
#include <vector>

struct election {
        std::string candidate;
        int votes;
    };

void vote_count(election& total) {
    std::cout << total.votes << "\n"; 
}

void vote_inc(election& person, int plus) {
    person.votes += plus;
}

void final_result(std::vector<election>& name_list){
    int winner = name_list[0].votes;
    int finalj;
    
    for (int j = 1; j < name_list.size(); j++) {
        if (name_list[j].votes > winner) {
            winner = name_list[j].votes;
            finalj = j;
        }
    }
        name_list[finalj].candidate = "President " + name_list[finalj].candidate;
        std::cout << name_list[finalj].candidate;
        std::cout << " won the election by getting a total of ";
        std::cout << name_list[finalj].votes << " votes\n";
}

int main() {
    election trump{"Trump", 590};
    election obama{"Obama", 680};
    vote_inc(obama, 20);
    
    std::vector<election> showdown {trump,obama};
    final_result(showdown);

}
