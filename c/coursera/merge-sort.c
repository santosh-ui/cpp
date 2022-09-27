#include<stdio.h>
#define SIZE 8

void print_array(int size, int data[], char *str) {
    int i = 0;
    printf("%s", str);
    for(i = 0; i < size; i++) {
        printf("%d\t", data[i]);
    }
}


void merge(int a[], int b[], int c[], int size){ /* a and b are of same size */
    int i = 0, j = 0, k = 0;
    while (i < size && j < size) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < size) {
        c[k++] = a[i++];
    }

    while (j < size) {
        c[k++] = b[j++];
    }
}

void merge_sort(int key[], int size) /* a power of 2 */ {
    int j, k;
    int w[size];
    for(k = 0; k < size; k *= size) {
        for(j = 0; j < size - k; j += 2 * k) {
            merge(key + j, key + j + k, w + j, k);
        }
        for(j = 0; j < size; j++) {
            key[j] = w[j];
        }
    }
}

int main(){
    /* the two array must be sorted before they enter the merge function */
    // int a[] = {2, 6, 7, 10, 53};
    // int b[] = {0, 2, 5, 32, 46};
    // int c[2*SIZE];

    int d[SIZE] = {99, 82, 74, 85, 92, 67, 76, 49};

    print_array(SIZE, d, "my grades.\n");
    merge_sort(d, SIZE);

    // merge(a, b, c, SIZE);

    print_array(SIZE, d, "My sorted array.\n");
    return 0;
}