#pragma once
#ifndef CAMERALENSPROFILE_H
#define CAMERALENSPROFILE_H

#include <string>
using namespace std;

class CameraLensProfile
{
	CameraLensProfile() {}

public:
	float fstop; //Values 1.4    2.0    2.8    4    5.6    8    11    16    22
	float tstop; //Cinematography. T-stop (for transmission stops) is an f-number adjusted to account for light transmission efficiency
	int BladesCount; //No. of diaphragm blades
	int angle_horzntl; //Angle of view (horzntl, vertl, diagnl)
	int angle_horzntl;
	int angle_horzntl;
	float aperture_min; //Minimum aperture in fstop
	int closest_focusing_distance_m; //Closest focusing distance(m)
	float magnification_max; //Maximum magnification(x)

	enum lens_model {
		Samyang_16mm_T2p2_VDLSR_ED_AS_UMC_CS_II //T.  n
	};

	void setModel(lens_model mdl) {
		switch (mdl) {
		case Samyang_16mm_T2p2_VDLSR_ED_AS_UMC_CS_II:
			break;
		default:
			break;
		}
	}
}
#endif // CAMERALENSPROFILE_H
