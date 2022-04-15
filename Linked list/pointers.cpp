#include<iostream>
using namespace std;

int main()
{ //pointers
    //pointers are varibles that store address
    //IT DOSNT MATTER WHAT DATA TYPE YOU GIVE ,it jus thelps if we are accessing and changing the data.


    //pointers i.e ptr stores address by default 
    // if you do &ptr it gives address of ptr
    //* ptr gives value ,ptr can be of any type it dosnt matter but just when allocating memory you have to tell the compiler that this pointers is of how many size 4,16,32 etc by giving datatype
  int* ptr;
  int var=12;
  ptr=&var;
  
  cout<<ptr<<" "<<*ptr<<endl;













    return 0;
}