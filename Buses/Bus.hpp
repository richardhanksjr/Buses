//
//  Bus.hpp
//  Buses
//
//  Created by Rich on 6/17/21.
//

#ifndef Bus_hpp
#define Bus_hpp

#include <stdio.h>
#include <vector>
//#include "Seat.hpp"

class Seat;
class Bus
{
public:
    std::vector<Seat> seats;
    int numSeats;
    Bus() = default;
    Bus(int numSeats);

};

#endif /* Bus_hpp */
