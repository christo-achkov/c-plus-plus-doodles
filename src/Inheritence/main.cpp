#include <iostream>
#include "B.h";
#include "D.h";
#include "E.h";
#include "IC.h";

using namespace std;

int main() {
	B b = B(11, 22);
	cout << "\n";

	D *d = new D();
	E *e = new E();
	IC* arr[2];

	arr[0] = d;
	arr[1] = e;
	arr[0]->OverrideMe();
	cout << "\n";
	arr[1]->OverrideMe();
}