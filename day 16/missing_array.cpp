#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter value of n (total numbers including missing one): ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n - 1 << " elements:\n";
    for (int i = 0; i < n - 1; i++) 
    {
        cin >> arr[i];
    }
    int total = n * (n + 1) / 2;
    int currentSum = 0;
    for (int i = 0; i < n - 1; i++) 
    {
        currentSum += arr[i];
    }
    int missing = total - currentSum;
    cout << "Missing number is: " << missing;
    return 0;
}
