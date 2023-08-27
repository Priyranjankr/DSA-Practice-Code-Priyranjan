#include <iostream>
using namespace std;

int Length(char input[]){
    int size =0;
    for(int i=0;input[i] != '\0';i++){
        size++;
    }

    return size;
}
int main()
{

    char name[100];
    cout << "Enter your name: ";
    cin >> name;

   cout<<"Length of char array is: "<<Length(name)<<endl;
    /*
     name[4] = 'x';

    cout << "Your name is: " << name << endl;

    name[3]='d';
    
   
    cout << "Your name is : " << name << endl;

     name[1]='\0';
     
    cout << "Your name is: " << name << endl;
    */
    return 0;
}