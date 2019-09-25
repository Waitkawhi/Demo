#ifndef TYPEDEF_H_
#define TYPEDEF_H_

typedef unsigned char      BYTE;
typedef unsigned int       UINT;
typedef unsigned long long UINT64;
typedef unsigned short     USHORT;
typedef unsigned char      UCHAR;

typedef struct Node{
	int pointx;
	int pointy;
	int lanex;
	int laney;
	unsigned int id;
}PlotNode;

typedef enum picName{
	PIC_LANE_LEFT,
	PIC_LANE_RIGHT,
	PIC_POLAR_LEFT,
	PIC_POLAR_RIGHT
}picName_t;

#endif //TYPEDEF_H_
