#include <iostream>
#include <color.h>
#include <ray.h>

Color ray_color(const Ray& r)
{
    Vec3 unit_direction = unit_vector(r.direction());
    auto a = 0.5*(unit_direction.y() + 1.0);

    return (1.0 - a) * Color(0.5, 0.7, 1.0) + a * Color(1.0, 1.0, 1.0);
}

int main() 
{
    double aspect_ratio = 16.0 / 9.0;
    int image_width = 400;

    // Calculate the height of the image based on the aspect ratio
    int image_height = static_cast<int>(image_width / aspect_ratio);
    image_height = (image_height > 0) ? image_height : 1;

    double focal_length = 1.0;
    double viewport_height = 2.0;
    double viewport_width = viewport_height * double(image_width) / image_height;
    Point3 camera_center(0.0, 0.0, 0.0);

    Vec3 viewport_u = Vec3(viewport_width, 0.0, 0.0);
    Vec3 viewport_v = Vec3(0.0, viewport_height, 0.0);

    Vec3 pixel_delta_u = viewport_u / double(image_width);
    Vec3 pixel_delta_v = viewport_v / double(image_height);

    Vec3 top_left_corner = camera_center - viewport_u/2 - viewport_v/2 - Vec3(0, 0, focal_length);
    Vec3 pixel_00_loc = top_left_corner + (pixel_delta_u + pixel_delta_v)/2.0;

    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for(int j = 0; j < image_height; j++)
    {
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for(int i = 0; i < image_width; i++)
        {
            Vec3 pixel_center = pixel_00_loc + i * pixel_delta_u + j * pixel_delta_v;
            auto ray_direction = pixel_center - camera_center;
            Ray r(camera_center, ray_direction);

            Color pixel_color = ray_color(r);
            write_color(std::cout, pixel_color);
        }
    }

    std::clog << "Done!\n";

    return 0;
}