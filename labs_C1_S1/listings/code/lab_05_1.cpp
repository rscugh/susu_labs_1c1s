/*
Напишите вызывающую программу, которая обращается к функции Avg
тремя различными способами.
*/

#include "Function.h" //из "Практических_заданий"

int main()
{
    float a, b, c; //переменные (1)
    a = 3;
    b = 4;
    c = 5;
     
    cout << "a\t" ; //шапка таблицы
    cout << "b\t" ;
    cout << "c\t" ;
    cout << "avg()\n";

    cout << Avg(a, b, c); //через переменные
    cout << endl;
    cout << Avg (2.0, 3.0, 7.0); //через "константы"
    cout << endl;
    cout << Avg ( b*3.0, 9.0/2.0, a*3.0+1.0 ); // выражения
    cout << endl;

    return 0;
}