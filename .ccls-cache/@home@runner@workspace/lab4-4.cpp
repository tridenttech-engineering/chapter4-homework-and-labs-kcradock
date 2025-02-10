//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Karlie Cradock> on <2.10.25>
#include <iostream>
using namespace std;

int main() 
{
  //declare variables
  const double PI = 3.14;
  double height   = 0.0;
  double radius   = 0.0;
  double volume   = 0.0;
  
  //enter input items
  cout << "Height: ";
  cin >> height;
  cout << "Radius: ";
  cin >> radius;
  
  //calculate and display the volume
  volume = PI * radius * radius * height;
  cout << "Volume: " << volume << endl;
  
  return 0;
  
} //end of main function
