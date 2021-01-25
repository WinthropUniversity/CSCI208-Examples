#ifndef SQUARE_
#define SQUARE_

class Square {
private:
  double length_;

public:
  Square();
  Square(double inLength);

  void SetLength(double inLength);
  double GetLength(double inLength) const;

  double GetPerimeter() const;
};

#endif
