#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int gio = input /3600;
    int phut_giay = input%3600;
    int phut = phut_giay/60;
    int giay = phut_giay%60;
    cout << gio<<" gio " <<phut<< " phut " <<giay<<" giay "<< endl;
    return 0;
}
