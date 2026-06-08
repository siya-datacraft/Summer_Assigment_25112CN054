#include <iostream>
int main()
{
    int totalRows = 5;
    for (int starsInRow = totalRows; starsInRow > 0; starsInRow--)
    {
        for (int i = 0; i < starsInRow; i++)
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }
    return 0;
}
