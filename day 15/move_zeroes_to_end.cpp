#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int a[100];
    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int pos = 0; 
    for (int i = 0; i < n; i++) 
    {
        if (a[i] != 0) 
        {
            a[pos] = a[i];
            pos++;
        }
    }
    while (pos < n) 
    {
        a[pos] = 0;
        pos++;
    }
    cout << "After moving zeroes:\n";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    return 0;
}