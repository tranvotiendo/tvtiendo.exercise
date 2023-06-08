#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int i, N, sum;
int main () {
    cout<<"Nhap vao N: ";
    cin>>N;
    sum=0;
    for (i=1; i<=N; i++) {sum =sum+i*i;};
    cout<<"Tong "<< N <<" so tu nhien binh phuong dau tien la: "<<sum;
    
}