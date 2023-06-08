#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string a;
    cout<<"Nhap vao xau: ";
    getline (cin,a);
    int k=a.length();
    for (int i=k-1; i>=0; i--) cout<<a[i];
    return 0;
}