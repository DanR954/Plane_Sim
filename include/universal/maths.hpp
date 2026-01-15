#include <cmath>

// Add comments in tmr or weekend to explain the maths and don't forget to write notes on the formulas used and the correct notation

namespace maths {
	constexpr double pi = 3.14159265358979323846;

	struct Vector3 {
		// Initial data
		double x, y, z;

		// Constructor. 
		Vector3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {};

		double dot(const Vector3& other) const {
			return (x * other.x) + (y * other.y) + (z * other.z);
		}

		Vector3 operator+(const Vector3& other) const { return Vector3(x + other.x, y + other.y, z + other.z); }


		double magnitude() {
			return std::sqrt((x * x) + (y * y) + (z * z));
		};
	};
}