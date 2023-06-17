// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    const int count = 6;
    int intArray[count] = { 5, 6, 3, 9, 2, 4 };
    //                    { 5, 3, 6, 2, 4, 9 }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1; j++) {
            if (intArray[j] > intArray[j + 1]) {
                int temp = intArray[j];
                intArray[j] = intArray[j + 1];
                intArray[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        cout << intArray[i] << "\n";
    }
}