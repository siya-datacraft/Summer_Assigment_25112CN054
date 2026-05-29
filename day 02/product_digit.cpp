#include <iostream>
using namespace std;
int digitProduct(int n)
{
    if (n == 0)
    return 0;
    int prod = 1;
    while (n > 0)
    {
        prod *= (n % 10);
        n /= 10;
    }
    return prod;
}
int main()
{
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << "Product = " << digitProduct(num);
}