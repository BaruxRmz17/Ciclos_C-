// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10 - i; j++){
            cout<<" ";
        }
        for(int j = 0; j <i*2+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}