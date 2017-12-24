# Qt-RTSP-Test

[![Build Status](https://travis-ci.org/cleitonbueno/qt-rtsp-test.svg?branch=widgets)](https://travis-ci.org/cleitonbueno/qt-rtsp-test) [![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/cleitonbueno/qt-rtsp-test/issues)

Simple example RTSP in Qt5 using Widgets and QML

> - Qt5 compatible with 5.6 and 5.7.


----------


 Dependencies Qt5.6
 -------------------
```bash
$ ldd IPCamWidgets | grep Qt
	libQt5MultimediaWidgets.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5MultimediaWidgets.so.5
	libQt5Widgets.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Widgets.so.5 
	libQt5Multimedia.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Multimedia.so.5
	libQt5Network.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Network.so.5 
	libQt5Core.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Core.so.5 
	libQt5Gui.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5Gui.so.5 
	libQt5OpenGL.so.5 => /opt/Qt/5.6/gcc_64/lib/libQt5OpenGL.so.5
	libicui18n.so.56 => /opt/Qt/5.6/gcc_64/lib/libicui18n.so.56 
	libicuuc.so.56 => /opt/Qt/5.6/gcc_64/lib/libicuuc.so.56 
	libicudata.so.56 => /opt/Qt/5.6/gcc_64/lib/libicudata.so.56

```
----------

Compiling with QtCreator using qmake
-------------------
```bash
15:14:29: Running steps for project IPCamWidgets...
15:14:29: Configuration unchanged, skipping qmake step.
15:14:29: Starting: "/usr/bin/make" 
/opt/Qt/5.6/gcc_64/bin/uic ../qt-rtsp-test/mainwindow.ui -o ui_mainwindow.h
g++ -c -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_MULTIMEDIAWIDGETS_LIB -DQT_WIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I../qt-rtsp-test -I. -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. -I. -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -o main.o ../qt-rtsp-test/main.cpp
g++ -c -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_MULTIMEDIAWIDGETS_LIB -DQT_WIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I../qt-rtsp-test -I. -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. -I. -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -o mainwindow.o ../qt-rtsp-test/mainwindow.cpp
/opt/Qt/5.6/gcc_64/bin/moc -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_MULTIMEDIAWIDGETS_LIB -DQT_WIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -I/home/cbueno/Exemplos/B2Open/Qt/qt-rtsp-test -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. ../qt-rtsp-test/mainwindow.h -o moc_mainwindow.cpp
g++ -c -pipe -O2 -std=gnu++0x -Wall -W -D_REENTRANT -fPIC -DQT_DEPRECATED_WARNINGS -DQT_NO_DEBUG -DQT_MULTIMEDIAWIDGETS_LIB -DQT_WIDGETS_LIB -DQT_MULTIMEDIA_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I../qt-rtsp-test -I. -I/opt/Qt/5.6/gcc_64/include -I/opt/Qt/5.6/gcc_64/include/QtMultimediaWidgets -I/opt/Qt/5.6/gcc_64/include/QtWidgets -I/opt/Qt/5.6/gcc_64/include/QtMultimedia -I/opt/Qt/5.6/gcc_64/include/QtGui -I/opt/Qt/5.6/gcc_64/include/QtNetwork -I/opt/Qt/5.6/gcc_64/include/QtCore -I. -I. -I/opt/Qt/5.6/gcc_64/mkspecs/linux-g++ -o moc_mainwindow.o moc_mainwindow.cpp
g++ -Wl,-O1 -Wl,-rpath,/opt/Qt/5.6/gcc_64/lib -Wl,-rpath-link,/opt/Qt/5.6/gcc_64/lib -o IPCamWidgets main.o mainwindow.o moc_mainwindow.o   -L/opt/Qt/5.6/gcc_64/lib -lQt5MultimediaWidgets -L/usr/lib64 -lQt5Widgets -lQt5Multimedia -lQt5Gui -lQt5Network -lQt5Core -lGL -lpthread 
15:14:31: The process "/usr/bin/make" exited normally.
15:14:31: Elapsed time: 00:03.
```

----------


>**Parameters:**
> - --fullscreen
> - --maximized
> - --help


----------


Contact
---------------
cleitonrbueno at gmail.com </br>
cleiton.bueno at b2open.com </br>
