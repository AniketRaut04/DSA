#include <iostream>
using namespace std;

int main() {
    //compare side elements and swap if prev>next do it until array is sorted
    //bubble sorting
    int arr[]={-2,62,0,512,-54};
    int p=0;
    int size=sizeof(arr)/sizeof(arr[0]);
    while(p<1)
    {   int i=1;
        for(int y=0;y<size-1;y++)
        {
            if(arr[y]>arr[y+1])
            {
                swap(arr[y+1],arr[y]);
                for(int value:arr)
                    cout<<value<<" ";
                cout<<endl;
                i=0;
             
            }
           
        }
        if(i==0)
        {
            p=0;
        }
        else{
            p=1;
        }
       
    }
    for(int values:arr)
        cout<<values<<" ";
  
    return 0;
}