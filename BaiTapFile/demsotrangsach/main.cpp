#include <iostream>
#include <fstream>

using namespace std;

int demchuso(int n){
    int out = 0;
    while(n % 10 != 0){
        out++;
        n = n /10;
    }
    return out;
}


int main()
{
    long long int n;
    ifstream inp ("data.inp");
    ofstream kq ("kq.out");
    inp >> n;
    long long int sum = 0;
    for(long long int i = 1; i <= n; i ++ ){
        sum += demchuso(n);
    }
    kq<<sum;
    inp.close();
    kq.close();
}
