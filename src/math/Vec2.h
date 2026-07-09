#ifndef VEC2_H
#define VEC2_H

#include <iostream>
#include <cmath>

struct Vec2 { 
  float x, y;

  // default constructor for 2d vector
  Vec2(){
    x = 0.0f;
    y = 0.0f;
  }

  // constructor with parameters
  Vec2(float x_input, float y_input){
    x=x_input;
    y=y_input;
  }

  // overload the operators for addition, substraction, multiplication, and division
  // the first two are going to be between two vectors, while the last two will be between a scalar and a vector

  Vec2 operator+(const Vec2 &v) const;
  Vec2 operator-(const Vec2 &v) const;
  Vec2 operator*(float scalar) const;
  Vec2 operator/(float scalar) const;

  // define various methods such as dot/cross product
  float dot(const Vec2& v) const;
  float cross(const Vec2& v) const;
  float length() const;
  Vec2 normalize() const;

  // printing
  friend std::ostream& operator << (std::ostream& os, const Vec2& v);
};

#endif