#include <iostream>
using namespace std;

void printArray(float* p, int n) {
    for (int i = 0; i < n; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

float* makeDouble(float* a, int n) {
    float* a1 = new float[n];

    for (int i = 0; i < n; i++) {
        a1[i] = a[i] +0.2;
    }

    return a1;
}

int main() {
    float a[5] = {3.5, 3.6, 3.7, 3.8, 3.9};

    printArray(a, 5);

    float* k = makeDouble(a, 5);
    printArray(k, 5);

    delete[] k;// delete double memory

    return 0;
}
