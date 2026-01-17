#ifndef MATHS_HPP
#define MATHS_HPP

#include <cmath>

// Add comments in tmr or weekend to explain the maths and don't forget to write notes on the formulas used and the correct notation

namespace maths {
	static constexpr double pi = 3.14159265358979323846;
	static constexpr double e = 2.71828182845904523536;


	// 3D Vector structure
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

	static constexpr double degreesToRadians(double degrees) {
		return degrees * (pi / 180.0);
	}

	static constexpr double radiansToDegrees(double radians) {
		return radians * (180.0 / pi);
	}


}


#endif // MATHS_HPP