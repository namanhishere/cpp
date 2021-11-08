#include <iostream>

using namespace std;

int main()
{
    int m;
    int n;
    cout << "Nhap vao m:";
    cin >> m;
    cout << "Nhap vao n:";
    cin >> n;

    cout << "================ Bai 1 ================" <<endl;

    if(m <= n ){
        //logic khi n lon hon m
       cout << "Cac so trong khoang tu "<<m<<" den " <<n <<" la: ";
       for(int temp = m+1; temp<n;temp++){
            cout<< temp <<" ";
       }
    }else{
        //logic khi m lon hon n
        cout << "Cac so trong khoang tu "<<n<<" den " <<m <<" la: ";
        for(int temp = n+1; temp<m;temp++){
            cout<< temp <<" ";
       }
    }
    //linebreak
    cout <<"\n";

    cout << "================ Bai 2 ================" <<endl;
    int sum = 0;
    if(m <= n ){
        //logic khi n lon hon m

       for(int temp = m+1; temp<n;temp++){
            sum = sum + temp;
       }
       cout << "Trong cac so trong khoang tu "<<m<<" den " <<n <<" la: "<<sum;
    }else{
        //logic khi m lon hon n

        for(int temp = n+1; temp<m;temp++){
             sum = sum + temp;
       }
       cout << "Tong cac so trong khoang tu "<<n<<" den " <<m <<" la: " <<sum;
    }
    //linebreak
    cout <<"\n";

    cout << "================ Bai 3 ================" <<endl;
    int total_num = 0;
    if(m <= n ){
        //logic khi n lon hon m

       for(int temp = m+1; temp<n;temp++){
            if(temp % 2  == 0){
                total_num++;
            }
       }
       cout << "Trong cac so trong khoang tu "<<m<<" den " <<n <<" la: "<<total_num;

    }else{
        //logic khi m lon hon n
        for(int temp = n+1; temp<m;temp++){
             if(temp % 2  == 0){
                total_num++;
            }
       }
       cout << "Trong cac so trong khoang tu "<<n<<" den " <<m <<" la: "<<total_num;
    }
    //linebreak
    cout <<"\n";
}
