#include <iostream>
using namespace std;
long long calculate_fact(int value) {
    if (value <= 1)
    {
        return 1;
    }
    return value * calculate_fact(value - 1);
}
int main() 
{
    int target_num = 5;
    long long final_answer =calculate_fact(target_num);
    cout << "Result: " << target_num << "! = " << final_answer <<endl;
    return 0;
}
