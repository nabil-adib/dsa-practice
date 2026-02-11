#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[50], str2[50];

    cout << "Enter a string: ";
    cin >> str1; // Use cin; use getline if spaces are needed

    int len = 0;
    while (str1[len] != '\0')
    {
        len++;
    }

    // Reverse the string
    int j = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        str2[j++] = str1[i];
    }
    str2[j] = '\0';

    cout << "Reversed output: " << str2 << endl;

    // Check palindrome
    if (strcmp(str1, str2) == 0)
    {
        cout << "Palindrome." << endl;
    }
    else
    {
        cout << "Not palindrome." << endl;
    }

    return 0;
}
