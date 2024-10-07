#ifndef MOVEABLE_H
#define MOVEABLE_H

class Moveable {
public:
    virtual void forward() = 0;   // Pure virtual function
    virtual void backward() = 0;  // Pure virtual function
    virtual ~Moveable();       // Virtual destructor
};

#endif // MOVEABLE_H
