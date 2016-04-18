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
	
	return 0;
}