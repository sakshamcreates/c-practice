#include <iostream>
using namespace std;
int main(){
    int cups;
    double pricepercup, totalprice, discountedprice;
    cout<<"enter the number of tea cups";
    cin>>cups;
    cout<<"enter the price of per cups";
    cin>>pricepercup;

totalprice= cups*pricepercup;
//apply 5% discount if total price is above 100
if(totalprice > 100){
    discountedprice=totalprice-(totalprice*0.05);
    cout<<"discounted price is: " <<discountedprice<<endl;
}else{
    cout<<"the total bill is: "<<totalprice<<endl;
}



    return 0;
}