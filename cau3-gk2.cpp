#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int N, i, maxx=0;
int main (){
    cout<<"Nhap so phan tu trong day: ";
    cin>>N;
    int A[N];
    for (i=0; i<N; i++) {
        cout<<"Nhap phan tu thu "<<i+1<< ": ";
        cin>>A[i];
    }
    
    for (i=0; i<N; i++) {
        if (A[i]>maxx) maxx=A[i];
    }
    cout<<"Phan tu lon nhat cua day so la: "<<maxx;
}