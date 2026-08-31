#include<iostream>
#include<string>
using namespace std;

int main(){
int teacups;

cout<<"enter the number of tea cups to serve";
cin >> teacups;
//while loop
while (teacups>0){


cout <<"enter the number of tea cups  \n"<<teacups<<"remaining"<<endl;

teacups--;
}
cout<<"all tea cups are served"<<endl;
return 0;

}