#include <iostream>

int Mult(int a, int b) {return a*b;}

double Div3(double a, double b, double c) {return a/b/c;}
   
int main()
{
    std::cout << Mult(10,3) << std::endl;
    std::cout << Div(5,2) << std::endl;

}
