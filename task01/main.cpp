#include "util.h"
#include "sort.h"
//#define SIZE 20
int main() {

	int size = 20;
	int* m = new int[size];

	init(m, size, 0, 100);

	cout << "m: " << convert(m,size);

	 bubble_sort( m,  size);

	 cout << "m: " << convert(m, size);


	return 0;
}