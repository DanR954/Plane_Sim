#include <iostream>
#include <universal/physics.hpp>
#include <specs/hawk.hpp>
#include <components/engine.hpp>
#include <universal/maths.hpp>
#include <specs/plane.hpp>
#include <cstddef>

int main() {
	std::cout << "Starting programme... Initialising plane " << "\n";
	std::cout << "Starting location coordinates: (0,0,0)" << "\n";

	specs::Plane <specs::Hawk> hawkPlane;
	auto currentposition = hawkPlane.getPosition();
	std::cout << "Current Position: (" << currentposition.x << ", " << currentposition.y << ", " << currentposition.z << ")\n";

	hawkPlane.setPosition(maths::Vector3(0.0f, 0.0f, 10.0f));

	currentposition = hawkPlane.getPosition();
	std::cout << "Updated position of the hawk plane: (" << currentposition.x << ", " << currentposition.y << ", " << currentposition.z << ")\n";

    return 0;
}