// Nama File : Entity.h
// Deskripsi : Deklarasi entitas game dan fungsi logika interaksi utama.
// Tanggal Dibuat : 24 Maret 2026

// Logic & Interaction

#ifndef ENTITY_H
#define ENTITY_H

struct Entity {
    float x, y, z;
    bool isActive;
};

// TODO: Implementasi pergerakan Hantu mengejar pemain (Translasi) 
void updateGhost(float playerX, float playerZ);

// TODO: Implementasi Rotasi Koin dan deteksi tabrakan 
void updateItems();

// TODO: Logika pengecekan Win/Lose Condition 
void checkGameStatus();

#endif