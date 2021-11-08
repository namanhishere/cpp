#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n;
    int x;
    int sum = 0;
    cin >> n;
    cin >> x;
    for(int i = 1; i <=n; i++){
            cout << i;
            if(i != n) cout << "+";
            sum+=i;
    }

    cout<< "="<<sum <<endl;
    sum = 0;

    //bai tong so mu

    for(int i = 1; i <= n; i++){
        cout << x << "^" << i;
        if(i != n) cout << "+";
        sum += pow(x,n);
    }
    cout<< "="<<sum;



    return 0;
}
