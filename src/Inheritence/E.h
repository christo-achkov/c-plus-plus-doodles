#include <iostream>
#include "IC.h";

using namespace std;

#pragma once
class E : public IC
{
	public:
		E() {};
		void OverrideMe() override {
			cout << "I am E";
		};
};

