#include<stdio.h>

int main() {
    int vec_sz;
    scanf("%d", &vec_sz);
    int sort[vec_sz];
    int sort2[vec_sz];

    for (int x = 0; x < vec_sz; x++) {
        scanf("%d", &sort[x]);
    }

    for (int d = 0; d < vec_sz; d++) {
        sort2[d] = sort[d];
    }

    int counter = 0;
    int counter2 = 0;

    for (int z = 0; z < (vec_sz - 1); z++) {
        for (int i = 0; i < (vec_sz - z - 1); i++) {
            if (sort[i] > sort[i + 1]) {
                int temp = sort[i];
                sort[i] = sort[i + 1];
                sort[i + 1] = temp;
                counter++;
            }
        }
    }

    for (int a = 0; a < (vec_sz - 1); a++) {
        for (int b = 0; b < (vec_sz - a - 1); b++) {
            if (sort2[b] < sort2[b + 1]) {
                int temp2 = sort2[b];
                sort2[b] = sort2[b + 1];
                sort2[b + 1] = temp2;
                counter2++;
            }
        }
    }

    if (counter < counter2) {
        printf("%d\n", counter);
    } else {
        printf("%d\n", counter2);
    }

    return 0;
}