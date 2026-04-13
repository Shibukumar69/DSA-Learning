#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicate(vector<int> &arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); // important

    int newSize = removeDuplicate(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}