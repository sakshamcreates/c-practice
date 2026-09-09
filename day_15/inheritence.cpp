#include <iostream>
#include <string>
using namespace std;

class Tea {
protected:
    string teaname;
    int servings;

public:
    Tea(string name, int serve) : teaname(name), servings(serve) {
        cout << "Tea constructor called for " << teaname << endl;
    }

    virtual void brew() const {
        cout << "Brewing " << teaname << " with generic method" << endl;
    }

    virtual void serve() const {
        cout << "Serving " << servings << " cup(s) of " << teaname << endl;
    }

    virtual ~Tea() {
        cout << "Tea destructor called for " << teaname << endl;
    }
};

// ---------------- Green Tea ----------------

class GreenTea : public Tea {
public:
    GreenTea(int serve) : Tea("Green Tea", serve) {
        cout << "Green Tea constructor called" << endl;
    }

    void brew() const override {
        cout << "Brewing " << teaname
             << " by steeping green tea leaves" << endl;
    }

    ~GreenTea() {
        cout << "Green Tea destructor called" << endl;
    }
};

// ---------------- Masala Tea ----------------

class MasalaTea : public Tea {
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve) {
        cout << "Masala Tea constructor called" << endl;
    }

    void brew() const override final {
        cout << "Brewing " << teaname
             << " with spices and milk" << endl;
    }

    ~MasalaTea() {
        cout << "Masala Tea destructor called" << endl;
    }
};

// NOTE:
// Agar brew() final hai, to MasalaTea ko inherit karke
// us function ko override nahi kar sakte.

int main() {

    Tea* tea1 = new GreenTea(2);
    Tea* tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    cout << endl;

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}