#include <iostream>
using namespace std;
void allSubstring(char input[])
{

    for (int i = 0; input[i] != '\0'; i++)
    {
        for (int j = i; input[j] != '\0'; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << input[k];
            }
            cout << endl;
        }
    }
}
int main()
{

    char input[100];
    cout << "Enter the input string:";
    cin >> input;
    cout << "All Substring are:" << endl;
    allSubstring(input);
    return 0;
}