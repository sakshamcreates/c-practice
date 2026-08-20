#include <iostream>
using namespace std;

int main (){
    int choice;
    double price;

    cout<<"selcet your tea \n";
    cout<<"1.green-tea \n";
    cout<< "2.oolong tea \n";
    cout<<"3.adrak wali chaiii \n";

    cout<<"enter your order in number: \n";

    cin>>choice;

    switch(choice){
        case 1:
        price=2.0;
        cout<<"you selected green tea .price:"<<price<<endl;
  break;

        case 2:
        price = 3.0;
        cout<<"you selected oolong tea .price: "<<price<<endl;
break;
        case 3:
        price = 4.0;
        cout<<"you selected adrak wali chaii .price: "<<price<<endl;
break;
        default:
        cout<<"invalid choice" <<endl;
        break;
    }

    return 0;

}