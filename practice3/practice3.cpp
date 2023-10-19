#define _USE_MATHS_DEFINITIONS
/*#﻿define _CRT_SECURE_NO_WARNINGS*/
#define M_PI 3.14159265358979323846 /* pi */
//вариант 1
#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x = 14.26, y = -1.22;
    double z = 3.5 * pow(10, -2), t = 0.564849;
    double t1, t2;

    printf("Введите значение x,y,z:  ");
    scanf_s("%lf %lf %lf", &x, &y, &z);

    if ((x - M_PI / 6) < -1 || (x - M_PI / 6) > 1) {
        printf("error"); return 0;
    }

    if (y < -1 || y > 1) {
        printf("error"); return 0;
    }

    if ((3 - (pow(z, 2) / 5)) == 0) {
        printf("error"); return 0;
    }

    double t1p1 = 2 * cos(x - M_PI / 6);
    double t1p2 = 0.5 + sin(y) * sin(y);

    double t2p1 = pow(z, 2);
    double t2p2 = 3 - (pow(z, 2) / 5);

    t1 = t1p1 / t1p2;
    t2 = 1 + (t2p1 / t2p2);
    double t3 = t1 * t2;


    printf("%lg", t3);






}