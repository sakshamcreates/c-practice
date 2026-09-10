#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee {
    int id;
    string name;
    double salary;
};

void displayEmployee(const Employee& emp) {
    cout << "ID: " << emp.id
         << ", Name: " << emp.name
         << ", Salary: $" << emp.salary << endl;
}

int main() {

    vector<Employee> Employees = {
        {101, "hitesh", 100000},
        {102, "saksham", 32000},
        {103, "shubham", 780000},
        {104, "anirudh", 8900000},
        {105, "shikhar", 9078322}
    };

    // Sort employees by salary from highest to lowest
    sort(Employees.begin(), Employees.end(),
         [](const Employee& e1, const Employee& e2) {
             return e1.salary > e2.salary;
         });

    cout << "Employees sorted by salary -> highest to lowest\n";

    for_each(Employees.begin(), Employees.end(), displayEmployee);

    // Store employees earning more than $50,000
    vector<Employee> highEarners;

    copy_if(Employees.begin(), Employees.end(),
            back_inserter(highEarners),
            [](const Employee& e) {
                return e.salary > 50000;
            });

    cout << "\nEmployees who are high earners:\n";

    for_each(highEarners.begin(), highEarners.end(), displayEmployee);

    // Calculate total salary
    double totalSalary = accumulate(
        Employees.begin(),
        Employees.end(),
        0.0,
        [](double sum, const Employee& e) {
            return sum + e.salary;
        }
    );

    cout << "\nTotal Salary: $" << totalSalary << endl;

    // Calculate average salary
    double averageSalary = totalSalary / Employees.size();

    cout << "Average Salary: $" << averageSalary << endl;

    // Find highest paid employee
    auto highestPaid = max_element(
        Employees.begin(),
        Employees.end(),
        [](const Employee& e1, const Employee& e2) {
            return e1.salary < e2.salary;
        }
    );

    if (highestPaid != Employees.end()) {
        cout << "\nHighest Paid Employee:\n";
        displayEmployee(*highestPaid);
    }

    return 0;
} 