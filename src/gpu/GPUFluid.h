#ifdef GPU_ENABLED
#ifndef GPU_FLUID_THING_H__
#define GPU_FLUID_THING_H__

#include <cuda.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <glm/glm.hpp>
typedef float scalar;
typedef glm::vec3 Vector3s;
typedef glm::vec4 Vector4s;

#define NUM_PARTICLES 3000
#define MAX_NEIGHBORS 300
#define MIN_NEIGHBORS 3
#define FP_MASS 10000.0
#define P0 100000.0
#define H 1.5
#define EPS 0.01
#define ITERS 3
#define GFORCE -10.0
#define XMIN -5.0
#define XMAX 10.0
#define WIDTH (XMAX - XMIN)
#define YMIN -5.0
#define YMAX 10.0
#define HEIGHT (YMAX - YMIN)
#define ZMIN -5.0
#define ZMAX 10.0
#define DEPTH (ZMAX - ZMIN)
#define STARTXMIN 0
#define STARTXMAX 9.0
#define STARTYMIN 0
#define STARTYMAX 9.0
#define STARTZMIN 0
#define STARTZMAX 9.0


extern "C" { 
void initGPUFluid();
void stepSystemGPUFluid(); 
void cleanUpGPUFluid(); 
}




#endif
#endif
