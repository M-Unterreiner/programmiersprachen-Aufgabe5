// sphere.hpp
#ifndef SPHERE_HPP
#define SPEHRE_HPP
#include <glm/vec3.hpp>

#include "shape.hpp"
#include "color.hpp"


class Sphere: public Shape
{
  public:
  Sphere(glm::vec3 const& center, double const& radius);
  Sphere(glm::vec3 const& center, double const& radius, Color const& color);
  Sphere(glm::vec3 const& center, double const& radius, Color const& color, std::string name);

  double area() const override;
  double volume() const override; 

  private:
  double radius_;
  glm::vec3 center_;
};

#endif