#include <iostream>
#include <universal/physics.hpp>
#include <templates/hawk.hpp>
#include <components/engine.hpp>
#include <universal/maths.hpp>

int main() {
	std::cout << "Starting programme... Initialising plane " << std::endl;
	std::cout << "Pi value from the physics module:" << maths::pi << std::endl;
	std::cout << "Hawk plane's useful load:" << hawk::UsefulLoad << std::endl;
	Engine* enginePtr = new Engine();
	delete enginePtr; // Testing constructor and destructor
    return 0;
}