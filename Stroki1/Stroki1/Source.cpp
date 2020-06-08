#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	char s[20];
	int n = 0, l = 0;
	double raz = 10, ch = 0;

	cout << "Введите вещественное число: " << endl;
	cin >> s;

	for (int i = 0; s[i] != '\0'; i++)	n++;
	for (int i = 0; i < n; i++)	{
		switch (s[i])	{

		case '0':
		{
			if (l == 0)
				ch = ch * 10 + 0;
			else
			{
				ch = ch + 0.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '1':
		{
			if (l == 0)
				ch = ch * 10 + 1;
			else
			{
				ch = ch + 1.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '2':
		{
			if (l == 0)
				ch = ch * 10 + 2;
			else
			{
				ch = ch + 2.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '3':
		{
			if (l == 0)
				ch = ch * 10 + 3;
			else
			{
				ch = ch + 3.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '4':
		{
			if (l == 0)
				ch = ch * 10 + 4;
			else
			{
				ch = ch + 4.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '5':
		{
			if (l == 0)
				ch = ch * 10 + 5;
			else
			{
				ch = ch + 5.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '6':
		{
			if (l == 0)
				ch = ch * 10 + 6;
			else
			{
				ch = ch + 6.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '7':
		{
			if (l == 0)
				ch = ch * 10 + 7;
			else
			{
				ch = ch + 7.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '8':
		{
			if (l == 0)
				ch = ch * 10 + 8;
			else
			{
				ch = ch + 8.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '9':
		{
			if (l == 0)
				ch = ch * 10 + 9;
			else
			{
				ch = ch + 9.0 / raz;
				raz *= 10;
			}
			break;
		}

		case '.':

			l = 1;
			break;
		}

	}
	cout << "Конвертированное число: " << endl << ch;
}