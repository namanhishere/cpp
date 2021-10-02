#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int tram = input /100;
    int chuc_donvi = input%100;
    int chuc = chuc_donvi/10;
    int don_vi = chuc_donvi%10;
    cout << tram << " tram "<<chuc<<" chuc "<<don_vi<<" don vi "<< endl;
    cout << "Tong cac so la: "<<tram+chuc+don_vi<<endl;
    return 0;
}
