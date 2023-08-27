#include <iostream>
#include <vector>
#include<climits>
using namespace std;

void test(int arr1[], int arr2[], int size1, int size2)
{

    vector<int> ans;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                ans.push_back(arr1[i]);
                arr2[j]= INT_MIN;
                break;
            }
        }
    }

    int n = ans.size();
    
    cout<<"Intersecting elements1 and elements2 are: ";
    for (int i = 0; i < n; i++)
    {

        cout << ans[i] << " ";
    }
}

int main()
{

    int n1;
    int a[100];
    cin >> n1;

    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    int n2;
    int b[100];
    cin >> n2;
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    test(a, b, n1, n2);

    return 0;
}