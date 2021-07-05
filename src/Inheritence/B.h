#include <iostream>
#include "A.h"

using namespace std;

#pragma once
class B : public A
{
	public:
		B(int foo, int bar) : A(foo) {
			cout << bar;
		}
};

