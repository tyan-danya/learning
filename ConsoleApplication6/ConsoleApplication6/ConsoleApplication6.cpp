// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

bool isChar(char symbol) {
  if (symbol - ne chislo) {
    return true;
  } else {
    return false;
  }
}

int main()
{
  
  //6.	Есть массив строк вида [‘a’, ‘b’, ‘2’, ‘f’, ‘3’, ‘f’], вывести на экран количество чисел и количество символов
  int count = 6;
  int intArray[count] = { 5, 'a', 3, 'f', 2, 'b' };
  
  int symbolCount = 0;
  int numberCount = 0;
  
  for(int i=0; i<count; i++) {
	if (isChar(intArray[i])) {
      symbolCount++;
      // В ячейке символ
    } else {
      numberCount++;
      // В ячейке число
    }
  }
}

