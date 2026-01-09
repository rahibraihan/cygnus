#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x);
}

// O(h^2) central difference
double D2(double x, double h) {
    return (f(x + h) - f(x - h)) / (2.0 * h);
}

// O(h^4) central difference
double D4(double x, double h) {
    return (-f(x + 2*h) + 8*f(x + h)
           - 8*f(x - h) + f(x - 2*h)) / (12.0 * h);
}

int main() {
    double x1 = 1.0;
    double exact = cos(x1);

    double h[] = {0.4, 0.2, 0.1, 0.05, 0.025};
    int N = 5;

    printf("\nExact derivative = %.10f\n\n", exact);
    printf("h        D2 Error        D4 Error\n");
    printf("-------------------------------------\n");

    for (int i = 0; i < N; i++) {
        double d2 = D2(x1, h[i]);
        double d4 = D4(x1, h[i]);

        printf("%-8.5f %.3e     %.3e\n",
               h[i],
               fabs(d2 - exact),
               fabs(d4 - exact));
    }

    return 0;
}
