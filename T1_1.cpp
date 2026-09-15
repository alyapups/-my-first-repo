#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n=0;
    int m = 0;
    cout << "Enter two numbers" << endl;
    cin >> n >> m;
    if (n <= 0 || m <= 0) {
        cout << "both numbers must be natural" << endl;
        return 1;
    }

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

    cout << "Common dividers" << endl;
    for (int i = 1; i <= sqr; i++) {
        if (r % i == 0) {
            if (i == r / i)
                cout << i << " ";
            else
                cout << i << " " << r / i << " ";
        }
    }
    
    return 0;
}
