#include <iostream>
#include <conio.h>


using namespace std;

void sort(int arrsize) {

	int temp;
	int  i,j;
	int cont[1];


	cout << "please enter the numbers to be sorted" << endl;
	for (i = 0; i < arrsize;i++) {

		cin >> cont[i];

	}

		
		for (int i = 0; i < arrsize - 1; i++) {
			for ( j = i + 1; j < arrsize; j++) {
				if (cont[i] > cont[j]) {
					temp = cont[i];
					cont[i] = cont[j];
					cont[j] = temp;
				}

			}
		}

		cout << "the sorted array is:";
		for (i = 0;i < arrsize;i++) {

			cout << cont[i]<<" ";

		}

		_getch();

}

int main() {

	int arrsize;
	cout << "welcome to the number sorter" << endl;

	cout << "please enter the array size" << endl;
	cin >> arrsize;

	sort(arrsize);

	return 0;
}