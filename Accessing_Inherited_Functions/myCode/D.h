/*
 * D.h
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#ifndef D_H_
#define D_H_

#include "A.h"
#include "B.h"
#include "C.h"

class D: public A, public B, public C
{
public:
	D();
	void update_val(int new_val);
	void check(int);

private:
	int val;

};

#endif /* D_H_ */
