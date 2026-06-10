#include <iostream>
int main()
{
    int totalRows = 4;
    for (int currentRow = 1; currentRow <= totalRows; currentRow = currentRow + 1)
    {
        int totalSpaces = totalRows - currentRow;
        for (int spaceCount = 1; spaceCount <= totalSpaces; spaceCount = spaceCount + 1) {
            std::cout << " ";
        }
        int totalStars = (2 * currentRow) - 1;
        for (int starCount = 1; starCount <= totalStars; starCount = starCount + 1) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
