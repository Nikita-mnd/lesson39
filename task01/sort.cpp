#include "sort.h"

void bubble_sort(int* m, int size) {
	int count = 0;
	for (int i = 0; i <= size; i++) {
		bool flag = true;
		int sizi = size - i;

		for (int j = 0; j < sizi; j++) {

			if (m[j] > m[j + 1]) {
				flag = false;
				swap(m[j], m[j + 1]);
			}
			count++;
		}
		if (flag) {
			break;
		}
	}
	cout << count;
}