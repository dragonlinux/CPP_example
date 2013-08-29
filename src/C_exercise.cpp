//============================================================================
// Name        : C_exercise.cpp
// Author      : 叶玉龙
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>
#include "stdio.h"
#include "Watch.h"
using namespace std;
int a = 0;

class Test1
{
	public:
		int a;
		int b;
	public:
		int add(int c, int d);

		void function0(void);
		void set(int set);
};

void Test1::set(int set) //对
{
	a = set;
}

void Test1::function0()
{
	printf("function0---------%d\n", a);
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
	object.set(6);
	object.function0();
	object.set(88);
	object.function0();
	printf("%d\n", object.add(3, 5));
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Watch kk_watch;
	kk_watch.showtime();

	return 0;
}
