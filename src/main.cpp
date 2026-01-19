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

	float speed = 50.0f; // Speed in m/s
	float gravity = physics::gravity; // Gravity in m/s^2

	float deltaTime = 0.016f; // Time step in seconds (around 60 Hz)

	auto movement_z = speed * deltaTime;

	for (int i = 0; i < 100; i++) {

		auto position = hawkPlane.getPosition();
		 
		// Overloaded the += operator in Vector3 to make this cleaner. 
		//position += maths::Vector3(0.0f, 0.0f, movement);
		auto velocity = hawkPlane.getVelocity();
		auto acceleration = hawkPlane.getAcceleration();

		acceleration.z = gravity; // Apply gravity in the negative z direction

		velocity.z = movement_z;

		velocity += acceleration * deltaTime;

		position += velocity;

		hawkPlane.setPosition(position);
		position = hawkPlane.getPosition();

		std::cout << "New Position: (" << position.x << ", " << position.y << ", " << position.z << ")\n";


	}
    return 0;
}