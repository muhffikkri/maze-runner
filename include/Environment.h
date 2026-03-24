// Nama File : Environment.h
// Deskripsi : Deklarasi fungsi lingkungan, rendering maze, tekstur, dan pencahayaan.
// Tanggal Dibuat : 24 Maret 2026

// World & Assets

#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H

#include <GL/glut.h>

// TODO: Implementasi fungsi Draw Walls menggunakan Primitif 
void drawMaze(); 

// TODO: Implementasi Texture Mapping untuk dinding dan lantai 
void loadTextures(); 

// TODO: Setup Lighting untuk Senter (Spotlight) dan Obor (Point Light) 
void setupLighting(); 

// TODO: Implementasi bayangan sederhana (Shadows) 
void drawShadows();

#endif