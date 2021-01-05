#include <stdio.h>
#include "isort.h"
#define LENGTH 50

int main() {

int arr[LENGTH] = { 0 };


for(int i=0;i<LENGTH;i++){
	printf("Enter number \n");
	scanf(" %d", (arr+i));
}

insertion_sort(arr, LENGTH);
for (int i=0; i < LENGTH-1; i++) {
	printf("%d,", *(arr + i));
}

printf("%d", *(arr + LENGTH - 1));
printf("\n");
}