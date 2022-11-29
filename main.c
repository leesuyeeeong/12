#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME     28

struct point{
	int x;
	int y;
};

int main (int argc, const char * argv[]) {
	
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("input p1 coordinate (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("input p2 coordinate (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	// p1, p2간 거리를 계산하고 출력
	//math.h의 sqrt() 함수 활용
	
	//calculate xdiff 
	xdiff = p2.x - p1.x;
	
	//calculate ydiff 
	ydiff = p2.y - p1.y;
	
	//피타고라스 정리 sqrt(xdiff*2 +ydiff*2) -> dist
	dist = sqrt(xdiff*xdiff +ydiff*ydiff);
	
	printf("distance : %lf\n", dist);
	
	return 0;
}
