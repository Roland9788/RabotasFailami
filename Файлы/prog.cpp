#include <iostream>
#include "function.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int n = 10; //кол-во элементов в массиве
	int array[n];
	float array2[n];
	char array3[n];

	cout << "Массив целых значений: \n";
	initI(array, n); //Заполнение массива
	printI(array, n); //Печать массива
	cout << "\n";
	sminI(array, n); //Поиск минимального елемента
	cout << "\n";
	smaxI(array, n); //Поиск максимального елемента
	cout << "\n";
	cout << "Отсортированный Массив: \n";
	sortI(array, n);//Сортировка массива
	printI(array, n); //Печать массива
	cout << "\n";
	redI(array, n); //Редактирование массива
	cout << "\n";

	cout << "Массив не целых значений: \n";
	initF(array2, n); //Заполнение массива
	printF(array2, n); //Печать массива
	cout << "\n";
	sminF(array2, n); //Поиск минимального елемента
	cout << "\n";
	smaxF(array2, n); //Поиск максимального елемента
	cout << "\nОтсортированный Массив: \n";
	sortF(array2, n);//Сортировка массива
	printF(array2, n); //Печать массива
	cout << "\n";
	redF(array2, n); //Редактирование массива
	cout << "\n";
	 
	cout << "Массив символьных значений: \n";
	initC(array3, n); //Заполнение массива
	printC(array3, n); //Печать массива
	cout << "\n";
	sminC(array3, n); //Поиск минимального елемента
	cout << "\n";
	smaxC(array3, n); //Поиск максимального елемента
	cout << "\nОтсортированный Массив: \n";
	sortC(array3, n);//Сортировка массива
	printC(array3, n); //Печать массива
	cout << "\n";
	redC(array3, n); //Редактирование массива
	cout << "\n";


	return 0;
}