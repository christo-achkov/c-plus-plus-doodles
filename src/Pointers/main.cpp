#include <iostream>
using namespace std;

int main() {
	int* pointVar, var;
	var = 5;

	pointVar = &var;

	cout << var << "\n";

	cout << &var << "\n";

	cout << *pointVar << "\n";
}