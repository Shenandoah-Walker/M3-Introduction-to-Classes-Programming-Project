/*Date.h file:

#ifndef DATE_H
#define DATE_H

class Date 
{

public:
  int month;
  int day;
  int year;
  Date(int = 1, int = 1, int = 1900);



private:
  void setDate(int m, int day, int y);
  int lastDay();
  int lastDay(int month, int year);
  bool isLeapYear();
  bool isLeapYear(int year);
  void printDate1();
  void printDate2();
  void printDate3();



};


#endif
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y)
{
  setDate(m, d, y);
}
void Date::setDate(int m, int d, int y) {
  if (m < 1 || m > 12 || d < 1 || d > lastDay(m, y)) {
    month = 1;
    day = 1;
    year = 1900;
  } 
  else {
    month = m;
    day = d;
    year = y;
  }
}

int Date::lastDay() {
  return lastDay(month, year);
}

int Date::lastDay(int month, int year) {
  
  if (month == 2) {
    if (isLeapYear(year)) {
      return 29;
    }
    else {
      return 28;
    }
  }
    
  else if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  }
  else {
    return 31;
  }
}
bool Date::isLeapYear() {
  return isLeapYear(year);
}
bool Date::isLeapYear(int year) {
  // A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400.
  if (year / 4 == 0) {
    if (year / 100 == 0) {
      if (year / 400 == 0) {
        return true;
      }
      else {
        return false;
      }
    }
    else {
      return true;
    }
  }
  else{
    return false;
  }
  
}

string Date :: monthName() {

string monthWords;
if (month == 1) {
  monthWords = "January";
}
else if (month == 2) {
  monthWords = "February";
}
else if (month == 3) {
  monthWords = "March";
}
else if (month == 4) {
  monthWords = "April";
}
else if (month == 5) {
  monthWords = "May";
}
else if (month == 6) {
  monthWords = "June";
}
else if (month == 7) {
  monthWords = "July";
}
else if (month == 8) {
  monthWords = "August";
}
else if (month == 9) {
  monthWords = "September";
}
else if (month == 10) {
  monthWords = "October";
}
else if (month == 11) {
  monthWords = "November";
  }
else if (month == 12) {
  monthWords = "December";
}
return monthWords;
  }

void Date::printDate1() {
  cout << month << "/" << day << "/" << year << endl;
}
void Date::printDate2() {
  cout << monthName() << " " << day << ", " << year << endl;
}
void Date::printDate3() {
  cout << day << " " << monthName() << " " << year << endl;
  
}