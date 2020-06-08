#include <iostream>
#include<fstream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int n = 0, i = 0;

	char a[255], b[255], sent[255];
	ifstream in("text.txt");
	in.getline(a, sizeof(a));
	in.getline(b, sizeof(b));
	in.getline(sent, sizeof(sent));
	in.close();

	//char sent[] = "But sometimes I lose my head from love.";

	while (sent[i] == ' ' && sent[i] != '\0') i++;
	int k = 0;
	while (sent[i] != '\0') {
		if (sent[i] != ' '&& k == 0) {
			k = 1;
			n++;
		}
		else if (sent[i] == ' ') k = 0;
		i++;
	}
	cout << "Заданный текст: " << endl << sent << endl;
	cout << endl << "Количество слов: " << n << endl;
}


