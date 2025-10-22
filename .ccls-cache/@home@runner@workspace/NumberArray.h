/*
Class purpose: This class allows the user to create an array of floating point numbers. The user can set the size of the array, set the value of an element in the array, get the value of an element in the array, find the minimum value in the array, find the maximum value in the array, and calculate the average of all the elements in the array.
*/

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H
#include <iostream>
#include <iomanip>

using namespace std;

class NumberArray {

private:
  double *array;
  int size; 
  static const int MAX_SIZE = 10;
  static const int MIN_SIZE = 1;
  static const int DEFAULT_VALUE = 10000;

public:
  //Constructor
  NumberArray(int size = MAX_SIZE);

  //Destructor
  ~NumberArray() {delete [] array; cout << "The destructor is running" << endl;};

  //Accessors
  void setNumber(int index, double value);
  int getNumber(int index);
  double findMin();
  double findMax();
  double calcAverage();
  void printArray();

};

#endif