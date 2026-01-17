#ifndef PLANE_HPP
#define PLANE_HPP

#include <universal/maths.hpp>
#include <components/fuel_tank.hpp>



namespace specs {
	template <typename T> 
class Plane
	{
	private:
		maths::Vector3 position;
		maths::Vector3 velocity;
		maths::Vector3 acceleration;
		double mass;
		components::FuelTank fuelTank;

	public:
		Plane() : position(0.0, 0.0, 0.0), velocity(0.0, 0.0, 0.0), acceleration(0.0, 0.0, 0.0), mass(T::EmptyWeight + T::UsefulLoad), fuelTank(500.0, 500.0) {}
		auto getPosition() const { return (position); }

	};
}


#endif // PLANE_HPP