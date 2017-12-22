#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QGridLayout>
#include <QMediaPlayer>
#include <QNetworkRequest>
#include <QVideoWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Alterando o titulo do QMainWindow
    setWindowTitle("B2Open - RTSP e Streaming Video com Qt5 Widgets");

    // Criando 4 QVideoWidget
    QVideoWidget *_vw1 = new QVideoWidget;
    QVideoWidget *_vw2 = new QVideoWidget;
    QVideoWidget *_vw3 = new QVideoWidget;
    QVideoWidget *_vw4 = new QVideoWidget;

    // Criando 4 QMediaPlayer
    QMediaPlayer *_player1 = new QMediaPlayer;
    QMediaPlayer *_player2 = new QMediaPlayer;
    QMediaPlayer *_player3 = new QMediaPlayer;
    QMediaPlayer *_player4 = new QMediaPlayer;

    // Criando um QGridLayout de 4x4
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(_vw1,0,0,1,1);
    layout->addWidget(_vw2,0,1,1,1);
    layout->addWidget(_vw3,1,0,1,1);
    layout->addWidget(_vw4,1,1,1,1);


    // Cria um QWudget que irá receber o layout com os VideoWidgets
    QWidget *win = new QWidget();
    win->setLayout(layout);
    setCentralWidget(win);

    // QMediaPlayer -> QVideoWidget
    _player1->setVideoOutput(_vw1);
    _player2->setVideoOutput(_vw2);
    _player3->setVideoOutput(_vw3);
    _player4->setVideoOutput(_vw4);


    // Links de RTSP e Videos
    const QUrl url1 = QUrl("rtsp://184.72.239.149/vod/mp4:BigBuckBunny_115k.mov");
    const QUrl url2 = QUrl("rtsp://admin:admin@192.168.1.1/22");
    const QUrl url3 = QUrl("rtsp://192.168.1.2/1/stream1");
    const QUrl url4 = QUrl("rtsp://192.168.1.3/1/stream");

    // O NetworkRequest para os links
    const QNetworkRequest requestRtsp1(url1);
    const QNetworkRequest requestRtsp2(url2);
    const QNetworkRequest requestRtsp3(url3);
    const QNetworkRequest requestRtsp4(url4);

    // Adicionandos os links para o conteudo
    _player1->setMedia(requestRtsp1);
    _player2->setMedia(requestRtsp2);
    _player3->setMedia(requestRtsp3);
    _player4->setMedia(requestRtsp4);

    // Da play para iniciar o Streaming
    _player1->play();
    _player2->play();
    _player3->play();
    _player4->play();

}

MainWindow::~MainWindow()
{
    delete ui;
}
