#ifndef TRIANGLENODE_H_
#define TRIANGLENODE_H_

class TriangleNode {
public:
    TriangleNode();
    TriangleNode(double inHeight, double inBase);
    
    double GetHeight() const;
    double GetBase() const;
    TriangleNode *GetNext() const;

private:
    double height_;
    double base_;
    TriangleNode *next_;
};



#endif
