#include <iostream>

/*
 * This code allows the user to input two years and the number of acres
 * consumed by forest fires that year. It then calculates the carbon 
 * dioxide emissions for each year and how much it increased from the 
 * first year to the second one. Finnally, it ouputs all the information
 * to the user.
 */

const auto CO2_PER_ACRE{ 26.7 };

int main() {

	//define variables
	
	int year1;
	double numAcresYear1;
	int year2;
	double numAcresYear2;

	//gather inputs from the user
	std::cout << "Enter the first year: ";
	std::cin >> year1;
	std::cout << "Enter the acres consumed by forest fire that year: ";
	std::cin >> numAcresYear1;
	std::cout << "Enter the second year: ";
	std::cin >> year2;
	std::cout << "Enter the acres consumed by forest fire that year: ";
	std::cin >> numAcresYear2;

	//calculations
	double co2EmissionsYear1 = numAcresYear1 * CO2_PER_ACRE;
	double co2EmissionsYear2 = numAcresYear2 * CO2_PER_ACRE;
	double percentIncrease = 100 * ((co2EmissionsYear2 - co2EmissionsYear1) / co2EmissionsYear1);

	//outputs
	std::cout << "In year " << year1 << ", forest fires generated " << co2EmissionsYear1 << " tons of carbon dioxide.\n";
	std::cout << "In year " << year2 << ", forest fires generated " << co2EmissionsYear2 << " tons of carbon dioxide.\n";
	std::cout << "Between " << year1 << " and " << year2 << ", there was a "  << percentIncrease << "% increase in acres consumed by forest fires.\n";
			 

return 0;
}