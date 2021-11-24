#include <iostream>

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    int n = inp;
    int out = 0;
    while(n / 10 != 0){
        out = out*10+n%10;
        n = n /10;
    }
    cout << out*10+n/10;
    return 0;
}
