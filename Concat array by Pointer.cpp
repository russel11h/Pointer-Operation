#include <iostream>
using namespace std;

void printArray(int *p, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

int *concateArray(int *p, int n, int *q, int m) {
    int *c = new int[n + m];
    int i = 0;

    for (i = 0; i < n; i++) {
        c[i] = p[i];
    }

    for (int j = 0; j < m; j++) {
        c[i] = q[j];
        i++;
    }

    return c;
}

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int b[4] = {1, 2, 3, 4};

    cout << "Array a: ";
    printArray(a, 5);

    cout << "Array b: ";
    printArray(b, 4);

    int *both = concateArray(a, 5, b, 4);

    cout << "Concatenated Array: ";
    printArray(both, 9);



    delete[] both;  // Free allocated memory

    return 0;
}
