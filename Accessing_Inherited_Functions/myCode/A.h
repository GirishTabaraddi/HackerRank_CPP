/*
 * A.h
 *
 *  Created on: 16-Aug-2024
 *      Author: giris
 */

#ifndef A_H_
#define A_H_

class A
{
public:
	A();
	int getCallA() const;

private:
	int callA;

	void inc();

protected:
	void func(int& a);
};

#endif /* A_H_ */
