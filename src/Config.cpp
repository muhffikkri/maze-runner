// Nama File : Config.cpp
// Deskripsi : Implementasi variabel global dan konfigurasi runtime game.
// Tanggal Dibuat : 24 Maret 2026

#include "Config.h"

// Inisialisasi variabel global yang dideklarasikan di Config.h
bool isGameOver = false;
bool isGameWin = false;
bool hasKey = false;
bool isGhostTriggered = false;
int score = 0;

// Implementasi Map Labirin (0: Jalan, 1: Dinding, 2: Koin, 3: Kunci, 4: Finish)
int maze[10][10] = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 0, 0, 0, 1, 2, 0, 0, 2, 1},
    {1, 0, 1, 0, 1, 0, 1, 1, 0, 1},
    {1, 2, 1, 0, 0, 0, 0, 1, 0, 1},
    {1, 0, 1, 1, 1, 1, 0, 1, 0, 1},
    {1, 0, 0, 0, 2, 1, 0, 0, 0, 1},
    {1, 1, 1, 1, 0, 1, 1, 1, 3, 1},
    {1, 2, 0, 1, 0, 0, 0, 1, 1, 1},
    {1, 0, 0, 0, 0, 2, 0, 0, 4, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};