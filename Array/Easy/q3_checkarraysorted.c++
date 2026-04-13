#include<iostream>
#include<vector>
using namespace std;
bool checkSorted(vector<int>&arr,int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isSorted=checkSorted(arr,n);
    if(isSorted){
        cout<<"Array is sorted in non-decreasing order.";
    }
    else{
        cout<<"Array is not sorted in non-decreasing order.";
    }

    return 0;

}