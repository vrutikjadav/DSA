#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Unsorted array: ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << ", ";
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j=0; j< n - i;j++)
        {
            if(arr[j-1] > arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    
    cout << endl;
    cout << "Sorted array: ";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}
