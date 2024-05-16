#pragma once 
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream> 
#include <math.h> 
using namespace std; 

template <class T> // ��� ������ ���������� ���������� ������ MyVector
class MyVector {
private: 
	int size; // ������ �������
	T* arr; // ��������� �� ������, ������� ����� ��������� �������� �������

public: 
	MyVector(); // ����������� �� ���������
	MyVector(int tmpsize); // ����������� � ����� ����������
	MyVector(MyVector& a); // ����������� �����������
	MyVector(MyVector&& a); // ����������� �����������
	~MyVector(); // ����������

	MyVector operator* (T scar); // �������� ��������� �� ������

	void reSize(int size); // ������� ��������� ������� �������
	int getSize(); // ������� ��������� ������� �������
	void inputElement(int index, T userElement); // ������� ����� �������� � ������
	double operator; // ����� ������ ���� ������ ��������, ������� �� ������ �����������

	MyVector& operator =(const MyVector b); // �������� ������������

	friend ostream& operator<<(ostream& out, const MyVector a); // �������� ������
	friend istream& operator>>(istream& in, const MyVector& a); // �������� �����

	void sumOfElementOFVector(T userElement); // ������� ���������� �������� � ������� �������� �������
	void minusOfElementOFVector(T userElement); // ������� ��������� �������� �� ������� �������� �������
	void multiOfElementOFVector(T userElement); // ������� ��������� ������� �������� ������� �� �������
	void delOfElementOFVector(T userElement); // ������� ������� ������� �������� ������� �� �������
	void sumOfElementAnotherVector(MyVector a, MyVector b); // ������� �������� ���� ��������
	void minusOfElementAnotherVector(MyVector a, MyVector b); // ������� ��������� ���� ��������
	void delOfElementAnotherVector(MyVector a, MyVector b); // ������� ������� ���� ��������
	void multiOfElementAnotherVector(MyVector a, MyVector b); // ������� ��������� ���� ��������
	void randomInput(); // ������� ��� ���������� ������� ���������� �������

	T FindLengthVector(); // ������� ��� ���������� ����� �������
	T getMinElement(); // ������� ��� ���������� ������������ �������� � �������
}; 
