#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME     28

struct student {
	int ID;
	char name[MAX_NAME];
	double grade;
};
	
int main (int argc, const char * argv[]) {
	struct student student1 = {1003, "Suyeong", 4.3};
	
	student1.ID = 1913839;
	strcpy(student1.name, "Suyeong");
	student1.grade = 3.3;

	printf("ID : %d\n", student1.ID);
	printf("name : %s\n", student1.name);
	printf("grade : %f\n", student1.grade);
	
	return 0;
}


