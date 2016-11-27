#pragma once
#ifndef CAMERALENSPROFILE_H
#define CAMERALENSPROFILE_H

#include <string>
using namespace std;

class CameraLensProfile
{
	CameraLensProfile();

public:
	enum fstop { //Values 1.4    2.0    2.8    4    5.6    8    11    16    22
		f1, f1p2, f1p4, f2, f2p8, f4, f5p6, f8, f11, f16, f22 
	};

	enum tstop { //Cinematography. T-stop (for transmission stops) is an f-number adjusted to account for light transmission efficiency
		t1, t1p2, t1p4, t2, t2p8, t4, t5p6, t8, t11, t16, t22 
	};

	int BladesCount; //No. of diaphragm blades
	int angle_horzntl; //Angle of view (horzntl, vertl, diagnl)
	int angle_horzntl;
	int angle_horzntl;
	fstop aperture_min; //Minimum aperture
	int closest_focusing_distance_m; //Closest focusing distance(m)
	float magnification_max; //Maximum magnification(x)

	enum lens_model {
		Samyang_16mm_T2p2_VDLSR_ED_AS_UMC_CS_II //T.  n
	};

	void setModel(lens_model mdl) {};
}
#endif // CAMERALENSPROFILE_H
