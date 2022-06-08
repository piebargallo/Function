#include <iostream>
using namespace std;

// function without pointer
void funa(int x) {
	x = 30;
}

// function with pointer
void fune(int *ptr) {
	*ptr = 30;
}

// driver program
int main () {
	int x = 20;
	// invoque to function without pointer
	funa(x);
	cout << "Value without pointer x = " << x << "\n";
	
	// invoque to function with pointer
	fune(&x);
	cout << "Value with pointer x = " << x;
	
	return 0;
} // end driver
