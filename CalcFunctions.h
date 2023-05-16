#ifndef _CalcFunctions_h_
#define _CalcFunctions_h_
#include <sstream>


class CalcFunctions{

    private:
        double firstNum;
        double secNum;
        char oper;
        double answer;

    public:
        CalcFunctions();


        void setFirst(double);
        void setOper(char);
        void setSec(double);

        void display(); //display the numbers on the screen
        void line1();
        void line2();

        void operations();
};


#endif

