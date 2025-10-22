#include <iostream>
#include <iomanip>
#include <random>
#include "NumberArray.h"

using namespace std;

random_device engine;
uniform_real_distribution<double> dist(0.0, 100.0);

NumberArray::NumberArray() {
  size = MAX_SIZE;
  array = new double[size];
  for (int i = 0; i < size; i++) {
    array[i] = 0.0;
  }
}

NumberArray::NumberArray(int size) {
  this->size = size;
  array = new double[size];
  
  for (int i = 0; i < size; i++) {
    array[i] = dist(engine);
  }
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
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
  cout << "The minimum value in the array is: " << findMin() << endl;
  cout << "The maximum value in the array is: " << findMax() << endl;
  cout << "The average of the values in the array is: " << calcAverage() << endl;
}

