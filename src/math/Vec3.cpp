// include the header file for Vec3
#include "Vec3.h"

// create the functions for addition and subtraction

Vec3 Vec3::operator+(const Vec3& v) const {
  return Vec3(
    x + v.x,
    y + v.y,
    z + v.z
  );
}

Vec3 Vec3::operator-(const Vec3& v) const {
  return Vec3(
    x - v.x,
    y - v.y,
    z - v.z
  );
}

// define scalar multiplication and division

Vec3 Vec3::operator*(float scalar) const {
  return Vec3(
    x*scalar,
    y*scalar,
    z*scalar
  );
}

Vec3 Vec3::operator/(float scalar) const {
  return Vec3(
    x/scalar,
    y/scalar,
    z/scalar
  );
}

// create logic for dot and cross products

float Vec3::dot(const Vec3& v) const{
  return x * v.x + y * v.y + z * v.z;
}

Vec3 Vec3::cross(const Vec3& v) const{
  return Vec3(
    (y * v.z) - (z * v.y),
    (z * v.x) - (x * v.z),
    (x * v.y) - (y * v.x)
  );
}

// euclidean length and normalization

float Vec3::length() const{
  return std::sqrt(x*x + y*y + z*z);
}

Vec3 Vec3::normalize() const{
  float l = length();
  if (l > 0.0f){
    return Vec3(x/l, y/l, z/l);
  }

  return Vec3(0.0f, 0.0f, 0.0f);
}

// define element-wise LERP

Vec3 Vec3::lerp(Vec3 &v, float t) const{
  return Vec3(
    x + ((v.x-x)*t),
    y + ((v.y-y)*t),
    z + ((v.z-z)*t)
  );
}

// create logic for outputting vec3

std::ostream& operator<<(std::ostream& os, const Vec3& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}