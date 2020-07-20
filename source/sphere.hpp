// sphere.hpp
#ifndef SPHERE_HPP
#define SPEHRE_HPP
#include <glm/vec3.hpp>
#include <glm/gtx/intersect.hpp>
#include <math.h>

#include "shape.hpp"
#include "color.hpp"
#include "ray.hpp"


class Sphere: public Shape
{
  public:
  Sphere(glm::vec3 const& center, double const& radius);
  Sphere(glm::vec3 const& center, double const& radius, Color const& color);
  Sphere(glm::vec3 const& center, double const& radius, Color const& color, std::string name);

  double area() const override;
  double volume() const override; 
  std::ostream& print(std::ostream& os) const override;

  bool intersect (Ray ray, float& distance) const;

  private:
  double radius_;
  glm::vec3 center_;
};


#endif