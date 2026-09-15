#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cout << "enter n - the day of the week of the 1st, k - the amount of days" << endl;
    cin >> n >> k;
    if (n < 1 || n > 7 || k < 1 || k>99 || n>k) {
        cout << "invalid data";
        return 0;
    }

    bool first = true;          
    for (int d = 1; d <= k; d++) {
        int col = (n + d - 2) % 7;   

        if (first) {
            cout << string(col * 3, ' '); 
            first = false;
        }
        else if (col != 0) {
            cout << ' ';                  
        }

        cout << setw(2) << d;             

        if (col == 6 || d == k) cout << '\n'; 
    }
    return 0;
}
