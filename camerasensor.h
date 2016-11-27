#ifndef CAMERASENSOR_H
#define CAMERASENSOR_H

#include <QObject>

class CameraSensor : public QObject
{
    Q_OBJECT
    Q_ENUMS(Brand)
public:
    explicit CameraSensor(QObject *parent = 0);
    enum Type {
        APSCt,
        MFT, //Micro Four Thirds
        FULLFRAME,
        ONEINCH,
        RED_DRAGON_SUPER35, //RED DRAGON 13.8 MP Super 35 mm CMOS
        RED_DRAGON_19MPXCMOS, //RED DRAGON 19.4 Megapixel CMOS
        RED_HELIUM //HELIUM 35.4 Megapixel CMOS
    };

    enum Size {
        FULLFRAME_35MM, //35 mm "full frame" 36x24mm
        APSC, //APS-C (Nikon, Sony, Pentax, Fuji etc   ~23.6x15.7mm
        APSC_CANON, //22.2x14.8mm
        SUPER16, //12.48mm x 7.02mm (Super 16)
        SUPER35, //25.34mm x 14.25mm (Super35)
        SUPER35_TODO, //22mm x 11.88mm (Super 35)
        SUPER65, //65 mm format digital cinema camera
        PANAVISION70,
        PANAVISION_MILLENIUM_DXL_8K, //Large Format: 40.96mm x 21.60mm (Diagonal: 46.31mm)
        BPCC, //Blackmagic Pocket Cinema Camera, 12.48mm x 7.02mm
        BCC, //Blackmagic Cinema Camera, 15.81mm x 8.88mm
        BSCHD, //Blackmagic Studio Camera HD, 12.48mm x 7.02mm
        BMSC4K, //Blackmagic Micro Studio Camera 4K, 13.056mm x 7.344mm
        MFTS, //Four Thirds system 17.3x13mm
        LEICA, //TODO
        RED_EPICW, //8k, 29.90 mm x 15.77 mm (Diagonal: 33.80 mm)
        RED_SCARLETW ,//5k, 25.6 mm x 13.5 mm (Diagonal: 28.9 mm)
        EPIC_DRAGON, //6k, 30.7 mm x 15.8 mm (Diagonal: 34.5 mm), RED DRAGON 19.4 Megapixel CMOS
        EPIC_WEAPON6K, //30.7 mm x 15.8 mm (Diagonal: 34.5 mm), RED DRAGON 19.4 Megapixel CMOS
        WEAPON_8K_S35//29.90 mm x 15.77 mm (Diagonal: 33.80 mm)
};

    enum Format {
        TODO
//        NTSC D1 4/3 720 x 486
//        NTSC D1 16/9 720 x 486
//        Cine 35 1.37/1
//        Cine 35 1.66/1
//        Cine 35 1.85/1
//        Cine 35 Vistavision
//        Cine 70 Panavision
//        Cine 70 Imax
//        Cine 16
//        Cine Super 16
//        Slide 35 (24 x 36)
//        Slide 6 x 6
//        Slide 4 x 5/8 x 10
//        PAL D1 4/3 720 x 576
//        PAL D1 16/9 720 x 576
//        HDTV 480 640 x 480
//        HDTV 480 4/3 704 x 480
//        HDTV 480 16/9 704 x 480
//        HDTV 720 16/9 1280 x 720
//        HDTV 1035 16/9 1920 x 1035
//        HDTV 1080 16/9 1920 x 1080
    };

    enum Brand {
        Canon,
        Fujifilm,
        Konica_Minolta,
        Leica,
        Nikon,
        Pentax,
        Samsung,
        Sigma,
        Sony,
        Tamron,
        Tokina
    };
signals:

public slots:
};

#endif // CAMERASENSOR_H

//MAKERS OF APS-C
//Canon: EF-S, EF-M
//Fujifilm: X-Mount
//Konica Minolta: DT
//Leica: T or TL
//Nikon: DX
//Pentax: DA
//Samsung: NX
//Sigma: DC
//Sony: DT, E (it's APS-C if not FE designated)
//Tamron: Di II
//Tokina: DX




//REDCODE RAW MAX FRAME RATES  1	60 fps at 8K Full Format (8192 x 4320), 75 fps at 8K 2.4:1 (8192 x 3456)
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
