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

    public:
        CalcFunctions();
        void setFirst(string);
        void setOper(char);
        void setSec(string);

        void display();
        void line1();
        void line2();

        void operation();

};


#endif

