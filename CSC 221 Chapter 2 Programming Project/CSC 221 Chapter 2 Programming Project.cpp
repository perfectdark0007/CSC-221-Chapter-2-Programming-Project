// CSC 221 Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Problem 1: Ocean Levels
// Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a program that displays:
// 1. The number of millimeters higher than the current level that the ocean's level will be in 5 years
// 2. The number of millimeters higher than the current level that the ocean's level will be in 7 years
// 3. The number of millimeters higher than the current level that the ocean's level will be in 10 years
//
// Start by defining the constant for the current rate of ocean level rise. Use the value of 1.5 for the rate.
// Calculate the ocean level rise using the formula: rise = rate * years.
// Display the results in a relation to the current ocean level.
// End the program with a return 0 statement.


#include <iostream>

// Function to calculate ocean level rise
double calculateRise(double rate, int years) {
    return rate * years;
}

int main()
{
    // Define the rate of ocean level rise in millimeters per year
    constexpr double riseRate = 1.5;

    // Calculate ocean level rise for given years
    double riseIn5Years = calculateRise(riseRate, 5);
    double riseIn7Years = calculateRise(riseRate, 7);
    double riseIn10Years = calculateRise(riseRate, 10);

    // Display the results
    std::cout << "The ocean level will rise by: " << std::endl;
    std::cout << riseIn5Years << " mm in 5 years." << std::endl;
    std::cout << riseIn7Years << " mm in 7 years." << std::endl;
    std::cout << riseIn10Years << " mm in 10 years." << std::endl;

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
