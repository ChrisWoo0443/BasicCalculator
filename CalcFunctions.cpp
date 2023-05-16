#include "CalcFunctions.h"
#include <iostream>
#include <sstream>

using namespace std;

//constructor
CalcFunctions::CalcFunctions(){
    oper = ' ';
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
    cout << "-------------------------------" << endl;
    line1();
    if(!secNum){
        line2();
    }
    else{
        cout << "-                             -" << endl;
    }
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
    cout << "-              |              -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
}

void CalcFunctions::line1(){
    ostringstream os;
    os << firstNum;
    string operation = os.str();
    ostringstream is;

    if(!secNum){
        is << secNum;
        operation += oper;
        os << secNum;
        operation += is.str();

        cout << "-";
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << operation << " -" << endl;
    }
    else if(oper != ' '){
        operation += oper;
        cout << "-";
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << operation << " -" << endl;
    }
    else if(!firstNum){
        cout << "-";
        for(unsigned i = 0; i < 28 - operation.length(); i++){
            cout << " ";
        }
        cout << operation << " -" << endl;
    }
    else{
        cout << "-                             -" << endl;
    }
}

void CalcFunctions::line2(){
    operations();
    ostringstream fs;
    fs << answer;
    string result = fs.str();

    if(!answer){
        cout << "-";
        for(unsigned i = 0; i < 28 - result.length(); i++){
            cout << " ";
        }
        cout << result << " -" << endl;
    }
    else{
        cout << "-                             -" << endl;
    }
}

void CalcFunctions::operations(){
    if(oper == '+'){
        answer = firstNum + secNum;
    }
    else if(oper == '-'){
        answer = firstNum - secNum;
    }
    else if(oper == '*'){
        answer = firstNum * secNum;
    }
    else if(oper == '/'){
        answer = firstNum / secNum;
    }
}