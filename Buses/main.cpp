//
//  main.cpp
//  Buses
//
//  Created by Rich on 6/17/21.
//

#include <iostream>
#include "Bus.hpp"

using namespace std;

void createANewBus();

int main(int argc, const char * argv[]) {
    
    int selectedMenuOption;
    
    while(true)
    {
        cout << "Main Menu" << endl;
        cout << "_________" << endl;
        cout << "\n" << endl;
        
        cout << "1. Create a New Bus" << endl;
        cout << "2. View All Buses" << endl;
        cout << "3. Create a User" << endl;
        cout << "4. Assign a Seat" << endl;
        cout << "5. View User's Seat Reservations" << endl;
        cout << "6. Exit" << endl;
        cout << "\n" << endl;
        
        cin >> selectedMenuOption;
        
        switch (selectedMenuOption) {
            case 1:
                createANewBus();
                break;
                
            default:
                break;
        }
        
    }

    
    return 0;
}


void createANewBus()
{
    int numSeats;
    cout << "Enter the number of seats" << endl;
    cin >> numSeats;
    Bus *newBus = new Bus(numSeats);
    cout << "Num seats is: " << newBus->numSeats << endl;
}
