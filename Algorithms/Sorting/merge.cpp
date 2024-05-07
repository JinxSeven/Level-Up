#include <iostream>

void merge(int sort[], int mid, int lindx, int rindx) {
    int lsize = (mid - lindx) + 1;
    int rsize = (rindx - mid);

    int larr[lsize], rarr[rsize];

    for (int i = 0; i < lsize; i++) {
        larr[i] = sort[lindx + i];
    }
    for (int j = 0; j < rsize; j++) {
        rarr[j] = sort[mid + 1 + j];
    }

    int indx = lindx, i = 0, j = 0;

    while (i < lsize and j < rsize) {
        if (larr[i] <= rarr[j]) {
            sort[indx] = larr[i];
            indx++;
            i++;
        } else {
            sort[indx] = rarr[j];
            indx++;
            j++;
        }
    }

    while (i < lsize) {
        sort[indx] = larr[i];
        indx++;
        i++;
    }

    while (j < rsize) {
        sort[indx] = rarr[j];
        indx++;
        j++;
    }
}

void mergeSort(int sort[], int lindx, int rindx) {
    if (lindx >= rindx) return;

    int mid = lindx + (rindx - lindx) / 2;
    mergeSort(sort, lindx, mid);
    mergeSort(sort, mid + 1, rindx);

    merge(sort, mid, lindx, rindx);
}

int main(int argc, char const *argv[])
{
    int unsort[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(unsort) / sizeof(unsort[0]);
    int mid = (size / 2) - 1;
    int lindx = 0;
    int rindx = size - 1;
    mergeSort(unsort, lindx, rindx);
    for (int x : unsort) std::cout << x << " ";
}
