#include "randomNumber.h"

void randomNumber::Initialize()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

int randomNumber::GenerateInt(int min, int max)
{
	return min + std::rand() % (max - min + 1);
}

float randomNumber::GenerateFloat(float min, float max)
{
	return min + static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX);
}

