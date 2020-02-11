// VectorProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"
using namespace std;
int main()
{
	Vector2d a = { 25,15 };
	Vector2d b = { 15, 25 };
	cout << "Вектор а: ";
	a.print();
	cout << "Вектор а: ";
	b.print();
	cout << "Скалярное произведение векторов а1 и а2: ";
	a.ScalarMul(b);

}

