#include <iostream>
using namespace std;

int main(){
    int hour;

    cout<<"enter the current hour (0-23)";
    cin>>hour;

    if(hour >= 8 && hour < 18){
        cout<<"the Tea shop is now open"<<endl;
    }
    else{
        cout<<" sorry the tea shop is closed"<<endl;
    }
    return 0;
}