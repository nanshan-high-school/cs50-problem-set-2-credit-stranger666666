#include <iostream>
using namespace std;

int main() {
  long int card;
   cout << "請輸入你的信用卡卡號:";
   cin >> card;
   int a= card / 1000000000000000;
   if (a == 4){
     cout << "你用的信用卡是:Visa";
   }
   else if (a == 5){
     int b = card / 100000000000000;
       if(b >=51 && b <= 55){
       cout << "你用的信用卡是:Master";
       }
       else{
         cout << "請輸入有效卡號，謝謝";
       }
   }
   else{
     cout << "請輸入有效卡號，謝謝";
   }
}
