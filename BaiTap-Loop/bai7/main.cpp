#include <iostream>

using namespace std;

int main()
{
    int inp;
    cin >> inp;
    int start = 0;
    int result = 1;
    if(inp %2 == 0){
        start = 1;
    }else{
        start = 2;
    }
    for(int i = start; i <=inp; i = i+2){
        result = result * i;
    }
    cout << inp <<"!!="<<result<<endl;
    return 0;
}
