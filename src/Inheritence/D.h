#include <iostream>
#include "IC.h";

using namespace std;

#pragma once
class D : public IC
{
	public:
		D() {};
		void OverrideMe() override {
			cout << "I am D";
		};
};

