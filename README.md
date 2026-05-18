<div align="center">

# Core OpenGL Tutorials

**A Ground-Up Guide to Modern Graphics Programming and Rendering Math**

<p>
  <img src="https://img.shields.io/badge/OpenGL-5586A4?style=for-the-badge&logo=opengl&logoColor=white" />
  <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/CMake-064F8C?style=for-the-badge&logo=cmake&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Active_Development-4EAA25?style=for-the-badge" />
</p>


</div>

---

## About This Repository

Welcome to the **Core OpenGL Tutorials**. 

Many modern game engines hide the actual rendering architecture behind layers of user interfaces. While this is great for rapid game development, it prevents developers from understanding how the GPU actually works. 

This repository is designed to bridge that gap. I created this curriculum to share my journey in low-level graphics programming. Here, we don't just draw pixels; we study the **Linear Algebra**, **Memory Management**, and **Pipeline Architecture** required to communicate directly with the GPU.

Whether you are a student, a hobbyist, or an aspiring engine architect, these tutorials will help you understand the core mechanics of 3D rendering.

---

## Tutorial Roadmap (Curriculum)

The tutorials are structured progressively. Each chapter builds upon the mathematical and architectural foundations of the previous one.

### Chapter 1: The Foundations
- [ ] **01_Window_Creation:** Setting up the environment (GLFW, GLAD) and communicating with the OS.
- [ ] **02_The_Pipeline:** Understanding the Graphics Pipeline (Vertex to Fragment).
- [ ] **03_Hello_Triangle:** Memory buffers (VBO, VAO) and writing our first GLSL Shaders.

### Chapter 2: Math and Space
- [ ] **04_Shaders_In_Depth:** Passing uniform data and interpolating colors.
- [ ] **05_Textures:** UV mapping, texture filtering, and samplers.
- [ ] **06_Transformations:** Linear algebra in action (Vectors, Matrices, Dot/Cross products using GLM).
- [ ] **07_Coordinate_Systems:** Model, View, and Projection matrices (Local space to Screen space).

### Chapter 3: The 3D World
- [ ] **08_Camera_Systems:** Euler angles, LookAt matrices, and flying through the 3D space.
- [ ] **09_Basic_Lighting:** The Phong reflection model (Ambient, Diffuse, Specular lighting).
- [ ] **10_Materials:** Defining physical properties of objects reacting to light.

*(Note: Links will become active as the chapters are published.)*

---

## Prerequisites & Setup

To follow along with these tutorials, you should have a basic understanding of:
- **C++:** Pointers, memory allocation, classes, and basic OOP concepts.
- **High School/College Level Math:** Basic trigonometry and matrices (we will cover the advanced 3D math together).

### Build Instructions (Linux)
This project uses **CMake** for build automation. To compile the projects on your local machine:

```bash
# 1. Clone the repository
git clone [https://github.com/Zyreniee/OpenGL-Tutorials.git](https://github.com/Zyreniee/OpenGL-Tutorials.git)
cd OpenGL-Tutorials

# 2. Create a build directory
mkdir build && cd build

# 3. Generate Makefiles and build
cmake ..
make
