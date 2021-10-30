#include <iostream>

using namespace std;

int main()
{
    int in_gio, in_phut, in_giay;

    cin>>in_gio;
    cin>>in_phut;
    cin>>in_giay;

    int total_sec = in_gio*3600+in_phut*60+in_giay;

    int out_giay = total_sec % 60;
    int phut_gio = total_sec / 60;
    int out_phut = phut_gio % 60;
    int ngay_gio = phut_gio / 60;
    int out_gio = ngay_gio % 24;


    cout << out_gio<<":"<<out_phut<<":"<<out_giay << endl;
    return 0;
}
