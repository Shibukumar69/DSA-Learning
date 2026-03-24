#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
 for(int i=n-1;i>=1;i--){
    int didswap=0;
    for(int j=0;j<=i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
        didswap=1;
    }
    if(didswap==0){
        break;   // here its is for if already array is sorted so time coplextity reduce 
    }
 }
}
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    } 
    BubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
  
}