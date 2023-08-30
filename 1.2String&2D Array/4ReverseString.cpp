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
int main()
{

    char input[100];
    cout << "Enter the string:";
    cin.getline(input, 100);
    cout << "Original String are:" << input << endl;
    reverseString(input);
    cout << "Reversed String are:" << input << endl;
    return 0;
}