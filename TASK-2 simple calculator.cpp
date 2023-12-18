//TASK-2 simple calculator
#include <iostream>
using namespace std;
int main() {
    char oper;
    int num1, num2, result;
    cout<<"SIMPLE CALCULATOR";
     cout<<"\n";
    cout<<"------------------****-----------------";
    cout<<"\n";
    cout<<"Enter numbers to perform operation \n";
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Choose an operation (+, -, *, /): ";
    cin >> oper;

    switch(oper) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            if (num2 == 0) {
                cout << "Cannot divide by zero" << result << endl;
            } 
            else {
                result=num1 / num2;
                cout << "Result:"<<result << endl;
            }
            break;
        default:
            cout << "Sorry!Invalid operator..." << endl;
    }
return 0;
}