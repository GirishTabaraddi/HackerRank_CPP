/*
 * BadLengthException.h
 *
 *  Created on: 17-Aug-2024
 *      Author: giris
 */

#ifndef BADLENGTHEXCEPTION_H_
#define BADLENGTHEXCEPTION_H_

#include <stdexcept>

class BadLengthException: public std::length_error
{
private:
	int n = 0;

public:
	BadLengthException(int n);

	bool CheckUserName(std::string username);
};

#endif /* BADLENGTHEXCEPTION_H_ */
