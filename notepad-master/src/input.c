#include "input.h"

//does a check to ensure the given keycode is within the bounds of valid keys
//stops the program with an error if it is out of bounds
static void check_keycode(int keycode);

//gets the frame this direction was pressed.
//Uses both wasd and arrow keys.
static int frame_for_direction(Direction dir);

static bool keysHeld[MAX_KEYS] = {false};

static unsigned int keysPressedFrame[MAX_KEYS] = {0};
static unsigned int keysReleasedFrame[MAX_KEYS] = {0};

static unsigned int curKeyFrame = 1;

void keyevents_finished(void)
{
	curKeyFrame++;
}

void handle_keydown(int keycode)
{
	check_keycode(keycode);

	if (!keysHeld[keycode]) keysPressedFrame[keycode] = curKeyFrame;

	keysHeld[keycode] = true;
}

void handle_keyup(int keycode)
{
	check_keycode(keycode);

	if (keysHeld[keycode]) keysReleasedFrame[keycode] = curKeyFrame;

	keysHeld[keycode] = false;
}

bool dir_key_held(Direction direction, int pacman_num)
{
	if (pacman_num == 0)
	{
		switch (direction)
		{
		case Up:    return keysHeld[SDLK_w];
		case Down:  return keysHeld[SDLK_s];
		case Left:  return keysHeld[SDLK_a];
		case Right: return keysHeld[SDLK_d];
		}
	}
	else
	{
		switch (direction)
		{
		case Up:    return keysHeld[SDLK_UP];
		case Down:  return keysHeld[SDLK_DOWN];
		case Left:  return keysHeld[SDLK_LEFT];
		case Right: return keysHeld[SDLK_RIGHT];
		}
	}

	printf("should never reach here\n");
	exit(1);
}

bool dir_pressed_now(Direction *dir, int pacman_num)
{
	int highestPushed = 0;

	Direction dirs[4] = {Up, Left, Down, Right};

	for (int i = 3; i >= 0; i--)
	{	//dir_key_held 가 false 면 그냥 continue해서 넘어감
		if (!dir_key_held(dirs[i], pacman_num)) continue;

		//true 일때. 즉 눌렸을떄. frame return
		int x = frame_for_direction(dirs[i]);

		if (x > highestPushed)//x가 더 크면 highestpushed에 넣음
		{
			*dir = dirs[i];
			highestPushed = x;
		}
	}

	return highestPushed != 0;//그래서 눌린게 없으면 false 있으면 true반환 되겠지
}

bool key_held(int keycode)
{
	check_keycode(keycode);

	return keysHeld[keycode];
}

bool key_pressed(int keycode)
{
	check_keycode(keycode);

	return keysPressedFrame[keycode] == (curKeyFrame - 1);
}

bool key_released(int keycode)
{
	check_keycode(keycode);

	return keysReleasedFrame[keycode] == (curKeyFrame - 1);
}

#define max(a, b) (a) > (b) ? (a) : (b)
#define min(a, b) max((b), (a))

static int frame_for_direction(Direction dir)
{
	switch (dir)
	{
		case Up:    return max(keysPressedFrame[SDLK_UP]   , keysPressedFrame[SDLK_w]);
		case Down:  return max(keysPressedFrame[SDLK_DOWN] , keysPressedFrame[SDLK_s]);
		case Left:  return max(keysPressedFrame[SDLK_LEFT] , keysPressedFrame[SDLK_a]);
		case Right: return max(keysPressedFrame[SDLK_RIGHT], keysPressedFrame[SDLK_d]);
	}

	printf("should never reach here\n");
	exit(1);
}

static void check_keycode(int keycode)
{
	if (keycode >= MAX_KEYS)
	{
		printf("Keycode %d is out of range.\n", keycode);
		printf("Aborting\n");
		exit(1);
	}
}
