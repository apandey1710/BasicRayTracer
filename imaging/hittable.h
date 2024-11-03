#ifndef _HITTABLE_H
#define _HITTABLE_H


#include <vec.h>
#include <ray.h>

struct HitRecord
{
    Point3 p;
    Vec3 normal;
    double t;
};

class Hittable
{
public:
    virtual ~Hittable() = default;

    virtual bool hit(const Ray& r, double ray_tmin, double ray_tmax, HitRecord& rec) const = 0;

};

#endif