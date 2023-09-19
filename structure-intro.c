#include<stdio.h>
#include<stdlib.h>
//structure having similar members
struct point{
	int x;
	int y;
	}; //8 bytes

//nested structure
struct triangle{
	//struct point ptA,ptB,ptC;
	struct point ptA;
	struct point ptB;
	struct point ptC;
	};//24 bytes

//nested structure
struct rectangle{
	struct point tl;
	struct point br;
	};//16 bytes

//normal struct
struct student{
	char fname[100];
	char lname[100];
	int age;
	};//204 bytes

//self referenced  struct
struct node{
	int key;
	struct node *link;
	};//12 bytes

/*
 * typedef and structures
 * typedef struct <tag-name> new-name;
 */
//struct node n;
//typedef int number;
typedef struct node Node;
//Node n;

int main()
{
	/*
	printf("point takes %lu-Bytes\n", sizeof(struct point));
	printf("triangle takes %lu-Bytes\n", sizeof(struct triangle));
	printf("rectangle takes %lu-Bytes\n", sizeof(struct rectangle));
	printf("student takes %lu-Bytes\n", sizeof(struct student));
	printf("Node takes %lu-Bytes\n", sizeof(Node));
	*/







/**/
	struct point ptA, *ptrA;
        //ptA.x=10, ptA.y=20;
	ptrA = (struct point *)malloc(sizeof(struct point));
	scanf("%d", &(ptrA->x));
	scanf("%d", &(ptrA->y));
	printf("ptrA(%d, %d)\n", ptrA->x, ptrA->y);
	//ptrA = &ptA;
/**/
/*
	struct rectangle rect, *rect_ptr;
	rect.tl.x=rect.tl.y=0;
	rect.br.x=rect.br.y=10;

	//ptr init
	rect_ptr = &rect;

	printf("tl(%d, %d)\t br(%d,%d)\n",  );

*/
	return 0;
}
