#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int seats;  // Private member variable

public:
    Car(const std::string& name, int seats); // Constructor
    ~Car(); // Destructor
    void turn();   // Turn function
};

#endif // CAR_H
