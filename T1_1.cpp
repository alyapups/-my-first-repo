#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, m = 0;
    cout << "Enter two numbers" << endl;
    cin >> n >> m;
    while (n && m) {
        if (n > m) {
            n %= m;
        }
        else {
            m %= n;
        }
    }
    int r = m + n; //NOD
    int sqr = sqrt(r);

    cout << "Common deviders" << endl;
    for (int i = 1; i <= sqr; i++) {
        if (r % i == 0) {
            cout << i << " " << r / i << " ";
        }
    }
    
    return 0;
}
