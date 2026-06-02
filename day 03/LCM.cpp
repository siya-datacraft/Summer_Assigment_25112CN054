#include <iostream>
int main()
{
    int x, y;
    std::cout << "Enter two numbers seprated by a space: ";
    if(!(std::cin >> x >> y))
    return 1;
    int lcm = (x > y) ? x : y;
    while (true) {
        if (lcm % x == 0 && lcm % y == 0)
        {
            break;
        }
        lcm++;
    }
    std::cout << "LCM: " << lcm << std::endl;
    return 0;
}