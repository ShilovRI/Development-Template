#include <gtest/gtest.h>
#include "DateClass.h"

TEST(Addition,AddintDate) {
  Date z1(20, 8, 2000);
  int i = 5;
  Date result(25, 8, 2000);
  const Date z_ =z1 + i;
  EXPECT_EQ(z_,result);
}
TEST(Subtraction,SubintDate) {
  Date z1(20,8,2000);
  int i = 5;
  Date result(15, 8, 2000);
  const Date z_ = z1 - i;
  EXPECT_EQ(z_, result);
}
TEST(Ñomparison,Equaly) {
  Date z1(12, 12, 2000);
  Date z2(12, 12, 2000);
  bool i;
  if (z1 == z2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(Ñomparison,More) {
  Date z1(12, 12, 2000);
  Date z2(11, 12, 2000);
  bool i;
  if (z1 > z2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(Ñomparison,Less) {
  Date z1(11, 12, 2000);
  Date z2(12, 12, 2000);
  bool i;
  if (z1 < z2) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(Assignment, TwoDatesAssign) {
  Date z1(11, 12, 2000);
  Date z2(5, 5, 2005);
  Date result(5, 5, 2005);
  z1 = z2;
  EXPECT_EQ(z1, result);
}
TEST(Date, Can_Use_Converter_Constructor) {
  string s("12.12:2000");
  Date z1(12,12,2000);
  string s1;
  string s2;
  string s3;
  int k = 0;
  s1.assign(s, 0, 2);
  int i = std::stoi(s1);
  s2.assign(s, 3, 5);
  int i2 = std::stoi(s2);
  s3.assign(s, 6, 10);
  int i3 = std::stoi(s3);
  if ((i == z1.getDay()) && (i2 == z1.getMonth()) && (i3 == z1.getYear())) {
    k = 1;
  }
  EXPECT_EQ(k, 1);
}

TEST(Functions, GetFunctionsDay) {
  Date z1(12, 12, 2000);
  int k;
  k = z1.getDay();
  EXPECT_EQ(k, 12);
}
TEST(Date, Can_Use_Initializator_Constructor) {
  int i = 0;
  Date z1(1, 2, 2000);
  if ((z1.getDay() == 1) && (z1.getMonth() == 2) && (z1.getYear() == 2000)) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(Date, Can_Use_Default_Constructor) {
  Date z1;
  int i = 0;
  if ((z1.getDay() == 0) && (z1.getMonth() == 0) && (z1.getYear() == 0)) {
    i = 1;
  }
  EXPECT_EQ(i, 1);
}
TEST(Functions, GetFunctionsMonth) {
  Date z1(12, 12, 2000);
  int k;
  k = z1.getMonth();
  EXPECT_EQ(k, 12);
}
TEST(Functions, GetFunctionsYear) {
  Date z1(12, 12, 2000);
  int k;
  k = z1.getYear();
  EXPECT_EQ(k, 2000);
}