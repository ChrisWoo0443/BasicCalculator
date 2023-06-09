#include "CalcFunctions.h"
#include <iostream>
#include <sstream>

using namespace std;

CalcFunctions::CalcFunctions(){
    firstNum = " ";
    secNum = " ";
    oper = ' ';
    input = " ";
    output = " ";
}

void CalcFunctions::setFirst(string num1){
    firstNum = num1;
}

void CalcFunctions::setSec(string num2){
    secNum = num2;
}

void CalcFunctions::setOper(char op){
    oper = op;
}

void CalcFunctions::setAnswer(string ans){
    answer = ans;
}

void CalcFunctions::setEquation(string eq){
    equation = eq;
}

void CalcFunctions::check(int num){
    checkPrev = num;
}

string CalcFunctions::getAnswer(){
    return answer;
}

string CalcFunctions::getInput(){
    return input;
}

void CalcFunctions::display(){
    cout << "Calculator" << endl;
    cout << "-------------------------------" << endl;

    prev();
    line1();
    line2();

    cout << "-------------------------------" << endl;
    cout << "-              |              -" << endl;
    cout << "-      +       |       -      -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
    cout << "-              |              -" << endl;
    cout << "-      *       |       /      -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
    cout << "-     OFF      |              -" << endl;
    cout << "-     'q'      |      ANS     -" << endl;
    cout << "-              |              -" << endl;
    cout << "-------------------------------" << endl;
}

void CalcFunctions::prev(){
    cout << "-";
    if(checkPrev == 0){
        for(unsigned i = 0; i < 28 - answer.length(); i++){
            cout << " ";
        }
        cout << answer << " -" << endl;
    }
    else{
        for(unsigned i = 0; i < 28 - (equation.length() + 1 + answer.length()); i++){
            cout << " ";
        }
        cout << equation << "=" << answer << " -" << endl;
    }
}

void CalcFunctions::line1(){
    if(secNum != " "){
        input += secNum;
    }
    else if(oper != ' '){
        input += oper;
    }
    else if(firstNum != " "){
        input += firstNum;
    }

    cout << "-";
    for(unsigned i = 0; i < 28 - input.length(); i++){
        cout << " ";
    }
    cout << input << " -" << endl;
}

void CalcFunctions::line2(){


    if(secNum != " "){
        operation();
        cout << "-";
        for(unsigned i = 0; i < 28 - answer.length(); i++){
            cout << " ";
        }
        cout << answer << " -" << endl;
    }
    else{
        cout << "-                             -" << endl;
    }
}

void CalcFunctions::operation(){
    double num1, num2;
    double total = 0;
    num1 = stod(firstNum);
    num2 = stod(secNum);

    if(oper == '+'){
        total += num1 + num2;
    }
    else if(oper == '-'){
        total += num1 - num2;
    }
    else if(oper == '*'){
        total += num1 * num2;
    }
    else if(oper == '/'){
        total += num1 / num2;
    }  
    // answer = to_string(total);
    ostringstream os;
    os << total;
    answer = os.str();
    if(answer == "inf"){
        answer = "error";
    }
}

