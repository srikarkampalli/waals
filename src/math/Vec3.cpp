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

std::ostream& operator<<(std::ostream& os, const Vec3& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}