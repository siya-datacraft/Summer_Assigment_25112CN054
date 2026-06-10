#include <iostream>
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            std::cout << (char)('A' + j);
        }
        for (int j = i - 1; j >= 0; j--)
        {
            std::cout << (char)('A' + j);
        }
        std::cout << std::endl;
    }
    return 0;
}