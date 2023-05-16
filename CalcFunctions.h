#ifndef _CalcFunctions_h_
#define _CalcFunctions_h_
#include <sstream>


class CalcFunctions{

    private:
        double firstNum;
        double secNum;
        char oper;

    public:
        CalcFunctions();


        void setFirst(double);
        void setOper(char);
        void setSec(double);

        void display(); //display the numbers on the screen
        void screen();

};


#endif

