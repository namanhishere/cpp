#include <iostream>

using namespace std;

int main()
{
    int in_gio, in_phut, in_giay;

    cin>>in_gio;
    cin>>in_phut;
    cin>>in_giay;

    string status = "Dung";
    if(in_gio >= 24){
        status = "Sai";
    }else if(in_phut >= 60){
        status = "Sai";
    }else if(in_giay >= 60){
        status = "Sai";
    }
    cout << status << endl;
    return 0;
}
