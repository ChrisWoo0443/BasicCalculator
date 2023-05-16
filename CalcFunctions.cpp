#include "CalcFunctions.h"
#include <iostream>
#include <sstream>

using namespace std;

//constructor
CalcFunctions::CalcFunctions(){
    firstNum = NULL;
    oper = ' ';
    secNum = NULL;
}


void CalcFunctions::setFirst(double num1){
    firstNum = num1;
}

void CalcFunctions::setOper(char op){
    oper = op;
}

void CalcFunctions::setSec(double num2){
    secNum = num2;
}





void CalcFunctions::display(){
    cout << "Calculator" << endl;
    cout << "-------------------------------" << endl;
    screen();
    cout << "-------------------------------" << endl;
    cout << "-              |              -" << endl;
    cout << "-      +       |       -      -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
    cout << "-              |              -" << endl;
    cout << "-      *       |       /      -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
    cout << "-              |              -" << endl;
    cout << "-      ^2      |      ANS     -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
}

void CalcFunctions::screen(){
    ostringstream os;
    os << firstNum;
    string operation = os.str();
    ostringstream is;
    if(secNum != NULL){
        is << secNum;
        operation += oper;
        os << secNum;
        operation += is.str();

        cout << "- " << operation;
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << "-" << endl;
    }
    else if(oper != ' '){
        operation += oper;
        cout << "- " << operation;
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << "-" << endl;
    }
    else if(firstNum != NULL){
        cout << "- " << operation;
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << "-" << endl;
    }
    else{
        cout << "-                             -" << endl;
    }
    cout << "-                             -" << endl; 
}






