#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 2, 8, 3, 1};
    // pivot starting elemnet of array


    int pivot = arr[0];
    int count=0;
    // for(int i=0;i<arr;i++)
    // {
    //     cout<<i;
    // }
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]<pivot)
        { count++;

        }
    }
    cout<<count<<"<-count"<<endl;

    swap(arr[count],arr[0]);
    for(int values:arr)
        cout<<values;
    cout<<endl;
    int i=0;int j=size-1;
    while(i<count && j>count)
    {    
        
        while(arr[i]<pivot)
    {  
        i++;
    }
    while(arr[j]>pivot)
    {  
        j--;
    }
    if(arr[i]>arr[j]){swap(arr[i++],arr[j--]);}
        

    }

    for(int values:arr)
        cout<<values;










    return 0;
}