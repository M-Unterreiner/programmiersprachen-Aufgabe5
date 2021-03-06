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
  Shape(std::string const& name, Color const& color);
  ~Shape();
  virtual double area()   const=0;
  virtual double volume() const=0;

  virtual std::ostream& print(std::ostream& os) const;

};

std::ostream& operator << (std::ostream& os, Shape const& s);

#endif