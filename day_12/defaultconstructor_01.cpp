#include <iostream>
#include <vector>

using namespace std;

class Chai {
public:
    string teaname;
    int servings;
    vector<string> ingredients;
 
    // Default Constructor
    Chai() {
        teaname = "unknown tea";
        servings = 1;
        ingredients = {"water", "tealeaves", "milk"};
        cout << "constructor called" << endl;
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
    Chai defaultChai;
    
    // Calling the function
    defaultChai.displayChaidetails();

    return 0;
}