#include <iostream>
#include <string>
#include "shape.hpp"
#include "color.hpp"

Shape::Shape():
name_{"Nameless shape"},
color_{Color{30.0f, 30.0f, 30.0f}}
{

}


Shape::Shape(std::string name, Color color):
name_{"Nameless shape"},
color_{color}
{

}