#include <iostream>

using namespace std;

int main()
{
    int chieu_dai;
    int chieu_rong;
    cout << "Nhap chieu dai: ";
    cin >> chieu_dai;
    cout << "Nhap chieu rong: ";
    cin >> chieu_rong;
    cout << "Chu vi cua hinh chu nhat do la " << (chieu_dai+chieu_rong)*2 <<endl;
    cout << "Dien tich cua hinh chu nhat do la: " << chieu_dai*chieu_rong <<endl;
    return 0;
}
