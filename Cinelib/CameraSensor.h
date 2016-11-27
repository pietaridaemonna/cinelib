#pragma once
#ifndef CAMERASENSOR_H
#define CAMERASENSOR_H


class CameraSensor
{

	CameraSensor();

	//SENSOR SIZE
	public enum class Size {
		FULLFRAME_360x240, //35 mm "full frame" 36x24mm
		APSC_236x157, //APS-C (Nikon, Sony, Pentax, Fuji etc   ~23.6x15.7mm
		APSC_CANON_222x148, //22.2x14.8mm
		SUPER16_125x702, //12.48mm x 7.02mm (Super 16), Blackmagic Pocket Cinema Camera, Blackmagic Studio Camera HD
		SUPER35_253x143, //25.34mm x 14.25mm (Super35)
		SUPER35_220x118, //22mm x 11.88mm (Super 35)
		SUPER65, //65 mm format digital cinema camera
		PANAVISION70,
		PANAVISION_MILLENIUM_DXL_8K_410x216, //Large Format: 40.96mm x 21.60mm (Diagonal: 46.31mm)
		BCC_158x888, //Blackmagic Cinema Camera, 15.81mm x 8.88mm
		BMSC4K_131x734, //Blackmagic Micro Studio Camera 4K, 13.056mm x 7.344mm
		MFTS_173x130, //Four Thirds system 17.3x13mm
		LEICAS_300x450, //Leica S, 30 x 45mm CCD
		RED_EPICW_WEAPON8K_299x156, //8k, 29.90 mm x 15.77 mm (Diagonal: 33.80 mm)
		RED_SCARLETW_256x135,//5k, 25.6 mm x 13.5 mm (Diagonal: 28.9 mm)
		EPIC_DRAGON_WEAPON6K_307x158 //6k, 30.7 mm x 15.8 mm (Diagonal: 34.5 mm), RED DRAGON 19.4 Megapixel CMOS
	};

	public enum class framerate_resolution {
		fps75_8K_8192x3456,
		fps60_8K_8192x4320 //REDCODE RAW MAX FRAME RATES  1	60 fps at 8K Full Format (8192 x 4320), 75 fps at 8K 2.4:1 (8192 x 3456)
		//60 fps at 7K Full Format (7168 x 3780), 75 fps at 7K 2.4:1 (7168 x 3024)
		//75 fps at 6K Full Format (6144 x 3240), 100 fps at 6K 2.4:1 (6144 x 2592)
		//96 fps at 5K Full Format (5120 x 2700), 120 fps at 5K 2.4:1 (5120 x 2160)
		//120 fps at 4K Full Format (4096 x 2160), 150 fps at 4K 2.4:1 (4096 x 1728)
		//150 fps at 3K Full Format (3072 x 1620), 200 fps at 3K 2.4:1 (3072 x 1296)
		//240 fps at 2K Full Format (2048 x 1080), 300 fps at 2K 2.4:1 (2048 x 864)
		//PLAYBACK FRAME RATES
		//(PROJECT TIMEBASE)	23.98, 24, 25, 29.97, 47.95, 48, 50, 59.94, 60 fps, all resolutions
		//REDCODE SETTINGS
		//RANGE FROM 2:1 UP TO 22:1  1	5:1 REDCODE for 8K Full Format (8192 x 4320) at 24 fps
		//12:1 REDCODE for 8K Full Format (8192 x 4320) at 60 fps
		//2:1 REDCODE for 4K Full Format (4096 x 2160) at 24 fps
		//3:1 REDCODE for 4K Full Format (4096 x 2160) at 60 fps
		//REDCODE RAW
		//ACQUISITION FORMATS  2	8K Full Format (8192 x 4320), 2:1, 2.4:1, 16:9, 14:9, 3:2, 6:5, 4:1, 8:1, and Ana 2x, 1.3x, 1.25x
		//7K Full Format (7168 x 3780), 2:1, 2.4:1, 16:9, 6:5, 4:1, 8:1, and Ana 2x, 1.3x
		//6K Full Format (6144 x 3240), 2:1, 2.4:1, 16:9, 3:2, 4:3, 6:5, 4:1, 8:1, and Ana 2x, 1.3x, 1.25x
		//5K Full Format (5120 x 2700), 2:1, 2.4:1, 16:9, 6:5, 4:1, 8:1, and Ana 2x, 1.3x
		//4K Full Format (4096 x 2160), 2:1, 2.4:1, 16:9, 3:2, 4:3, 5:4, 6:5, 4:1, 8:1, 1:1, and Ana 2x, 1.3x
		//3K Full Format (3072 x 1620), 2:1, 2.4:1, 16:9, 3:2, 4:3, 5:4, 6:5, 4:1, 8:1, and Ana 2x, 1.3x
		//2K Full Format (2048 x 1080), 2:1, 2.4:1, 16:9, 3:2, 4:3, 5:4, 6:5, 4:1, 8:1, and Ana 2x, 1.3x
		//APPLE PRORES	422 HQ, 422 and 422 LT at 4K (4096 × 2160) up to 29.97 fps
		//4444 XQ and 4444 at 2K (2048 × 1080) up to 120 fps
		//422 HQ, 422 and 422 LT at 2K (2048 × 1080) up to 120 fps
		//AVID CODECS  3	DNxHR HQX at 4K (4096 × 2160) 12-bit up to 29.97 fps
		//DNxHR HQ, SQ and LB at 4K (4096 × 2160) 8-bit up to 29.97 fps
		//DNxHR 444 at 2K (2048 × 1080) 12-bit up to 120 fps
		//DNxHD 444 and HQX (1920 × 1080) 10-bit up to 120 fps
		//DNxHD HQ, SQ and LB (1920 × 1080) 8-bit up to 120 fps
	};

	//ASPECT RATIO
	public enum class aspect_ratio {
		//The most common aspect ratios used today in the presentation of films in cinemas are 1.85:1 and 2.39 : 1.
		//Two common videographic aspect ratios are 4:3 (1.33:1), the universal video format of the 20th century,
		//and 16:9 (1.77:1), universal for high - definition television and European digital television.
		ar_3x2, //35mm
		ar_4x3, //Super 35mm
		ar_16x9,
		ar_21x9,
		ar_1d43_1 //IMAX 70mm
	};

	public string getSizeAsString(Size s) {
		switch (s) {
		case Size::FULLFRAME_360x240:
			break;
		case Size::APSC_236x157:
			break;
		case Size::APSC_CANON_222x148:
			break;
		case Size::SUPER16_125x702:
			break;
		case Size::SUPER35_253x143:
			break;
		case Size::SUPER35_220x118:
			break;
		case Size::SUPER65:
			break;
		case Size::PANAVISION_MILLENIUM_DXL_8K_410x216:
			break;
		}
	}

	public int getSizeAsMilimetres(Size s) {
		switch (s) {
		case Size::FULLFRAME_360x240:
			break;
		case Size::APSC_236x157:
			break;
		case Size::APSC_CANON_222x148:
			break;
		case Size::SUPER16_125x702:
			break;
		case Size::SUPER35_253x143:
			break;
		case Size::SUPER35_220x118:
			break;
		case Size::SUPER65:
			break;
		case Size::PANAVISION_MILLENIUM_DXL_8K_410x216:
			break;
		}
	}

}

#endif // CAMERASENSOR_H






