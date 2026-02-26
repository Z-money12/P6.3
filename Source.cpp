#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    // Initialized variables
    double value;
    double sum = 0;
    double sumSquares = 0;
    int n = 0;
    // Asks users to enter number or press q to stop
    cout << "Enter numbers (or press Q to quit): ";
    // Calculated the value of all the numbers
    while (cin >> value) {
        sum += value;
        sumSquares += value * value;
        n++;
    }
    // q will end the process
    if (n == 0) {
        cout << "No data to process!" << endl;
        return 0;
    }

    double average = sum / n;

    // Standard deviation formula
    double variance = (sumSquares - (sum * sum) / n) / (n - 1);
    double stdDev = sqrt(variance);

    cout << fixed << setprecision(5);
    cout << "n = " << n
        << ", average = " << average
        << ", standard deviation = " << stdDev
        << endl;

    return 0;
}