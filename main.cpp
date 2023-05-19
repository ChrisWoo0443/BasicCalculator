#include <iostream>
#include <string>
#include <fstream>
#include "CalcFunctions.h"

using namespace std;

bool is_number(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end() && isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}


int main(){
    string nums;
    while(nums != "y"){
        CalcFunctions calc1;
        
        string num1, num2;
        char op;

        calc1.display();

        cin >> num1;
        // while(!is_number(num1)){
        //     cout << "Error: not a number, try again" << endl;
        //     cin >> num1;
        // }
        calc1.setFirst(num1);
        calc1.display();

        cin >> op;
        while(isdigit(op)){
            cout << "Error: not an operator, try again" << endl;
            cin >> op;
        }
        calc1.setOper(op);
        calc1.display();

        cin >> num2;
        // while(!is_number(num2)){
        //     cout << "Error: not a number, try again" << endl;
        //     cin >> num2;
        // }
        calc1.setSec(num2);
        calc1.display();

        cout << "OFF (y/n)" << endl;
        cin >> nums;
    }
    system("clear");
}