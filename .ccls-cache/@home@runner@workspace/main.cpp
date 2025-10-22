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
  NumberArray array2(10);
  
}