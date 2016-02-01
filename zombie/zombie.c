#include "../header.h"

#pragma const_data start
char centroid[2] = {
  0, 0
};
char object_0_0[224] = {
  3, 1,
  5, 0,
  11, 1,
  10, 1,
  5, 0,
  -1, 0,
  -1, 0,
  -2, 0,
  -2, 0,
  0, 0,
  6, 0,
  2, 0,
  3, 0,
  2, 0,
  7, 0,
  5, 1,
  1, 0,
  2, 2,
  -10, 2,
  -12, 1,
  -16, 0,
  -7, 0,
  -3, 0,
  -2, 0,
  -2, 3,
  -2, 6,
  -1, 5,
  2, 3,
  3, -3,
  4, -5,
  1, 0,
  17, 0,
  16, 0,
  14, -1,
  13, -1,
  4, 0,
  1, 0,
  3, 0,
  4, 0,
  2, 0,
  -3, 1,
  -4, 2,
  -8, 3,
  -1, 1,
  0, 0,
  -2, 2,
  -1, 1,
  -3, 0,
  -3, 0,
  -1, 0,
  1, 1,
  0, 1,
  -2, 0,
  -2, 0,
  0, 3,
  5, 2,
  6, -1,
  2, 0,
  2, -1,
  4, -3,
  7, -3,
  10, -4,
  7, -2,
  3, -4,
  0, -3,
  1, -3,
  1, -1,
  5, -4,
  3, -3,
  0, -2,
  -3, -5,
  -3, -1,
  -3, 1,
  -2, 2,
  -1, -1,
  -8, -6,
  -5, -1,
  -4, -1,
  -4, -1,
  -11, -3,
  -12, -1,
  -4, 0,
  -1, 1,
  -1, 2,
  3, 0,
  2, 0,
  0, 0,
  0, 1,
  4, 0,
  5, 0,
  10, 4,
  7, 2,
  1, 0,
  -1, 0,
  -4, 2,
  2, 0,
  1, 0,
  1, 0,
  2, 0,
  -3, 2,
  -5, 2,
  -10, -1,
  -16, -2,
  -14, -1,
  -18, -2,
  -9, 0,
  0, 0,
  0, 0,
  -3, -1,
  -6, 0,
  0, 5,
  0, 0
};
char centroid_0_0[2] = {
  0, 0
};
char start_0_0[2] = {
  -65, -10
};
#pragma const_data end

int main()
{
  unsigned char r;
  while(1)
  {
    wait_retrace();

    r = random();
    r = r << 1;
    intensity(r);

    move(start_0_0[0]+centroid[0], start_0_0[1]+centroid[1]);
    lines(112, object_0_0);
  }
  return 0;
}
