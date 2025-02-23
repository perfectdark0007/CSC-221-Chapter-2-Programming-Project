// CSC 221 Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Program 3: Energy Drink Consumption
// Defines constants for total number of customers, percentage of customers purchasing energy drinks, and percentage of customers preferring citrus-flavored energy drinks.
// Calculates the number of customers purchasing one or more energy drinks per week and of those the number of customers preferring citrus-flavored energy drinks.
// Displays the results.
// End the program with a return 0 statement. 


#include <iostream>
using namespace std;

int main() {
    // Define constants
    const int TOTAL_CUSTOMERS = 16500;
    const double PERCENT_ENERGY_DRINK_BUYERS = 0.15;
    const double PERCENT_CITRUS_PREFERENCE = 0.58;

    // Calculate number of customers
    int energyDrinkCustomers = TOTAL_CUSTOMERS * PERCENT_ENERGY_DRINK_BUYERS;
    int citrusDrinkCustomers = energyDrinkCustomers * PERCENT_CITRUS_PREFERENCE;

    // Display results
    cout << "Approximate number of customers purchasing one or more energy drinks per week: " << energyDrinkCustomers << endl;
    cout << "Approximate number of customers preferring citrus-flavored energy drinks: " << citrusDrinkCustomers << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
