#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date() {
  setDate(1, 1, 1900);
}

Date::Date(int m, int d, int y) {
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


int Date::lastDay() const {
  return lastDay(month, year);
}

int Date::lastDay(int month, int year) const {
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

bool Date::isLeapYear() const {
  return isLeapYear(year);
}

bool Date::isLeapYear(int year) const {
  // A year is a leap year if it is divisible by 4, but not by 100, unless it is also divisible by 400.
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      return year % 400 == 0;
    }
    else {
      return true;
    }
  }
  else {
    return false;
  }
}

string Date::monthName() const {
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

void Date::printDate1() const {
  cout << month << "/" << day << "/" << year << endl;
}

void Date::printDate2() const {
  cout << monthName() << " " << day << ", " << year << endl;
}

void Date::printDate3() const {
  cout << day << " " << monthName() << " " << year << endl;
}
