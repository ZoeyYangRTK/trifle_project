#define FATHER_NODE(i)      (0 == (i) ? -1 : (i) - 1 >> 1)
#define LEFT_NODE(i)        (((i) << 1) + 1)
#define RIGHT_NODE(i)       (((i) << 1) + 2)

int *closestRoom(int **rooms, int roomsSize, int *roomsColSize, int **queries, int queriesSize, int *queriesColSize, int *returnSize)
{

}