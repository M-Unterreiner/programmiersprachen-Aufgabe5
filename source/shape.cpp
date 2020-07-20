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

std::ostream &Shape::print(std::ostream &os) const
{
  return os << "Shape: " << "\n" << "Name: " << name_ << ", \n"; // << "Color: " << color_;
}

// Freie Funktion! Kein direkter Zugriff auf Membervariablen
std::ostream& operator << (std::ostream& os, Shape const& s)
{
  return s.print(os); 
}