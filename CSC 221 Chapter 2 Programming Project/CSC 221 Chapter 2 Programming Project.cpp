// CSC 221 Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Program 2: Distance per Tank of Gas
// Description: This program calculates the distance a vehicle can travel on one tank of gas in town and on the highway.


#include <iostream>
using namespace std;

int main() {
    // Define constants
    const double GAS_TANK = 20.0; // in gallons
    const double MPG_TOWN = 23.5;      // miles per gallon in town
    const double MPG_HIGHWAY = 28.9;   // miles per gallon on the highway

    // Calculate distances
    double distanceTown = GAS_TANK * MPG_TOWN;
    double distanceHighway = GAS_TANK * MPG_HIGHWAY;

    // Display results
    cout << "The vehicle's fuel range is " << distanceTown << " miles on one tank in town." << endl;
    cout << "The vehicle's fuel range is " << distanceHighway << " miles on one tank on the highway." << endl;

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
