#ifndef LUT1D_H
#define LUT1D_H

#include <QObject>

class LUT1D : public QObject
{
    Q_OBJECT
public:
    explicit LUT1D(QObject *parent = 0);
    int size = 32; //
signals:

public slots:
};

#endif // LUT1D_H
