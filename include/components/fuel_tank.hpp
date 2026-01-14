#ifndef FUEL_TANK_HPP
#define FUEL_TANK_HPP

namespace components {
	class FuelTank {
	private:
		double capacity;
		double currentLevel;
	public:
		FuelTank(double capacity, double currentLevel);
		virtual ~FuelTank();
		double getCapacity() const;
		double getCurrentLevel() const;
		void addFuel(double amount);
		void consumeFuel(double amount);
	};
}

#endif // FUEL_TANK_HPP
