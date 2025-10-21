/*Class purpose: Take as input a date and output it in different formats. The three formats are: 
- 12/25/2021
- December 25, 2021
- 25 December 2021
  */


#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date 
{

private:
int month;
int day;
int year;

public:
  /*
  Constructor: Date
  Purpose: Create a date object
  Parameters:
    - int month
    - int day
    - int year
  Returns: None
  Preconditions: None
  Postconditions: None
  */
  Date();
  Date(int month, int day, int year);

  /*
  Mutator: setDate
  Purpose: Set the date
  Parameters:
    - int m
    - int d
    - int y
  Returns: None
  Preconditions: None
  Postconditions: None
  */

  void setDate(int m, int d, int y);


  /*
  Accessor: isLeapYear
  Purpose: Check if the year is a leap year
  Parameters: None
  Returns: bool
  Preconditions: None
  Postconditions: None
  */
  bool isLeapYear() const;
  bool isLeapYear(int year) const;

  /*
  Accessor: lastDay
  Purpose: Determine the last day of the month
  Parameters: None
  Returns: int
  Preconditions: None
  Postconditions: None
  */
  int lastDay() const;
  int lastDay(int month, int year) const;

  /*
  Accessor: monthName
  Purpose: Determine the name of the month
  Parameters: None
  Returns: string
  Preconditions: None
  Postconditions: None
  */
  string monthName() const;

  /* 
  Accessor: printDate1
  Purpose: Print the date in the format 12/25/2021
  Parameters: None
  Returns: None
  Preconditions: None
  Postconditions: None
  */
  void printDate1() const;

  /*
  Accessor: printDate2
  Purpose: Print the date in the format December 25, 2021
  Parameters: None
  Returns: None
  Preconditions: None
  Postconditions: None
  */
  void printDate2() const;

  /*
  Accessor: printDate3
  Purpose: Print the date in the format 25 December 2021
  Parameters: None
  Returns: None
  Preconditions: None
  Postconditions: None
  */
  void printDate3() const;

};


#endif
