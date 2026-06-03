#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int start, end;
    cout << "Enter range (start and end): ";
    cin >> start >> end;
    cout << "Armstrong number in range: ";
    for(int i = start; i <= end; i++) {
        int num = i, sum = 0, digits = 0;
        int temp = num;
        while(temp != 0){
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }
        if(sum == num)
        {
            cout << num << " ";
        }
    }
    return 0;
}