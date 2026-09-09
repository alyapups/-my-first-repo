/*Напечатать первые 
n
 чисел Фибоначчи. Число 
n
 вводится с клавиатуры
.*/
#include <iostream>
int F(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return F(n - 1) + F(n - 2);
}

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    int N;
    cout << "Enter N";
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout << F(i) << endl;
    }

}
