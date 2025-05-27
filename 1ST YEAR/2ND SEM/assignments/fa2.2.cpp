#include<iostream>

using namespace std;

void sort(int arr[], int n){
    int temp; 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    

}
int main(){
    int n;
    cout << "Enter the size of array (Must be less than 100): " <<endl;
    cin>>n;

    if (n >= 1 && n <= 99) {
        int arr[n];

        cout << "Enter the elements of the array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "Array element " << i + 1 << ": ";
            cin >> arr[i];
        }

        sort(arr, n);

        cout << "The sorted array is:";
        for (int i = 0; i < n; i++) {
            cout << " " << arr[i];
        }
        cout << endl;
    } else {
        cout << "Invalid array size. Please enter a size less than 100." << endl;
    }

    return 0;
}