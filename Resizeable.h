#ifndef RESIZEABLE_H
#define RESIZEABLE_H

class Resizeable {
public:
    virtual void enlarge(int n) = 0;  // Pure virtual function
    virtual void shrink(int n) = 0;   // Pure virtual function
    virtual ~Resizeable();        // Virtual destructor
};

#endif // RESIZEABLE_H
