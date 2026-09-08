//Вычислить сумму первых
//N
// нечётных чисел. Количество чисел
//N
// вводится с клавиатуры.
#include <iostream>
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int N;
    cout << "enter N ";
    cin>>N;
    //int sum=((2+(N-1)*2)*N)/2;
    int sum=N*N;
    cout << sum << endl;

    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.