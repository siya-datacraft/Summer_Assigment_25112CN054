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
    int maxCount = 0;
    int maxElement = arr[0];
    for (int i = 0; i < n; i++) 
    {
        int count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) 
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }
    cout << "Element with maximum frequency: " << maxElement << endl;
    cout << "Frequency: " << maxCount;
    return 0;
}