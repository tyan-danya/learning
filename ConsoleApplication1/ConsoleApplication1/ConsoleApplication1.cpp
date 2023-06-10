// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string our_string = "Hello world hello";

	for (int i = 0; i <= our_string.length(); i++) {
		
		/*
			Прошлая
		*/

		if (our_string[i] == ' ') {
			cout << "\n";
		}
		else {
			cout << our_string[i];
		}
		 /*
			Нынешняя
		 */
		if (our_string[i] == ' ') {
			our_string[i] = '\n';
		}

		/*
			Божественная
		*/
		replace(our_string.begin(), our_string.end(), ' ', '\n');
	}
	cout << our_string;
}
