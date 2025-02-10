// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <Karlie Cradock> on <2.10.25>

#include <iostream>
using namespace std;

int main() {
  
//declare variables
  int small = 0;
  int medium = 0;
  int large = 0;
  int family = 0;
  int total = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent = 0.0;

  //enter input items
  cout << "Small: ";
  cin >> small;
  cout << "Medium: ";
  cin >> medium;
  cout << "Large: ";
  cin >> large;
  cout << "Family: ";
  cin >> family;

  //calculate and display total sold
  total = small + medium + large + family;
  cout << "Total: " << total << endl;
  
  //calculate and display percentages
  smallPercent = static_cast<double>(small) / total * 100;
  mediumPercent = static_cast<double>(medium) / total * 100;
  largePercent = static_cast<double>(large) / total * 100;
  familyPercent = static_cast<double>(family) / total * 100;
  cout << "Small: " << smallPercent << "%" << endl;
  cout << "Medium: " << mediumPercent << "%" << endl;
  cout << "Large: " << largePercent << "%" << endl;
  cout << "Family: " << familyPercent << "%" << endl;
  
  return 0;
} // end of main function