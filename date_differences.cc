// Ryan Trinh
// CPSC 120-06
// 2022-09-28
// rtrinh02@csu.fullerton.edu
// @rtrinh02
//
// Lab 04-01
// Partners: @gimenar27
//
// Program to calculate the number of days between two Gregorian dates.
//

#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << "Let's find the number of days between two dates...\n";
  std::cout << "Enter a starting month";

  int start_month{0};
  int start_day{0};
  int start_year{0};
  int end_month{0};
  int end_day{0};
  int end_year{0};

  std::cout << "Enter a start month: ";
  std::cin >> start_month;
  std::cout << "Enter a start day: ";
  std::cin >> start_day;
  std::cout << "Enter a start year: ";
  std::cin >> start_year;
  std::cout << "\n";

  std::cout << "Enter an end month: ";
  std::cin >> end_month;
  std::cout << "Enter an end day: ";
  std::cin >> end_day;
  std::cout << "Enter an endyear: ";
  std::cin >> end_year;

  int start_number_of_days_since_epoch =
      start_day - 32075 +
      1461 * (start_year + 4800 + (start_month - 14) / 12) / 4 +
      367 * (start_month - 2 - (start_month - 14) / 12 * 12) / 12 -
      3 * ((start_year + 4900 + (start_month - 14) / 12) / 100) / 4;

  int end_number_of_days_since_epoch =
      end_day - 32075 + 1461 * (end_year + 4800 + (end_month - 14) / 12) / 4 +
      367 * (end_month - 2 - (end_month - 14) / 12 * 12) / 12 -
      3 * ((end_year + 4900 + (end_month - 14) / 12) / 100) / 4;

  int number_days =
      end_number_of_days_since_epoch - start_number_of_days_since_epoch;

  std::cout << "The number of days between " << start_month << "/" << start_day
            << "/" << start_year << " and " << end_month << "/" << end_day
            << "/" << end_year << " is " << number_days << " days\n";

  return 0;
}
