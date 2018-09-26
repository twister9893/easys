#include "grabber.h"

#include <QDebug>
#include <QGuiApplication>
#include <QScreen>
#include <QWindow>
#include <QPixmap>
#include <QRect>

using namespace easys::core;

Grabber::Grabber() {}

QPixmap Grabber::grabWholeScreen(int screenNum)
{
    QScreen *screen = QGuiApplication::primaryScreen();
    if(screenNum >= 0 && screenNum < QGuiApplication::screens().size()) {
       screen = QGuiApplication::screens().at(screenNum);
    }
    if(!screen) {
        qCritical() << Q_FUNC_INFO << "Screen getting failed";
        return QPixmap();
    }
    return screen->grabWindow(0, screen->geometry().topLeft().x(),
                                 screen->geometry().topLeft().y(),
                                 screen->geometry().width(),
                                 screen->geometry().height());
}

QPixmap Grabber::grabRect(const QRect &rect)
{
    Q_UNUSED(rect)
    return QPixmap();
}

