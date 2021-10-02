#include <iostream>

using namespace std;

int main()
{
    int input;
    cin >> input;
    int to_100 = input / 100;
    int to_20 = input % 100 /20;
    int to_5 = input % 100 %20/5;
    int to_1 = input % 100 %20%5;
    cout << "can rut " << to_100 << " to 100k " << to_20 <<" to 20k " << to_5 <<" to 5k " << to_1 <<" to 1k"<<endl;
    return 0;
}
