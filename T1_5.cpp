//Напечатать первые n чисел Фибоначчи
#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    cout << "enter n";
    cin >> n;
    if(n<0){
        cout << "error";
        return 1;
    }

    int pr = 0;
    int next = 1;
    int x;
   cout << pr << " ";
    for (int i = 1; i < n; i++) {
        cout << next << " ";
        x = pr;
        pr = next;
        next = next + x;
    }
    return 0;
}
