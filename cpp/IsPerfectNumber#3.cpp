#include <iostream>
using namespace std;

bool IsPerfectNumber(int Number)
{
	int Sum = 0, HalfNumber = (Number / 2);
	for (int i = 1; i <= HalfNumber; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;
}

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void PrintResult(int Number)
{
	cout << endl;
	if (IsPerfectNumber(Number))
	{
		cout << Number << " is perfect number" << endl;
	}
	else
		cout << Number << " is not perfect number" << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Please enter a positive number : "));

    return 0;
}
