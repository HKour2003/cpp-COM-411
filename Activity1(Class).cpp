#include <iostream>
using namespace std;

class Manager {
    private:
        string name;
        int age;
        double salary;
        string address;
    public:
        void getDetails() {
            cout << "Enter Manager's Name: ";
            getline(cin, name);
            cout << "Enter Manager's Age: ";
            cin >> age;
            cout << "Enter Manager's Salary: ";
            cin >> salary;
            cin.ignore();
            cout << "Enter Manager's Address: ";
            getline(cin, address);
        }
        void displayDetails() {
            cout << "Manager's Name: " << name << endl;
            cout << "Manager's Age: " << age << endl;
            cout << "Manager's Salary: " << salary << endl;
            cout << "Manager's Address: " << address << endl;
        }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    Manager managers[n];

    for(int i=0; i<n; i++) {
        cout << "Enter details of Manager " << i+1 << endl;
        managers[i].getDetails();
        cout << endl;
    }

    cout << "List of Managers:\n\n";
    for(int i=0; i<n; i++) {
        cout << "Details of Manager " << i+1 << endl;
        managers[i].displayDetails();
        cout << endl;
    }

    return 0;
}
