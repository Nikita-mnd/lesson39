#include "sort.h"

void bubble_sort(int* m, int size) {

	for (int i = 0; i <= size; i++) {

		if (m[i] > m[i + 1]) {
			swap(m[i], m[i + 1]);
		}

		for (int j = 0; j <= size; j++) {

			if (m[j] > m[j + 1]) {
				swap(m[j], m[j + 1]);
			}
		}

	}

}