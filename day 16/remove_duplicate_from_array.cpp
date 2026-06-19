#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int newSize = n;
    for (int i = 0; i < newSize; i++) 
    {
        for (int j = i + 1; j < newSize; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                for (int k = j; k < newSize - 1; k++) 
                {
                    arr[k] = arr[k + 1];
                }
                newSize--;
                j--; 
            }
        }
    }
    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < newSize; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}