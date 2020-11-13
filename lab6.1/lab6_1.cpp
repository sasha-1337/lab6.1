#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>

using namespace std;

int Beside(int* r, const int s) 
{
	for (int i = 0; i < s; i++) {
		if ((i % 2) || !(i % 7))
			return 0;
		else
			return i;
	}
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
	Beside(arr, size);
	
	cout << " Ημ³νενθι arr[]: " << endl;
	Print1(arr, size);
		

	system("pause");
	return 0;	
}
void Print1(int* a, const int size)
{
	for (int x = 3; x < size; x++) {
			
			cout << setw(4) << Beside(a, size) << " ";
	}
		cout << endl;
}