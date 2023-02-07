#include <iostream>

int Mult(int a, int b) {return a*b;}

double Div(double a, double b) {return a/b;}
   
int main()
{
    std::cout << "Spatola" << std::endl;
    std::cout << Mult(10,3) << std::endl;
    std::cout << Div(5,2) << std::endl;

}
