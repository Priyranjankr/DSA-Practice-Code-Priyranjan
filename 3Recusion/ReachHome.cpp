#include<iostream>
using namespace std;
void reachHome(int src,int dest){

    cout << "Source:" << src << " Destination:" << dest << endl;
    //  base case
    if(src == dest){
        cout << "Pahuch gye Ghar";
        return;
    }

    //   Processing--> ek step aage
    src++;
    //  recusive relation
    reachHome(src, dest);
}
int main(){

    int src = 1;

    int dest = 20;

    reachHome(src, dest);
    return 0;
}