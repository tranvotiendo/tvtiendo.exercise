#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cha, con, tuoi;
    tuoi=0;
    cout << "Nhap vao tuoi cua cha: ";
    cin >> cha;
    cout << "Nhap vao tuoi cua con: ";
    cin >> con;
    if (cha-con>=25){
    while (con * 2 != cha)
    {
        tuoi++;
        cha++;
        con++;
    }
    cout << tuoi <<" nam nua thi tuoi cha gap 2 lan tuoi con!";}
    else
    cout <<"Vui long nhap so tuoi cua cha lon hon con it nhat la 25 tuoi, Xin cam on!";
    return 0;
}