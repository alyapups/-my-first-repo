/*Дана арифметическая прогрессия: a k = a k − 1 + d .
 * Вывести все члены этой прогрессии, кратные 3, которые лежат на отрезке [ a , b ] .
 * Числа a , b , d вводятся с клавиатуры( a 0 = a ).*/
#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int a, b, d;
    cout << " enter a b d ([a,b]) " << endl;
    cin >> a >> b >> d;
    if (d == 0) {
        if (a % 3 == 0)
            cout << a;
    }
    else if (d > 0) {
        int ak = a;
        while (ak <= b) {
            if (ak % 3 == 0)
                cout << ak << endl;
            ak += d;
        }
    }
    else if(d<0){
        int ak = a;
        while (ak >= b) {
            if (ak % 3 == 0)
                cout << ak << endl;
            ak += d;
        }
    }
    return 0;
}