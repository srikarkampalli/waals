// include both quaternion and vec3 files for methods
#include "Quaternion.h"
#include "Vec3.h"

// create quaternion from axis angle
Quaternion Quaternion::from_axis_angle(const Vec3& axis, float radians){
  Vec3 norm_axis = axis.normalize();

  float half_angle = radians * 0.5f;
  float sin_half = std::sin(half_angle);

  return Quaternion(
    std::cos(half_angle),
    norm_axis.x * sin_half,
    norm_axis.y * sin_half,
    norm_axis.z * sin_half
  );
}

// normalizing a quaternion
float Quaternion::norm() const{
  return std::sqrt(r * r + i * i + j * j + k * k);
}

Quaternion Quaternion::normalize() const{
  float l = norm();
  
  if (l > 0.0f){
    return Quaternion(r/l, i/l, j/l, k/l);
  }

  return Quaternion(1.0f, 0.0f, 0.0f, 0.0f);
}

// Create the conjugate of a quaternion
Quaternion Quaternion::conjugate() const{
  return Quaternion(r, -i, -j, -k);
}

// definition of multiplication
Quaternion Quaternion::operator*(const Quaternion& q) const{
  return Quaternion(
        r * q.r - i * q.i - j * q.j - k * q.k,
        r * q.i + i * q.r + j * q.k - k * q.j,
        r * q.j - i * q.k + j * q.r + k * q.i,
        r * q.k + i * q.j - j * q.i + k * q.r
    );
}

// rotate a vector
Vec3 Quaternion::rotate_vector(const Vec3& v) const{
  Quaternion p(0.0f, v.x, v.y, v.z);

  // use the overloaded "*" operator!
  
  Quaternion result = (*this) * p * this->conjugate(); 
  return Vec3(result.i, result.j, result.k);
}