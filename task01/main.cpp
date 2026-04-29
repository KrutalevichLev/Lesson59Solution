#include "logic.h"

int main() {
	int size;

	cout << "Enter size of array: ";
	cin >> size;

	int* array = create(size);

	if (array == NULL) {
		return - 1;
	}

	init_random(array, size, -20, 50);

	print("Array: \n" + convert(array, size) + "\n");

	int count = count_local_minimum(array, size);
	int* minimums = get_all_local_minimums(array, size);

	print("Minimums = " + convert(get_all_local_minimums(array, size), size));

	print("Sum = " + to_string(sum_local_minimuns(minimums, count)));

	remove(array);

	return 0;
}