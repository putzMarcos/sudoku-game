#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
        int subCelulas[GRADE][GRADE];
} subgrade;

typedef struct {
        subgrade celulas[GRADE][GRADE];
} grade;

#endif

