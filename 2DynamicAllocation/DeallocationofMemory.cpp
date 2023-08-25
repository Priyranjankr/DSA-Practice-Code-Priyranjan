#include<iostream>
using namespace std;
int main(){

/*
     while(true){
        int *p = new int ;
//  require manual realese
     }

     while(true){
        int i = 10;
     }

*/

int *p = new int ;
delete p;

//  p delete nahi hua hai p jisko point kr rha tha o delete hua 

p = new int;

delete p;

//  p delete tab hoga jab uska scope khatam ho jayega

//  in case of array 

p = new int[100];

delete []p;


}