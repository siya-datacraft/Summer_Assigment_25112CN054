#include <iostream>
int main()
{
     int rows = 5;
     for (int i = rows; i >= 1; i--)
     {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
     }
     return 0;
}