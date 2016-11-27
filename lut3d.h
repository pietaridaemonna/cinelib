#ifndef LUT3D_H
#define LUT3D_H

#include <QObject>
#include <lut1d.h>

class LUT3D : public QObject
{
    Q_OBJECT
public:
    explicit LUT3D(QObject *parent = 0);
private:
    void generateLUT();
signals:

public slots:
};

#endif // LUT3D_H
