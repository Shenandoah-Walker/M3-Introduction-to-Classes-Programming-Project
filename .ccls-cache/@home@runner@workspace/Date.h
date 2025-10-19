/*Class purpose: Take as input a date and output it in different formats. The three formats are: 
- 12/25/2021
- December 25, 2021
- 25 December 2021
  */


#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

class Date 
{

private:
int month;
int day;
int year;

public:
  Date();
  Date(int, int, int);

  void setDate(int m, int day, int y);

  int getMonth() const;
  int getDay() const;
  int getYear() const;

  bool isLeapYear() const;
  bool isLeapYear(int year) const;

  int lastDay() const;
  int lastDay(int month, int year) const;

  std :: string monthName() const;

  void printDate1() const;
  void printDate2() const;
  void printDate3() const;

};


#endif
