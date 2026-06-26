#include <iostream>
using namespace std;
int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
    int matrix[rows][cols];
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    for(int j = 0; j < cols; j++) {
        int sum = 0;
        for(int i = 0; i < rows; i++) {
            sum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << sum << endl;
    }
    return 0;
}