#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Non-diagonal elements: ";
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i != j && i + j != cols - 1) {
                cout << arr[i][j] << " ";
                if (arr[i][j] % 2 == 0) {
                    evenCount++;
                } else {
                    oddCount++;
                }
            }
        }
    }
    cout << endl;

    cout << "Number of even non-diagonal elements: " << evenCount << endl;
    cout << "Number of odd non-diagonal elements: " << oddCount << endl;

    return 0;
}