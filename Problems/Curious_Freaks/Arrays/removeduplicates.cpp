#include <bits/stdc++.h>

class RDuplicate {
    private:
        std::set<int> intersect;

    public:
        void unions(int arr[], int brr[], int asize, int bsize) {
            std::sort(arr, arr + asize);
            std::sort(brr, brr + bsize);
            int x = 0, y = 0;
            std::cout << "Unions: ";
            while (x < asize && y < bsize) {
                if (arr[x] < brr[y]) {
                    std::cout << arr[x] << " ";
                    x++;
                } else if (arr[x] > brr[y]) {
                    std::cout << brr[y] << " ";
                    y++;
                } else {
                    std::cout << arr[x] << " ";
                    intersect.insert(arr[x]);
                    x++;
                    y++;
                }
            }
            while (x < asize) {
                std::cout << arr[x] << " ";
                x++;
            }
            while (y < bsize) {
                std::cout << brr[y] << " ";
                y++;
            }
            std::cout << std::endl;
        }

        void intersection() {
            std::cout << "Intersections: ";
            for (auto output : intersect) {
                std::cout << output << " ";
            }
            std::cout << std::endl;
        }
};

int main() {
    int arr1[] = { 7, 1, 5, 2, 3, 6 };
    int arr2[] = { 3, 8, 6, 20, 7 };
    RDuplicate output;
    int asize = (sizeof(arr1))/sizeof(arr1[0]);
    int bsize = (sizeof(arr2))/sizeof(arr2[0]); 
    output.unions(arr1, arr2, asize, bsize);
    output.intersection();
}