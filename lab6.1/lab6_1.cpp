#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
#include <time.h>

using namespace std;

void Beside(int* r, const int s) 
{
	for (int y = 0; y < s; y++) {
		if (!(r[y] % 2) && (r[y] % 7))
			cout <<  r[y] << " ";
	}
	cout << endl;
}

void Create(int* a, int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size, int i)
{
	cout << setw(4) << a[i];
	if (i < size - 1)
		Print(a, size, i + 1);
	else
		cout << endl;
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 26;
	int arr[size];
	int Low = 3;
	int High = 92;

	cout << " arr[]: " << endl;
	Create(arr, size, Low, High);
	Print(arr, size, 0);
    cout << " ������� arr[]: " << endl; 
    Beside(arr, size);
	system("pause");
	return 0;	
}
