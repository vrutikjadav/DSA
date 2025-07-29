#include<iostream>
#include<vector>
using namespace std;

void recursiveBubbleSort(vector<int>& arr,int n){

    if(n == 0)
        return;

        for(int i=0;i<n;i++)
        {
            if(arr[i] < arr[i-1])
            {
                swap(arr[i],arr[i-1]);
            }
        }

        recursiveBubbleSort(arr, n-1);

}

int main()
{
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
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

     recursiveBubbleSort(arr, n);
     
    // Sorted array 
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}