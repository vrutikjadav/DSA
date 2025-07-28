#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Your code here
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Unsorted array
    cout << "Unsorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i = 0 ;i < n; i++){
        int minIndex = i;
        for(int j = i+1; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
    
        // Swap the found minimum element with the first element
        if(minIndex != i){
            swap(arr[i],arr[minIndex]);
        }
    }

    // Sorted array 
    cout << "Sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}