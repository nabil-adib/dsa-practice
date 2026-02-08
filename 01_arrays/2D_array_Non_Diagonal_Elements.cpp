#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int arr[rows][cols];

    // Input matrix elements
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int evenCount = 0, oddCount = 0;

    cout << "Non-diagonal elements: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            // Skip main diagonal and secondary diagonal
            if (i != j && i + j != cols - 1) {
                cout << arr[i][j] << " ";

                if (arr[i][j] % 2 == 0)
                    evenCount++;
                else
                    oddCount++;
            }
        }
    }

    cout << "\nEven non-diagonal elements: " << evenCount << endl;
    cout << "Odd non-diagonal elements: " << oddCount << endl;

    return 0;
}
