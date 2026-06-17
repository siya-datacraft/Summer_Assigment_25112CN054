#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int arr[size];
    cout << "Enter" << size << "integers:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Element" << size << "integers: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << "Element" << i + 1 << ": ";
            cin >> arr[i];
        }
        cout << "\nThe elements in the array are: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }    
    return 0;
}
