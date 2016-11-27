#include "lut3d.h"


LUT3D::LUT3D(QObject *parent) : QObject(parent)
{

}

void LUT3D::generateLUT()
{
    //Cubes may be of various sizes and bit depths. Often 17x17x17 cubes are used as 3D LUTs.
    //LUTS as .CUBE and .3DL are (32x32x32)
    //33×33×33, 32×32×32, 26×26×26, and 17×17×17 3D LUT
}
