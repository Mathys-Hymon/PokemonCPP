#pragma once
#include <cstdlib>
#include <ctime>

class randomNumber
{
    public:
         void Initialize();
         int GenerateInt(int min, int max);
         float GenerateFloat(float min, float max);
};

