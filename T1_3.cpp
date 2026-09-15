//С клавиатуры вводится четырёхзначное натуральное число. Выяснить, является ли оно палиндромом
#include <iostream>


int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int n;
    cout << "enter n";
    cin >> n;
    if(n<1000||n>9999){
        cout << "error - your n is not exactry 4 digits";
        return 1;
    }
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
