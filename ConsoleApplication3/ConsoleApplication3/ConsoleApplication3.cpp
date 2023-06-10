// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <array>
using namespace std;

int main()
{
    const int count = 9;
    int intArray[count] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int intArrayReverse[count] = {};

    for (int i = 0; i < count; i++) {
        cout << i << " - " << count - i - 1 << "\n";

        intArrayReverse[count - i - 1] = intArray[i];
        cout << intArrayReverse[count - i - 1] << "\n";
    }
    
}


