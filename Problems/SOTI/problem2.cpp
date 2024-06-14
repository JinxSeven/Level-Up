#include <bits/stdc++.h>

void stockSpan(int arr[], int size) {
    int count;
    for (int x = 0; x < size; x++) {
        count = 1; 
        for (int y = 0; y < x; y++) {
            if (arr[y] < arr[x]) {
                count++;
            }
        }
        std::cout << count << " ";
    }
}

int main(int argc, char** argv) {
    int arr[] = {55, 21, 33, 12};
    stockSpan(arr, 4);
}