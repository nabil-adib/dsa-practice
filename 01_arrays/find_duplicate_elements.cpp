#include <iostream>
using namespace std;

void findDuplicates(int arr[], int size)
{
    int visited[size] = {0};
    int duplicateCount = 0;

    cout << "Duplicate elements and their indices:\n";

    for (int i = 0; i < size; i++)
    {
        if (visited[i])
            continue;

        bool found = false;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                if (!found)
                {
                    cout << "Value: " << arr[i] << ", Index: " << i << endl;
                    found = true;
                    duplicateCount++;
                }

                cout << "Value: " << arr[i] << ", Index: " << j << endl;
                visited[j] = 1;
            }
        }
    }

    cout << "Total number of duplicate values: " << duplicateCount << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 2, 4, 3, 5, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    findDuplicates(arr, size);

    return 0;
}
