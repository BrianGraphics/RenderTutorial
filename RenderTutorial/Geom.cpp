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

void TGADrawLine2(Point A, Point B, TGAColor color, TGAImage& image)
{
    for (int x = A.x; x <= B.x; x++) {
        float t = (x - A.x) / (float)(B.x - A.x);
        int y = A.y * (1.0f - t) + B.y * t;
        image.set(x, y, color);
    }
}