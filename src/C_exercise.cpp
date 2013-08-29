//============================================================================
// Name        : C_exercise.cpp
// Author      : 叶玉龙
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "stdio.h"
using namespace std;

class Test1
{
	public:
		int a;
		int b;
	public:
		int add(int c, int d);

		void function0(void);
};

void Test1::function0()
{
	printf("function0\n");
}

int Test1::add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}

int main()
{
	Test1 object;
	object.function0();

	printf("%d\n", object.add(3, 5));
	printf("jfskjdklf\n");
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
