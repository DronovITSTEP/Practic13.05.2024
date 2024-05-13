#include <iostream>

#include "MyClass.h"

using namespace std;

/*
Создать класс Airplane (самолет)
С помощью перегрузки операторов реализовать:
■ Проверка на равенство типов самолетов (операция = =)
■ Увеличение и уменьшение пассажиров в салоне самолета
(операции ++ и - - в префиксной форме)
■ Сравнение двух самолетов по максимально 
возможному количеству пассажиров на борту (операция>)
*/

int main()
{
    Circle circle1{ 5 };
    Circle circle2{ 7 };

    if (circle1 > circle2) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    //circle1 += circle2;
    circle1 += 5;
    circle2 += 45;
    
   // circle1.print();

    cout << circle1 << endl;
    cin >> circle1;
    
    cout << circle1 << endl;
}
