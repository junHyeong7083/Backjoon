#include<iostream>
#include<stdio.h>
#include<cmath>
#pragma warning(disable:4996)
using namespace std;

int main()
{
    double length, height, width;
    float x;
    scanf("%lf %lf %lf", &length, &height, &width);
    x = length / sqrt(pow(height, 2) + pow(width, 2));
    printf("%d ", (int)sqrt((length * length * height * height / (height * height + width * width))));
    printf("%d", (int)sqrt((length * length * width * width / (height * height + width * width))));

}