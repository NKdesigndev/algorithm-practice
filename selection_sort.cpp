// Selection sort 
#include <iostream>

using namespace std;

int selection_sort(int arr[], int n){
    
    cout << "Elements of array: " << arr[2] << " and size is: " << n << "\n";
    for(int k = 0; k <= n-1; k++){ 
        
        int min = arr[k];
        int loc = k;
        int temp;
        
        for(int j = k+1; j <= n; j++){
            if (min > arr[j]){
                min = arr[j];
                loc = j;
            }
        }
        temp = arr[k];
        arr[k] = arr[loc];
        arr[loc] = temp;
    }
    
    for(int k = 0; k <= n-1; k++){ 
        cout<<" " << arr[k];
    }
}


int main() {
    int size = 5;
    int arr[] = {11, 15, 9, 7, 2};
    
    selection_sort(arr, sizeof(arr) / sizeof(int));

    return 0;
}