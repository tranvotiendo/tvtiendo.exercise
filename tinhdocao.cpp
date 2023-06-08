#include <iostream>
#include <cmath>
//include <bits/stdc++.h>
using namespace std;
float v, h;
const float g=9.8;
int main()
{
    cout << "Nhap do cao h: ";
    cin>> h;
    v=sqrt(g*h);
    cout<< "Van toc cua vat la: ";
    cout<<v;

    return 0;
}