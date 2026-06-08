#include <iostream>
int main()
{
    int totalRow = 5;
    for (int currentRow = 1; currentRow <= totalRow; ++currentRow)
    {
        char displayChar = 'A';
        for (int column = 1; column <= currentRow; ++column)
        {
            std::cout << displayChar;
            displayChar++;
        }
        std::cout << "\n";
    }
    return 0;
}