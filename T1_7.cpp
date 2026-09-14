//календарь

#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int n, k;
    cout << "enter n - the day of the week of the 1st, k - the amount of days" << endl;
    cin >> n >> k;
    if (n < 1 || n > 7 || k < 1 || k>99 || n>k) {
        cout << "invalid data";
        return 0;
    }

    for (int i = 1; i < n;i++) {
        cout << "   ";
    }

    for (int i = 1; i <= k; i++) {
        if (i < 10)
            cout << " ";
        cout << i;
        if (n == 7) {
            cout << endl;
            n = 1;
        }
        else {
            cout << " ";
            n += 1;
        }
    }
    if (n != 1) {
        cout << endl;
    }
    return 0;
}
