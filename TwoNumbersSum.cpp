#include <iostream>
#include <limits>
using namespace std;

int main() {
   float num1, num2, sum;
   bool validInput = false;

   do {
      cout << "Enter the first number: ";

      if (cin >> num1) {
         validInput = true;
      } else {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Invalid input. Please enter a number." << endl;
      }
   } while (!validInput);

   validInput = false;

   do {
      cout << "Enter the second number: ";

      if (cin >> num2) {
         validInput = true;
      } else {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Invalid input. Please enter a number." << endl;
      }
   } while (!validInput);

   sum = num1 + num2;

   cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

   return 0;
}
