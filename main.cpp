#include "qmusicplayer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qMusicPlayer w;
    w.show();
    return a.exec();
}
