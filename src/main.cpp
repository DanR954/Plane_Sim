#include <iostream>
#include <physics.hpp>
#include <hawk.hpp>

int main() {
	std::cout << "Starting programme... Initialising plane " << std::endl;
	std::cout << "Pi value from the physics module:" << physics::pi << std::endl;
	std::cout << "Hawk plane's useful load:" << Hawk::UsefulLoad << std::endl;
    return 0;
}