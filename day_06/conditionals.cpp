#include <iostream>
#include <string>
using namespace std;

int main (){
    string teaorder;
    
    cout<<"enter your tea order";
    getline (cin,teaorder);

    if(teaorder=="green-tea"){
        cout<<"you have ordered green-tea"<<endl;
    }
    else{
        cout<<"sorry no more options available"<<endl;
    }
}