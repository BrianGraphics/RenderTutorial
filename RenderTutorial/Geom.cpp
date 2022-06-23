#include "Geom.h"

void TGADrawLine(Point A, Point B, TGAColor color, TGAImage& image)
{
    float interval = 0.01f;
    for (float t = 0.0f; t < 1.0f; t += interval) {
        int x = A.x + (B.x - A.x) * t;
        int y = A.y + (B.y - A.y) * t;
        image.set(x, y, color);
    }
}