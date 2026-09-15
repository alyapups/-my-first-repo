#include <iostream>

using namespace std;

/*Дана арифметическая прогрессия. Вывести все члены этой прогрессии, кратные 3, которое лежат на отрезке*/
int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    if(d==0){
        cout << "error";
        return 1;
    }
    int n = (b - a)/d + 1;
    for (int i = 1; i <= n; i++) {
        int an = (a + (i - 1) * d);
        if (an % 3 == 0) {
            cout << an << " ";
        }
    }
    return 0;
}
