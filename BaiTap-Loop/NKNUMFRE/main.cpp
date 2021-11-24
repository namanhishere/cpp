#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cin >> a >>b;
    int temp = 0;
    int cont = 0;
    int dao = 0;
    for(int i = a; i <=b; i ++ ){
            temp = i;
            while(temp %10 != 0){
                dao = dao *10+temp%10;
                temp = temp /10;
            }
            dao = dao + temp/10;
            temp = i;

            while(temp != dao ){
                if(temp >dao) {
                    temp = temp - dao;
                }else{
                    dao = dao - temp;
                }

            }

            if(dao == 1) cont++;
            dao = 0;
            temp = 0;
    }
    cout << cont;
    return 0;
}




