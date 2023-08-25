// Given a string S,
// remove consecutive duplicates from it recursively.
// Input Format : Sample Input 1 : aabccba
// Sample Output 1 : abcba
// Sample Input 2 : xxxyyyzwwzzz
//   Sample Output 2 : xyzwz
#include<iostream>
using namespace std;

void removeDupli(char s[]){
    //  base case 
    if(s[0] == '\0'){
        return;
    
    }
    if(s[0] == s[1]){
        int i =1 ;
        for (; s[i] == s[0] ; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        removeDupli(s);
    }else{
        removeDupli(s+1);
    }
}
int lengthStr(char s[])
{
    //  base case
    if (s[0] == '\0')
    {
        return 0;
    }
    int len = lengthStr(s + 1);

    return 1 + len;
}
int main(){
    char str[100];

    cin >> str;

    cout << " length of string is: " << lengthStr(str) << endl;

    cout << "Removed string is: " << str << endl;
    cout << " length of string is: " << lengthStr(str) << endl;

    return 0;
}