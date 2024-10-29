#ifndef _COLOR_H
#define _COLOR_H

#include <vec.h>

using Color = Vec3;

void write_color(std::ostream& out, const Color& pixel_color);

#endif