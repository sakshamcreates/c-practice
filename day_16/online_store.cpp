#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>
#include <string>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main() {

    // Vector
    vector<Product> products = {
        {101, "laptop", "electronics"},
        {102, "smartphone", "electronics"},
        {103, "coffee maker", "kitchen"},
        {104, "blender", "kitchen"},
        {105, "desk lamp", "home"}
    };


    // Deque
    deque<string> recentCustomer = {
        "C001", "C002", "C003"
    };

    recentCustomer.push_back("C004");
    recentCustomer.push_front("C005");


    // List
    list<Order> orderHistory;

    orderHistory.push_back(
        {1, 101, 1, "C001", time(0)}
    );

    orderHistory.push_back(
        {2, 102, 2, "C002", time(0)}
    );

    orderHistory.push_back(
        {3, 103, 1, "C003", time(0)}
    );


    // Set
    set<string> categories;

    for (const auto &product : products) {
        categories.insert(product.category);
    }


    // Map
    map<int, int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7}
    };


    // Multimap
    multimap<string, Order> customerOrders;

    for (const auto &order : orderHistory) {
        customerOrders.insert(
            {order.customerID, order}
        );
    }


    // Unordered Map
    unordered_map<string, string> customerData = {
        {"C001", "saksham"},
        {"C002", "vidya"},
        {"C003", "max"},
        {"C004", "harry"},
        {"C005", "Hitesh"}
    };


    // Unordered Set
    unordered_set<int> uniqueProductIDs;

    for (const auto &product : products) {
        uniqueProductIDs.insert(product.productID);
    }


    // ================= OUTPUT =================

    cout << "===== PRODUCTS =====" << endl;

    for (const auto &product : products) {
        cout << product.productID << " | "
             << product.name << " | "
             << product.category << endl;
    }


    cout << "\n===== RECENT CUSTOMERS =====" << endl;

    for (const auto &customer : recentCustomer) {
        cout << customer << endl;
    }


    cout << "\n===== ORDER HISTORY =====" << endl;

    for (const auto &order : orderHistory) {
        cout << "Order ID: " << order.orderID
             << " | Product ID: " << order.ProductID
             << " | Quantity: " << order.quantity
             << " | Customer: " << order.customerID
             << endl;
    }


    cout << "\n===== CATEGORIES =====" << endl;

    for (const auto &category : categories) {
        cout << category << endl;
    }


    cout << "\n===== PRODUCT STOCK =====" << endl;

    for (const auto &stock : productStock) {
        cout << "Product ID: " << stock.first
             << " | Stock: " << stock.second
             << endl;
    }


    cout << "\n===== CUSTOMER ORDERS =====" << endl;

    for (const auto &entry : customerOrders) {
        cout << "Customer: " << entry.first
             << " | Order ID: " << entry.second.orderID
             << " | Product ID: " << entry.second.ProductID
             << " | Quantity: " << entry.second.quantity
             << endl;
    }


    cout << "\n===== CUSTOMER DATA =====" << endl;

    for (const auto &customer : customerData) {
        cout << customer.first
             << " -> "
             << customer.second
             << endl;
    }


    cout << "\n===== UNIQUE PRODUCT IDs =====" << endl;

    for (const auto &id : uniqueProductIDs) {
        cout << id << endl;
    }


    return 0;
}