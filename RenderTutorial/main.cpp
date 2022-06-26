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

    // define two points
    Point A(10.0f, 10.0f);
    Point B(90.0f, 90.0f);

    // draw lines between two points
    //TGADrawLine(A, B, red, image);
    //TGADrawLine(B, A, white, image);

    A.x = 13; A.y = 20;
    B.x = 80; B.y = 40;
    TGADrawLine2(A, B, white, image);

    A.x = 20; A.y = 13;
    B.x = 40; B.y = 80; 
    TGADrawLine2(A, B, red,   image);

    A.x = 80; A.y = 40;
    B.x = 13; B.y = 20;
    TGADrawLine2(A, B, red,   image);

    // set origin at the left bottom
    image.flip_vertically();

    // write to *.tga file
    image.write_tga_file("output.tga");
    return 0;
}

