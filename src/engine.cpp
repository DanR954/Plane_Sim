#include <components/engine.hpp>
#include <iostream>

Engine::Engine() {
		std::cout << "Engine created." << std::endl;
}

Engine::~Engine() {
		std::cout << "Engine destroyed." << std::endl;
}

void Engine::start() {
		std::cout << "Engine started." << std::endl;
}

void Engine::stop() {
		std::cout << "Engine stopped." << std::endl;
}