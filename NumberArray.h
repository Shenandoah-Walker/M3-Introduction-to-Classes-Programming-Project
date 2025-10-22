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

public:
  //Constructor
  NumberArray();
  NumberArray(int size = MAX_SIZE);

  //Destructor
  ~NumberArray() {delete [] array; cout << "The destructor is running" << endl;};

  //Accessors
  void setNumber(int index, double value) {array[index] = value;};
  int getNumber(int index) {return array[index];};
  double findMin();
  double findMax();
  double calcAverage();
  void printArray();

};

#endif