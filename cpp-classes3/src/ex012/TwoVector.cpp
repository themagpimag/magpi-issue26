#include "TwoVector.h"
#include <cmath>

TwoVector::TwoVector(double x, double y): 
  m_x(x),
  m_y(y) {
}

double TwoVector::resultant(void) const {
  double r = std::pow(m_x,2) + std::pow(m_y,2);
  if(r > 0.) r = std::sqrt(r);
  return r;
}

double TwoVector::angle(void) const {
  double r = resultant();
  if(r <= 0.) return 0.;
  return std::acos(m_x/r); // angle in radians
}

void TwoVector::rotate(double theta) {
  double x = m_x, y = m_y; // Store the current values;
  m_x = x*std::cos(theta) - y*std::sin(theta);
  m_y = x*std::sin(theta) + y*std::cos(theta);
}

TwoVector TwoVector::operator+(const TwoVector& twoVector) {
  m_x += twoVector.m_x;
  m_y += twoVector.m_y;
}

TwoVector TwoVector::operator-(const TwoVector& twoVector) {
  m_x -= twoVector.m_x;
  m_y -= twoVector.m_y;
}

TwoVector& TwoVector::operator=(const TwoVector& twoVector) {
  m_x = twoVector.m_x;
  m_y = twoVector.m_y;
}

