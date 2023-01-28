#include "Employee.h"
#include <iostream>
using namespace std;

int main(){
    Employee employee1 = Employee("Roger Garcia", "Boeing", 606822, 25);
    employee1.DisplayInformation();
    cout << endl;
    cout << endl;

    SoftwareEngineer offerone = SoftwareEngineer("Roger Garcia", "Boeing", 606781, 25, 
    "C++", "Fix bugs in the F-22A", 125000, 35000, 45000);
    offerone.offerLetter();


}