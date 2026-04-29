#include "util.h"

int main() {
	int size;

	cout << "Enter size of array";
	cin >> size;

	int* array = create(size);

	if (array == NULL) {
		return - 1;
	}

	init_random(array, size, -20, 50);

	print("Array: \n" + convert(array, size) + "\n");

	remove(array);

	return 0;
}