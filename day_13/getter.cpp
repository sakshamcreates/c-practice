#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai {
private:
    string teaname;
    int servings;
    vector<string> ingredients;

public:
    // Default Constructor
    Chai() {
        teaname = "unknown tea";
        servings = 1; // Corrected: Integer 1 (without quotes)
        ingredients = {"water", "tealeaves"};
    }

    // Parameterized Constructor
    Chai(string name, int serve, vector<string> ingr) {
        teaname = name;
        servings = serve;
        ingredients = ingr;
    }

    // Getter & Setter for teaname
    string getTeaname() {
        return teaname; // Corrected: lowercase 'teaname'
    }
    
    void setTeaname(string name) {
        teaname = name;
    }

    // Getter & Setter for servings
    int getServings() {
        return servings;
    } // Corrected: Added missing closing brace

    void setServings(int serve) { // Corrected: Added 'int' data type
        servings = serve;
    }

    // Getter & Setter for ingredients
    vector<string> getIngredients() {
        return ingredients;
    }

    void setIngredients(vector<string> ingr) {
        ingredients = ingr;
    }

    // Display Method
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
    Chai chai;
    chai.setTeaname("ginger tea"); // Corrected: Added semicolon
    chai.displayChaidetails();     // Added display to verify output

    return 0;
}