#include <string>
#include <iostream>
using namespace std;

// This function reverses a string
string revString(string str)
{
    int i = 0;
    int j;

    // count how many chars the string have
    for (j = 0; str[j] != '\0'; ++j);

    // reduce one char, index starts on zero
    j--;

    // while loop to verify all the string
    while (i < j)
    {
        // XOR operation, does the char switching
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];

        ++i;
        --j;
    }
    return str;
}

// Main func
int main()
{
    string str;

    // reads a string
    cout << "Write a string:" << endl;
    cin >> str;
    // print the result
    cout << revString(str);
    return 0;
}
