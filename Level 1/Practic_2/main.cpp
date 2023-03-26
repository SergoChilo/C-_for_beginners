// Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) 
// Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс,
//  таким образом, чтобы было понятно, в каком порядке должны вводиться числа.

#include <iostream>

using namespace std;

int main(){
    int a, b, f;

    cout<<"Enter the a : ";
    cin>> a;

    cout<<"Enter the b : ";
    cin>> b;

    cout<<"Enter the f : ";
    cin>> f;

    int result = (a + b - f / a) + f * a * a - (a + b);

    cout<<"The result equal :  "<< result<<endl;
}
