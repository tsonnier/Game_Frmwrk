#include "Globals.h"

Globals::Globals()
{
	srand((unsigned int)time(NULL));
}

Globals::~Globals()
{
	// Delete all textures
	// Delete all fonts
}

int Globals::randomNumber(int maximum)
{
	return rand() % maximum;
}
