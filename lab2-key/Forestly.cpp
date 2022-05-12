#include <iostream>

int main() {
  int year1{0}, year2{0};
  int acres_burned_in_year1{0}, acres_burned_in_year2{0};
  const double co2_per_acre_burned{26.7};

  std::cout << "Enter the first year: ";
  std::cin >> year1;

  std::cout << "Enter the acres consumed by forest fire that year: ";
  std::cin >> acres_burned_in_year1;

  std::cout << "Enter the second year: ";
  std::cin >> year2;

  std::cout << "Enter the acres consumed by forest fire that year: ";
  std::cin >> acres_burned_in_year2;

  auto percent_change = ((static_cast<double>(acres_burned_in_year2) - static_cast<double>(acres_burned_in_year1)) /
                         static_cast<double>(acres_burned_in_year1)
                        ) * 100.0;
  auto co2_emitted_in_year1 = acres_burned_in_year1 * co2_per_acre_burned;
  auto co2_emitted_in_year2 = acres_burned_in_year2 * co2_per_acre_burned;

  std::cout << "In year " << year1 
                          << ", forest fires generated "
                          << co2_emitted_in_year1
                          << " tons of carbon dioxide.\n";
  std::cout << "In year " << year2
                          << ", forest fires generated "
                          << co2_emitted_in_year2
                          << " tons of carbon dioxide.\n";
  std::cout << "Between " << year1 << " and " 
                          << year2 << ", there was a "
                          << percent_change
                          << "% increase in acres consumed by forest fires.\n";

  return 0;
}
