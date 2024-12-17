
#include <iostream>
using namespace std;

int main() {
    const int MONTHS = 12;
    double profits[MONTHS]; 
    cout << "Enter profits for 12 months:\n";
    for (int i = 0; i < MONTHS; i++) {
        cout << "Month " << (i + 1) << ": ";
        cin >> profits[i];
    }
    int start, end;
    cout << "Start of the range: ";
    cin >> start;
    cout << "End of the range: ";
    cin >> end;
    start -= 1;
    end -= 1;
    if (start < 0 || end >= MONTHS || start > end) {
        cout << "Invalid range!" << endl;
        return 1;
    }
    int minMonth = start;
    int maxMonth = start;

    for (int i = start; i <= end; i++) {
        if (profits[i] < profits[minMonth]) {
            minMonth = i;
        }
        if (profits[i] > profits[maxMonth]) {
            maxMonth = i;
        }
    }
    cout << "Month with the minimum profit in the range: " << (minMonth + 1) << " (Profit: " << profits[minMonth] << ")" << endl;
    cout << "Month with the maximum profit in the range: " << (maxMonth + 1) << " (Profit: " << profits[maxMonth] << ")" << endl;

    return 0;
}
