#ifndef VEC4_H
#define VEC4_H

#include <iostream>
#include <cmath>

struct Vec4{
  float x, y, z, w;

  // constructors
  Vec4(){
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    w = 0.0f;
  }

  Vec4(float x_input, float y_input, float z_input, float w_input){
    x = x_input;
    y = y_input;
    z = z_input;
    w = w_input;
  }

  // define the operator overloads

  Vec4 operator+(const Vec4 &v) const;
  Vec4 operator-(const Vec4 &v) const;
  Vec4 operator*(float scalar) const;
  Vec4 operator/(float scalar) const;

  // define dot product (4D cross product is not needed)
  float dot(const Vec4& v) const;

  // make length and normalization functions
  float length() const;
  Vec4 normalize() const;

  // create lerp
  Vec4 lerp (Vec4 &v, float t) const;

  // friend function for printing
  friend std::ostream& operator << (std::ostream& os, const Vec4& v);
};

#endif