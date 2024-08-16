/*
 * D.cpp
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */
#include <iostream>

#include "D.h"

using namespace std;

D::D():val{1}
{
}

/* Method to Implement */
void D::update_val(int new_val)
{
	int new_val_copy = new_val;

	if(new_val < 1 || new_val > 10000)
	{
		cout << "Input number is not in the range of 1 and 10000" << endl;
		return;
	}

	while(val < new_val)
	{
		if(new_val_copy % 2 == 0)
		{
			new_val_copy /= 2;
			A::func(val);
		}
		else if(new_val_copy % 3 == 0)
		{
			new_val_copy /= 3;
			B::func(val);
		}
		else if(new_val_copy % 5 == 0)
		{
			new_val_copy /= 5;
			C::func(val);
		}
		else
		{
			cout << "Unexpected value encountered" << endl;
			break;
		}
	}
}

void D::check(int int1)
{
	update_val(int1);

	cout << "Value : " << val << endl <<
			"A's func(2) will be called " << getCallA() << endl <<
			"B's func(3) will be called " << getCallB() << endl <<
			"C's func(5) will be called " << getCallC() << endl;

}
