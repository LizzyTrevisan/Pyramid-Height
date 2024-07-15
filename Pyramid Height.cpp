// Pyramid Height.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include<iomanip>
using namespace std;


int main() {

    int n, row, space, column;

    do {

        cout << '\n' << "Pyramid Height: ";
        cin >> n;

        if (n <= 0)// when user enters 0, the loop will break.
        {
            break;
        }

        int count = 1; // to reset the counting

        for (row = 1; row <= n; row++) // it will create the rows.
        {
            cout << endl;
            for (space = 1; space <= (n - row); space++) // space among the numbers.
            {
                cout << " ";
            }
            for (column = 1; column <= row; column++) // creates columns.
            {
                cout << setw(2) << count++ << " "; //adds width in the left of output.
            }
        }

        cout << "\n";

    } while (true); // will be asking the user until the user enters 0.

    return 0;
}