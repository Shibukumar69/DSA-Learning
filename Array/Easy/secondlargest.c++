#include<iostream>
#include<vector>
using namespace std;
int SecondlargestElement(vector<int>&arr,int n){
int largest=arr[0];
int secondlargest=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>largest){
        secondlargest=largest;
        largest=arr[i];
    } 
    else if(arr[i]<largest && arr[i]>secondlargest){
        secondlargest=arr[i];
    }
}
return secondlargest;
}

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Secondlargest=SecondlargestElement(arr,n);
    cout<<"Second largest element is :"<<Secondlargest;

    return 0;

}
