#include <stdio.h>

void selectSort(int array[], int size) {
	for ( int i = 0; i < size; i++ ) {
		int temp;
		int index = i;
		
		for ( int j = i + 1; j < size; j++ ) {
			if ( array[index] > array[j] ) {
				index = j;
			}
		}
		if ( index != i ) {
            temp = array[i];
            array[i] = array[index];
            array[index] = temp;
        }
	}
}

void print(int array[], int size) {
    int index = size - 1;

    for ( int j = 0; j < index; j++ ) {
        printf("%d ", array[j]);
    }
    printf("%d\n", array[index]);
}

int main() {
	int array[] = {90, 20, 10, 60, 100, 30, 50, 70, 80, 40};
	int size = 10;

	print(array, size);
	selectSort(array, size);
	print(array, size);
}
