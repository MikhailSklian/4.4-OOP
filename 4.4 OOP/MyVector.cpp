#include "MyVector.h"
using namespace std;

template <class T>
MyVector<T>::MyVector() : size(10) {
	arr = new T[size];
	for (int i = 0; i < size; i++)
		arr[i] = NULL;
}

template <class T>
MyVector<T>::MyVector(int tmpsize) :size(tmpsize) {
	arr = new T[size];
	for (int i = 0; i < tmpsize; i++)
		arr[i] = i;
}

template <class T>
MyVector<T>::MyVector(MyVector& a) :size(a.size) {
	arr = new T[size];
	for (int i = 0; i < size; i++) {
		arr[i] = a.arr[i];
	}
}

template <class T>
MyVector<T>::MyVector(MyVector&& a) :size(a.size) {
	arr = new T[size];
	for (int i = 0; i < a.size; i++) {
		arr[i] = a.arr[i];
	}
}

template <class T>
MyVector<T>::~MyVector() {
	delete[] arr;
}

template <class T>
MyVector<T> MyVector<T>::operator* (T scar) {
	for (int i = 0; i < size; i++) {
		arr[i] = arr[i] * scar;
	}
	return *this;
}

template <class T>
void MyVector<T>::reSize(int size) {
	try {
		if (size > 10) throw "Вы вышли за пределы массива";
		this->size = size;
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
int MyVector<T>::getSize() {
	return size;
}

template <class T>
void MyVector<T>::inputElement(int index, T userElement) {
	try {
		if (index > size) throw "Вы вышли за пределы массива";
		arr[index] = userElement;
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
T& MyVector<T>::operator {
	try {
		if (index >= size)  throw "Вы вышли за пределы";
		return arr[index];
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}


template <class T>
MyVector<T>& MyVector<T>::operator =(const MyVector<T>& b) {
	for (int i = 0; i < b.size; i++) this->arr[i] = b.arr[i];
	return *this;
}

template <class T>
ostream& operator<<(ostream& out, const MyVector<T>& a) {
	for (int i = 0; i < a.size; i++) {
		out << a.arr[i] << " ";
	}
	out << endl;
	return out;
}

template <class T>
istream& operator>>(istream& in, MyVector<T>& a) {
	for (int i = 0; i < a.size; i++) {
		in >> a.arr[i];
	}
	return in;
}

template <class T>
void MyVector<T>::sumOfElementOFVector(T userElement) {
	for (int i = 0; i < size; i++) {
		arr[i] += userElement;
	}
}

template <class T>
void MyVector<T>::minusOfElementOFVector(T userElement) {
	for (int i = 0; i < size; i++) {
		arr[i] -= userElement;
	}
}

template <class T>
void MyVector<T>::multiOfElementOFVector(T userElement) {
	for (int i = 0; i < size; i++) {
		arr[i] *= userElement;
	}
}

template <class T>
void MyVector<T>::delOfElementOFVector(T userElement) {
	for (int i = 0; i < size; i++) {
		arr[i] /= userElement;
	}
}

template <class T>
void MyVector<T>::sumOfElementAnotherVector(MyVector<T>& a, const MyVector<T>& b) {
	try {
		if (a.size != b.size) throw "Вы ввели разную размерность";
		for (int i = 0; i < a.size; i++)
			a.arr[i] += b.arr[i];
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
void MyVector<T>::minusOfElementAnotherVector(MyVector<T>& a, const MyVector<T>& b) {
	try {
		if (a.size != b.size) throw "Вы ввели разную размерность";
		for (int i = 0; i < a.size; i++)
			a.arr[i] -= b.arr[i];
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
void MyVector<T>::delOfElementAnotherVector(MyVector<T>& a, const MyVector<T>& b) {
	try {
		if (a.size != b.size) throw "Вы ввели разную размерность";
		for (int i = 0; i < a.size; i++)
			a.arr[i] /= b.arr[i];
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
void MyVector<T>::multiOfElementAnotherVector(MyVector<T>& a, const MyVector<T>& b) {
	try {
		if (a.size != b.size) throw "Вы ввели разную размерность";
		for (int i = 0; i < a.size; i++)
			a.arr[i] *= b.arr[i];
	}
	catch (const char* exception) { cerr << "Error: " << exception << '\n'; }
}

template <class T>
void MyVector<T>::randomInput() {
	srand(time(NULL));
	for (int i = 0; i < size; i++)  arr[i] = rand() % 10;
}

template <class T>
T MyVector<T>::FindLengthVector() {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i] * arr[i];
	}
	return sqrt(sum);
}

template <class T>
T MyVector<T>::getMinElement() {
	T min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
};