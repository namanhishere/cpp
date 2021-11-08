#include <iostream>

using namespace std;

int main()
{
    int inp;
    int status = 1;

    cin >> inp;
    /*
    Y tuong logic la se check tung so 1 tu so 2 => so do -1
        neu co so chia het thi se nhau ve 0
        neu loop het k co so nguyen to thi cho ve 1
    */
    for(int i = 2; i < inp; i ++){
        if(inp%i==0){
            status = 0;
            break;
        }
    }

    if(status == 0 || inp != 1){
        cout << "khong phai so nguyen to";
    }else{
        cout <<"la so nguyen to";
    }
    return 0;
}
