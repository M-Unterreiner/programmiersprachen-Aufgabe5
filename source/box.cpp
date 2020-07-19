
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