#include <QGuiApplication>
#include <QPixmap>

#include <core/grabber.h>

using namespace easys;

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    core::Grabber grabber;
    QPixmap pix = grabber.grabWholeScreen(0);
    pix.save("out.png");

    return 0;
}

