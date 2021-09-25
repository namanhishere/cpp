#include <iostream>

using namespace std;

int main()
{
    int gio;
    int phut;
    int giay;
    cout << "Nhap vao gio: ";
    cin >> gio;
    cout << "Nhap vao phut: ";
    cin >> phut;
    cout << "Nhap vao giay: ";
    cin >> gio;
    cout << "So giay la " << (gio*3600)+ (phut*60) + giay <<endl;
    return 0;
}
