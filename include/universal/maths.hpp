#ifndef MATHS_HPP
#define MATHS_HPP

#include <cmath>

// Add comments in tmr or weekend to explain the maths and don't forget to write notes on the formulas used and the correct notation

// Universal maths namespace
namespace maths {
	static constexpr float pi = 3.14159265358979323846; // Pi constant
	static constexpr float e = 2.71828182845904523536; // Euler's number


	// 3D Vector structure
	struct Vector3 {
		// Initial data members
		float x, y, z;

		// Constructor. _x means the constructor parameter to differentiate from the member variable
		Vector3(float _x, float _y, float _z) : x(_x), y(_y), z(_z) {};

		// Dot product method
		float dot(const Vector3& other) const {
			return (x * other.x) + (y * other.y) + (z * other.z);
		}

		// Addition operator overload. v1 + v2, returns a new Vector3
		Vector3 operator+(const Vector3& other) const { return Vector3(x + other.x, y + other.y, z + other.z); }

		Vector3& operator+=(const Vector3& other) {
			x += other.x;
			y += other.y;
			z += other.z;
			return *this;
		};
		// Magnitude method
		float magnitude() {
			return std::sqrt((x * x) + (y * y) + (z * z));
		};
	};

	static constexpr float degreesToRadians(float degrees) {
		return degrees * (pi / 180.0);
	}

	static constexpr float radiansToDegrees(float radians) {
		return radians * (180.0 / pi);
	}


}


#endif // MATHS_HPP