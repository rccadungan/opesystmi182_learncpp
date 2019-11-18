/*
 * Prompt user for the length and width of a rectangle and compute its area
 * (areaOfARectangle.c)
 */
#include <iostream>
using namespace std;

int main() {
   double length, width, area; // Declare 3 floating-point variables

   cout << "This program will compute the area of your rectangle" << endl; //program  message

   cout << "Enter the length of your rectangle: " << endl;  // Prompting message
   cin >> length;         // Read input into variable length

   cout << "Enter the width of your rectangle: " << endl;  // Prompting message
   cin >> width;         // Read input into variable length

   // Compute area
   area =  length * width;

   // Print the results
   cout << "The area of your rectangle is: " << area << endl;

   return 0;
}
