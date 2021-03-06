#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <glm/vec3.hpp>
#include <glm/glm.hpp>
#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/intersect.hpp>

#include "box.hpp"
#include "sphere.hpp"
#include "shape.hpp"
#include "color.hpp"

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

TEST_CASE("intersect_ray_sphere", "[intersect]")
{
  //Ray
  glm::vec3 ray_origin{0.0f, 0.0f, 0.0f};
  //ray direction has to be normalized !
  //you can use:
  // v = glm::normalize(some_vector)
  glm::vec3 ray_direction{0.0f, 0.0f, 1.0f};

  //Sphere
  glm::vec3 sphere_center{0.0f, 0.0f, 5.0f};
  float sphere_radius{1.0f};

  float distance = 0.0f;
  auto result = glm::intersectRaySphere(
      ray_origin, ray_direction,
      sphere_center,
      sphere_radius * sphere_radius, //squared radius !!!
      distance);

  REQUIRE(distance == Approx(4.0f));
}


TEST_CASE("Constructor, Destructor, 5.8", "[Was muss hier eigentlich rein?]")
{
  Color red{255, 0, 0};
  glm::vec3 position{0.0f, 0.0f, 0.0f};
  Sphere* s1 = new Sphere{position, 1.2f, red, " sphere0 "};
  Shape*  s2 = new Sphere{position, 1.2f, red, "sphere 1"};

  s1->print(std ::cout);
  s2->print(std ::cout);

  delete s1;
  delete s2;
}