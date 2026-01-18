#include <iostream>
#include <universal/physics.hpp>
#include <specs/hawk.hpp>
#include <components/engine.hpp>
#include <universal/maths.hpp>
#include <specs/plane.hpp>
#include <cstddef>

int main() {
	std::cout << "Starting programme... Initialising plane " << std::endl;
	std::cout << "Starting location coordinates: (0,0,0)" << "\n";

	specs::Plane <specs::Hawk> hawkPlane;
	auto currentposition = hawkPlane.getPosition();
	std::cout << "Current Position: (" << currentposition.x << ", " << currentposition.y << ", " << currentposition.z << ")\n";


    return 0;
}