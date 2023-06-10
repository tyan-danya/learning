// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string our_string = "Hello world Hello";

    char symbol = 'l';

    for (int i = 0; i <= our_string.length(); i++) {
        if (our_string[i] == symbol) {
            cout << i << "\n";
        }
    }

    /*
        2 3 9 14 15
    */
}

