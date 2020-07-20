#include "sphere.hpp"


  // Sphere(glm::vec3 const& center, double const& radius);

  Sphere::Sphere(glm::vec3 const& center, double const& radius):
  Shape(),
  center_(center),
  radius_(radius) {};

  // Sphere::Sphere(glm::vec3 const& center, double const& radius, Color const& color):

  Sphere::Sphere(glm::vec3 const& center, double const& radius, Color const& color, std::string name):
  Shape(name, color),
  center_(center),
  radius_(radius) {};