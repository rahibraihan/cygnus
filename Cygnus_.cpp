#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return sin(x);
}

double exact(double x)
{
    return cos(x);
}
double d2(double (*f)(double), double x, double h)
{
    return (f(x + h) - f(x - h)) / (2 * h);
}
double d4(double (*f)(double), double x, double h)
{
    return (-f(x + 2 * h) + 8 * f(x + h) - 8 * f(x - h) + f(x - 2 * h)) / (12 * h);
}
int main()
{
    double x = 1.0;
    double h = 0.1;
    int N = 5;

    double exact_val = exact(x);

    ofstream file("error_data.txt");
    file << "# h  error_Oh2  error_Oh4  error_Richardson\n";//

    vector<double> D(N);

    for (int i = 0; i < N; i++)
    {
        double approx2 = d2(f, x, h);
        double approx4 = d4(f, x, h);

        double err2 = fabs(approx2 - exact_val);
        double err4 = fabs(d4(n, x, h) - exact_val);

        D[i] = approx2;

        file << h << " " << err2 << " " << err4 << " ";

        h /= 2.0;
    }
    file.seekp(0, ios::beg);

    h = 0.1;
    file << "# h  error_Oh2  error_Oh4  error_Richardson\n";

    for (int i = 0; i < N - 1; i++)
    {
        double R = D[i + 1] + (D[i + 1] - D[i]) / (pow(2, 2) - 1);
        double errR = fabs(R - exact_val);

        double err2 = fabs(D[i] - exact_val);
        double err4 = fabs(d4(x, h) - exact_val);

        file << h << " " << err2 << " " << err4 << " " << errR << "\n";

        h /= 2.0;
    }

    file.close();

    cout << "Data saved to error_data.txt\n";
    return 0;
}
