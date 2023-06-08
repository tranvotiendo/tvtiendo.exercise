#include <iostream>
#include <ctime>
using namespace std;

int main() {
   // lấy thời gian hệ thống
   time_t now = time(0);
   
   // chuyển đổi thành chuỗi dạng cục bộ
   char* dt = ctime(&now);

   cout << "Thoi gian hien tai: " << dt << endl;
   
   return 0;
}