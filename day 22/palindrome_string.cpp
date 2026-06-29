#include <iostream>
using namespace std;

int main() {
    string input, result = "";

    cout << "Enter a string: ";
    getline(cin, input);

    // build new string without spaces
    for (char ch : input) {
        if (ch != ' ') {
            result += ch;
        }
    }

    cout << "After removing spaces: " << result;

    return 0;
}
