#include "RightTriangle.h"

RightTriangle::RightTriangle() {
  base_ = 0.0;
  height_ = 0.0;
}

RightTriangle::RightTriangle(double inBase, double inHeight) {
  base_ = inBase;
  height_ = inHeight;
}

double RightTriangle::GetBase() {
    return base_;
}

double RightTriangle::GetHeight() {
    return height_;
}


void RightTriangle::SetBase(double inBase){
    if (inBase >= 0) base_ = inBase;
}

void RightTriangle::SetHeight(double inHeight){
    if (inHeight >= 0) height_ = inHeight;
}


double RightTriangle::GetArea() {
    return 0.5 * GetBase() * GetHeight();
}


void RightTriangle::PrintInfo(std::string inPrefix) {
    std::cout << inPrefix << "Triangle:"
              << "  Base=" << GetBase() 
              << "  Height=" << GetHeight() 
              << "  Area=" << GetArea() 
              << std::endl;
}