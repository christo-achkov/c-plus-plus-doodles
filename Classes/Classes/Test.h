#pragma once
#include <sstream>
#include <string>
using namespace std;

class Test
{
	private:
		int _privateValue;

	public:
		string publicValue1;
		string publicValue2;

		Test() {

		}

		Test(string publicValue1_, string publicValue2_) {
			publicValue1 = publicValue1_;
			publicValue2 = publicValue2_;
		}

		void setPrivateValue(int value_) {
			_privateValue = value_;
		}

		int getPrivateValue() {
			return _privateValue;
		}

		string getMergedValue() {
			stringstream result;
			result << publicValue1 << publicValue2 << getPrivateValue();

			return result.str();
		}
};

