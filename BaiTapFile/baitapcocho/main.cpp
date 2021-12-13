#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool nguyenCheck(int num){
    if( n < 2) return false;
    for(int i = 2; i < trunc(num); i++){
        if(num % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    ifstream inp ("data.inp");
    inp >> n;
    int temp;
    int sum = 0;
    for(int i = 1; i <= n; i ++ ){
        inp >> temp;
        if(nguyenCheck(temp)) sum++;
    }
    inp.close();
    ofstream out ("kq.out");
    out << sum;
    out.close();
}
