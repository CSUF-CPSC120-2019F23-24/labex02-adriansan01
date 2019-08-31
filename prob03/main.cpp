// Name:
// This program calculates the tax and tip on a restaurant bill.

//int , char, string.
//float , double, long

#include <iostream>

int main()
{
double totalCost, tax, tip;

//Get the total meal cost.
std::cout << "How much did the meal cost" << '\n';
std::cin >> totalCost;

//Tax is 7.75% of the meal cost
tax = totalCost * 0.0775;
std::cout << "Tax: " <<tax<< '\n';

//Tip should be 20% of the meal cost
tip = totalCost * .20;
std::cout << "Tip: " <<tip<< '\n';

//Display total bill
totalCost = tax + tip +totalCost;
std::cout << "Total Bill: " <<totalCost<< '\n';

return 0;
}
