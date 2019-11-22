/*
 * Compare two user input number whether it's bigger or smaller (numberComparing.cpp)
 */
#include <iostream>
using namespace std;

int main() {
   int number1, number2;

   // Prompt user for numbers
   cout << "Enter your first number: " << endl; //prompt the user enter first number
   cin >> number1;   

   cout << "Enter your second number: " << endl; //prompt the user enter second number
   cin >> number2;   

      if (number1  > number2 ) {  //
        cout << "First number is bigger than the second number." << endl;
      }
      else {
        cout << "Second number is bigger than the first number." << endl;
      }
   return 0;
}
