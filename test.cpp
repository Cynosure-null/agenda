#include <iostream>


int main()
{
    double raw_x = 64;
    double* ptr_x = &raw_x;
    std::cout<<ptr_x<<"\n";
    raw_x = raw_x++
    std::cout<<ptr_x<<"\n";
    std::cout<<"Hello World";

    return 0;
}
