#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    cout <<"========================= Bang cuu chuong tu 1 toi "<<n<<" phien ban promax ========================="<<endl;
    for(int phan_nhan = 1; phan_nhan <= 10;phan_nhan++){
        for(int phan_doc = 1; phan_doc <= n; phan_doc++){
            cout <<"   "<<phan_doc<<" x "<< phan_nhan<<" = "<<phan_doc*phan_nhan;
        }
        cout <<"\n";
    }

}
