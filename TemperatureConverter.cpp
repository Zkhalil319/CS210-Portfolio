#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double fahrenheitToCelsius(int tempF) {
    return (tempF - 32) * 5.0 / 9.0;
}

int main() {
    string inputFile = "FahrenheitTemperature.txt";
    string outputFile = "CelsiusTemperature.txt";

    ifstream inFile(inputFile);
    ofstream outFile(outputFile);

    if (!inFile) {
        cerr << "Error: Could not open input file.\n";
        cerr << "Create '" << inputFile << "' with format:\n";
        cerr << "CityName TemperatureF\n";
        return 1;
    }

    if (!outFile) {
        cerr << "Error: Could not create output file.\n";
        return 1;
    }

    string city;
    int tempF;
    while (inFile >> city >> tempF) {
        outFile << city << " " << fahrenheitToCelsius(tempF) << endl;
    }

    cout << "Success! Converted temperatures saved to " << outputFile << endl;
    return 0;
}