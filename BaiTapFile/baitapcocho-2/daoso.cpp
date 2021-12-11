#include <iostream>
#include <fstream>

using namespace std;

int daoso(int n){
    int out = 0;
    while(n % 10 != 0){
        out = out*10+n%10;
        n = n /10;
    }
    return out;
}


int main()
{
    int n;
    ifstream inp ("data.inp");
    ofstream kq ("kq.out");
    inp >> n;
    int temp;
    int sum = 0;
    for(int i = 1; i <= n; i ++ ){
        inp >> temp;
        kq << daoso(temp)<<endl;
    }
    inp.close();
    kq.close();
}
