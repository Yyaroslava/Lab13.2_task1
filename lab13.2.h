//	заголовочний файл lab13.2.h
#pragma once

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

#define PRINT(w) printf(#w"=%d\n",w)
#define INPUT(name, x) puts((name)); scanf_s("%d", &x)
#define TERN(condition,expr1,expr2) (condition)?(expr1):(expr2)
#define SQR(x) (x)*(x) 
#define MAX(x,y) TERN((x)>(y),(x),(y))
#define MIN(x,y) TERN((x)<(y),(x),(y))

int Calc(int x, int y, int z);
