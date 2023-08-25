#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v;

    for(int i=0;i<100;i++){
        cout<<"cap: "<<v.capacity()<<endl;
        cout<<"size: "<<v.size()<<endl;
        v.push_back(i+1);
    }
    
    v.push_back(10);
    v.push_back(20);   
    v.push_back(30);




/*
    v[1] = 100;
    //  dont use [] for inserting elements
    // v[3] = 23;
    // v[4] = 45;

    v.push_back(234);
    v.push_back(456);

    v.pop_back();  // delete last element 

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;
    }

        
            cout<< v[0] <<endl;
            cout<< v[1] <<endl;
            cout<< v[2] <<endl;
            cout<< v[3] <<endl;
            cout<< v[4] <<endl;
            cout<< v[5] <<endl;
            cout<< v[6] <<endl;

            cout << "size: " << v.size() << endl;

            cout << v.at(2) << endl;
            cout << v.at(6) << endl;

           */

        return 0;
}