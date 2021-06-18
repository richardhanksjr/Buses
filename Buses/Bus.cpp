//
//  Bus.cpp
//  Buses
//
//  Created by Rich on 6/17/21.
//

#include "Bus.hpp"
#include <iostream>
#include "Seat.hpp"

Bus::Bus(int numSeats)
{
    this->numSeats = numSeats;
    for (int i=0; i < this->numSeats; i++){
//        this->seats.push_back(*(new Seat(*this)));
        this->seats.push_back(*(new Seat()));
    }
}
