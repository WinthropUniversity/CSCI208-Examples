#include<square.h>

Square::Square() {
  SetLength(14.0);
}


Square::Square(double inLength) {
  SetLength(inLength);
}

void Square::SetLength(double inLength) {
  if (inLength < 0)
    length_ = -inLength;

  else
    length_ = inLength;
}


double Square::GetLength() const {
  return length_;
}


double Square::GetPerimeter() const {
  return 4.0 * length_;
}
