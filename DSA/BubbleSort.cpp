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

    for(int i = 0; i < n - i; i++)
    {
        for(int j=1;j<n;j++)
        {
            if(arr[j-1] > arr[j])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
    
    cout << ", " <<endl;
    cout << "Sorted array: ";
    
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << ", ";
    }
    cout << ", " << endl;
    return 0;
}
