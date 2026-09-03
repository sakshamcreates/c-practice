#include <iostream>
#include <vector>
using namespace std;

class Chai {
public:
    string teaname;
    string serving;
    vector<string> ingredients;

    void displayChaidetails() {
        cout << "Tea name: " << teaname << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingredients: ";

        for(string ingredient : ingredients) {
            cout << ingredient << " ";
        }

        cout << endl;
    }
};

int main() {
    Chai chaiOne;

    chaiOne.teaname = "lemon tea";
    chaiOne.serving = "2";
    chaiOne.ingredients = {"water", "lemon", "honey", "tea"};

    chaiOne.displayChaidetails();

    return 0;
}