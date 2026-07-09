#ifndef VEC3_H
#define VEC3_H

#include <iostream>
#include <cmath>

struct Vec3{
  float x, y, z;

  // default constructor
  Vec3(){
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
  }

  // constructor with parameters passed in
  Vec3(float x_input, float y_input, float z_input){
    x = x_input;
    y = y_input;
    z = z_input;
  }

  // similarly to the logic for vec2, the operators will be overloaded for vec3

  Vec3 operator+(const Vec3 &v) const;
  Vec3 operator-(const Vec3 &v) const;
  Vec3 operator*(float scalar) const;
  Vec3 operator/(float scalar) const;

  // create dot and cross products

  float dot(const Vec3& v) const;
  Vec3 cross(const Vec3& v) const;

  // create length and normalization functions
  float length() const;
  Vec3 normalize() const;

  // declare lerp
  Vec3 lerp(Vec3 &v, float t) const;

  // printing
  friend std::ostream& operator << (std::ostream& os, const Vec3& v);
};

#endif