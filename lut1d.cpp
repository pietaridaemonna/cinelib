#include "lut1d.h"

LUT1D::LUT1D(QObject *parent) : QObject(parent)
{
//LUTs usually provide an accuracy of 8 bits (values 0-255)
//        10 bits (values 0-1023)
//        12 bits (values 0-4095)
//        or 32-bit floating point (values from 0.0-1.0).
}
