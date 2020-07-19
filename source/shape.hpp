#ifndef SHAPE_HPP
#define SHAPE_HPP

// Shape als abstrakte Basisklasse 
#include <string>
#include <iostream>
#include "color.hpp"

class Shape
{
  private:
  std::string name_;
  Color color_;

  public:
  Shape();
  Shape(std::string name, Color color);
  virtual double area()   const=0;
  virtual double volume() const=0;

};

#endif