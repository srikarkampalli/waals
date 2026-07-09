#ifndef QUATERNION_H
#define QUATERNION_H

#include "Vec3.h"
#include <iostream>
#include <cmath>

struct Quaternion{
  // define starting coefficients based on what part of the quaternion they correspond to
  float r, i, j, k;

  Quaternion(){
    r = 1.0f;
    i = 0.0f;
    j = 0.0f;
    k = 0.0f;
  }

  Quaternion(float r_input, float i_input, float j_input, float k_input){
    r = r_input;
    i = i_input;
    j = j_input;
    k = k_input;
  }

  static Quaternion from_axis_angle(const Vec3& axis, float radians);
  
  float norm() const;
  Quaternion normalize() const;

  Quaternion conjugate() const;

  Quaternion operator*(const Quaternion& q) const;
  Vec3 rotate_vector(const Vec3& v) const;

  friend std::ostream& operator << (std::ostream& os, const Quaternion& v);
};

#endif