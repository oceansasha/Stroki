#include <iostream>
#include<fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	//char String[100] = "But sometimes I lose my head from love.";

	char a[255], b[255], sent[255];
	ifstream in("text1.txt");
	in.getline(a, sizeof(a));
	in.getline(b, sizeof(b));
	in.getline(sent, sizeof(sent));
	in.close();

	cout << "Строка до сортировки: " << sent << endl;
	int Words[100], Number, i, j, Temp, Flag;
	for (Number = 0, Flag = 1, i = 0; sent[i]; i++)
	{
		if (sent[i] == ' ')
		{
			sent[i] = 0;
			Flag = 1;
		}
		else if (Flag)
		{
			Words[Number++] = i;
			Flag = 0;
		}
	}

	for (j = Number - 1; j > 0; j--)
		for (i = 0; i < j; i++)
			if (strcmp(&sent[Words[i]], &sent[Words[i + 1]]) > 0)
			{
				Temp = Words[i];
				Words[i] = Words[i + 1];
				Words[i + 1] = Temp;
			}
	cout << endl << "Отсортированные слова:" << endl;
	for (i = 0; i < Number; i++)
		cout << &sent[Words[i]] << endl;
}
