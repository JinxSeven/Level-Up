#include <iostream>
#include <sstream>
#include <string>

std::string pig_it(std::string str)
{
    std::istringstream input(str);
    std::ostringstream output;

    std::string temp_str;

    while (input >> temp_str) {
        bool valid_wrd = true;
            for (char x : temp_str) {
                if (!isalpha(x)) valid_wrd = false;
                break;
            }
        if (valid_wrd) {
            char temp = temp_str[0];
            temp_str = temp_str.substr(1) + temp + "ay";
        }
        output << temp_str << " ";
    }
    std::string result = output.str();
    result.pop_back();
    return result;
}

int main(int argc, char const *argv[])
{
    std::cout << pig_it("Hello world!");
    return 0;
}
