#include<bits/stdc++.h>
using namespace std;

int employeeID(int num, int start, int end, int arr[])
{
    for(int i=0; i<num; i++)
    {
        if(arr[i]>=start && arr[i]<=end)
        {
            cout<<i<<" ";
        }
    }
    
    return -1;
}

int main()
{
    int num, start, end;
    
    cout<<"Enter the size of array: "<<endl;
    cin>>num;
    
    cout<<"Enter Starting range: "<<endl;
    cin>>start;
    
    cout<<"Enter Ending range: "<<endl;
    cin>>end;
    
    int arr[num];
    cout<<"Enter Employee distance: "<<endl;
    
    for(int i=0; i<num; i++)
    {   
        cin>>arr[i];
    }
    
    employeeID(num, start, end, arr);
    
    return 0;
    
}
