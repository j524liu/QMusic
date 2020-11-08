#ifndef QMUSICPLAYER_H
#define QMUSICPLAYER_H

#include <QWidget>
#include <QMediaPlayer>

QT_BEGIN_NAMESPACE
namespace Ui { class qMusicPlayer; }
QT_END_NAMESPACE

class qMusicPlayer : public QWidget
{
    Q_OBJECT

public:
    qMusicPlayer(QWidget *parent = nullptr);
    ~qMusicPlayer();

private:
    Ui::qMusicPlayer *ui;
    QMediaPlayer * player;
};
#endif // QMUSICPLAYER_H
