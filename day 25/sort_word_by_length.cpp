#include <iostream>
using namespace std;
int main() 
{
    string words[100], temp;
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cout << "Enter words:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j].length() > words[j + 1].length()) {
                temp = words[j];
                words[j] = words[j + 1];
                words[j + 1] = temp;
            }
        }
    }
    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
    return 0;
}