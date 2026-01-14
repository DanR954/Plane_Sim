#include "components/fuel_tank.hpp"

namespace components {
	FuelTank::FuelTank(double capacity, double currentLevel)
	{
		this->capacity = capacity;
		this->currentLevel = currentLevel;
	}

	FuelTank::~FuelTank()
	{
	};
	double FuelTank::getCapacity() const
	{
		return this->capacity;
	};
	double FuelTank::getCurrentLevel() const
	{
		return this->currentLevel;
	};

	void FuelTank::addFuel(double amount) {
		this->currentLevel += amount;
	};
	void FuelTank::consumeFuel(double amount)
	{
		this->currentLevel -= amount;
	};

} // namespace components