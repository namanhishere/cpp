#include <iostream>

using namespace std;

int main()
{
    int inp;
    cin  >> inp;
    int sum;
    for(int i = 1; i <= inp; i++){
        if(inp % i == 0){
            sum = sum + i;
        }
    }
    cout << sum<<endl;
    if(inp == sum ){
        cout << inp << " la so hoan hao"<<endl;
    }else{
        cout << inp << " khong la so hoan hao"<<endl;
    }
    return 0;
}
