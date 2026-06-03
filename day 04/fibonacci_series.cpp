#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter how many terms: ";
    cin >> n;
    int first = 0, second = 1;
    cout << "Fibonacci series: ";
    for(int i = 1; i <= n; i++)
    {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}
