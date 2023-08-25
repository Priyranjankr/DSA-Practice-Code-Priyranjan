#include<iostream>
using namespace std;

void Replace(char s[],char c1,char c2){
    //  base case 
    if(s[0] == '\0'){
        return;
    }

    if(s[0] == c1){
        s[0] = c2;
        Replace(s + 1,c1,c2);
    }else{
        Replace(s + 1, c1, c2);
    }
}
int lengthStr(char s[]){
    //  base case 
    if(s[0] == '\0'){
        return 0;
    }
    int len = lengthStr(s + 1);

    return 1 + len;
}
int main(){
    char str[100];

    cin >> str;

    cout << " length of string is: " << lengthStr(str) << endl;
    char c1 = 'a';
    char c2 = 'x';
    Replace(str, c1, c2);

    cout << "The replaced String is:" << str << endl;
    return 0;
}