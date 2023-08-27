#include <iostream>
using namespace std;

int main()
{
    char ch[100];
    cout << "Enter your string:";
    cin >> ch;

    char c1, c2;
    cout << "Enetr character c1 and c2:";
    cin >> c1 >> c2;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == c1)
        {
            ch[i] = c2;
        }
    }
    cout << "Repleced String is:" << ch << endl;
    return 0;
}