/**
 *   @file: gas_consumption.cc
 * @author: McKenzie Searcy
 *   @date: 05-22-24
 *  @brief: Calculates the gas consumption for a trip given the number of miles driven in town and the number of miles driven on the highway.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[]) {

    ///user input for town and highway miles
        int townMiles, highwayMiles;
        cout << "Enter the number of miles driven in town: ";
        cin >> townMiles;
        if (townMiles < 0) {
            cout << "--------------- Gas consumption ---------------" << endl;
            cout << "Error: number of miles driven in town cannot be negative" << endl;
            cout << "-----------------------------------------------" << endl;
            exit(0);///exits program
        } ///checks for negative town miles 

        cout << "Enter the number of miles driven on the highway: ";
        cin >> highwayMiles;
        if (highwayMiles < 0) {
            cout << "--------------- Gas consumption ---------------" << endl;
            cout << "Error: number of miles driven on highway cannot be negative" << endl;
            cout << "-----------------------------------------------" << endl;
            exit(0);
        } ///checks for negative highway miles 

    ///town gas consumption (22.5 mpg)
        double townGas = 0.0;
        townGas = townMiles / 22.5;
    
    ///highway gas consumption (29.5 mpg)
        double highwayGas = 0.0;
        highwayGas = highwayMiles / 29.5;
    
    ///totals calculated
        double totalMiles = 0.0;
        totalMiles = townMiles + highwayMiles;

        double totalGas = 0.0;
        totalGas = townGas + highwayGas;

        double totalMpg = 0.0;
        totalMpg = totalMiles / totalGas;

    ///printing output
    if (townMiles > 0 && highwayMiles > 0) {
        cout << fixed << setprecision(1);
        cout << "--------------- Gas consumption ---------------" << endl;
        cout << "The number of miles driven in town: " << townMiles << " miles" << endl;
        cout << "The gas consumption for town driving: " << townGas << " gallons" << endl;
        cout << "The number of miles driven on the highway: " << highwayMiles << " miles" << endl;
        cout << "The gas consumption for highway driving: " << highwayGas << " gallons" << endl;
        cout << "The total miles driven: " << totalMiles << " miles" << endl;
        cout << "The total gas consumption: " << totalGas << " gallons" << endl;
        cout << "The average mpg for the trip: " << totalMpg << " miles/gallon" << endl;
        cout << "-----------------------------------------------" << endl;
    }///this is the ideal case that the user enters townMiles and highwayMiles > 0

    else if (townMiles == 0 && highwayMiles == 0) {
        cout << fixed << setprecision(1);
        cout << "--------------- Gas consumption ---------------" << endl;
        cout << "The number of miles driven in town: " << townMiles << " miles" << endl;
        cout << "The gas consumption for town driving: " << townGas << " gallons" << endl;
        cout << "The number of miles driven on the highway: " << highwayMiles << " miles" << endl;
        cout << "The gas consumption for highway driving: " << highwayGas << " gallons" << endl;
        cout << "The total miles driven: " << totalMiles << " miles" << endl;
        cout << "The total gas consumption: " << totalGas << " gallons" << endl;
        cout << "No Average can be calculated" << endl;
        cout << "------------------------------------------------" << endl;
    }///this case is if the user enters 0 for both townMiles and highwayMiles 

    return 0;
}/// main