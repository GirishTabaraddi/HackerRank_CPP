#include<iostream>

#include "D.h"

using namespace std;

int main()
{
	cout << "HackerRank - Medium - Accessing Inherited Functions Problem" << endl << endl;

	D d;

	int val;

	cout << "Input a number : ";
	cin >> val;

	d.check(val);
}
