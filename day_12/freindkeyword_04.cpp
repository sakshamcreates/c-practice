#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Chai{
    private:
    string teaname;
    int servings;


    public:
    Chai(string name,int serve):teaname(name),servings(serve)
{
}
friend bool compareServings(const Chai &chai1,const Chai & Chai2); 
void display()const{
cout<<"teaname: "<<
teaname <<endl;
}
};

bool compareServings(const Chai & Chai1, const Chai &Chai2){
    return Chai1.servings>Chai2.servings;
}
int main(){
    Chai masalaChai("Masala Chai",4);
    Chai gingerChai("Ginger Chai",8);
    gingerChai.display();
    masalaChai.display();

if(compareServings(masalaChai,gingerChai)){
    cout<<"masala chai is having more servings"<<endl;

}else{
     cout<<"masala chai is having less servings"<<endl;
}



}

