#include <iostream>
#include <vec.h>

int main() 
{
    Vec3 v1(1, 2, 3);
    Vec3 v2(4, 5, 6);
    Vec3 v3 = v1 + v2;
    std::cout << v3 << std::endl;
    return 0;
}