#include "qmusicplayer.h"
#include "ui_qmusicplayer.h"
#include <iostream>

qMusicPlayer::qMusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qMusicPlayer)
{
    ui->setupUi(this);
    player = new QMediaPlayer;
    player->setMedia(QUrl::fromLocalFile("D:\\Music\\Cutie Panther.flac"));
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
