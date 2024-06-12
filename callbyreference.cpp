#include<iostream>
using namespace std;
void swap_data(int &a , int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;

}
int main ()
{
  int x =10, y=20;
  cout<< "Before Swap:" << x << " " << y << endl;
  
   swap_data(x ,y);

   cout<< "After Swap:" << x << " " << y << endl;

}
