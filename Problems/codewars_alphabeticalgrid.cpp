#include<iostream>
#include<string>
#include<vector>

std::string grid(int val) {
    std::vector<std::vector<char>> md_array(val, std::vector<char>(val));
    for (int x = 0; x < val; x++) {
        for (int z = 0; z < val; z++) {
            int tmp_num = 'a' + z + x;
            if (tmp_num > 'z') {
                do {
                    tmp_num = 'a' + (tmp_num - 'z') - 1;
                } while (tmp_num > 123);
            }
            char tmp_char = tmp_num;
            md_array[x][z] = tmp_char;
        }
    }

    std::string grid_str;
    for (const auto& output : md_array) {
        for (const char& opt : output) {
            grid_str += opt;
        }
        grid_str += "\n";
    }

    return grid_str;
}

int main() {
    int val; 
    std::cout << "Enter grid value: ";
    std::cin >> val;
    std::cout << grid(val);
}    
