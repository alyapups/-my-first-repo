#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    int n, k, t, l;
    int b = 0;
    cout << "enter primary sum, price for bread, times of going before going for money b4 visiting grandma, price for ice cream";
    cin >> n >> k >> t >> l;
    int tt = t;
    if (n == 0)
        cout << "grandma gets flowers and that s it";

    else if (n >= k) {
    cout << "bread is bought the amount of money left is " << n - k;
    b=1;
    }
    else {
        if (t == 0) {
            if (n > l) {
                n -= l;
                cout << "grandma gets ice cream and boy goes back to the track";
            }
            else if (n == l) {
                cout << "grandma gets ice cream and it ll never be enough for bread";
            }
            else {
                cout << "grandma gets flowers and boy goes back to the track";
            }
        }
        else if (t > 0) {
            int zero = 0;
            if (tt % 2 == 0) {
                tt += 1;
                zero += 1;
            }
            while (tt > zero && n < k) {
                n *= ((tt % 2) + 2);
                tt--;
            }
            if (n >= k) {
                b = 1;
                cout << "bread is bought, money left - " << n - k;
            }
            else if (tt == zero) {
                if ((n > l)) {
                    n -= l;
                    cout << "grandma gets ice cream and boy goes back to the track";
                } else if ((n == l)) {
                    n -= l;
                    cout << "grandma gets ice cream and it ll never be enough for bread";
                } else {
                    cout << "grandma gets flowers and boy goes back";
                }
            }
        }
        if (b == 0 && n != 0) {
            if ((t%2==0))
                tt = 2147483647;
            else
                tt = 2147483646;
            while (n < k) {
                n *= ((tt % 2) + 2);
                tt--;
            }
            cout << "THE AMOUNT LEFT - " << n - k;
        }
    }

    return 0;
}