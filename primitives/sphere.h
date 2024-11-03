#ifndef _SPHERE_H
#define _SPHERE_H

#include<hittable.h>

class Sphere : public Hittable
{
private:
    Point3 center;
    double radius;

public:
    Sphere(const Point3& center, double radius) : center(center), radius(std::fmax(0, radius)) {}

    bool hit(const Ray& r, double ray_tmin, double ray_tmax, HitRecord& rec) const override
    {
        Vec3 oc = center - r.origin();
        double a = r.direction().length_squared();
        double h = dot(r.direction(), oc);
        double c = oc.length_squared();

        double discriminant = h*h - a*c;
        if (discriminant < 0.0)
        {
            return false;
        }

        double sqrtd = std::sqrt(discriminant);
        
        double root = (h - sqrtd)/a;
        if (root >= ray_tmax || root <= ray_tmin)
        {
            root = (h + sqrtd)/a;
            if (root > ray_tmax || root < ray_tmin)
            {
                return false;
            }
        }

        rec.t = root;
        rec.p = r.at(rec.t);
        rec.normal = (rec.p - center)/radius;
        
        return true;

    }
};

#endif