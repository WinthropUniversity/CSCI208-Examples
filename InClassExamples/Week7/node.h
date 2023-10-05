#ifndef TRIANGLENODE_H_
#define TRIANGLENODE_H_

class TriangleNode {
public:
    int wiegandInteger;  // Useless public field used for example purposes

    // Constructors
    TriangleNode();
    TriangleNode(double inHeight, double inBase);
    
    // Accessors
    double GetHeight() const;
    double GetBase() const;
    TriangleNode *GetNext() const;

    void InsertAfter(TriangleNode *inNewNodeToInsert);
    void Print() const;

private:
    double height_;
    double base_;
    TriangleNode *next_;
};



#endif
