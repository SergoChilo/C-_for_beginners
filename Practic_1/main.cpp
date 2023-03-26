//Составить программу, которая будет считывать введённое пятизначное число.
// После чего, каждую цифру этого числа необходимо вывести в новой строке.
//Введите пятизначное число: 10819

//1 цифра равна 1
//2 цифра равна 0
//3 цифра равна 8
//4 цифра равна 1
//5 цифра равна 9


#include <iostream>

using namespace std;

int main()
{
    int var1;
    cout << "Enter the number :   ";
    cin >> var1;
    
    cout<< "1 number equal : " << var1/10000 << endl;
    cout<< "2 number equal : " << var1/1000%10 << endl;
    cout<< "3 number equal : " << var1/100%10 << endl;
    cout<< "4 number equal : " << var1/10%10 << endl;
    cout<< "5 number equal : " << var1%10 << endl;
}
