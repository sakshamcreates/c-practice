#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;

    while (true)
    {
        cout<<"do you want more cup of tea (type 'stop' to exit) ?\n";
        getline(cin,response);

if (response=="stop"){
    //exit the loop
    break;
}
cout<<"here is your another cup of tea.\n";

    }

    cout<<"no more tea will be served to you";
    return 0;
    
}