#include <iostream>
void f(int x, double y) {
   std::cout << "f(int, double)";
}

void f(double x, int y) {
   std::cout << "f(double, int)";
}

int main ()
{
    f(1,2);
}
//error: call of overloaded 'f(int,int)' is ambiguous
