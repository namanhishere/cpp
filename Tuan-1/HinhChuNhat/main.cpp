#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int vang;
    int xanh;
    cin >> xanh;
    cin >> vang;
    int tong_2_canh = (xanh-4)/2;
    float apl = tong_2_canh*tong_2_canh-4*vang;
    int case_1 = (tong_2_canh-sqrt(apl))/2;
    int case_2 = (tong_2_canh+sqrt(apl))/2;
    cout << case_1 <<" " <<case_2<<endl;
    return 0;
}
