#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai {
public:
    string teaname;
    int servings;
    vector<string> ingredients;

    // Delegating constructor
    Chai(string name) : Chai(name, 1, {"water", "tealeaves"}) {}

    // Main constructor 
    Chai(string name, int serve, vector<string> ingr) {
        teaname = name;
        servings = serve;
        ingredients = ingr;
        cout << "main constructor called" << endl;
    } // Constructor yahan end hoga

    // Display Method (Constructor ke bahar)
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
    Chai quickChai("Quick Chai");
    quickChai.displayChaidetails(); // Corrected: Correct method name

    return 0;
}`