
#include <iostream>
#include <string>

#include <glm/vec3.hpp>
#include "shape.hpp"
#include "box.hpp"



  Box::Box(glm::vec3 const& minimum, glm::vec3 const& maximum):
  Shape(),
  minimum_(minimum),
  maximum_(maximum)
  {};
  

  Box::Box(glm::vec3 const& minimum, glm::vec3 const& maximum, std::string name, Color color):
  Shape(name, color),
  minimum_(minimum),
  maximum_(maximum)
  {};

  double Box::area() const
  {
    double x {maximum_.x - minimum_.x};
    double y {maximum_.y - minimum_.y};
    double z {maximum_.z - minimum_.z};

    return 2*x*y + 2*x*z + 2*y*z;
  }

  double Box::volume() const
  {
    double x = maximum_.x - minimum_.x;
    double y = maximum_.y - minimum_.y;
    double z = maximum_.z - minimum_.z;

    return x*y*z;
  }


  std::ostream& Box::print(std::ostream &os) const override
  {
    Shape::print(os);
    return os << "Area: " area() << "Volume: " << volume() << "Minumum: " + minimum_.x;
  }
