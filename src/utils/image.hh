//
// Created by mehdi on 11/02/2020.
//

#ifndef RAYTRACER_IMAGE_HH
#define RAYTRACER_IMAGE_HH

#include <vector>
#include <iostream>
#include <fstream>
#include <string>

#include "color.hh"

class Image {
public:
    Image(int width, int height, std::vector<std::vector<ColorRGB>> pixels);
    void ppm_creator(std::string filename);
private:
    size_t width_;
    size_t height_;
    std::vector<std::vector<ColorRGB>> pixels_;
};


#endif //RAYTRACER_IMAGE_HH
