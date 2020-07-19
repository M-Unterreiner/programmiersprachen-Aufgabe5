#include "shape.hpp"
#include "color.hpp"
#include <iostream>
#include <string>

Shape::Shape():
name_{"Nameless shape"},
color_{Color{30.0f, 30.0f, 30.0f}}
{

}


Shape::Shape(std::string name, Color color):
name_{name},
color_{color}
{

}