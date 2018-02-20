#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to CLI calculator V1.00";
    int Number1,Number2,cmd;
    char N;
    cout << "Enter first number :" ;
    cin >> Number1;
    cout << "Enter second number :" ;
    cin >> Number2;
//แสดงเมนู cmd
    cout << "1.+" << endl;
    cout << "2.-" << endl;
    cout << "3.*" << endl;
    cout << "4./" << endl;
    cout << "5.quit" << endl;
//รับ cmd จากผู้ใช้
    do
    {
        cin >> cmd ;
        if (cmd == 1)
        {
            cout << Number1<<"+"<< Number2<< endl;
            cout << "=" <<  Number1 + Number2 << endl;
        }
        else if (cmd == 2)
        {
            cout << Number1<<"-"<< Number2<< endl;
            cout << "=" <<  Number1 - Number2 << endl;
        }
        else if (cmd == 3)
        {
            cout << Number1<<"*"<< Number2<< endl;
            cout << "=" <<  Number1 * Number2 << endl;
        }
        else if (cmd == 4)
        {
            cout << Number1<<"/"<< Number2<< endl;
            cout << "=" <<  Number1 / Number2 << endl;
        }
    else {break;}
    }
    while(1);


    return 0;
}
