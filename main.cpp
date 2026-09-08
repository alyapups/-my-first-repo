
//Даны два натуральных числа
//n
//,
//m
// (вводятся с клавиатуры). Вывести все их общие делители.
#include <iostream>
#include <cmath>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int a,b;
    cout << "enter two numbers";
    cin >> a >> b;
    //находим нод методом евклида
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

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.