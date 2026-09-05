

#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaname;
    int servings;
    vector<string> ingredients;
 
    // parameter  Constructor
    Chai(string name,int serve,vector<string>ingr) {
        teaname = "name";
        servings = serve;
        ingredients =ingr;
        cout << "parameter constructor called" << endl;
    }

    // Function to display tea details
    void displayChaidetails() {
        cout << "teaname: " << teaname << endl;
        cout << "servings: " << servings << endl;
        cout << "ingredients: ";
        for (string ingredient : ingredients) {
            cout << ingredient << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating an object of Chai
    Chai lemontea("lemontea",2,{"water","milk","tealeaves"});
    
   //copy the code
   Chai copiedChai = lemontea;
   copiedChai.displayChaidetails();

    return 0;
}