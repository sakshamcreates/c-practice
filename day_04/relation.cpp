#include <iostream>
using namespace std;
int main(){
    int cups;
    cout<<"enter the number of cups you have"<<endl;
    cin>>cups;
    if (cups >20){
        cout <<" great! you will receive gold badge"<<endl;
    }else if(cups >= 10 && cups <= 20){
cout<<" nice !you will get a silver badge"<<endl;
    }
    else{
cout<<"sorry! no badge for you"<<endl;
    }
return 0;
}
