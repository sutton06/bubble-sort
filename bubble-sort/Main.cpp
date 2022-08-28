#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void bubble_sort(int arr[], int len);
void print_array(int arr[], int len);

int main() {

	const int LEN = 10;

	const int MAX = 300;

	int arr[LEN];

	srand(time(NULL));

	for (int i = 0; i < LEN; i++) {
		arr[i] = rand() % MAX + 1;
	}

	print_array(arr, LEN);

	bubble_sort(arr, LEN);

	print_array(arr, LEN);
}



void bubble_sort(int arr[], int len) {

	bool swapped = true;

	while (swapped) {

		swapped = false;

		for (int i = 1; i < len; i++) {

			if (arr[i] < arr[i - 1]) {

				swap(arr[i], arr[i - 1]);

				swapped = true;
			}
		}
	}
}

void print_array(int arr[], int len) {

	cout << "{ ";
	for (int i = 0; i < len; i++) {
		if (i == 0) {
			cout << arr[i];
		}
		else {
			cout << ", " << arr[i];
		}
	}

	cout << " }" << endl;
}