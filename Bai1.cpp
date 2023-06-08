//Tinh dien tich hinh chu nhat
#include <iostream> //khai bao thu vien

using namespace std; //khai bao khong gian ten
float r, CV, S; //khai bao bien
const float PI = 3.     1416; //khai bao hang
int main()
{
    cout<<"Tinh chu vi dien tich hinh tron \n" ; 
    cout<<"Nhap ban kinh hinh tron: ";
    cin>>r;
    CV=2*r*PI;
    S=PI*r*r;
    cout<<"Chu vi cua hinh tron la: "; cout<<CV << endl; 
    cout<<"Dien tich cua hinh tron la: "; cout<<S;
    
    return 0;
}