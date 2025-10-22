#include <iostream>
#include <iomanip>
#include "NumberArray.h"

using namespace std;

NumberArray::NumberArray(int size) {
  this->size = size;
  array = new double[size];
  for (int i = 0; i < size; i++) {
    array[i] = 0.0;
  }
}

//getNumber function
int NumberArray::getNumber(int index) {
  if (index < 0 || index >= size) {
    cout << "Error: Index out of bounds. The default value returned is 1." << endl;
    return 1;
  }
  return array[index];
  
}

double NumberArray::findMin() {
  double min = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

double NumberArray::findMax() {
  double max = array[0];
  for (int i = 1; i < size; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

double NumberArray::calcAverage() {
  double sum = 0.0;
  for (int i = 0; i < size; i++) {
    sum += array[i];
  }
  return sum / size;
}

void NumberArray::printArray() {
  cout << fixed << setprecision(1);
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  cout << "The minimum value in the array is: " << findMin() << endl;
  cout << "The maximum value in the array is: " << findMax() << endl;
  cout << "The average of the values in the array is: " << calcAverage() << endl;
}

