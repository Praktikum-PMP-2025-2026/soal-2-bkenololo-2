/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
*   Modul               : Overview of C Language
*   Hari dan Tanggal    : Rabu, 15 April 2026
*   Nama (NIM)          : Benedictus Kenneth Setiadi (13224003)
*   Nama File           : soal2.c
*   Deskripsi           :
*
*/
 
 
#include <stdio.h>
 
int fungsi(int n, int step) {
    step++;
 
    if (n == 1) {
        printf("LANGKAH %d\n", step-1);
        return 0;
    }
    
    if (n % 2 == 0) {
        n = n / 2;
    } else {
        n = 3 * n + 1;
    }
 
    return fungsi(n, step);
}
 
int main() {
    int T, n;
    
    if (scanf("%d", &T) != 1) return 0;
 
    for (int i = 0; i < T; i++) {
        if (scanf("%d", &n) == 1) {
            int initial_step = 0;
            fungsi(n, initial_step);
            
            if (i < T - 1) {
                printf("\n");
            }
        }
    }
 
    return 0;
}
 
