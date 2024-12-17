
#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    const int SIZE = 10;
    int array[SIZE];
    srand(time(0)); 
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 100 + 1; 
    }
    cout << "Masiv: ";
    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int minElement = array[0]; 
    int maxElement = array[0]; 

    for (int i = 1; i < SIZE; i++) { 
        if (array[i] < minElement) {
            minElement = array[i]; 
        }
        if (array[i] > maxElement) {
            maxElement = array[i]; 
        }
    }
    cout << "Min: " << minElement << endl;
    cout << "Max: " << maxElement << endl;

    return 0;
}
