//Kiểm tra tính chẵn lẻ của số nguyên N với N nhập từ bàn phím. 
//Trong chương trình có sử dụng chương trình con kiểm tra tính chẳn lẻ kiemtra(n)
//Publisher: Tran Vo Tien Do
//Github: https://github.com/tranvotiendo
#include <bits/stdc++.h>
using namespace std;
void kiemtra(int n) {
    if (n%2==0) cout<<n<<" la so chan";
    else cout<<n<<" la so le";
}
int main (){
    cout<<"Nhap vao gia tri cua n= ";
    int n;
    cin>>n;
    kiemtra(n);
    return 0;
}
