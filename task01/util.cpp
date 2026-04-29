#include "util.h"

void print(string msg) {
	cout << msg;
}
void init_random(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % (b - a + 1) + a;
	}
}
void clear(int* array, int size) {
	init_random(array, size, 0, 0);
}
int* create(int size) {
	if (size <= 0) {
		return NULL;
	}

	return new int[size];
}
void remove(int* array) {
	if (array != NULL) {
		delete[] array;
	}
}
string convert(int* array, int size) {
	string msg = "";

	for (int i = 0; i < size; i++)
	{
		msg += to_string(*(array + i)) + " ";
	}
	return msg;
}