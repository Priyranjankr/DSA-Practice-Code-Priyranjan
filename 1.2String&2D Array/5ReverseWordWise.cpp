#include <iostream>
using namespace std;

int length(char input[])
{
    int size = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        size++;
    }

    return size;
}
void reverseString(char input[])
{
    int len = length(input);
    int i = 0, j = len - 1;

    while (i < j)
    {
        // swap(input[i], input[j]);
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseWord(char input[], int i, int j)
{

    while (i < j)
    {
        // swap(input[i], input[j]);
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}
void reverseWordWiseString(char input[])
{
    reverseString(input);
    int i = 0;
    int j = i;
    while (input[j] !='\0')
    {
        while (input[j] != ' ')
        {
            j++;
        }
        reverseWord(input, i, j - 1);
        i = j + 1;
    }
}
int main()
{

    char input[10000];
    cout << "Enter the string:";
    cin.getline(input, 10000);
    cout << "Original String are:" << input << endl;
    reverseWordWiseString(input);
    cout << "Reversed String are:" << input << endl;

    return 0;
}