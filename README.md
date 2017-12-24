# Qt-RTSP-Test

[![Build Status](https://travis-ci.org/cleitonbueno/qt-rtsp-test.svg?branch=qml)](https://travis-ci.org/cleitonbueno/qt-rtsp-test) [![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/cleitonbueno/qt-rtsp-test/issues)

Simple example RTSP in Qt5 using QML

> - Qt5 compatible with 5.6 and 5.7.


----------


 Dependencies Qt5.6
 -------------------
```bash
$ ldd IPCamQML | grep Qt
	libQt5Gui.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Gui.so.5 
	libQt5Qml.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Qml.so.5 
	libQt5Core.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Core.so.5 
	libQt5Network.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Network.so.5 
	libicui18n.so.56 => /opt/Qt/5.6/gcc_64/lib/libicui18n.so.56 
	libicuuc.so.56 => /opt/Qt/5.6/gcc_64/lib/libicuuc.so.56 
	libicudata.so.56 => /opt/Qt/5.6/gcc_64/lib/libicudata.so.56 
```
----------

Compiling with QtCreator using qmake
-------------------
```bash
15:55:03: Running steps for project IPCamQML...
15:55:03: Configuration unchanged, skipping qmake step.
15:55:03: Starting: "/usr/bin/make" 
g++ -c -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_QUICK_LIB -DQT_MULTIMEDIAWIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I../qt-rtsp-test -I. -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtQuick -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtQml -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -o main.o ../qt-rtsp-test/main.cpp
/opt/Qt/5.6/gcc_64/bin/rcc -name qml ../qt-rtsp-test/qml.qrc -o qrc_qml.cpp
g++ -c -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_QUICK_LIB -DQT_MULTIMEDIAWIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_WIDGETS_LIB -DQT_GUI_LIB -DQT_QML_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I../qt-rtsp-test -I. -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtQuick -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtQml -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -o qrc_qml.o qrc_qml.cpp
g++ -Wl,-O1 -Wl,-rpath,/opt/Qt/5.6/gcc_64/lib -Wl,-rpath-link,/opt/Qt/5.6/gcc_64/lib -o IPCamQML main.o qrc_qml.o   -L/opt/Qt/5.6/gcc_64/lib -lQt5Quick -L/usr/lib64 -lQt5MultimediaWidgets -lQt5Multimedia -lQt5Widgets -lQt5Gui -lQt5Qml -lQt5Network -lQt5Core -lGL -lpthread 
15:55:04: The process "/usr/bin/make" exited normally.
15:55:04: Elapsed time: 00:01.

```


----------


Contact
---------------
cleitonrbueno at gmail.com </br>
cleiton.bueno at b2open.com </br>

