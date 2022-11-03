#include <iostream>
using namespace std;

int main(){
    // Variable declration
    int employeeNo;
    double payableTax, Rate, Salary;
    Rate = 25;
    Salary = 10000;
// DOING THE MATH OPERATION
    payableTax = Rate/100 * Salary * employeeNo;
    cout<<"Enter the number of employees in PowerPro-tech company:";
    cin>> employeeNo;
    cout<<"PowerPro-tech company Tax payable to goVernment is"<< payableTax<<;

    return 0;
}