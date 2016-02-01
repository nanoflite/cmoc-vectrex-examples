#include "../header.h"

#pragma const_data start
char rectangle[10] = {
  // These are relative coordinates.
  50, 0,
  0, 50,
  -50, 0,
  0, -50,
  // We also take the middle point of the rectangle which we move to before drawing.   
  -25, -25
};
#pragma const_data end

int main()
{
  int8_t angle = 0;
  char rotated[10];
  while(1)
  {
    wait_retrace();
    intensity(0x7f);
    rotate(angle, 5, rectangle, rotated);
    move(rotated[8], rotated[9]);
    lines(4, rotated);
    angle++;
  }
  return 0;
}
