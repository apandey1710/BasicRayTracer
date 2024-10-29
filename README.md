# BasicRayTracer

## Overview
BasicRayTracer is a simple ray tracing application written in C++. It demonstrates fundamental concepts of ray tracing, including ray-object intersections, shading, and rendering a 3D scene to a 2D image.

## Features
- Ray-sphere intersection
- Basic shading (diffuse and specular)
- Scene rendering to an image file

## Requirements
- C++17 or later
- CMake 3.10 or later
- A C++ compiler (e.g., GCC, Clang, MSVC)

## Building the Project
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/BasicRayTracer.git
    cd BasicRayTracer
    ```

2. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

3. Generate the build files using CMake:
    ```sh
    cmake ..
    ```

4. Build the project:
    ```sh
    cmake --build .
    ```

## Running the Application
After building the project, you can run the application from the build directory:
```sh
./BasicRayTracer
```

## Output
The application will generate an image file (e.g., `output.png`) in the build directory, which contains the rendered scene.

## Contributing
Contributions are welcome! Please fork the repository and submit a pull request.

## Contact
For any questions or suggestions, please open an issue or contact the repository owner.
