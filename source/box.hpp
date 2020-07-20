#ifndef BOX_HPP
#define BOX_HPP

#include <glm/vec3.hpp>
#include "shape.hpp"
#include "color.hpp"

class Box: public Shape
{
  public:
  Box();
  Box(glm::vec3 const& minimum, glm::vec3 const& maximum);
  Box(glm::vec3 const& minimum, glm::vec3 const& maximum, std::string name, Color color);
  ~Box();
  double area() const override;
  double volume() const override;

  std::ostream& print(std::ostream& os) const override;

  private:
  glm::vec3 minimum_;
  glm::vec3 maximum_;

};

#endif