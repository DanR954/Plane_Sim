#ifndef PLANE_HPP
#define PLANE_HPP

#include <universal/maths.hpp>
#include <components/fuel_tank.hpp>

// Look at using bit masks for some properties to save memory. For example, landing gear status, engine status, etc.


namespace specs {
	template <typename T> 
class Plane
	{
	private:
		// Physical properties
		maths::Vector3 position;
		maths::Vector3 velocity;
		maths::Vector3 acceleration;
		float mass;
		components::FuelTank fuelTank;

	public:
		Plane() : position(0.0f, 0.0f, 0.0f), velocity(0.0, 0.0, 0.0), acceleration(0.0, 0.0, 0.0), mass(T::EmptyWeight + T::UsefulLoad), fuelTank(500.0, 500.0) {}
		auto getPosition() const { return (position); }

		auto setPosition(const maths::Vector3& newPosition) { position = newPosition; };
	};
}


#endif // PLANE_HPP