#include <iostream>
#include <fstream>
#include <clocale>  
#include <string>
#include "DateClass.h"
using namespace std;

int main() {
  int k;
  string s = "12.15:2000";
  setlocale(LC_CTYPE, "Russian");
  Date d0(20, 8, 2000);
  Date d1; //конструктор по умолчанию
  Date d2(12, 5, 1990); //конструктор инициализации
  Date d3;
  Date d5(6, 6, 1950);
  Date d7(6, 6, 1951);
  Date d8;
  Date d9;
  Date d10;
  Date d11(s);
  cout << "Доброго времени суток,сегодня мы будем работать с датами,формат DD.MM.YYYY" << endl;
  cout << "Вывод числа №1" << endl;
  cout << d2 << endl;
  cout << "Введите число №2 которое затем хотите вывести (день,месяц,год)" << endl;
  cin >> d3;
  cout << d3 << endl;
  cout << "Вывод числа №3 " << d2 << endl;
  cout << "Введите количество дней чтоб сложить с числом №3" << endl;
  cin >> k;
  Date d4;
  d4 = d2 + k;
  cout << d4 << endl;
  cout << "Вывод числа №4 " << d5 << endl;
  cout << "Введите количество дней чтоб вычесть из числа №4" << endl;
  cin >> k;
  Date d6 = d5 - k;
  cout << d6 << endl;
  cout << "Введите дату 1 для сравнения через Enter(день,месяц,год)" << endl;
  cin >> d8;
  cout << "Введите дату 2 для сравнения через Enter(день,месяц,год)" << endl;
  cin >> d9;
  if ((d8 == d9)==1) {
    cout <<"Даты 1 и 2 равны"<<endl;
  }
  else if ((d8 > d9)==1) {
    cout << "Дата 1 больше чем дата 2" << endl;
  }
  else if ((d8 < d9)==1) {
    cout << "Дата 1 меньше чем дата 2" << endl;
  }
  cout << d9 << endl;
  cout << "Введите дату которую хотите представить в формате DD.MM:YYYY" << endl;
  cin >> d10;
  d10.outputtostring();
  cout << "Дата переведенная из строки в класс" << endl;
  cout << d11 << endl;
  system("pause");
  return 0;
}