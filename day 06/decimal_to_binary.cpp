#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter decimal number: ";
    cin >> num;
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }
    int binaryArray[32];
    int index = 0;
    while (num > 0) 
    {
        binaryArray[index] = num % 2;
        num = num / 2;
        index++;
    }
    cout << "Binary: ";
    for (int i = index - 1; i >= 0; i--)
    {
        cout << binaryArray[i];
    }
    cout << endl;
    return 0;
}
