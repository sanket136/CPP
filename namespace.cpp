#include<iostream>
using namespace std;

namespace sbi{
int accno = 1234; //global var ...stored in data section
 void welcome_note(){
         cout<<"Welcome to SBI"<<endl;
  }
}

namespace hdfc{
int accno = 2345;    //global var ...stored in data section
 void welcome_note(){
         cout<<"Welcome to HDFC"<<endl;
  }

}
//using nmaespace sbi;
//using namespace hdfc;
int main(){

    // cout<<sbi::accno<<endl;
    // sbi::welcome_note();    //function call belongs to sbi
    // cout<<hdfc::accno<<endl;
    // hdfc::welcome_note();   //function call belongs to hdfc 
    
    {
    using namespace sbi;
    cout<<accno<<endl;
    welcome_note();    //function call belongs to sbi
    cout<<accno<<endl;
    welcome_note();   //function call belongs to hdfc 
    }

    using namespace hdfc;
    cout<<accno<<endl;
    welcome_note();    //function call belongs to sbi
    cout<<accno<<endl;
    welcome_note();   //function call belongs to hdfc 

    return 0;

}