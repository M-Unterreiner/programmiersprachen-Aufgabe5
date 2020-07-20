#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <iostream>

#include "box.hpp"
#include "sphere.hpp"
#include "shape.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

TEST_CASE("area_volume", "[5.2]")
{
  //box
  glm::vec3 min_1{50.0, 50.0, 50.0};
  glm::vec3 min_2{3.0, 4.0, 5.0};
  glm::vec3 max_1{100.0, 100.0, 100.0};
  glm::vec3 max_2{-8.0, -8.0, -8.0};
  Box b1{min_1, max_1};
  Box b2{min_2, max_2};

  REQUIRE(b1.area() == Approx(15000.0));
  REQUIRE(b2.area() == Approx(862.0));
  REQUIRE(b1.volume() == Approx(125000.0));
  REQUIRE(b2.volume() == Approx(-1716.0));

  //Sphere
  double radius{6.4};
  Color color{0.0f, 0.0f, 1.0f};

  Sphere s1{min_1, radius};
  Sphere s2{min_1, radius, color, "Sphere 1" };

  REQUIRE(s1.area() == Approx(514.7185403641517242));
  REQUIRE(s1.volume() == Approx(1098.0662194435));
}

TEST_CASE("print", "[shape, box, sphere]")
{
  Color color{1.0f, 0.0f, 0.0f};

  glm::vec3 min_1{20.0, 20.4, 30.0};
  glm::vec3 max_1{60.0, 85.3, 33.7};
  Box b1{min_1, max_1};
  Box b2{min_1, max_1, "Box", color};

  glm::vec3 center{50.0, 50.0, 50.0};
  double radius{15.8};
  Sphere s1{center, radius};
  Sphere s2{center, radius, color, "Sphere 2"};
}
