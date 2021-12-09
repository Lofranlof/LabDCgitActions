#include <iostream>
#include <string>
using namespace std;

struct Numbers
{
	int a;
	int b;
	int c;
};

int multiplication(int, int);

int main()
{
	Numbers numbers;
	cout << "Asalamu aleikum, enter a number" << "\n";
	cin >> numbers.a >> numbers.b;
	numbers.c = multiplication(numbers.a, numbers.b);
	cout << numbers.c;
	return 0;
}

int multiplication(int a, int b)
{
	return a * b;
}