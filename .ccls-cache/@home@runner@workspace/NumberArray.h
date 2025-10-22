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