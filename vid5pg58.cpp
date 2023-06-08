#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
    cout<<"Nhap vao xau s1: ";
    getline (cin,s1);
    s2 ="";
    for (int i=0; i<s1.length(); i++)
    if ('0' <= s1[i]&&s1[i]<='9') s2=s2+s1[i];
    cout<<"Ket qua la: " <<s2;
    return 0;
}