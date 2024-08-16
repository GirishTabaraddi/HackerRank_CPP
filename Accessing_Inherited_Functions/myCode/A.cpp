/*
 * A.cpp
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#include "A.h"

A::A():callA{0}
{
}

int A::getCallA() const
{
	return callA;
}

void A::inc()
{
	callA++;
}

void A::func(int &a)
{
	a *= 2;
	inc();
}
