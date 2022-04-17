#include<iostream>
using namespace std;


// recursion requires 2 imp things
// 1.base case
// 2.recursive relation
//   
int powfun(int &no,int power)
{

  //base case
    if(power==0)
        return 1;
    cout<<no<<" "<<power<<endl;
    
    
    return no * powfun(no,power-1);;


}


int main()
{ 
    int no,power;
    cout<<"enter number"; cin>>no;
    cout<<"enter power"; cin>>power;
        cout<<"powfun called"<<endl;

    int ans = powfun(no,power);
    cout<<"powfun called"<<endl;
        cout<<ans;

    return 0;
}