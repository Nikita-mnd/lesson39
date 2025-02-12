#include "util.h"
#include "sort.h"

int main() {
	//рефрижеротор
	int size = 20;
	//int m[]{ 1,2,3,10,5,6,7,8,9,4 };
	int* m = new int[size];

	init(m, size, 0, 100);

	cout << "m: " << convert(m, size) << endl;;

	 selected_sort( m,  size);

	 cout << "m: " << convert(m, size);

	return 0;
}