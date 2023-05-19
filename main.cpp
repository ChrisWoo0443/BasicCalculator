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

    string result;
;
    while(nums != "y"){
        system("clear");
        CalcFunctions calc1;
        string num1, num2;
        char op;

        calc1.setAnswer(result);
        calc1.display();

        cin >> num1;
        if(num1 == "ANS"){
            calc1.setFirst(result);
        }
        else{
            calc1.setFirst(num1);
        }
        system("clear");
        calc1.display();

        cin >> op;
        while(isdigit(op)){
            cout << "Error: not an operator, try again" << endl;
            cin >> op;
        }
        calc1.setOper(op);
        system("clear");
        calc1.display();

        cin >> num2;
        if(num2 == "ANS"){
            calc1.setSec(result);
        }
        else{
            calc1.setSec(num2);
        }
        system("clear");
        calc1.display();

        cout << "OFF (y/n)" << endl;
        cin >> nums;

        result = calc1.getAnswer();
    }
    system("clear");
}