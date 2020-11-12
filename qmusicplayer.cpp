#include "qmusicplayer.h"
#include "ui_qmusicplayer.h"
#include <iostream>
//player
qMusicPlayer::qMusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qMusicPlayer)
{
    ui->setupUi(this);
    player = new QMediaPlayer;
    connect(player, &QMediaPlayer::stateChanged,
            this, &qMusicPlayer::on_player_stateChanged);
    player->setMedia(QUrl::fromLocalFile("D:\\Musics\\Cutie Panther.flac"));
    player->setVolume(10);
    playing = false;
}

qMusicPlayer::~qMusicPlayer()
{
    delete ui;
}

void qMusicPlayer::on_player_stateChanged(QMediaPlayer::State state)
{
    if(state == QMediaPlayer::PlayingState)
    {
        std::cout << "Playing..." << std::endl;
    }
    else
    {
        std::cout << "Stopped..." << std::endl;
    }
}

void qMusicPlayer::on_pushButton_clicked()
{
    if(playing)
    {
        playing = false;
        player -> pause();
    }
    else
    {
        playing = true;
        player -> play();
    }
}
