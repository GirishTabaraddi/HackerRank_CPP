/*
 * B.h
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#ifndef B_H_
#define B_H_

class B
{
public:
	B();
	int getCallB() const;

private:
	int callB;
	void inc();

protected:
	void func(int& a);

};

#endif /* B_H_ */
