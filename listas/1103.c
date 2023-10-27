#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c, d;
	do {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if (a == 0 && b == 0 && c == 0 && d == 0) break;
		if (a == 0) a = 24;
		if (c== 0) c = 24;
		a *= 60;
		c *= 60;
		if (a >= c && b >= d || a > c && b < d) {
			printf("%d\n", abs((a-c)-1440+(b-d)));
		} else {
			printf("%d\n", (c-a)-(b-d));
		}
	} while(1);
	
	return 0;
}
 
 // 1 5 3 5