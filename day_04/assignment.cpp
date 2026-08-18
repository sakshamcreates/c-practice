 #include <iostream>
 using namespace std;
 int main (){
    int teabags;
    cout<<"enter the number of tea bags:";
    cin>>teabags;
    if(teabags<10){
        //teabags=teabags+5
        teabags+=5;
    }
    cout<<"the total number of teabgas user have is:"<<teabags<<endl;
    return 0;
 }