#include <iostream>
#include "function.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	const int n = 10; //���-�� ��������� � �������
	int array[n];
	float array2[n];
	char array3[n];

	cout << "������ ����� ��������: \n";
	initI(array, n); //���������� �������
	printI(array, n); //������ �������
	cout << "\n";
	sminI(array, n); //����� ������������ ��������
	cout << "\n";
	smaxI(array, n); //����� ������������� ��������
	cout << "\n";
	cout << "��������������� ������: \n";
	sortI(array, n);//���������� �������
	printI(array, n); //������ �������
	cout << "\n";
	redI(array, n); //�������������� �������
	cout << "\n";

	cout << "������ �� ����� ��������: \n";
	initF(array2, n); //���������� �������
	printF(array2, n); //������ �������
	cout << "\n";
	sminF(array2, n); //����� ������������ ��������
	cout << "\n";
	smaxF(array2, n); //����� ������������� ��������
	cout << "\n��������������� ������: \n";
	sortF(array2, n);//���������� �������
	printF(array2, n); //������ �������
	cout << "\n";
	redF(array2, n); //�������������� �������
	cout << "\n";
	 
	cout << "������ ���������� ��������: \n";
	initC(array3, n); //���������� �������
	printC(array3, n); //������ �������
	cout << "\n";
	sminC(array3, n); //����� ������������ ��������
	cout << "\n";
	smaxC(array3, n); //����� ������������� ��������
	cout << "\n��������������� ������: \n";
	sortC(array3, n);//���������� �������
	printC(array3, n); //������ �������
	cout << "\n";
	redC(array3, n); //�������������� �������
	cout << "\n";


	return 0;
}