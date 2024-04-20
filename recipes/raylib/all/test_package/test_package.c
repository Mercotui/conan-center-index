#include "raylib.h"

#include <stdio.h>

int main(void) {
  Vector3 center = {0, 0, 0};
  float r = 1.0;
  if (CheckCollisionSpheres(center, r, center, r)) {
    printf("Success, unit sphere collides with itself!\n");
  } else {
    printf("Failure, unit sphere does not collide with itself.\n");
    return 1;
  }
  return 0;
}
