#include<iostream>
using namespace std;
void RemoveX(char s[]){
    //   base case
    if(s[0] == '\0'){
        return;
    }

    if(s[0] !='x'){
        RemoveX(s + 1);
    }
    else{
        int i = 1;
        for (; s[i] != '\0';i++){
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
         RemoveX(s);
    }
}
int lenghtStr(char s[]){

    //  base case 
    if(s[0] == '\0')
        return 0;

    int l = lenghtStr(s + 1);

    return 1 + l;
}
int main(){
    char str[100];

    cin >> str;

    
    cout << " length of string is: " << lenghtStr(str) << endl;
    RemoveX(str);
    cout<< "Removed x string is : " <<str<<endl;

    cout << "Enter the length of string is: " << lenghtStr(str);

    return 0;
}