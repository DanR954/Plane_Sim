#ifndef PLANE_HPP
#define PLANE_HPP

#include <universal/maths.hpp>
#include <components/fuel_tank.hpp>

// Look at using bit masks for some properties to save memory. For example, landing gear status, engine status, etc.
const uint8_t ENGINE_BIT = (1 << 0); // Shifts 1 to bit 1

namespace specs {
	template <typename T> 
class Plane
	{
	private:
		uint16_t plane_status = 0;
		// Physical properties
		maths::Vector3 position;
		maths::Vector3 velocity;
		maths::Vector3 acceleration;
		float mass;
		components::FuelTank fuelTank;

	public:
		Plane() : position(0.0f, 0.0f, 0.0f), velocity(0.0f, 0.0f, 0.0f), acceleration(0.0f, 0.0f, 0.0f), mass(T::EmptyWeight + T::UsefulLoad), fuelTank(500.0, 500.0) {}
		auto getPosition() const { return (position); }

		auto setPosition(const maths::Vector3& newPosition) { 
			position = newPosition;

			if (position.z < 0.0f) {
				position.z = 0.0f; // Clamps to minium of 0 as you can't have a position of 0 in this instance.
			}
		};
	
		auto getVelocity() const { return (velocity); }

		auto setVelocity(const maths::Vector3& newVelocity) { velocity = newVelocity; };

		auto getAcceleration() const { return (acceleration); }

		auto setAcceleration(const maths::Vector3& newAcceleration) { acceleration = newAcceleration; };

		auto setEngineOn() { plane_status |= ENGINE_BIT; }

		auto setEngineOff() { plane_status &= ~ENGINE_BIT; }

		auto getEngineStatus() const { return (plane_status & ENGINE_BIT); }
};
}


#endif // PLANE_HPP