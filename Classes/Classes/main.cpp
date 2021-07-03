#include <iostream>
#include <sstream>
#include "Test.h";

using namespace std;

int main() {
	Test test("abc", "def");

	test.setPrivateValue(5);

	cout << test.getMergedValue() << "\n";

	const int arrSize = 100;
	Test arr[arrSize];

	for(int i = 0; i < arrSize; i++) {
		stringstream publicValue1, publicValue2;
		publicValue1 << "a" << i;
		publicValue2 << "b" << i + i;

		arr[i] = Test(publicValue1.str(), publicValue2.str());
		arr[i].setPrivateValue(i * i);

		cout << arr[i].getMergedValue() << "\n";
	}
}