#ifndef HAWK_HPP
#define HAWK_HPP


#include <cstdint>

// Specifications for the Hawk aircraft
namespace specs {
    struct Hawk {
		// Uses static sonstexpr for compile time constant and to be put into flash memory
        static constexpr uint16_t CrewCapacity = 2;
        static constexpr float Wingspan = 9.94; // Unit in Meters (32 ft 7 in)
        static constexpr float Length = 12.43; // Unit in Meters (40 ft 9 in)
        static constexpr float Height = 3.98; // Unit in Meters (13 ft 1 in)
        static constexpr float WingArea = 16.70; // Unit in M**2 (179.64 ft**2)
        static constexpr float EmptyWeight = 4480; // Unit in kg (9,880lb)
        static constexpr float UsefulLoad = 3000; //Unit in kg (6600)
    };
};



#endif // HAWK_HPP