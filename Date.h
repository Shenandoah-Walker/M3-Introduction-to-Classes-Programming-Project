#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date 
{

public:
  int month;
  int day;
  int year;
  Date();
  Date(int, int, int);
  void printDate1();
  void printDate2();
  void printDate3();
  void setDate(int m, int day, int y);
  int lastDay();
  int lastDay(int month, int year);
  bool isLeapYear();
  bool isLeapYear(int year);
  std :: string monthName();




private:




};


#endif
