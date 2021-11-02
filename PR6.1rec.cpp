#include <iostream>
using namespace std;

int Sum(int mas[], const int i);

void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 27;
	int a[n];
	int Low = -35;
	int High = 25;
	Create(a, n, Low, High, 0);
	cout << "S = " << Sum(a, n - 1) << endl; 
		return 0;
}
int Sum(int mas[], const int i) 
{
	if ((mas[i] < 0 || mas[i] % 2) == 0)
		return 0;
	else
		return mas[i] + Sum(mas, i - 1);
}