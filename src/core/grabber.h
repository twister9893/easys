#ifndef GRABBER_H
#define GRABBER_H

class QPixmap;
class QRect;

namespace easys { namespace core {

class Grabber {
public:
    Grabber();

    QPixmap grabWholeScreen(int screenNum = -1);
    QPixmap grabRect(const QRect &rect);
};

}}

#endif // GRABBER_H
