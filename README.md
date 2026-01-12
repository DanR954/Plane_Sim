# Plane_Sim
Creating a headless plane sim in C++

I will be following a few rules to make sure the programme is secure:

- No recursion to reduce risk of a memory leak / Stack overflow
- When iterating define a max amount so not to create an infinite loop  
- No Memory allocation or deallocation after initialisation
- Circlometic Complexity is no more than 20 but preferably 10.
- Follow RAII (Resource Acquisition Is Initialization) principles
- Only use 2 spaces to indent
- Ensure Inheretance is use efficiently as to not create a diamond problem
- Prefer Composition over inheretance
- Create Unit tests for each method
- Create UML Diagrams for the architecture
