#include <math.h>
#include <stdio.h>

struct Point {
	double x;
	double y;
};

int main() {
	struct Point p1;
	struct Point p2;

	printf("----- Enter the first point -----\n\tx > ");
	scanf("%lf", &(p1.x));
	printf("\ty > ");
	scanf("%lf", &(p1.y));

	printf("----- Enter the second point -----\n\tx > ");
	scanf("%lf", &(p2.x));
	printf("\ty > ");
	scanf("%lf", &(p2.y));

	printf("\n---- Eucilidean distance between p1 and p2 -----\n\n%lf\n", sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)));

	return 0;
}
