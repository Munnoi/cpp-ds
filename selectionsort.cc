#include <iostream>
using namespace std;

class selectionsort {
    int a[50], n;
public:
    void in();
    void out();
    void display();
};

void selectionsort::in() {
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

void selectionsort::out() {
    int j;
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (j = i+1; j < n; j++)
            if (a[min] > a[j])
                min = j;
        if (i != min)
            swap(a[i], a[min]);
    }
}

void selectionsort::display() {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main() {
    selectionsort ss;
    ss.in();
    ss.out();
    ss.display();

    return 0;
}
