#ifndef INCLUDE_DATACLASS_H_
#define INCLUDE_DATACLASS_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Date {
public:
  Date();//����+
  Date(int _d, int _m, int _y);//���� +
  Date(string s);//���� +
  friend ostream& operator<<(ostream& stream, const Date& c); //���������� ������ ���� ����������
  friend istream& operator>>(istream& stream, Date& c); //���������� ����� ���� ����������
  Date operator+(const Date& c);
  Date operator+(int d);//���� +
  Date operator-(int d);//���� +
  bool operator>(const Date& c);//����� +
  bool operator<(const Date& c); 
  bool operator==(const Date& c);
  friend bool operator==(const Date& left, const Date& right) {
    bool res = 0;
    if ((left.Year == right.Year) && (left.Month == right.Month) && (left.Day == right.Day)) {
      res = 1;
    }
    return res;
  }
  Date& operator=(const Date& c);//���� +
  int getDay();//����� +
  int getMonth();
  int getYear();
  ~Date();
  void outputtostring();//������������� ���� � ���� ������ (DD.MM:YYYY)


private:
  int Year;
  int Day;
  int Month;
};

#endif  // INCLUDE_DateClass_H
