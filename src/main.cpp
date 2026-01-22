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

	float deltaTime = 1.0f; // Time step in seconds



	for (int i = 0; i < 100; i++) {
		// Overloaded the += operator in Vector3 to make this cleaner. 
		auto position = hawkPlane.getPosition();
		auto velocity = hawkPlane.getVelocity();
		auto acceleration = hawkPlane.getAcceleration();

		velocity += acceleration * deltaTime;

		position += velocity * deltaTime;

		hawkPlane.setPosition(position);
		hawkPlane.setVelocity(velocity);

		std::cout << "New Position: (" << position.x << ", " << position.y << ", " << position.z << ")\n";


	}
    return 0;
}
