#include <iostream>
#include <string>
using namespace std;

class Employee {
   public:
      int employee_id;
      string name;
      string houseno;
      string area;
      string city;
      string state;

      void input() {
         cout << "Enter employee id: ";
         cin >> employee_id;
         cout << "Enter employee name: ";
         cin >> name;
         cout << "Enter employee house number: ";
         cin >> houseno;
         cout << "Enter employee area: ";
         cin >> area;
         cout << "Enter employee city: ";
         cin >> city;
         cout << "Enter employee state: ";
         cin >> state;
      }

      void display() {
         cout << "Employee ID: " << employee_id << endl;
         cout << "Name: " << name << endl;
         cout << "House number: " << houseno << endl;
         cout << "Area: " << area << endl;
         cout << "City: " << city << endl;
         cout << "State: " << state << endl;
      }
};

int main() {
   Employee emp[3];
   int id;

   // Input information for three employees
   for (int i = 0; i < 3; i++) {
      cout << "\nEnter information for employee " << i+1 << endl;
      emp[i].input();
   }

   // Retrieve data and display information for employee with a given ID number
   cout << "\nEnter employee ID to retrieve information: ";
   cin >> id;
   for (int i = 0; i < 3; i++) {
      if (emp[i].employee_id == id) {
         emp[i].display();
         break;
      }
      if (i == 2) {
         cout << "No employee found with the given ID." << endl;
      }
   }

   return 0;
}
