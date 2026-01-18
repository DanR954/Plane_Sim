#include "components/fuel_tank.hpp"

namespace components {
	FuelTank::FuelTank(float capacity, float currentLevel)
	{
		this->capacity = capacity;
		this->currentLevel = currentLevel;
	}

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