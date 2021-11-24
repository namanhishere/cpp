#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int x = a;
    int y = b;
    // giai thuat Euclid
    while (x != y){
        if(x > y){
            x = x - y;
        }else{
            y = y - x;
        }
    }
    cout << x << endl;

    //boi chung nn = thuong cua tich 2 so va uoc chung nho nhat
    cout << (a*b)/x;

    return 0;
}
