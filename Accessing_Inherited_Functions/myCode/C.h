/*
 * C.h
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#ifndef C_H_
#define C_H_

class C
{
public:
	C();
	int getCallC() const;

private:
	int callC;
	void inc();

protected:
	void func(int& a);
};

#endif /* C_H_ */
