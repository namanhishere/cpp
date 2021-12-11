#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inpFiles ("test.inp");
    int turn;
    inpFiles >> turn;
    int temp;
    int sum = 0;
    for(int i = 0 ; i <= turn; i++){
        inpFiles >> temp;
        sum = sum + temp;
    }
    inpFiles.close();
    cout << sum;
    ofstream outFiles ("test.out");
    outFiles << sum;

}
