#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    int pr = 0;
    int next = 1;
    int x;
    cout << pr << " ";
    for (int i = 0; i < n; i++) {
        cout << next << " ";
        x = pr;
        pr = next;
        next = next + x;
    }
    return 0;
}
