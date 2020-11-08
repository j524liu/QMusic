#include "qmusicplayer.h"
#include "ui_qmusicplayer.h"

qMusicPlayer::qMusicPlayer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::qMusicPlayer)
{
    ui->setupUi(this);
}

qMusicPlayer::~qMusicPlayer()
{
    delete ui;
}

