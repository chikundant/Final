#include "Sound.h"

DWORD WINAPI MainMusic(void* p)
{
	PlaySound("sound/MainSoundNEW.wav", NULL, SND_FILENAME | SND_NODEFAULT | SND_LOOP);
	return 0;
}

DWORD WINAPI Lose(void* p)
{
	PlaySound("sound/Lose.wav", NULL, SND_NODEFAULT | SND_LOOP);
	return 0;
}
DWORD WINAPI TakePrize(void* p)
{
	PlaySound("sound/TakePrize.wav", NULL, SND_NODEFAULT | SND_LOOP);
	return 0;
}

