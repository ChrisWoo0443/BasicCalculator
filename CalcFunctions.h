#ifndef _CalcFunctions_h_
#define _CalcFunctions_h_
#include <sstream>

using namespace std;

class CalcFunctions{
    private:
        string firstNum;
        string secNum;
        char oper;
        string answer;
        string input;
        string output;
        string equation;
        int checkPrev;

    public:
        CalcFunctions();
        void setFirst(string);
        void setOper(char);
        void setSec(string);
        void setAnswer(string);
        void setEquation(string);
        void check(int);
        string getAnswer();
        string getInput();
        


        void display();
        void prev();
        void line1();
        void line2();

        void operation();
};


#endif

