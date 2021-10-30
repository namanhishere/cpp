#include <iostream>

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    int out = 1;
    for(int i = 1;i<=inp;i++){
        out = out*i;
    }
    cout << inp<<"! = ";
    for(int i = 1;i<inp;i++){
        cout << i<<"*";
    }
    cout<< inp <<" = " << out;
}
