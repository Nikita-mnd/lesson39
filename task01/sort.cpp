#include "sort.h"

void bubble_sort(int* m, int size) {
	for (int i = 0; i <= size; i++) {
		bool flag = true;
		int sizi = size - i;

		for (int j = 0; j < sizi; j++) {

			if (m[j] > m[j + 1]) {
				flag = false;
				swap(m[j], m[j + 1]);
			}
		}
		if (flag) {
			break;
		}
	}

}

void selected_sort(int* m, int size) {
	
	for (int j = 0; j < size; j++) {

		int index = j;
		for (int i =j + 1; i <= size; i++) {

			if (m[i] < m[index]) {
				index = i;
			}

		}

		int t = m[j];
		m[j] = m[index];
		m[index] = t;
	}

}

