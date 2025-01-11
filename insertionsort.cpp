#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 6, 5, 4, 3, 2, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Logic
    int key, j;
    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Displaying the array
    for (int i  = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    
    return 0;
}
