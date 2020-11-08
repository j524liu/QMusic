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
    bool playing;

private slots:
    void on_pushButton_clicked();
    void on_player_stateChanged(QMediaPlayer::State state);
};
#endif // QMUSICPLAYER_H
