#include "Vec4.h"

// operator overrides for both vector-vector and vector-scalar functions
Vec4 Vec4::operator+(const Vec4 &v) const{
  return Vec4(
    x + v.x,
    y + v.y,
    z + v.z,
    w + v.w
  );
}

Vec4 Vec4::operator-(const Vec4 &v) const{
  return Vec4(
    x - v.x,
    y - v.y,
    z - v.z,
    w - v.w
  );
}

Vec4 Vec4::operator*(float scalar) const{
  return Vec4(
    x*scalar,
    y*scalar,
    z*scalar,
    w*scalar
  );
}

Vec4 Vec4::operator/(float scalar) const{
  return Vec4(
    x/scalar,
    y/scalar,
    z/scalar,
    w/scalar
  );
}

// define simple dot product
float Vec4::dot(const Vec4& v) const{
  return x * v.x + y * v.y + z * v.z + w * v.w;
}

// implement code for the length and normalization functions
float Vec4::length() const{
  return std::sqrt(x*x+y*y+z*z+w*w);
}

Vec4 Vec4::normalize() const{
  float l = length();

  if (l > 0.0f){
    return Vec4(x/l, y/l, z/l, w/l);
  }

  return Vec4(0.0f, 0.0f, 0.0f, 0.0f);
}

// define element-wise lerp
Vec4 Vec4::lerp(Vec4 &v, float t) const{
  return Vec4(
    x + ((v.x-x)*t),
    y + ((v.y-y)*t),
    z + ((v.z-z)*t),
    w + ((v.w-w)*t)
  );
}

// implement printing
std::ostream& operator<<(std::ostream& os, const Vec4& v){
  os << "(" << v.x << ", " << v.y << ", " << v.z << ", " << v.w, ")";
    return os;
}