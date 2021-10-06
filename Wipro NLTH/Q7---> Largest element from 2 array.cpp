#include<bits/stdc++.h>
using namespace std;

int maximumElement(int l1 , int l2 , int arr1[] , int arr2[])
{
    sort(arr1 , arr1+l1);
    sort(arr2 , arr2+l2);
    
    int arr1Max = arr1[l1-1];
    int arr2Max = arr2[l2-1];
    
    if(arr1Max > arr2Max)
    {
        return arr1Max;
    }
    else
    {
        return arr2Max;
    }
}

int main(){
    
    int l1;
    cout<<"Enter size of first array : ";
    cin>>l1;
    
    int arr1[l1];
    cout<<"Enter 1st array elements : ";
    for(int i=0 ; i<l1 ; i++){
        cin>>arr1[i];
    }
    
    int l2;
    cout<<"Enter size of second array : ";
    cin>>l2;
    
    int arr2[l2];
    cout<<"Enter 2nd array elements : ";
    for(int i=0 ; i<l2 ; i++){
        cin>>arr2[i];
    }
    
    cout<<maximumElement(l1 , l2 , arr1 , arr2);
    
    return 0;
}
