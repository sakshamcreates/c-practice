#include <iostream>

#include <string>
using namespace std;




class Tea {
    public:
    virtual void prepareingredients() = 0; //purevirtual function
    virtual void brew() = 0;  //pure virtual function
     virtual void serve() = 0; //pure virtual function


    void makeTea(){
        prepareingredients();
        brew;
        serve;
    }

};

//derived class

class GreenTea :public Tea{
public:

 void prepareingredients()override{
    cout<<"green leaves and water is ready"<<endl;
 }

 void brew()override{
    cout <<"tea brewed"<<endl;
 }
 void serve()override{
    cout<<"tea served"<<endl;  
 }

};

int main(){
    GreenTea greentea;

    greentea.makeTea();
}