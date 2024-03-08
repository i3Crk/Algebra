#include <iostream>
#include <cmath>

using namespace std;

 struct {
    struct {
        int GetSymmetryAxis(int a = 1, int b = 1) {
            return (-b) / (2 * a);
        };
        int GetPoint(int a = 1, int b = 1, int c = 1, int x = 0) {
            return (a * pow(x, 2)) + (b * x) + (c);
        };
        int GetDiscriminant(int a = 1, int b = 1, int c = 1) {
            return pow(b, 2) - 4 * a * c;
        };
    } Quadratic;
} AlgebraFunctions;

int main() {
    int a = 3;
    int b = 0;
    int c = 5;

    int AOS = AlgebraFunctions.Quadratic.GetSymmetryAxis(a, b);
    int Vertex = AlgebraFunctions.Quadratic.GetPoint(a, b, c, AOS);
    int Discriminant = AlgebraFunctions.Quadratic.GetDiscriminant(a, b, c);
    printf("Discriminant: %d (RSolutions: %d)\n", Discriminant, Discriminant > 0 && 2 || Discriminant < 0 && 0 || Discrminant == 0 && 1);
    printf("AOS: %d\n", AOS);
    printf("Vertex: (%d, %d)\n", AOS, Vertex);

    for (int i = 1; i <= 3; i++) {
        int Point = AlgebraFunctions.Quadratic.GetPoint(a, b, c, AOS + i);
        printf("Point Offset %d: (%d, %d)\n", i, AOS + i, Point);
    };
};
