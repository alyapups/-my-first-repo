
//Даны два натуральных числа
//n
//,
//m
// (вводятся с клавиатуры). Вывести все их общие делители.
#include <iostream>
#include <cmath>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;
    while(a!=0 && b!=0){
        if(a>=b)
            a=a%b;
        else
            b=b%a;
    }
    int sum=a+b;
    int sq=sqrt(sum);
    for(int i =1; i <= sq; i++){
        if(sum%i==0)
            cout << i << " ";
    }
    cout << sum << endl;

    return 0;
}

