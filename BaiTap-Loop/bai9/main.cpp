#include <iostream>

using namespace std;

int main()
{
    int a;
    int dem = 0;
    cin >> a;
    for(int i = 0;i <a;i++){
        if(((a*a-i*i)/(2*i)) == int(((a*a-i*i)/(2*i)))){
            dem++;
        }
    }
    cout << dem;
    return 0;
}
