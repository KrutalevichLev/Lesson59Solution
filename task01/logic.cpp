#include "logic.h"

int count_local_minimum(int* array, int size) {
	int count = 0;

	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) < *(array + i + 1)
			&& *(array + i) < *(array + i - 1)) {
			count++;
		}
	}

	count += *array < *array + 1 ? 1 : 0;
	count += *(array + size - 1) < *(array + size - 2) ? 1 : 0;

	return count;
}

int* get_all_local_minimums(int* array, int size) {
	int count = count_local_minimum(array, size);
	int* minimuns = new int[count];

	int index = 0;

	if (*array < *(array + 1)) {
		minimuns[index++] = *array;
	}

	for (int i = 1; i < size - 1; i++)
	{
		if (*(array + i) < *(array + i + 1)
			&& *(array + i) < *(array + i - 1)) {
			minimuns[index++] = *(array + i);
		}

		if (*(array + size - 1) < *(array + size - 2)) {
			minimuns[index++] = *(array + size - 1);
		}
	}

	return minimuns;

}
int sum_local_minimuns(int* array, int size) {
	int sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += *(array + i);
	}
	return sum;
}