#include <iostream>  

#include <iomanip>  

#include <time.h>  
using namespace std;

void random(int* mas, const int size, const int min, const int max) {

	for (int i = 0; i < size; i++) {

		mas[i] = min + rand() % (max - min + 1);
	}
}

void wivid(int* mas, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << mas[i];
	cout << setw(4) << endl;
}

int kilkist(int* mas, const int size) {
	int num = 0;
	for (int i = 0; i < size; i++) {
		if (mas[i] < 0)
			num += 1;
	}
	return num;
}

int suma(int* mas, const int size)
{
	int S = 0;
	for (int i = 0; i < size; i++)
		S += mas[i];
	return S;
}

void criteriy(int* mas, const int size) {
	for (int i = 0; i < size; i++)
	{
		if (mas[i] > 0 || mas[i] % 2 != 0 && mas[i] < 0)
			mas[i] = 0;
	}
}

int main() {

	srand((unsigned)time(NULL));
	int min = -15;
	int max = 75;
	const int n = 24;
	int b[n];

	cout << "Massive: " << endl;
	random(b, n, min, max);//putting random elements into empty array  
	wivid(b, n); //printing filled with elements  
	cout << endl;

	criteriy(b, n);//changing elements to zero  
	cout << "Final result: " << endl;
	wivid(b, n);
	cout << endl;

	int num = kilkist(b, n);//number of elements we require  
	cout << "Amount of elements: " << num << endl;
	cout << endl;

	int sum = suma(b, n);//sum  
	cout << "Sum: " << sum << endl;
	cout << endl;


	return 0;
}
