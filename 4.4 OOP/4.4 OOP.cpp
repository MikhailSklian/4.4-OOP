//X (N) и Y (N) - исходные векторы. Получить вектор Z с элементами
//z i= a*x i- b*y i, i = 0, n-1, a, b – минимальные значения векторов X, Y.
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
