#include <iostream>
#include <vector>
#include <fstream>
#include "CalcFunctions.h"

using namespace std;




int main(){
    char stop;

    while(stop != 'y'){
        CalcFunctions calc1;
        calc1.display();

        double num1, num2;
        char op;


        //get first number
        cin >> num1;
        while (!cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Error: not a number, try again" << endl;
            cin >> num1;
        }
        calc1.setFirst(num1); 
        calc1.display();


        //get operator
        cin >> op;
        while (isdigit(op)){
            cout << "Error: not an operator, try again" << endl;
            cin >> op;
        }
        calc1.setOper(op);
        calc1.display();


        //get second number
        cin >> num2;
        while (!cin.good()){
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "Error: not a number, try again" << endl;
            cin >> num2;
        }
        calc1.setSec(num2);
        calc1.display();

        cout << "OFF (y/n)" << endl;
        cin >> stop;
    }
    system("clear");
}
