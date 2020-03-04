#ifndef INCLUDE_DATACLASS_H_
#define INCLUDE_DATACLASS_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Date {
public:
  Date();//тест+
  Date(int _d, int _m, int _y);//тест +
  Date(string s);//тест +
  friend ostream& operator<<(ostream& stream, const Date& c); //перегрузка вывода тест невозможен
  friend istream& operator>>(istream& stream, Date& c); //перегрузка ввода тест невозможен
  Date operator+(const Date& c);
  Date operator+(int d);//тест +
  Date operator-(int d);//тест +
  bool operator>(const Date& c);//тесты +
  bool operator<(const Date& c); 
  bool operator==(const Date& c);
  friend bool operator==(const Date& left, const Date& right) {
    bool res = 0;
    if ((left.Year == right.Year) && (left.Month == right.Month) && (left.Day == right.Day)) {
      res = 1;
    }
    return res;
  }
  Date& operator=(const Date& c);//тест +
  int getDay();//тесты +
  int getMonth();
  int getYear();
  ~Date();
  void outputtostring();//представление даты в виде строки (DD.MM:YYYY)


private:
  int Year;
  int Day;
  int Month;
};

#endif  // INCLUDE_DateClass_H
