#include <iostream>
using namespace std;
int largestelement(int arr[], int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    } 
    return max;
}
int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int larger = largestelement(arr, n);
    cout<<"Lagest element is :"<<larger;

    return 0;
}