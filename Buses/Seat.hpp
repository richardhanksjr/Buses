//
//  Seat.hpp
//  Buses
//
//  Created by Rich on 6/17/21.
//

#ifndef Seat_hpp
#define Seat_hpp

#include <stdio.h>
#include "Bus.hpp"
#include "User.hpp"

class Seat
{
public:
    Seat() = default;
    Seat(Bus& bus){this->bus = bus;}
    Bus bus;
};

#endif /* Seat_hpp */
