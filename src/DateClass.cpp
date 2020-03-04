#include "DateClass.h"
#include <string>
Date::~Date() {
  Day = 0;
  Month = 0;
  Year = 0;
}
// перегрузка оператора вывода
ostream& operator<<(ostream& stream, const Date& c) {
  stream << c.Day << "." << c.Month << "." << c.Year << endl;
  return stream;
}
// перегрузка оператора ввода
istream& operator>>(istream& stream, Date& c) {
  stream >> c.Day >> c.Month >> c.Year;
  return stream;
}
// перегрузка оператора сложени€ времени с количеством суток
Date Date::operator+(const Date& c)
{
  Date res;
  res.Day = Day + c.Day;
  if (res.Day > 30)
  {
    res.Day = res.Day - 30;
    res.Month++;
  }
  res.Month = Month + c.Month;
  res.Year = Year + c.Year;
  if (res.Month > 12)
  {
    res.Month = res.Month - 12;
    res.Year++;
  }
  return res;
}
Date Date::operator+(int k) {
  Date res;
  res.Day = this->Day;
  res.Month = this->Month;
  res.Year = this->Year;
  res.Day = res.Day + k;
  while (res.Day > 30) {
    if (res.Day > 30) {
      res.Day = res.Day - 30;
      res.Month++;
      if (res.Month > 12) {
        res.Month = res.Month - 12;
        res.Year++;
      }

    }
  }
  return res;
}
//реализаци€ перегрузки сравнени€ >
bool Date::operator>(const Date& c) {
  bool res = 0;
  if ((Year > c.Year) || ((Year > c.Year) || (Month > c.Month)) || ((Year > c.Year) || (Month > c.Month) || (Day > c.Day))) {
    res = 1;
  }
  return res;
}
//реализаци€ перегрузки сравнени€ <
bool Date::operator<(const Date& c) {
  bool res = 0;
  if ((Year < c.Year) || ((Year < c.Year) || (Month < c.Month)) || ((Year < c.Year) || (Month < c.Month) || (Day < c.Day))) {
    res = 1;
  }
  return res;
}
//реализаци€ перегрузки равенства
bool Date::operator==(const Date& c) {
  bool res = 0;
  if ((Year == c.Year) && (Month == c.Month) && (Day == c.Day)) {
    res = 1;
  }
  return res;
}
//реализаци€ перегрузки оператора вычитани€
Date Date::operator-(int k) {
  Date res;
  res.Day = this->Day;
  res.Month = this->Month;
  res.Year = this->Year;
  res.Day = res.Day - k;
  while (res.Day <= 0) {
    if (res.Day <= 0) {
      res.Day = 30 + res.Day;
      res.Month--;
      if (res.Month <= 0) {
        res.Month = 12 - res.Month;
        res.Year--;
      }

    }
  }
  return res;
}
//реализаци€ перегрузки присваивани€
Date& Date::operator=(const Date& c) {
  (*this).Day = c.Day;
  Month = c.Month;
  Year = c.Year;
  return *this;
}

// реализаци€ конструкторов
Date::Date(int _d, int _m, int _y) : Day(_d), Month(_m), Year(_y) { }
Date::Date() {
  Day = 0;
  this->Month = 0;
  this->Year = 0;
}
Date::Date(string s) {
  string s1;
  string s2;
  string s3;
  s1.assign(s, 0, 2);
  int i = std::stoi(s1);
  s2.assign(s, 3, 5);
  int i2 = std::stoi(s2);
  Day = i;
  s3.assign(s, 6, 10);
  int i3 = std::stoi(s3);
  Month = i2;
  Year = i3;
}

//метод представлени€ даты в виде строки
void Date::outputtostring() {
  Date res;
  res.Day = this->Day;
  res.Month = this->Month;
  res.Year = this->Year;
  string s1 = std::to_string(Day);
  string s2 = ".";
  string s3 = s1 + s2;
  string s4 = std::to_string(Month);
  string s5 = ":";
  string s6 = s4 + s5;
  string s7 = s3 + s6;
  string s8 = std::to_string(Year);
  string s9 = s7 + s8;
  cout << s9 << endl;
}
//вспомогательные функции
int Date::getDay() {
  Date res;
  res.Day = this->Day;
  return res.Day;
}
int Date::getMonth() {
  Date res;
  res.Month = this->Month;
  return res.Month;

}
int Date::getYear() {
  Date res;
  res.Year = this->Year;
  return res.Year;
}