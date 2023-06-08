#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream fi("C:\Users\tranv\Downloads\input1.txt");
    ofstream fo("C:\Users\tranv\Downloads\output1.txt");
    int a, b, c;
    fi>>a>>b>>c;
    int s=a+b+c;
    fo<<s;
    fi.close();
    fo.close();
    return 0;
}
ifs