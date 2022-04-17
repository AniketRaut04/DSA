#include<iostream>
using namespace std;
//reverse string;
int main()
{   string animal="zebra";
    for(int i=animal.size()-1;i>=0;i--)
    {   //with swap
        // swap(animal[i],animal[animal.size()-1-i]);
        //without swap
        animal=animal+animal[i];
        animal[i] = ' ';
        



    }       

    cout<<animal;




    return 0;
}