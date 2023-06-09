#include <iostream>
#include <string>
#include <fstream>
#include <unistd.h>
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

    string lastResult;
    string lastEquation;

    while(nums != "q"){
        system("clear");
        CalcFunctions calc1;
        string num1, num2;
        char op;

        calc1.setEquation(lastEquation);
        calc1.setAnswer(lastResult);
        calc1.display();

        // first user input
        cin >> num1;
        if(num1 != "q"){
            if(num1 == "ANS"){
                calc1.setFirst(lastResult);
            }
            else{
                calc1.setFirst(num1);
            }
            system("clear");
            calc1.display();

            //operator
            cin >> op;
            if(op != 'q'){
                while(isdigit(op)){
                    cout << "Error: not an operator, try again" << endl;
                    cin >> op;
                }
                calc1.setOper(op);
                system("clear");
                calc1.display();

                //second user input

                cin >> num2;
                if(num2 != "q"){
                    if(num2 == "ANS"){
                        calc1.setSec(lastResult);
                    }
                    else{
                        calc1.setSec(num2);
                    }
                    system("clear");
                    calc1.display();

                    cout.flush();
                    sleep(1);

                    lastResult = calc1.getAnswer();
                    lastEquation = calc1.getInput();
                    calc1.check(1);
                }
                else{
                    nums = "q";
                }
            }
            else{
                nums = "q";
            }
        }
        else{
            nums = "q";
        }

    }
    system("clear");
    return 0;
}