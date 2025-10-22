//Test program

/*
----- Test constructors -----
From default constructor: Array of size 10
0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0
From constructor with parameters: Array of size 15
0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0 0.0
----- Test mutator -----
Array filled with numbers:
11.1 55.0 4.8 47.8 62.6 11.9 62.9 88.5 6.2 3.5 41.3 91.9 24.1 73.5
25.7
Trying to set a number with an out of bounds index (20):
The index is out of the bounds of the array, number not stored
----- Test accessors _____
Access item at index 5: 11.9
The Index is out of the bounds of the array, returning default
Access item at index 20 (out of bounds): 10000.0
The minimum value in the array is: 3.5
The maximum value in the array is: 91.9
The average of the values in the array is: 40.7
The destructor is running
The destructor is running
*/

#include <iostream>
#include <iomanip>
#include <random>
#include "NumberArray.h"

using namespace std;
int main() {

  random_device engine;
  uniform_real_distribution<double> dist(0.0, 100.0);

  //Test constructors
  cout << "----- Test constructors -----" << endl;

  //Test default constructor
  cout << "From default constructor: Array of size 10" << endl;
  NumberArray array1;
  array1.printArray();
  cout << endl;

  //Test constructor with parameters
  cout << "From constructor with parameters: Array of size 15" << endl;
  NumberArray array2(15);
  for (int i = 0; i < 15; i++) {
    array2.setNumber(i, dist(engine));
  }
  array2.printArray();
  cout << endl;

  //Test mutator
  cout << "----- Test mutator -----" << endl;
  cout << "Array filled with numbers:" << endl;
  for (int i = 0; i < 15; i++) {
    array2.setNumber(i, dist(engine));
  }
  array2.printArray();
  cout << endl;
  
  cout << "Trying to set a number with an out of bounds index (20):" << endl;
  array2.setNumber(20, 25.7);
  
  cout << endl;
  

  
  
  
}