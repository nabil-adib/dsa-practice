#include <iostream>
using namespace std;

int main()
{
    char arr[5];

    cout << "Enter 5 characters:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    char target;
    cout << "Enter a character to search: ";
    cin >> target;

    int index = -1;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << target << " is present in the array at index " << index << endl;
    }
    else
    {
        cout << target << " is not present in the array" << endl;
    }

    return 0;
}
