#ifndef CINELIB_H
#define CINELIB_H

#include <QObject>

class Cinelib : public QObject
{
    Q_OBJECT
public:
    explicit Cinelib(QObject *parent = 0);
signals:

public slots:
};

#endif // CINELIB_H
