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

	float speed = 50.0f; // Speed in m/s
	float deltaTime = 0.016f; // Time step in seconds (around 60 Hz)

	auto movement = speed * deltaTime;


	for (int i = 0; i < 10; i++) {
		auto current_position = hawkPlane.getPosition();
		 
		// Next overload the += operator in Vector3 to make this cleaner. 
		auto new_position = current_position + maths::Vector3(0.0f, 0.0f, movement);

		hawkPlane.setPosition(new_position);

		std::cout << "New Position: (" << new_position.x << ", " << new_position.y << ", " << new_position.z << ")\n";
	}
    return 0;
}