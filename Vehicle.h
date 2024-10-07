#ifndef VEHICLE_H
#define VEHICLE_H

#include "Moveable.h"
#include "Resizeable.h"
#include <string>

class Vehicle : public Moveable, public Resizeable {
protected:
    std::string name;  // Protected member variable

public:
    Vehicle(const std::string& name); // Constructor
    virtual void move() = 0;  // Pure virtual function
    virtual ~Vehicle();     // Virtual destructor
};

#endif // VEHICLE_H