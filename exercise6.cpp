#include <iostream>
#include <iomanip> // Include the iomanip library for setw() and setfill()
using namespace std;

int main() {
    // Assume you have location names and corresponding population numbers
    string locationName = "Portcity";
    int population = 2425785;

    // Set the field width for the location name (including dots)
    int fieldWidth = 20; // Adjust as needed

    // Set the fill character to a period ('.')
    char fillChar = '.';

    // Display the location name followed by the population
    cout << left<< setw(fieldWidth) << setfill(fillChar) << locationName;
    cout << population << endl;

    return 0;
}
