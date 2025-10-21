//This is my test program for the Date class. It follows the test cases that are shown in Canvas.

#include <iostream>
#include "Date.h"

using namespace std;

int main() {

  //Test the default constructor
  cout << "Test default constructor: " << endl;
  Date d1;
  d1.printDate1();
  d1.printDate2();
  d1.printDate3();
  cout << endl;

  //Test the constructor with a valid date
  cout << "Test constructor with valid date: " << endl;
  Date d2(2, 28, 2009);
  d2.printDate1();
  d2.printDate2();
  d2.printDate3();
  cout << endl;

  //Test the constructor with an invalid month
  cout << "Test constructor with invalid month: " << endl;
  Date d3(45, 2, 2009);
  d3.printDate1();
  d3.printDate2();
  d3.printDate3();
  cout << endl;

  //Test the constructor with an invalid day
  cout << "Test constructor with invalid day: " << endl;
  Date d4(2, 29, 2009);
  d4.printDate1();
  d4.printDate2();
  d4.printDate3();
  cout << endl;

  //Test the setDate method with an invalid month
  cout << "Test setDate with bad month (13): " << endl;
  d1.setDate(13, 23, 2010);
  d1.printDate1();
  d1.printDate2();
  d1.printDate3();
  cout << endl;

  //Test the setDate method with an invalid day
  cout << "Test setDate with bad day: " << endl;
  d1.setDate(4, 31, 2009);
  d1.printDate1();
  d1.printDate2();
  d1.printDate3();
  cout << endl;

  //Test for leap year with an invalid date
  cout << "Test for leap year with bad date: " << endl;
  d1.setDate(2, 29, 2009);
  d1.printDate1();
  d1.printDate2();
  d1.printDate3();
  cout << endl;

  //Test for leap year with a valid date
  cout << "Test for leap year with good date: " << endl;
  d1.setDate(2, 29, 2008);
  d1.printDate1();
  d1.printDate2();
  d1.printDate3();
  cout << endl;
  
  }