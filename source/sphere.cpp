#include "sphere.hpp"


  Sphere::Sphere(glm::vec3 const& center, double const& radius):
  Shape(),
  center_(center),
  radius_(radius) 
  {};

  Sphere::Sphere(glm::vec3 const& center, double const& radius, Color const& color, std::string name):
  Shape(name, color),
  center_(center),
  radius_(radius) 
  {};

  double Sphere::area() const 
  {
    return 4 * M_PI * pow(radius_, 2);
  }

  double Sphere::volume() const
  {
    return (4.0/3.0) * M_PI * pow(radius_, 3);
  }

