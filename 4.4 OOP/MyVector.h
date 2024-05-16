#pragma once 
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream> 
#include <math.h> 
using namespace std; 

template <class T> // Это начало объявления шаблонного класса MyVector
class MyVector {
private: 
	int size; // Размер вектора
	T* arr; // Указатель на массив, который будет содержать элементы вектора

public: 
	MyVector(); // Конструктор по умолчанию
	MyVector(int tmpsize); // Конструктор с одним параметром
	MyVector(MyVector& a); // Конструктор копирования
	MyVector(MyVector&& a); // Конструктор перемещения
	~MyVector(); // Деструктор

	MyVector operator* (T scar); // Оператор умножения на скаляр

	void reSize(int size); // Функция изменения размера вектора
	int getSize(); // Функция получения размера вектора
	void inputElement(int index, T userElement); // Функция ввода элемента в вектор
	double operator; // Здесь должен быть указан оператор, который вы хотите перегрузить

	MyVector& operator =(const MyVector b); // Оператор присваивания

	friend ostream& operator<<(ostream& out, const MyVector a); // Оператор вывода
	friend istream& operator>>(istream& in, const MyVector& a); // Оператор ввода

	void sumOfElementOFVector(T userElement); // Функция добавления элемента к каждому элементу вектора
	void minusOfElementOFVector(T userElement); // Функция вычитания элемента из каждого элемента вектора
	void multiOfElementOFVector(T userElement); // Функция умножения каждого элемента вектора на элемент
	void delOfElementOFVector(T userElement); // Функция деления каждого элемента вектора на элемент
	void sumOfElementAnotherVector(MyVector a, MyVector b); // Функция сложения двух векторов
	void minusOfElementAnotherVector(MyVector a, MyVector b); // Функция вычитания двух векторов
	void delOfElementAnotherVector(MyVector a, MyVector b); // Функция деления двух векторов
	void multiOfElementAnotherVector(MyVector a, MyVector b); // Функция умножения двух векторов
	void randomInput(); // Функция для заполнения вектора случайными числами

	T FindLengthVector(); // Функция для нахождения длины вектора
	T getMinElement(); // Функция для нахождения минимального элемента в векторе
}; 
