#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

  const double container = 2.76, cost = 4.12, profit = 1.45 ; //constant numbers above the "main" function because they will not change.
  int cheeseProduced; 
  char z = '*', y = ' '; //in order to avoid hard coding

int main() 
{
  double numcon, cp, plusprofit;
  cout << setw(75) << setfill('*') << z << endl;
  cout << setw(29) << setfill('*') << z << " Cheese Business " << setw(29) <<setfill(z) << z << endl;
  cout << setw(75) << setfill(z) << z << endl; 
  //instead of hard-coding asterisks I used format manipulators. I formatted it by using setw() to determine how many colummns the code should output. setfill manipulator filled the columns with the charachter I chose.
  cout << "Please enter the number of kilograms of cheese produced:"; //asking for user to input a number. 
  cin >> cheeseProduced;
  numcon = round(cheeseProduced/container); 
  //The number of kilograms of cheese (input) is divided by the constant variable "container" to determine how many containers will be needed to hold the cheese. It is rounded to the nearest whole number.
  cp = numcon*cost; 
  //The number of containers is multiplied by the constant variable "cost" in order to determine the cost of producing "numcon" containers of cheese.
  plusprofit = (profit * numcon); 
  //The constant variable "profit" is multiplied by "numcon"(the number of containers) in order to determine the profit.
  cout << "The number of containers to hold cheese is: " << setw(30) << setfill(y) << round(numcon) << endl; 
  //In order to avoid hard coding spaces I used manipulators again. This time I used a different character so that the numbers can align in a column.
  cout << "The cost of producing " + to_string(lround(numcon))+ " container(s) of cheese is: $" << setw(20) << setfill(y) << cp << endl;
  cout << "The profit from producing " + to_string(lround(numcon)) + " container(s) of cheese is: $" << setw(16) << setfill(y) << fixed << setprecision(2) << plusprofit << endl; 
  //In these lines of code I used to_string in order to convert my data into the string. I also used the same manipulators as the other to align the numbers in a column. In the last one I used the fixed and setprecision manipulator in order to output 2 decimal places instead of one. 
}
