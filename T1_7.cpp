#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

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
