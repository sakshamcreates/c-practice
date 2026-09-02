#include<iostream>
using namespace std;

    int pourchai(int cups) {
        cups = cups+5;
        cout<<"poured cups:" <<cups<<endl;
    }
    int main (){

    int chaicups = 2;
    pourchai(chaicups);
    cout<<"total cups are "<<chaicups<<endl;
    return 0;
}