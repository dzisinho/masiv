#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements (N): ";
    cin >> N;
    double* array = new double[N];
    cout << "Enter " << N << " real numbers:\n";
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
    double sumNegative = 0;
    for (int i = 0; i < N; i++) {
        if (array[i] < 0) {
            sumNegative += array[i];
        }
    }
    int minIndex = 0, maxIndex = 0;
    for (int i = 1; i < N; i++) {
        if (array[i] < array[minIndex]) {
            minIndex = i;
        }
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
    }
    if (minIndex > maxIndex) {
        int temp = minIndex;
        minIndex = maxIndex;
        maxIndex = temp;
    }
    double productBetweenMinMax = 1;
    if (maxIndex - minIndex > 1) { 
        for (int i = minIndex + 1; i < maxIndex; i++) {
            productBetweenMinMax *= array[i];
        }
    }
    else {
        productBetweenMinMax = 0;
    }
    double productEvenIndex = 1;
    for (int i = 0; i < N; i += 2) {
        productEvenIndex *= array[i];
    }
    int firstNegative = -1, lastNegative = -1;
    for (int i = 0; i < N; i++) {
        if (array[i] < 0) {
            if (firstNegative == -1) {
                firstNegative = i;
            }
            lastNegative = i;
        }
    }
    double sumBetweenNegatives = 0;
    if (firstNegative != -1 && lastNegative != -1 && firstNegative < lastNegative) {
        for (int i = firstNegative + 1; i < lastNegative; i++) {
            sumBetweenNegatives += array[i];
        }
    }
    cout << "Sum of negative elements: " << sumNegative << endl;
    cout << "Product of elements between min and max: " << productBetweenMinMax << endl;
    cout << "Product of elements with even indices: " << productEvenIndex << endl;
    cout << "Sum of elements between first and last negative elements: " << sumBetweenNegatives << endl;
    delete[] array;

    return 0;
}
