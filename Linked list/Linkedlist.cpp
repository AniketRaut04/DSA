#include<iostream>
using namespace std;


int* animal()
{   static int y=320;
    //static because the scope of variable is local.
    return (&y);

}

int main()
{
    
 int* p=animal();
 cout<<*p<<endl;   


}