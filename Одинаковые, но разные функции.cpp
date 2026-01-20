#include <iostream>
#include <string>
#include <math.h>

using namespace std;

namespace add
{
	int calc(int x, int y)
	{
		return x + y;
	}	
}

namespace sub
{
	int calc(int x, int y)
	{
		return x - y;
	}
}

namespace mul
{
	int calc(int x, int y)
	{
		return x * y;
	}
}

namespace dib
{
	int calc(int x, int y)
	{
		if (y == 0) return 0;
		return x / y;
	}
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");

	int x = 6;
	int y = 9;

	cout << "x = " << x << ", y = " << y << endl;

	cout << "Сложение:  " << add::calc(x, y) << endl;
	cout << "Вычитание:  " << sub::calc(x, y) << endl;
	cout << "Умножение:  " << mul::calc(x, y) << endl;
	cout << "Деление:  " << dib::calc(x, y) << endl;

	return 0;
}

