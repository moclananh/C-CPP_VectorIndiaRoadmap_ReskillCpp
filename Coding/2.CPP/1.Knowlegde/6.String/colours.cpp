#include<iostream>
using namespace std;
main()
{
cout << "\033[45;35;4;1m welcome to c++ " << endl;
cout << "\033[32;46m good eveng all " << endl;
cout << "\033[35;41m bye " << endl;
cout << "\033[0m " ;  // reset colour code use 0
cout << "reset done "<< endl;

}
//to enable the colour code use escape sequence \033
// to strat colour codeing use [
//use colour code(total 8 standard colours)
//to stop colour codeing use  m
//0 reset
//4 underline
//1 bold letters
