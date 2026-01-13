# Plane_Sim
Creating a headless plane sim in C++

I will be following a few guidelines to make sure the programme is secure:

- No recursion to reduce risk of a stack overflow
- When iterating define a max amount so not to create an infinite loop  
- No Memory allocation or deallocation after initialisation
- Circlometic Complexity is no more than 20 but preferably 10.
- Follow RAII (Resource Acquisition Is Initialization) principles
- Ensure Inheretance is use efficiently as to not create a diamond problem
- Prefer Composition over inheretance
- Create Unit tests for each method
- Create UML Diagrams for the architecture
