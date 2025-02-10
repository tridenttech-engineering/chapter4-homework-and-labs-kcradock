// Introductory11.cpp - displays ending balance
// Created/revised by <Karlie Cradock> on <2.10.25>

#include <iostream>
using namespace std;

int main() {

  //declare variables
  double startingBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;
  double endingBalance = 0.0;
  
  //enter input items
  cout << "Starting balance: ";
  cin >> startingBalance;
  cout << "Total deposits: ";
  cin >> totalDeposits;
  cout << "Total withdrawals: ";
  cin >> totalWithdrawals;
  
  //calculate and display the ending balance
  endingBalance = startingBalance + totalDeposits - totalWithdrawals;
  cout << "Ending balance: " << endingBalance << endl;
  

  return 0;
} // end of main function