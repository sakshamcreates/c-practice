#include<iostream>
#include<string>
using namespace std;

int main(){
    string response;
     do{
        cout<<"do you want more tea (yes/no)";
        getline(cin,response);
     }
while (response!="no"||response!="NO" || response !="No");



}