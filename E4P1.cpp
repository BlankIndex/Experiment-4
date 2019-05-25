#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void add(int x,int y) {
	
	
	cout << "Result:" << x + y << endl;



}

void sub(int x, int y) {


	cout << "Result:" << x - y << endl;



}

void mult(int x, int y) {


	cout << "Result:" << x * y << endl;



}

void divd(int x, int y) {


	cout << "Result:" << x / y << endl;



}

void mod(int x, int y) {


	cout << "Result:" << x%y << endl;



}

int main() {

	int x, y, opt;
	char ans,ask;

	do {

		cout << "!WELCOME TO THE MAKE SHIFT CALCULATOR!" << endl;
		cout << "" << endl;
		cout << "Please select options" <<endl;
		cout << "1:ADD"<<endl;
		cout << "2:SUBTRACT" << endl;
		cout << "3:MULTIPLY" << endl;
		cout << "4:DIVIDE" << endl;
		cout << "5:MODULUS" << endl;
		cin >> opt;

		if (opt <= 0 || opt > 5) {

			cout << "ops that was an invalid option sorrt >.<" << endl;

			break;
			
		}

		cout << "please enter the first number" << endl;
		cin >> x;

		cout << "please enter the second number" << endl;
		cin >> y;


		if (opt == 1) {

			add(x, y);
			
		} else if (opt == 2) {

			sub(x, y);
			
		}else if (opt == 3) {

			mult(x, y);
			
		} else if (opt == 4) {

			divd(x, y);
			
		}else if (opt == 5) {

			mod(x, y);
			
		}



		cout << "continue ?" << endl;
		cin >> ans;



	} while (ans == 'y');

	cout << "thank you for using the makeshift calculator ^__^v" << endl;

	_getch();
	return 0;
}