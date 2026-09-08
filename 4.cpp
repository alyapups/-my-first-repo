//С клавиатуры вводится шестизначное натуральное число.
// //Написать программу, которая определяет, является ли это число «счастливым» (
// //т.е. сумма первых трёх цифр равняется сумме последних трёх цифр).
#include <iostream>

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int N;
    cout << " enter N ";
    cin>> N;
    int s1=0;
    int s2=0;
    for(int i =0; i<3;i++){
        s1+=(N%10);
        N=N/10;
    }
    for(int i =0; i<3;i++){
        s2+=(N%10);
        N=N/10;
    }
    if(s1==s2)
        cout<<"yes" << endl;
    else
        cout << "no" << endl;


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.