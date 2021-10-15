#include <iostream>
using namespace std;

void SwapInt(int& x, int& y)
{
    int temp;
    temp = y;
    y = x;
    x = temp;
}

void SwapFloat(float& x, float& y)
{
    float temp;
    temp = y;
    y = x;
    x = temp;
}

void SwapChar(char& x, char& y)
{
    char temp;
    temp = y;
    y = x;
    x = temp;
}

void InitArrayInt(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
        array[i] = rand() % 100;
	}
}

void PrintArrayInt(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << " ";
	}
}

void searchminInt(int* array, int n)
{
    int min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "\nМинимальный елемент массива: " << min;

}

void searchmaxInt(int* array, int n)
{
    int max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "\nМaксимальный елемент массива: " << max;

}

void SheikerSortInt(int* array, int n)
{
    int l, r, k;
    k = l = 0;
    r = n - 2;
    while (l <= r)
    {
        for (int i = l; i <= r; i++)
            if (array[i] > array[i + 1])
            {
                SwapInt(array[i], array[i + 1]);
                k = i;
            }
        r = k - 1;
        for (int i = r; i >= l; i--)
            if (array[i] > array[i + 1])
            {
                SwapInt(array[i], array[i + 1]);
                k = i;
            }
        l = k + 1;
    }
}

void EditingInt(int* array, int n)
{
    int elem;
    int index;
    cout << "Введите индекс элемента который хотите отредактировать: \n";
    cin >> index;
    cout << "\nВведите элемент на который хотите поменять: \n";
    cin >> elem;
    array[index] = elem;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}



void InitArrayFloat(float* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = 0.1 * (rand() % 100);
    }
}

void PrintArrayFloat(float* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void searchminFloat(float* array, int n)
{
    float min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "\nМинимальный елемент массива: " << min;

}

void searchmaxFloat(float* array, int n)
{
    float max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "\nМaксимальный елемент массива: " << max;

}

void SheikerSortFloat(float* array, int n)
{
    float l, r, k;
    k = l = 0;
    r = n - 2;
    while (l <= r)
    {
        for (int i = l; i <= r; i++)
            if (array[i] > array[i + 1])
            {
                SwapFloat(array[i], array[i + 1]);
                k = i;
            }
        r = k - 1;
        for (int i = r; i >= l; i--)
            if (array[i] > array[i + 1])
            {
                SwapFloat(array[i], array[i + 1]);
                k = i;
            }
        l = k + 1;
    }
}

void EditingFloat(float* array, int n)
{
    float elem;
    int index;
    cout << "Введите индекс элемента который хотите отредактировать: \n";
    cin >> index;
    cout << "\nВведите элемент на который хотите поменять: \n"; //Только значение с точкой
    cin >> elem;
    array[index] = elem;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}


void InitArrayChar(char* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        array[i] = 1 * rand() % 100;
    }
}

void PrintArrayChar(char* array, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}

void searchminChar(char* array, int n)
{
    char min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    cout << "\nМинимальный елемент массива: " << min;

}

void searchmaxChar(char* array, int n)
{
    char max = array[0];
    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    cout << "\nМaксимальный елемент массива: " << max;

}

void SheikerSortChar(char* array, int n)
{
    char l, r, k;
    k = l = 0;
    r = n - 2;
    while (l <= r)
    {
        for (int i = l; i <= r; i++)
            if (array[i] > array[i + 1])
            {
                SwapChar(array[i], array[i + 1]);
                k = i;
            }
        r = k - 1;
        for (int i = r; i >= l; i--)
            if (array[i] > array[i + 1])
            {
                SwapChar(array[i], array[i + 1]);
                k = i;
            }
        l = k + 1;
    }
}

void EditingChar(char* array, int n)
{
    char elem;
    int index;
    cout << "Введите индекс элемента который хотите отредактировать: \n";
    cin >> index;
    cout << "\nВведите элемент на который хотите поменять: \n"; 
    cin >> elem;
    array[index] = elem;
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}


