// Nama File : Camera.cpp
// Deskripsi : Implementasi fungsi kamera dan pengaturan tampilan pemain.
// Tanggal Dibuat : 24 Maret 2026

#include "Camera.h"
#include "Config.h"
#include <GL/glut.h>
#include <math.h>

// TODO: Implementasikan logika head bobbing menggunakan fungsi sin()
// TODO: Gunakan gluLookAt() untuk mengatur sudut pandang mata pemain 
void Camera::apply() {
    float bobbingOffset = isMoving ? sin(bobbingTimer) * 0.05f : 0.0f;
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    
    // Format: gluLookAt(eyeX, eyeY, eyeZ, lookX, lookY, lookZ, upX, upY, upZ)
    // eyeY ditambahkan bobbingOffset untuk efek jalan horor
    gluLookAt(x, y + bobbingOffset, z, 
              x + cos(angle), y + bobbingOffset, z + sin(angle), 
              0.0f, 1.0f, 0.0f);
}

// TODO: Buat fungsi switch ke Proyeksi Ortografis untuk menggambar HUD (Skor/Timer) 
void drawHUD() {
    // glMatrixMode(GL_PROJECTION); 
    // glOrtho(...);
}