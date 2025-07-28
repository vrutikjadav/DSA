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

    //Unsorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Insertion Sort
    for(int i = 1; i < n ; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >=0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }

    //Sorted array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}