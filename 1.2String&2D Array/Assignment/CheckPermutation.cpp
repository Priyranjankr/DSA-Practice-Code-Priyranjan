#include <iostream>
#include <cstring>
using namespace std;
bool PermutationString(char input1[], char input2[])
{
    if (strlen(input1) != strlen(input2))
    {
        return false;
    }
    else
    {
        int arr[256] = {0};
        for (int i = 0; input1[i] != '\0'; i++)
        {
            arr[input1[i]]++;
        }

        for (int i = 0; input2[i] != '\0'; i++)
        {
            arr[input2[i]]--;
        }
        for (int i = 0; i < 256; i++)
        {
            if (arr[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{

    char input1[100];
    char input2[100];
    cout << "Enter input1:";
    cin >> input1;
    cout << "Enter input2:";
    cin >> input2;

    bool ans = PermutationString(input1, input2);

    cout << "Permutation string or not:" << ans;
    return 0;
}