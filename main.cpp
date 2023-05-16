#include <iostream>
#include <vector>
#include <fstream>
#include "CalcFunctions.h"

using namespace std;




int main(){
    CalcFunctions calc1;

    calc1.display();


    double num1, num2;
    char op;

    cin >> num1;
    calc1.setFirst(num1);
    calc1.display();

    cin >> op;
    calc1.setOper(op);
    calc1.display();

    cin >> num2;
    calc1.setSec(num2);
    calc1.display();

}


