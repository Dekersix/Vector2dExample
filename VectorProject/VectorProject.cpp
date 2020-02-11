// VectorProject.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Vector2d.h"
using namespace std;
int main()
{
	Vector2d a = { 25,15 };
	Vector2d b = { 15, 25 };
	cout << "Скалярное произведение a и b: ";
	a.ScalarMul(b);

}

