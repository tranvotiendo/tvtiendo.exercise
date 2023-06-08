#include <bits/stdc++.h>
using namespace std;
int M, N, i, tong;
int main () {
    cout<<"Nhap vap hai so M va N (M<N): ";
    cin>>M>>N;
    tong=0;
    for (i=M; i<=N; i++) {
        if (i%3==0) {
        tong+=i;  }}
    cout<<"Tong cac so chia het cho 3 trong khoang tu "<<M<<" den "<<N<<" la: "<<tong;
}