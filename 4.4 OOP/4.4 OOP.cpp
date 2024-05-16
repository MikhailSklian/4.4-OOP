#include "MyVector.h"
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	MyVector<double> x;
	MyVector<double> y;
	MyVector<double> z;
	cout << "Enter size: ";
	int size;
	cin >> size;
	x.reSize(size);
	cin >> x;
	y.reSize(size);
	cin >> y;
	z.reSize(size);
	for (int i = 0; i < size; i++)
	{
       z.inputElement(i, x.getMinElement() * x[i] - y.getMinElement() * y[i]);
		cout << z;
	}
}
