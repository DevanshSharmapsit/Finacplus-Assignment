// Task 2: Optimized Units Calculator (C++)
// Problem:
// You have coins/units of:

// [1, 2, 5, 10, 20, 50]

// For each amount from 1 to 99, calculate the minimum number of units required.

// Then compute the average number of units used from 1 to 99.

// Strategy:

// Use a greedy algorithm:

// Start from the largest denomination

// Subtract from the target value

// Count how many units used

#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

void calculateMinimumUnits() {
    vector<int> units = {1, 2, 5, 10, 20, 50};
    int total_units_used = 0;

    cout << "Amount : Units Used\n";
    for (int amount = 1; amount < 100; ++amount) {
        int remaining = amount;
        int count = 0;

        for (int i = units.size() - 1; i >= 0; --i) {
            int coin = units[i];
            if (remaining >= coin) {
                int use = remaining / coin;
                count += use;
                remaining -= use * coin;
            }
        }

        total_units_used += count;
        cout << setw(6) << amount << " : " << count << " units\n";
    }

    double average = (double)total_units_used / 99;
    cout << "\nAverage number of units used from 1 to 99 = " 
         << fixed << setprecision(1) << average << endl;
}

int main() {
    calculateMinimumUnits();
    return 0;
}

// Output Example (Partial):

// Amount : Units Used
//      1 : 1 units
//      2 : 1 units
//      3 : 2 units
//      ...
//     98 : 6 units
//     99 : 6 units

// Average number of units used from 1 to 99 = 3.4


