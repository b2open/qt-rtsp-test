// 5.7
//import QtQuick 2.7
//import QtQuick.Controls 2.0

// 5.6
import QtQuick 2.4
import Qt.labs.controls 1.0

import QtQuick.Layouts 1.0
import QtMultimedia 5.4


ApplicationWindow {
    visible: true
    visibility: "Maximized"
    //visibility: "FullScreen"
    title: qsTr("B2Open - RTSP e Streaming Video com Qt5 QML")

    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex


        Page {
            MediaPlayer {
                id: mediaplayer1
                source: "rtsp://admin:admin@192.168.1.q/1/stream1"
            }

            VideoOutput {
                anchors.fill: parent
                source: mediaplayer1
            }

            Text {
                id: msgPage1
                anchors.centerIn: parent
                font.pointSize: 32
                text: qsTr("Toque para iniciar")
            }

            MouseArea {
                id: playArea
                anchors.fill: parent
                onClicked: {
                    if (msgPage1.visible)
                    {
                        print("Iniciando streaming - 1")
                        msgPage1.visible = false
                        mediaplayer1.play()
                    }
                    else {
                        print("Parando streaming - 1")
                        mediaplayer1.stop()
                        msgPage1.visible = true
                    }
                }
            }
        }

        Page {
            MediaPlayer {
                id: mediaplayer2
                source: "rtsp://184.72.239.149/vod/mp4:BigBuckBunny_115k.mov"
            }

            VideoOutput {
                anchors.fill: parent
                source: mediaplayer2
            }

            Text {
                id: msgPage2
                anchors.centerIn: parent
                font.pointSize: 32
                text: qsTr("Toque para iniciar")
            }

            MouseArea {
                id: playArea2
                anchors.fill: parent
                onClicked: {
                    if (msgPage2.visible)
                    {
                        print("Iniciando streaming - 2")
                        msgPage2.visible = false
                        mediaplayer2.play()
                    }
                    else {
                        print("Parando streaming - 2")
                        mediaplayer2.stop()
                        msgPage2.visible = true
                    }
                }
            }
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("IPCAM1")
        }
        TabButton {
            text: qsTr("IPCAM2")
        }
    }
}
