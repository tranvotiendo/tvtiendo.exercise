#include<iostream>

using namespace std;

int main() {
	string a, b;
	cout<<"Nhap vao ten cua A, sau do nhan Enter: ";
	cin>>a;
	cout<<"Nhap vao ten cua B, sau do nhan Enter: ";
	cin>>b;
	if (a ==b) {
		cout <<"Hai bạn có tên giống nhau";
	} else {
		cout <<"Hai bạn có tên không giống nhau";
	}
	return 0;
}
