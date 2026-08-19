#include <iostream>

using namespace std;
int main(){
    bool isstudent;
    int cups;
    cout <<"are you a student (1 for yes 0 for no) ?";
    cin >>isstudent;

    cout<<"how many cups of tea have you parchased ?";
    cin>>cups;

     if ( isstudent || cups>15){
        cout<<"you are eligible for a discount" <<endl;
    }
    else{

        cout<<"you are not eligible for a discount" <<endl;
    }
    return 0;
}


