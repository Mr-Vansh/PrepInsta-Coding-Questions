//Question 10: Max - Min Sum

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    sort(arr , arr+n);
    int maxNum = arr[n-1];
    int minNum = arr[0];
    
    int add = maxNum + minNum;
    
    cout<<add;
    
    return 0;
}
