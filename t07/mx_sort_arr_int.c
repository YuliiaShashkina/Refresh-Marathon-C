void mx_sort_arr_int(int *arr, int size) {
	if (!arr) {
		return;
	}
	for (int i = 0; i < size - 1; i++) {
		int m = i;

		for (int j = i + 1; j < size; j++) {
			if (arr[m] > arr[j]) {
				m = j;
			}
		}
		int t = arr[i];

		arr[i] = arr[m];
		arr[m] = t;
	}
}
/*#include <stdio.h>

void mx_sort_arr_int(int *arr, int size);

int main(void) {
    int arr[] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(arr, 7);
    for (int i = 0; i < 7; i++)
        printf("%d, ", arr[i]);
    return 0;
}*/

