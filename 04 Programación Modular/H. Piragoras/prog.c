#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double teorema(double a, double b) {
	double c2  = a * a + b * b;
    double res = pow(c2, 0.5);
	return res;

}

int main() {
	double a, b, c;
	scanf("%lf", &a); // cin >> a;
	scanf("%lf", &b); // cin >> b;
    
    c = teorema(a, b);

    printf("%.3f\n", c); // cout << c << endl;

	return 0;
}