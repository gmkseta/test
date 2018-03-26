#include "pacman.h"

void pacman_init(Pacman *pacman)
{
	for(int i=0;i<2;i++)
	{
		pacman[i].playernum = i;
		pacman[i].score = 0;
		pacman[i].livesLeft = 3;

		pacman[i].missedFrames = 0;
		pacman[i].godMode = false;
		pacman[i].boostOn = false;
	}
		pacman_location_init(pacman);
}

void pacman_level_init(Pacman *pacman)
{
	pacman_location_init(pacman);
}

void pacman_location_init(Pacman *pacman)
{
	for(int i=0;i<2;i++)
	{
		if(i==0)
			pacman[i].body = (PhysicsBody) {14, 23, -8, 0, Left, Left, 1, 0, 0};
		else
			pacman[i].body = (PhysicsBody) {14, 5, -8, 0, Right, Right, 1, 0, 0};
		pacman[i].body.velocity = 80;
		pacman[i].movementType = Unstuck;
		pacman[i].lastAttemptedMoveDirection = Left;
	}
}

int pacman_speed_normal(int level)
{
	if (level == 1)  return 80;
	if (level <= 4)  return 90;
	if (level <= 20) return 100;
	return 90;
}

int pacman_speed_fright(int level)
{
	if (level == 1)  return 90;
	if (level <= 4)  return 95;
	if (level <= 20) return 100;
	return 100;
}
