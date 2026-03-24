// Nama File : Camera.h
// Deskripsi : Definisi struktur kamera untuk pergerakan dan sudut pandang pemain.
// Tanggal Dibuat : 24 Maret 2026

// System & Camera

#ifndef CAMERA_H
#define CAMERA_H

#include <GL/glut.h>

struct Camera {
    float x, y, z;
    float angle;
    float bobbingTimer;

    void update(); // TODO: Implementasi perhitungan posisi kamera & head bobbing
    void apply();  // TODO: Implementasi gluLookAt
};

// TODO: Tambahkan fungsi untuk switch antara Proyeksi Perspektif dan Ortografis (HUD) 

#endif