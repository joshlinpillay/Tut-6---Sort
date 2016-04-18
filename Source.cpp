//Tut6 - Generic Sort

#include <iostream>
#include <string>

using namespace std;

template <typename T>

void sort(T arr[], int numElements) {
	int i;
	int j;
	T temp;
	for (i = 0; i < numElements - 1; i++) {
		for (j = numElements - 1; j > i; j--) {
			if (arr[j - 1] < arr[j]) {
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}



int main(){
	float arr[10] = { 1.24, 2.35, 3.21, 4.56, 5.43, 6.90, 7.85, 8.31, 9.22, 10.11 };
	sort(arr, 10);
	int i;
	for (i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	cout << endl;

	int arr2[10] = { 1, 2, 3, 2, 5, 4, 4, 8, 1, 10 };
	sort(arr2, 10);
	for (i = 0; i < 10; i++) {
		cout << arr2[i] << endl;
	}

	cout << endl;

	string arr3[10] = { "ab", "bf", "ps", "ge", "ks", "few", "grjo", "ajpdwq", "sdng", "asoa" };
	sort(arr3, 10);
	for (i = 0; i < 10; i++) {
		cout << arr3[i] << endl;
	}
	return 0;
}