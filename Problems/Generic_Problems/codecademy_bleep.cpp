#include <iostream>
#include <string>

int main() {

std::string ofnce = "Carrots";
std::string quote = "Carrots are not just an ordinary vegetable; they are a nutritional powerhouse. These vibrant orange roots are known for their crisp texture and sweet, earthy flavor. Carrots are not only delicious when eaten raw or cooked, but they are also packed with essential vitamins and minerals. Whether you enjoy them as a crunchy snack, grated into a salad, or as a key ingredient in soups and stews, carrots offer versatility and a burst of color on your plate. So, don't forget to add a dash of vibrant orange with carrots to your meals for a healthy and tasty experience.";

for (int i = 0 ; i < quote.length() ; i++) {
    int match = 0;
    for (int j = 0 ; j < ofnce.length() ; j++) {
        if (quote[i+j] == ofnce[j]) {
        ++match;
    }
        //std::cout << "i = " << i << "\n" ;
        //std::cout << "j = " << j << "\n" ;
        if (match == ofnce.length()) {
            for (int k = 0 ; k < ofnce.length() ; k++) {
                quote[i+k] = '*';
}
    }     
}
    }    
        std::cout << quote;
        //std::cout << "\n" << i << "\n" ;
        std::cout << "\n" << ofnce.size();
        return 0;
}
