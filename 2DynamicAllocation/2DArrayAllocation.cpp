#include<iostream>

using namespace std;

int main(){

    int m,n;
    //  m ->row , n ->coloum
   
    cin>>m>>n;

    int **p = new int*[m];

     for(int i =1;i<=m ; i++){
        p[i] = new int[n];

        for(int j=0; j<n;j++){

            cin>>p[i][j];
        }
    }

//  release memory

  for(int i=0;i<m;i++){

    delete [] p[i];
  }

  delete []p ;
}