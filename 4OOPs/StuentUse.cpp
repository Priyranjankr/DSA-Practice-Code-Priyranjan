#include<iostream>
using namespace std;
#include"Student.cpp"
int main(){
    // Cteating object statically
    Student s1;
    Student s2;
    Student s3, s4;

    // access the object properties
    //s1.age = 32; // not access because of private member

    s1.rollnumber = 1101;


    // Ctreating object dynamically

    Student *s6 = new Student;
    return 0;
}