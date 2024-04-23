#include <iostream>
#include <string>

std::string cipher_text;
std::string plain_text;
bool loop;
int key;

void caesar_cipher() {
    
    for (int x = 0; x < plain_text.length(); x++) {
        
        if (std::isalpha(plain_text[x])) {
            int convertor = plain_text[x] + key;
        
            if (std::isupper(plain_text[x]) && convertor > 'Z') {
                do {
                    convertor = 'A' + (convertor - 'Z') - 1;
                } while (convertor > 91);
            }
                
            else if (std::islower(plain_text[x]) && convertor > 'z') {
                convertor = (convertor - 'a') % 26 + 'a';
            } 

            char cipher = convertor;
            cipher_text += cipher;
        } 
        else {
            cipher_text += plain_text[x];
        }
    }
    std::cout << cipher_text << "\n";
}

int main(int argc, char const *argv[]) {

    bool arg = true;

    do {
    if (argc != 2 || argc > 2) {
        std::cout << "Usage: ./a.out key";
        exit(1);
    }
    else {
        try {
            key = std::stoi(argv[1]);
            arg = false;
        }
        catch (const std::invalid_argument) {
            std::cout << "Usage: ./a.out key";
            exit(1);
        }
    }
    } while (arg);

    std::cout << "Enter plain_text: ";
    std::getline(std::cin, plain_text);

    caesar_cipher();

}