// Area of a Circle
// area.c
// https://ict.senecacollege.ca/~ipc144/pages/content/input.html
// NOTE: not using scanf currently due to https://github.com/emscripten-core/emscripten/issues/9183

#include <stdio.h>                // for printf, scanf

int main(void)
{
    const float pi = 3.14159f;   // pi is a constant float 
    const float radius = 2.3f;   // radius is a float
    float area;                  // area is a float

    area = pi * radius * radius; // calculate area from radius

    printf("Area = %f\n", area); // copy area to standard output

    return 0;
}
