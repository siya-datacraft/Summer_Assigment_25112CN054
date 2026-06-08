#include <iostream>
int main()
{
    const int totalLines = 5;
    for (int currentLine = 1; currentLine <= totalLines; ++currentLine)
    {
        int sequenceValue = 1;
        while (sequenceValue <= currentLine)
        {
            std::cout << sequenceValue;
            ++sequenceValue;
        }
        std::cout << '\n';
    }
    return 0;
}