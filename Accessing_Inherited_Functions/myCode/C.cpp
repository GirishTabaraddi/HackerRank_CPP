/*
 * C.cpp
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#include "C.h"

C::C():callC{0}
{
}

void C::inc()
{
	callC++;
}

int C::getCallC() const
{
	return callC;
}

void C::func(int &a)
{
	a *= 5;
	inc();
}
