#include <iostream>
using namespace std;

int* preparechaiorders(int cup){
    int* orders = new int [cup];
     for (int i = 0; i < cup; i++)
     {
        orders[i]=(i+1)*10;

     }
     return orders;
}
int main(){
    int cup = 5;
    int* chaiorders=preparechaiorders(cup);

    for (int i = 0; i < cup; i++)
    {
        cout<<"cup:"<<i+1<<"has"<<chaiorders[i]<<"ml \n" ;
    }
    delete[] chaiorders;
    return 0;

    
}