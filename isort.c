#include <stdio.h>
#include "isort.h"

void shift_element(int* arr, int i) {

	for (int j = i; j > 0; j--) {

		*(arr + j) = *(arr + (j - 1));
	}
}


void insertion_sort(int* arr, int len) {
    for (int i = 0; i < len; i++) {
        int min;
        int minInd;
        min = *(arr + i);
        for (int j = i; j < len - 1; j++) {
            if (min > *(arr + j + 1)) {
                min = *(arr + j + 1);
                minInd = j + 1;
            }
        }
        if (min != *(arr + i)) {
            shift_element(arr + i, minInd - i);
            *(arr + i) = min;
        }

    }
}