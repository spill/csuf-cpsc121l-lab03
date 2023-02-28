// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 04-02
// Partners: @gimenar27
//
// Program to convert decimalized feet to feet, inches, and fractional inches,
// up to one eigth.
//

#include <cmath>
#include <iostream>

using namespace std;

const float kInchesInFeet{12.0};
const float kEighthsInInch{8.0};

// Main function - the entry point to our program, it does not take command line
// arguments
int main(int argc, char const *argv[]) {
  float input_decimal_feet{NAN};
  cout << " Enter the number of feet you wish to convert to feet-inch: ";
  cin >> input_decimal_feet;
  string sign;

  if (input_decimal_feet < 0.0) {
    input_decimal_feet *= -1.0;
    sign = "-";
  }

  int feet_integer_component{0};
  float feet_fractional_component{NAN};
  feet_integer_component = static_cast<int>(trunc(input_decimal_feet));
  feet_fractional_component =
      input_decimal_feet - float(feet_integer_component);

  float decimal_inches{NAN};
  decimal_inches = feet_fractional_component * kInchesInFeet;
  int inches_integer_component{0};
  float inches_fractional_component{NAN};
  inches_integer_component = static_cast<int>(decimal_inches);
  inches_fractional_component =
      decimal_inches - float(inches_integer_component);

  int eighths_integer_component{0};
  float eighths{NAN};
  eighths = inches_fractional_component * kEighthsInInch;
  eighths_integer_component = static_cast<int>(eighths);

  cout << sign << input_decimal_feet << " feet is " << sign
       << feet_integer_component << " feet, " << inches_integer_component;

  if (eighths_integer_component != 0) {
    cout << " and " << eighths_integer_component << "/8";
  }

  cout << " inches\n";

  return 0;
}
