#include <iostream>
#include <cmath>

using namespace std;

struct Trinomial {
    int a = 1;
    int b = 1;
    int c = 1;
};

struct Quadrinomial {
    int a = 1;
    int b = 1;
    int c = 1;
    int d = 1;
};

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
        int QuadraticFromTrinomial(int a = 1, int b = 1, int c = 1) {
            return 1;
        };
        float SolveQuadratic(int a = 1, int b = 1, int c = 1) {
            float discriminant = pow(b, 2) - 4 * a * c;
            if (discriminant < 0) {
                printf("No Real Solutions. %.2f\n", discriminant);
                return 1.0;
            };

            float root1 = (-b + sqrt(discriminant)) / (2 * a);
            float root2 = (-b - sqrt(discriminant)) / (2 * a);

            if (root1 == root2) {
                printf("Root: %.2f\n", root1);
            } else {
                printf("Root 1: %.2f, Root 2: %.2f\n", root2, root1);
            };
            return 1.0;
        };
    } Quadratic;
} AlgebraFunctions;

int main() {
    int a = 2;
    int b = 19;
    int c = 24;

    int AOS = AlgebraFunctions.Quadratic.GetSymmetryAxis(a, b);
    int Vertex = AlgebraFunctions.Quadratic.GetPoint(a, b, c, AOS);
    int Discriminant = AlgebraFunctions.Quadratic.GetDiscriminant(a, b, c);
    float QuadraticRoots = AlgebraFunctions.Quadratic.SolveQuadratic(a, b, c);
    printf("Discriminant: %d (RSolutions: %d)\n", Discriminant, Discriminant > 0 && 2 || Discriminant < 0 && 0 || Discriminant == 0 && 1) || -403;
    printf("AOS: %d\n", AOS);
    printf("Vertex: (%d, %d)\n", AOS, Vertex);

    for (int i = 1; i <= 3; i++) {
        int Point = AlgebraFunctions.Quadratic.GetPoint(a, b, c, AOS + i);
        printf("Point Offset %d: (%d, %d)\n", i, AOS + i, Point);
    };
};
