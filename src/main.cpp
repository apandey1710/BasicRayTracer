#include <iostream>
#include <color.h>

int main() 
{
    constexpr int image_width = 512;
    constexpr int image_height = 512;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j = 0; j < image_height; j++)
    {
        for(int i = 0; i < image_width; i++)
        {
            double r = double(i) / (image_width - 1);
            double g = double(j) / (image_height - 1);
            double b = 0.0;

            Color pixel_color(r, g, b);
            write_color(std::cout, pixel_color);
        }
    }

    return 0;
}