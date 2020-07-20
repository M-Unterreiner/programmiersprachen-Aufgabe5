#include <iostream>
#include <string>
#include "shape.hpp"
#include "color.hpp"

Shape::Shape():
name_{"Nameless shape"},
color_{Color{30.0f, 30.0f, 30.0f}}
{

}


Shape::Shape(std::string const& name, Color const& color):
name_{"Nameless shape"},
color_{color}
{
}

Shape::~Shape()
{
  std::cout << "Shape destructed";
}

std::ostream &Shape::print(std::ostream &os) const
{
  // Wieso funktioniert die Ausgabe mit color_ nicht?
  // no type named ‘type’ in ‘struct std::enable_if<false, std::basic_ostream<char>&>’
  return os << "Shape name: " << name_ << " , " << "Color: "; // << color_;
}

// Freie Funktion! Kein direkter Zugriff auf Membervariablen
std::ostream& operator << (std::ostream& os, Shape const& s)
{
  return s.print(os);
}