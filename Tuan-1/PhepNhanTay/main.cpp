#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    //nhap so
    cin >> a;
    cin >> b;
    
    // tach digit
    int digit_1 = b / 100;
    int digit_2 = b % 100 / 10;
    int digit_3 = b % 10;


    cout << " "<<a<<endl;
    cout << "x"<<b<<endl;
    cout<<"----------------------------------"<<endl;

    cout<<"   "<<a*digit_1<<endl;
    cout<<"  "<<a*digit_2<<endl;
    cout<<" "<<a*digit_3<<endl;

    cout<<"----------------------------------"<<endl;
    cout<<a*b<<endl;


    return 0;
}
