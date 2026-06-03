#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter position (n): ";
    cin >> n;
    if(n == 0)
    {
        cout << "Term is: 0";
        return 0;
    }
    int a = 0, b = 1, c;
    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "nth Fibonacci term is: " << b;
    return 0;
}