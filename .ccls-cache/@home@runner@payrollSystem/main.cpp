#include <iostream>
#include <vector>

using namespace std;

struct Employee {
    string name;
    string role;
    double salary;
};

vector<Employee> employees;

void addEmployee() {
    Employee newEmployee;
    cout << "Enter employee name: ";
    cin >> newEmployee.name;
    cout << "Enter employee role (Manager, Developer, or Designer): ";
    cin >> newEmployee.role;
    cout << "Enter employee salary: ";
    cin >> newEmployee.salary;
    employees.push_back(newEmployee);
    cout << "Employee added successfully!" << endl;
}

void displayEmployees() {
    cout << "Employee List:" << endl;
    for (const auto &employee : employees) {
        cout << "Name: " << employee.name << endl;
        cout << "Role: " << employee.role << endl;
        cout << "Salary: $" << employee.salary << endl;
        cout << endl;
    }
}

int main() {
    int choice;
    while (true) {
        cout << "Payroll System Menu:" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}