#include <iostream>
using namespace std;

class insertionsort {
    int a[50], n;
public:
    void in();
    void out();
    void display();
};

void insertionsort::in() {
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void insertionsort::out() {
    int j, tmp;
    for (int i = 1; i < n; i++) {
        j = i;
        while (j > 0 && a[j - 1] > a[j]) {
            int tmp = a[j];
            a[j] = a[j-1];
            a[j-1] = tmp;
            j--;
        }
    }
}

void insertionsort::display() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    insertionsort is;
    is.in();
    is.out();
    is.display();

    return 0;
}
