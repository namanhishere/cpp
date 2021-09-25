#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    int temp = b;
    b = a;
    a = temp;
    cout << a  << " " << b<< endl;
    return 0;
}
