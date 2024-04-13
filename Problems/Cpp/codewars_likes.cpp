#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> Liked;
int ttl_nums;
std::string vec_psh;

std::string likes(const std::vector<std::string> &names)
{
    std::string output;
    if (names.size() == 0) {
        output = "no one likes this";
    }
    else if (names.size() == 1) {
        output = names[0] + " likes this";
    }
    else if (names.size() == 2) {
        output = names[0] + " and " + names[1] + " like this";
    }
    else if (names.size() == 3) {
        output = names[0] + ", " + names[1] + " and " + names[2] + " like this";
    }
    else {
        output = names[0] + ", " + names[1] + " and " + std::to_string( names.size() - 2) + " others like this";
    }
        return output;
}

int main() {
    std::cout << "Enter number of names to push in:\n";
    std::cin >> ttl_nums;
    std::cout << "Enter " << ttl_nums << " Names\n";
    std::cout << "After entering each name hit 'Enter'\n";

    while (ttl_nums > 0)
    {
        std::cin >> vec_psh;
        Liked.push_back(vec_psh);
        ttl_nums--;
    }

std::cout << likes(Liked);
std::cout << Liked.size();

}