//С клавиатуры вводится четырёхзначное натуральное число. Выяснить, является ли оно палиндромом
#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int n;
    cout << "enter n";
    cin >> n;
    int nn=0;
    for(int i =0; i<2;i++){
        nn*=10;
        nn+=(n%10);
        n/=10;
    }
    if(n==nn)
        cout<<"yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.