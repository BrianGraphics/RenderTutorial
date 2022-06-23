#include <iostream>
#include <string>

#include "Everything.h"
#include "Geom.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);
const int defaultAxis = 50;



int main(int argc, char** argv) {
    TGAImage image(100, 100, TGAImage::RGB);
    //if (argc > 1) 
    //    image.set( std::stoi(argv[1]) , std::stoi(argv[2]),  red);
    //else
    //    image.set(defaultAxis, defaultAxis, red);

    Point A(10.0f, 10.0f);
    Point B(90.0f, 90.0f);
    TGADrawLine(A, B, red, image);
        
    image.flip_vertically(); // i want to have the origin at the left bottom corner of the image
    image.write_tga_file("output.tga");
    return 0;
}

