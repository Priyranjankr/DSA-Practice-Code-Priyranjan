#include <iostream>
#include <cstring>
using namespace std;
void printAllPrefixes(char input[])
{
    //  i represents end index of my prefixes
    for (int i = 0; input[i] != '\0'; i++)
    {
        //  j represents start index of my prefixes
        for (int j = 0; j <= i; j++)
        {
            cout << input[j];
        }
        cout << endl;
    }
}
int main()
{

    char input1[100];
    char input2[100];
    cout << "Enter input1:";
    cin >> input1;
    cout << "My All prefixes are:" << endl;
    printAllPrefixes(input1);
    /*
       cout << "Enter input2:";
       cin >> input2;

         //  for copy string
         cout<<"Before copy:"<<endl;
         cout<<input1<<endl;
         cout<<input2<<endl;

         strcpy(input1,input2);

         //  strcpy(input1,"hello");
         //  strncpy(input1,input2,4);

         cout<<"After copy"<<endl;
         cout<<input1<<endl;
         cout<<input2<<endl;


           //  for comapare two string
         //    strcmp(input1,"hello")-->> this can also use
          if(strcmp(input1,input2) == 0){
             cout<<"Both the input are same.";
          }else{
             cout<<"Both the string are not same.";
          }

         //    to find length of string
          char input[100];
         cin >> input;
         int len = strlen(input);
         cout << "Length of string is:" << len << endl;
         */
    return 0;
}