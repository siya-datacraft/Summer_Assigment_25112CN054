#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of square matrix (n x n): ";
    cin >> n;
    int matrix[n][n];
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int primarySum = 0, secondarySum = 0;
    for(int i = 0; i < n; i++) {
        primarySum += matrix[i][i];             
        secondarySum += matrix[i][n - i - 1];    
    }
    cout << "Primary Diagonal Sum = " << primarySum << endl;
    cout << "Secondary Diagonal Sum = " << secondarySum << endl;
    cout << "Total Diagonal Sum = " << primarySum + secondarySum << endl;
    return 0;
}