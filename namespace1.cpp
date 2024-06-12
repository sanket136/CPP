#include<iostream>
using namespace std;

namespace sbi{
  int accno = 1234; 
  void welcome_note(); //function prototype/declaration
}

namespace hdfc{
   int accno = 2345;    
   void welcome_note();
 
}
void sbi::welcome_note() {
         cout<<"Welcome to SBI"<<endl;
  }
void hdfc::welcome_note() {
         cout<<"Welcome to HDFC"<<endl;
  }



int main(){
using namespace sbi;
cout<<accno<<endl;
welcome_note();
    
    return 0;

}