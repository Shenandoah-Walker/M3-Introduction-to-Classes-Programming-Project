//Test program

#include <iostream>
#include <iomanip>
#include <random>
#include "NumberArray.h"

using namespace std;
int main() {

  random_device engine;
  uniform_real_distribution<double> dist(0.0, 100.0);

  //Test default constructor
  NumberArray array1;
  array1.printArray();
  cout << endl;
  NumberArray array2(10);
  for (int i = 0; i < 10; i++) {
    array2.setNumber(i, dist(engine));
  }
  array2.printArray();
  cout << endl;
  
  
}