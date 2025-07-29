#include<iostream>
#include<vector>
using namespace std;


void RecursiveInsertionSort(int key,int n,vector<int>& arr)
{
	if(key == n)
		return;
	
	int j = key-1;
    int temp = arr[key];
	while(j >= 0)
	{
		if(arr[j] > temp)
		{
			arr[j+1] = arr[j];
            j = j- 1;
		}
        else
            break;
    
	}
	arr[j+1] = temp;
	
	RecursiveInsertionSort(key + 1,n,arr);
}

int main()
{
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	cout << endl;
	
	vector<int> arr(n);
	
	for(int i=0;i<n;i++){
		cout << "Enter the values of " << i+1 << " : "; 
		cin >> arr[i];
	}
	
	//Unsorted Array
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	
	RecursiveInsertionSort(1,n,arr);
	
	//sorted Array
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
	
}