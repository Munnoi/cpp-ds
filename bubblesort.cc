#include <iostream>
using namespace std;

class bubblesort {
    int a[50], n;
public:
    void in();
    void out();
    void display();
};

void bubblesort::in() {
    cout << "Enter the no. of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void bubblesort::out() {
    int tmp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (a[j] > a[j+1]) {
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
}

void bubblesort::display() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    bubblesort bs;
    bs.in();
    bs.out();
    bs.display();

    return 0;
}
