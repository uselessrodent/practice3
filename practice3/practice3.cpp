#define _USE_MATHS_DEFINITIONS
/*#﻿define _CRT_SECURE_NO_WARNINGS*/

#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x = -4.5, y = 0.75 * pow(10, -4.0);
    double z = 0.845 * pow(10, 2), u = -55.6848;
    double t1, t2;

    printf("Введите значение x,y,z:  ");
    scanf_s("%lf %lf %lf", &x, &y, &z);

    if (z > 1 || z < -1) {
        printf("error \n"); return 0;
    }
        

    double t1p1 = cbrt(8 + pow(abs(x - y), 2) + 1);
    double t1p2 = pow(x, 2) + pow(y, 2) + 2;

    double t2p1 = exp(abs(x - y));
    double t2p2 = pow((tan(z) * tan(z) + 1), x);

    t1 = t1p1 / t1p2;
    t2 = t2p1 * t2p2;
    double t3 = t1 - t2;


    printf("%lg", t3);






}