#ifndef COLOR_HPP
#define COLOR_HPP

struct Color
{
  float r_;
  float g_;
  float b_;

  Color (){
    r_ = 0.0f;
    g_ = 0.0f;
    b_ = 0.0f;
  }

  Color  (float r, float g, float b) {
    r_ = r;
    g_ = g;
    b_ = b;
  }
};

#endif
