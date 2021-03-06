// Lab03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
 
short sumOfShort(short n)
{
	short sum = 0;
	for (short i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum; //256 gives stack overflow error
}
long sumOfLong(long n)
{
	long sum = 0;
	for (long i = 1; i <= n; i++)
	{
		sum += i;
	}
	return sum; //113512 gives stack overflow error
}
float factorialOfLong(long n)
{
	float factorial = 1;
	for (long i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	return factorial; //34 gives stack overflow error
}
double factorialOfDouble(double n)
{
	double factorial = 1;
	for (double i = 1; i <= n; i++)
	{
		factorial = factorial * i;
	}
	return factorial;   // 171 gives stack overflow, same as long
}
float strangeFloat(float n)
{
	float sum = 0;
	float temp = 1;
	temp = (1 / n);
	for (float i = 1; i <= n; i++)
	{
		sum += temp;
	}
	return (sum - 1); // works up to 9, 10 gives inaccuracies
}
double strangeDouble(double n)
{
	double sum = 0;
	double temp = 1;
	temp = (1 / n);
	for (double i = 1; i <= n; i++)
	{
		sum += temp;
	}
	return (sum - 1);  //works up to 8, 9 gives inaccuracies
}
int main()
{
	short tempshort = 0;
	long templong = 0;
	double tempdouble = 0;
	float tempfloat = 0;
	cout << "enter short to sum" << endl;
	cin >> tempshort;
	cout << sumOfShort(tempshort);
	cout << "enter long to sum" << endl;
	cin >> templong;
	cout << sumOfLong(templong);
	cout << "enter long to factorial" << endl;
	cin >> templong;
	cout << factorialOfLong(templong); 
	cout << "enter double to factorial" << endl;
	cin >> tempdouble;
	cout << factorialOfDouble(tempdouble);
	cout << "enter float to make strange" << endl;
	cin >> tempfloat;
	cout << strangeFloat(tempfloat) << endl;
	cout << "enter double to make strange" << endl;
	cin >> tempdouble;
	cout << strangeDouble(tempdouble) << endl;
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
	cout << "Now with a double" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}
}
