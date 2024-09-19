#include <iostream>

using namespace std;

int main() {
    int rows, cols, key;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int array[rows][cols];
    
    cout << "Enter the 2D array values:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> array[i][j];
        }
    }

    cout << "Enter the key to search for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (array[i][j] == key) {
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (found) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
