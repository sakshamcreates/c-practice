#include <iostream>
using namespace std;

int main (){
    int cups;
    double pricepercups = 10,discount,totalprice;
    
    cout<<"enter the number of cups you want";
    cin>>cups;

totalprice = pricepercups*cups;

    if (cups >20 ){
        discount = 0.20;
    }
    else if(cups>=10 && cups <=20)
    {
        discount = 0.10;
    }
    else{
        discount = 0;
    }

totalprice -= (totalprice*discount);
cout<<"total price per cups is :"<<totalprice<<endl;

    return 0;
}