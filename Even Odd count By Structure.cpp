#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct OddEven {
    int odd;
    int even;
};

void PrintArray(int *p, int n) {
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
}

OddEven OddAndEven(int *p, int n) {
    int evenCounter = 0;
    int oddCounter = 0;

    for (int i = 0; i < n; i++) {
        if (p[i] % 2 == 0) {
            evenCounter++;
        } else {
            oddCounter++;
        }
    }

    OddEven oe;
    oe.even = evenCounter;
    oe.odd = oddCounter;

    return oe;
}

int main() {
    int n;
    cout << "Enter the number of random numbers: ";
    cin >> n;


    int *a = new int[n];


    srand(time(0));
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }


    PrintArray(a, n);


    OddEven result = OddAndEven(a, n);
    cout << "Number of even numbers: " << result.even << endl;
    cout << "Number of odd numbers: " << result.odd << endl;



    return 0;
}
