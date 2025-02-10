#include "util.h"
#include "sort.h"
#define SIZE 20
int main() {

	
	int m[SIZE];

	init(m, SIZE, 0, 100);

	cout << "m: " << convert(m, SIZE);

	 bubble_sort( m,  SIZE);

	 cout << "m: " << convert(m, SIZE);


	return 0;
}