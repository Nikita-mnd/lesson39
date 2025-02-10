#include "util.h"
#define SIZE 20
int main() {

	cout << "input size of masive: ";
	int size;
	cin >> size;
	int m[SIZE];

	init(m, SIZE, 0, 100);

	cout << "m: " << convert(m, SIZE);

	return 0;
}