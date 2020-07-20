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

  Sphere::~Sphere()
  {
    std::cout << "Sphere destruktored";
  };

  double Sphere::area() const 
  {
    return 4 * M_PI * pow(radius_, 2);
  }

  double Sphere::volume() const
  {
    return (4.0/3.0) * M_PI * pow(radius_, 3);
  }

  std::ostream& Sphere::print(std::ostream& os) const
  {
    Shape::print(os);
    return os << "Area: " << area() << "Volume: " << volume();
  }

// Nicht meine Idee!
bool Sphere::intersect (Ray ray, float& distance) const
{
  return glm::intersectRaySphere (ray.origin, ray.direction, center_, pow(radius_, 2), distance);
}