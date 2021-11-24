#include <iostream>

using namespace std;

int main()
{

    for(int a = 0 ; a <= 10; a++){
        for(int b = 0 ; b <= 10; b++){
            if(2*a+5*b == 15){
                cout << "x ="<<a<<endl;
                cout << "y ="<<b<<endl;
                cout <<"\n";
            }
        }
    }
    return 0;
}
