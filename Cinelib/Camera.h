#pragma once
#ifndef CAMERA_H
#define CAMERA_H

#include "CameraSensor.h"

#include <string>
using namespace std;

class Camera
{
	Camera();

public:
	CameraSensor sensor;

	float positionx = 0.0;
	float positiony = 0.0;
	float positionz = 0.0;
	int rotationx = 0;
	int rotationy = 0;
	int rotationz = 0;
	int lookat[3] = { 0, 0, 0 };
	

}
#endif // CAMERA_H