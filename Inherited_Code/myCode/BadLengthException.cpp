/*
 * BadLengthException.cpp
 *
 *  Created on: 17-Aug-2024
 *      Author: giris
 */

#include "BadLengthException.h"

using namespace std;

BadLengthException::BadLengthException(int n): length_error(to_string(n))
{
}

bool BadLengthException::CheckUserName(std::string username)
{
	bool isValid = true;

	int n = username.length();

	if(n < 5)
	{
		throw BadLengthException(n);
	}

	for(int i = 0; i < n-1; i++)
	{
		if(username[i] == 'w' && username[i+1] == 'w')
		{
			isValid = false;
		}
	}

	return isValid;
}
