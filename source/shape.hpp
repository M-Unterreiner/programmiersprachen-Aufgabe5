#ifndef SHAPE_HPP
#define SHAPE_HPP

// Shape als abstrakte Basisklasse 

class Shape
{
  private:
  // ??

  public:
  Shape();
  virtual double area()   const=0;
  virtual double volume() const=0;

}

#endif