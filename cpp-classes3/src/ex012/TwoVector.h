/* W. H. Bell
** A vector in 2 dimensions
*/

#ifndef TWOVECTOR_H
#define TWOVECTOR_H

class TwoVector {
public:
  TwoVector(double x = 0., double y = 0.); // Constructor with default values 
  double resultant(void) const; // Resultant
  double angle(void) const; // Angle of vector in x-y plane
  void rotate(double theta); // Rotate the two vector about itself
  TwoVector operator+(const TwoVector& twoVector); // Addition
  TwoVector operator-(const TwoVector& twoVector); // Subtraction
  TwoVector& operator=(const TwoVector& twoVector); // Assignment
  double x(void) const { return m_x; } // Return the x component
  double y(void) const { return m_y; } // Return the y component

private:

  /* Components */
  double m_x;
  double m_y;
};

#endif
