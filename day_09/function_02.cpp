#include<iostream>
using namespace std;

int globalchaistock = 100;

void pourchai(int & cups){
    cups = cups+5;
    cout<<"poured cups: "<<cups<<endl;
}
//declaration of function

void servechai(int cups);

void makechai(){
    cout<<"boilingwater,adding tea leaves,straining...";

}

void servechai(string teatype = "masala tea"){
    int cups = 4;
    cout<<"serving"<<teatype
}