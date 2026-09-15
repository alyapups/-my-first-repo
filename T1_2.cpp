//Вычислить сумму первых
//N
// нечётных чисел. Количество чисел
//N
// вводится с клавиатуры.
#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int N;
    cout << "enter N ";
    cin>>N;
    if(N<0){
        cout << "error";
        return 1;
    }
    int sum=N*N;
    cout << sum << endl;

    return 0;
}
