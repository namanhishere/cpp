#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int status = 1;
    cout << "Tat ca cac so chinh phuong nho hon "<<n<<" la: ";
    for(int j = 1; j < n; j ++){
        for(int i = 2; i < j; i ++){
                if(j%i==0){
                    status = 0;
                    break;
                }
            }
        if(status == 1 || j == 1) cout <<j<<" ";
        status = 1;
    }


    return 0;
}
