#ifndef FUEL_TANK_HPP
#define FUEL_TANK_HPP

namespace components {
	class FuelTank {
	private:
		float capacity;
		float currentLevel;
	public:
		FuelTank(float capacity, float currentLevel);
		virtual ~FuelTank();
		float getCapacity() const;
		float getCurrentLevel() const;
		void addFuel(float amount);
		void consumeFuel(float amount);
	};
}

#endif // FUEL_TANK_HPP
