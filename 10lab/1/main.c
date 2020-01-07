#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    float x, y;
};
typedef struct Point Point;

void printPoint (Point p);
Point createPoint (double x, double y);
double getDistance (Point a, Point b);

int main()
{
    getDistance (createPoint(2.0, -3.0), createPoint(-4.0, 5.0));
}
void printPoint (Point p)
{
    printf("(%.1f, %.1f); \n", p.x, p.y);
}
Point createPoint (double x, double y)
{
    Point p;
    p.x = x;
    p.y = y;
    return p;
}
double getDistance (Point a, Point b)
{
    double distance = 0;
    distance = sqrt(pow((b.x - a.x), 2) + pow((b.y - a.y), 2));
    printf("%.1f", distance);
    return distance;
}
