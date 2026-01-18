#include "components/fuel_tank.hpp"

namespace components {
	FuelTank::FuelTank(float capacity, float currentLevel)
	{
		this->capacity = capacity;
		this->currentLevel = currentLevel;
	}

	/*
			// Constructor. _x means the constructor parameter to differentiate from the member variable
		Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {}; Use something like this for the constructor above
	*/
	FuelTank::~FuelTank()
	{
	};
	float FuelTank::getCapacity() const
	{
		return this->capacity;
	};
	float FuelTank::getCurrentLevel() const
	{
		return this->currentLevel;
	};

	void FuelTank::addFuel(float amount) {
		this->currentLevel += amount;
	};
	void FuelTank::consumeFuel(float amount)
	{
		this->currentLevel -= amount;
	};

} // namespace components