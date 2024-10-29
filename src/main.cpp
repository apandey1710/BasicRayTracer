#include <iostream>
#include <vec.h>

int main() 
{
    Vec3 v1(1, 2, 3);

    std::cout << v1 << std::endl;
    std::cout << v1.length() << std::endl;

    return 0;
}