#pragma once
#ifndef CAMERALENS_H
#define CAMERALENS_H

#include "CameraLensProfile.h"

#include <string>
using namespace std;

class CameraLens
{
	CameraLens();

public:
	CameraLensProfile profile;

}
#endif // CAMERALENS_H