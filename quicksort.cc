#include <iostream>
using namespace std;

class Quicksort {
    int a[50];
public:
    int n;
    void in();
    void quicksort(int, int);
    void display();
};

void Quicksort::in() {
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void swap(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int partition(int a[], int low, int high) {
    int pivot = a[high];
    int j = low - 1;
    for (int i = low; i < high; i++)
        if (a[i] <= pivot) {
            j++;
            swap(a[i], a[j]);
        }
    swap(a[j+1], a[high]);
    return j+1;
}

void Quicksort::quicksort(int low, int high) {
       if (low < high) {
           int pi = partition(a, low, high);
           
           quicksort(low, pi - 1);
           quicksort(pi + 1, high);
       }
}

void Quicksort::display() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    Quicksort qs;
    qs.in();
    qs.quicksort(0, qs.n - 1);
    qs.display();

    return 0;
}
