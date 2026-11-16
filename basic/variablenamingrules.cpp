#include <iostream>
using namespace std;
int main(){
    //int x1=3;
    //cout<<x1;
    // int 1x=5;it is not allowed to start variable name with number
    // cout<<1x;
    //int x@=5; it is not allowed to use special character in variable name except _ and $.
    //cout<<x@;
    int _1 = 4;//it is allowed to start variable name with underscore
    cout<<_1;
  //  Here are all 32 keywords not allowed to use as variable name:
//• Row 1: auto, double, int, break, extern, enum, unsigned, while
//• Row 2: case, sizeof, for, const, static, long, continue, float
//• Row 3: else, signed, do, short, switch, char, volatile, default
//• Row 4: goto, struct, if, union, return, void, register, typedef
//int x,y = 3,6;it is not allowed to declare multiple variables in one line with different values.
//cout<<x,y;we can use int  x=3,y=6; it is allowed to declare multiple variables in one line with different values.
return 0;
}