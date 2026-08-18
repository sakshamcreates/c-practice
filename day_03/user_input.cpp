#include <iostream>
#include <string>
using namespace std;
int main(){
    string usertea;
    int teaquantity;
    cout<<"what would you like to order in tea?\n";
    getline(cin,usertea);
    //ask for quantity
    cout<<"how many cupss of"<<usertea<<"would you like to have?";
    cin>>teaquantity;
    cout<<teaquantity;
    cout<<usertea;
    return 0;
}