#include <iostream>

void merge(int sort[], int mid, int lidx, int ridx) {
    int lsize = (mid - lidx) + 1;
}

int main(int argc, char const *argv[])
{
    int unsort[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int size = sizeof(unsort) / sizeof(unsort[0]);
    int mid = (size / 2) - 1;
    int lidx = 0;
    int ridx = size - 1;
    merge(unsort, mid, lidx, ridx);
}
