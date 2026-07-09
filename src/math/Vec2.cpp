// include the header for future logic implentation
#include "Vec2.h"

// Implement the logic for vector-wise addition and substraction

Vec2 Vec2::operator+(const Vec2& v) const {
  return Vec2(x + v.x, y + v.y);
}

Vec2 Vec2::operator-(const Vec2& v) const {
  return Vec2(x - v.x, y - v.y);
}

// Use element-wise multiplication and division for scalar multiplication and division
Vec2 Vec2::operator*(float scalar) const {
  return Vec2(x*scalar, y*scalar);
}

Vec2 Vec2::operator/(float scalar) const {
  return Vec2(x/scalar, y/scalar);
}

// using the definition of dot and cross product for 2d vector, implement logic
float Vec2::dot(const Vec2& v) const{
  return x * v.x + y * v.y;
}

float Vec2::cross(const Vec2& v) const{
  return x * v.y - y * v.x;
}

// create a length function for future normalization
float Vec2::length() const{
  return std::sqrt(x * x + y * y);
}

// implement logic for normalization - divide x and y by the length element-wise
Vec2 Vec2::normalize() const{
  float l = length();
  if (l > 0.0f){
    return Vec2(x/l, y/l);
  }
  
  return Vec2(0.0f, 0.0f);
}

// logic for printing
std::ostream& operator<<(std::ostream& os, const Vec2& v) {
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}