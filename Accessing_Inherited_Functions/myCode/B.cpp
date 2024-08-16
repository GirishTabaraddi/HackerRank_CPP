/*
 * B.cpp
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#include "B.h"

B::B():callB{0}
{
}

int B::getCallB() const
{
	return callB;
}

void B::inc()
{
	callB++;
}

void B::func(int &a)
{
	a *= 3;
	inc();
}
