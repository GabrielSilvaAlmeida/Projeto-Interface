/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QColumnView *coluna2;
    QLabel *label;
    QPushButton *readybutton;
    QColumnView *coluna1;
    QColumnView *coluna4;
    QColumnView *coluna3;
    QColumnView *coluna5;
    QPushButton *fluoroscopytimebutton;
    QPushButton *hubutton;
    QPushButton *heatexchangerbutton;
    QPushButton *overheatingbutton;
    QPushButton *timerbutton;
    QPushButton *configurationbutton;
    QPushButton *turnoffbutton;
    QPushButton *xrlockupbutton;
    QPushButton *fluoro;
    QPushButton *cinebutton;
    QPushButton *angiobutton;
    QPushButton *lbutton;
    QPushButton *nbutton;
    QPushButton *ibutton;
    QPushButton *l2button;
    QPushButton *n2button;
    QPushButton *i2button;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *xraybutton;
    QPushButton *zerarbutton;
    QPushButton *pushButton_24;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_13;
    QLabel *label_18;
    QLabel *timerlabel;
    QProgressBar *progressBar_2;
    QLabel *label_8;
    QProgressBar *progressBar_3;
    QMenuBar *menubar;
    QMenu *menuArquivos;
    QMenu *menuOp_es;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1263, 724);
        MainWindow->setMouseTracking(false);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #282639"));
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        coluna2 = new QColumnView(centralwidget);
        coluna2->setObjectName("coluna2");
        coluna2->setGeometry(QRect(310, 0, 461, 461));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(10);
        coluna2->setFont(font);
        coluna2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127)"));
        coluna2->setFrameShape(QFrame::Panel);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 470, 91, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(20);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        readybutton = new QPushButton(centralwidget);
        readybutton->setObjectName("readybutton");
        readybutton->setGeometry(QRect(320, 520, 111, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(false);
        readybutton->setFont(font2);
        readybutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        coluna1 = new QColumnView(centralwidget);
        coluna1->setObjectName("coluna1");
        coluna1->setGeometry(QRect(30, 0, 271, 591));
        coluna1->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127)"));
        coluna1->setFrameShape(QFrame::Panel);
        coluna4 = new QColumnView(centralwidget);
        coluna4->setObjectName("coluna4");
        coluna4->setGeometry(QRect(30, 600, 741, 71));
        coluna4->setLayoutDirection(Qt::LeftToRight);
        coluna4->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127)"));
        coluna4->setFrameShape(QFrame::Panel);
        coluna3 = new QColumnView(centralwidget);
        coluna3->setObjectName("coluna3");
        coluna3->setGeometry(QRect(310, 470, 461, 121));
        coluna3->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127)"));
        coluna3->setFrameShape(QFrame::Panel);
        coluna5 = new QColumnView(centralwidget);
        coluna5->setObjectName("coluna5");
        coluna5->setEnabled(true);
        coluna5->setGeometry(QRect(780, 0, 401, 671));
        coluna5->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 85, 127)"));
        coluna5->setFrameShape(QFrame::Panel);
        coluna5->setAlternatingRowColors(false);
        coluna5->setResizeGripsVisible(true);
        fluoroscopytimebutton = new QPushButton(centralwidget);
        fluoroscopytimebutton->setObjectName("fluoroscopytimebutton");
        fluoroscopytimebutton->setGeometry(QRect(40, 290, 111, 41));
        fluoroscopytimebutton->setFont(font2);
        fluoroscopytimebutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        hubutton = new QPushButton(centralwidget);
        hubutton->setObjectName("hubutton");
        hubutton->setGeometry(QRect(170, 290, 111, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Franklin Gothic Book")});
        font3.setPointSize(12);
        font3.setBold(false);
        hubutton->setFont(font3);
        hubutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        heatexchangerbutton = new QPushButton(centralwidget);
        heatexchangerbutton->setObjectName("heatexchangerbutton");
        heatexchangerbutton->setGeometry(QRect(40, 350, 111, 41));
        heatexchangerbutton->setFont(font2);
        heatexchangerbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        overheatingbutton = new QPushButton(centralwidget);
        overheatingbutton->setObjectName("overheatingbutton");
        overheatingbutton->setGeometry(QRect(170, 350, 111, 41));
        overheatingbutton->setFont(font3);
        overheatingbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        timerbutton = new QPushButton(centralwidget);
        timerbutton->setObjectName("timerbutton");
        timerbutton->setGeometry(QRect(40, 420, 241, 51));
        timerbutton->setFont(font2);
        timerbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        configurationbutton = new QPushButton(centralwidget);
        configurationbutton->setObjectName("configurationbutton");
        configurationbutton->setGeometry(QRect(40, 480, 241, 51));
        configurationbutton->setFont(font2);
        configurationbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        turnoffbutton = new QPushButton(centralwidget);
        turnoffbutton->setObjectName("turnoffbutton");
        turnoffbutton->setGeometry(QRect(40, 540, 111, 41));
        turnoffbutton->setFont(font2);
        turnoffbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        xrlockupbutton = new QPushButton(centralwidget);
        xrlockupbutton->setObjectName("xrlockupbutton");
        xrlockupbutton->setGeometry(QRect(170, 540, 111, 41));
        xrlockupbutton->setFont(font2);
        xrlockupbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0)"));
        fluoro = new QPushButton(centralwidget);
        fluoro->setObjectName("fluoro");
        fluoro->setGeometry(QRect(360, 20, 81, 91));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Arial")});
        font4.setBold(false);
        fluoro->setFont(font4);
        fluoro->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        fluoro->setIconSize(QSize(50, 50));
        cinebutton = new QPushButton(centralwidget);
        cinebutton->setObjectName("cinebutton");
        cinebutton->setGeometry(QRect(490, 20, 81, 91));
        cinebutton->setFont(font4);
        cinebutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        cinebutton->setIconSize(QSize(50, 50));
        angiobutton = new QPushButton(centralwidget);
        angiobutton->setObjectName("angiobutton");
        angiobutton->setGeometry(QRect(620, 20, 81, 91));
        angiobutton->setFont(font4);
        angiobutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        angiobutton->setIconSize(QSize(50, 50));
        lbutton = new QPushButton(centralwidget);
        lbutton->setObjectName("lbutton");
        lbutton->setGeometry(QRect(440, 20, 31, 31));
        lbutton->setFont(font4);
        lbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        nbutton = new QPushButton(centralwidget);
        nbutton->setObjectName("nbutton");
        nbutton->setGeometry(QRect(440, 50, 31, 31));
        nbutton->setFont(font4);
        nbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        ibutton = new QPushButton(centralwidget);
        ibutton->setObjectName("ibutton");
        ibutton->setGeometry(QRect(440, 80, 31, 31));
        ibutton->setFont(font4);
        ibutton->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        l2button = new QPushButton(centralwidget);
        l2button->setObjectName("l2button");
        l2button->setGeometry(QRect(570, 20, 31, 31));
        l2button->setFont(font4);
        l2button->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        n2button = new QPushButton(centralwidget);
        n2button->setObjectName("n2button");
        n2button->setGeometry(QRect(570, 50, 31, 31));
        n2button->setFont(font4);
        n2button->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        i2button = new QPushButton(centralwidget);
        i2button->setObjectName("i2button");
        i2button->setGeometry(QRect(570, 80, 31, 31));
        i2button->setFont(font4);
        i2button->setStyleSheet(QString::fromUtf8("background-color: #52639f\n"
""));
        pushButton_19 = new QPushButton(centralwidget);
        pushButton_19->setObjectName("pushButton_19");
        pushButton_19->setGeometry(QRect(700, 20, 31, 31));
        pushButton_19->setFont(font4);
        pushButton_19->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        pushButton_20 = new QPushButton(centralwidget);
        pushButton_20->setObjectName("pushButton_20");
        pushButton_20->setGeometry(QRect(700, 50, 31, 31));
        pushButton_20->setFont(font4);
        pushButton_20->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        pushButton_21 = new QPushButton(centralwidget);
        pushButton_21->setObjectName("pushButton_21");
        pushButton_21->setGeometry(QRect(700, 80, 31, 31));
        pushButton_21->setFont(font4);
        pushButton_21->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 50, 131, 31));
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"text-color: rgb(255, 255, 255)\n"
"\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 20, 51, 31));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"text-color: rgb(255, 255, 255)\n"
"\n"
""));
        xraybutton = new QPushButton(centralwidget);
        xraybutton->setObjectName("xraybutton");
        xraybutton->setGeometry(QRect(440, 520, 71, 51));
        xraybutton->setFont(font4);
        xraybutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        xraybutton->setIconSize(QSize(50, 50));
        zerarbutton = new QPushButton(centralwidget);
        zerarbutton->setObjectName("zerarbutton");
        zerarbutton->setGeometry(QRect(670, 520, 71, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(20);
        font5.setBold(false);
        zerarbutton->setFont(font5);
        zerarbutton->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        pushButton_24 = new QPushButton(centralwidget);
        pushButton_24->setObjectName("pushButton_24");
        pushButton_24->setGeometry(QRect(650, 600, 121, 71));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);
        pushButton_24->setMinimumSize(QSize(121, 71));
        pushButton_24->setMaximumSize(QSize(121, 71));
        QPalette palette;
        QBrush brush(QColor(82, 99, 159, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton_24->setPalette(palette);
        pushButton_24->setFont(font4);
        pushButton_24->setLayoutDirection(Qt::LeftToRight);
        pushButton_24->setAutoFillBackground(false);
        pushButton_24->setStyleSheet(QString::fromUtf8("background-color: #52639f"));
        pushButton_24->setInputMethodHints(Qt::ImhNone);
        pushButton_24->setCheckable(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 250, 111, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Arial")});
        font6.setPointSize(25);
        label_4->setFont(font6);
        label_4->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(580, 470, 161, 41));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Arial")});
        font7.setPointSize(15);
        font7.setBold(false);
        label_5->setFont(font7);
        label_5->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(580, 540, 81, 41));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Arial")});
        font8.setPointSize(15);
        label_6->setFont(font8);
        label_6->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(150, 100, 51, 21));
        label_7->setFont(font8);
        label_7->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"text-color: rgb(255, 255, 255)\n"
"\n"
""));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(370, 80, 61, 31));
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(510, 80, 41, 31));
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"\n"
""));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(640, 80, 51, 31));
        label_13->setFont(font8);
        label_13->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"painter->fillRect(option.rect, QColor(255, 40, 0));\n"
"\n"
""));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(690, 620, 91, 31));
        label_18->setFont(font8);
        label_18->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255))"));
        label_18->setScaledContents(true);
        timerlabel = new QLabel(centralwidget);
        timerlabel->setObjectName("timerlabel");
        timerlabel->setGeometry(QRect(580, 520, 81, 31));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Cascadia Mono")});
        font9.setPointSize(12);
        timerlabel->setFont(font9);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(40, 170, 241, 10));
        progressBar_2->setValue(24);
        progressBar_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar_2->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(120, 150, 81, 20));
        label_8->setFont(font8);
        label_8->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 255));\n"
"\n"
"text-color: rgb(255, 255, 255)\n"
"\n"
""));
        label_8->setScaledContents(true);
        progressBar_3 = new QProgressBar(centralwidget);
        progressBar_3->setObjectName("progressBar_3");
        progressBar_3->setGeometry(QRect(40, 120, 241, 10));
        progressBar_3->setValue(24);
        progressBar_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        progressBar_3->setOrientation(Qt::Horizontal);
        MainWindow->setCentralWidget(centralwidget);
        coluna2->raise();
        coluna1->raise();
        coluna4->raise();
        coluna3->raise();
        label->raise();
        readybutton->raise();
        coluna5->raise();
        fluoroscopytimebutton->raise();
        hubutton->raise();
        heatexchangerbutton->raise();
        overheatingbutton->raise();
        timerbutton->raise();
        configurationbutton->raise();
        turnoffbutton->raise();
        xrlockupbutton->raise();
        fluoro->raise();
        cinebutton->raise();
        angiobutton->raise();
        lbutton->raise();
        nbutton->raise();
        ibutton->raise();
        l2button->raise();
        n2button->raise();
        i2button->raise();
        pushButton_19->raise();
        pushButton_20->raise();
        pushButton_21->raise();
        label_2->raise();
        label_3->raise();
        xraybutton->raise();
        zerarbutton->raise();
        pushButton_24->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_9->raise();
        label_11->raise();
        label_13->raise();
        label_18->raise();
        timerlabel->raise();
        progressBar_2->raise();
        label_8->raise();
        progressBar_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1263, 22));
        menuArquivos = new QMenu(menubar);
        menuArquivos->setObjectName("menuArquivos");
        menuArquivos->setAutoFillBackground(false);
        menuArquivos->setToolTipsVisible(true);
        menuOp_es = new QMenu(menubar);
        menuOp_es->setObjectName("menuOp_es");
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        QBrush brush2(QColor(40, 38, 57, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        menuOp_es->setPalette(palette1);
        QFont font10;
        font10.setBold(true);
        menuOp_es->setFont(font10);
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArquivos->menuAction());
        menubar->addAction(menuOp_es->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">X-Ray</span></p></body></html>", nullptr));
        readybutton->setText(QCoreApplication::translate("MainWindow", "Ready", nullptr));
        fluoroscopytimebutton->setText(QCoreApplication::translate("MainWindow", "Fluoroscopy Time", nullptr));
        hubutton->setText(QCoreApplication::translate("MainWindow", "HU", nullptr));
        heatexchangerbutton->setText(QCoreApplication::translate("MainWindow", "Heat Exchanger", nullptr));
        overheatingbutton->setText(QCoreApplication::translate("MainWindow", "Overheating", nullptr));
        timerbutton->setText(QCoreApplication::translate("MainWindow", "Timer", nullptr));
        configurationbutton->setText(QCoreApplication::translate("MainWindow", "Configuration", nullptr));
        turnoffbutton->setText(QCoreApplication::translate("MainWindow", "Turn Off", nullptr));
        xrlockupbutton->setText(QCoreApplication::translate("MainWindow", "XR Lockup", nullptr));
        fluoro->setText(QString());
        cinebutton->setText(QString());
        angiobutton->setText(QString());
        lbutton->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        nbutton->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        ibutton->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        l2button->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        n2button->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        i2button->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        pushButton_19->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        pushButton_20->setText(QCoreApplication::translate("MainWindow", "N", nullptr));
        pushButton_21->setText(QCoreApplication::translate("MainWindow", "I", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">XR Tube</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">HU:</span></p></body></html>", nullptr));
        xraybutton->setText(QString());
#if QT_CONFIG(whatsthis)
        zerarbutton->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        zerarbutton->setText(QCoreApplication::translate("MainWindow", "=0", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_24->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">casdasd</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_24->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Alarms</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Fluoroscopy Time</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">(h:min:s)</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">HU</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Fluoro</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Cine</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Angio</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#ffffff;\">Restart</span></p></body></html>", nullptr));
        timerlabel->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; color:#ffffff;\">Generator HU</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        menuArquivos->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        menuArquivos->setTitle(QCoreApplication::translate("MainWindow", "Arquivos", nullptr));
        menuOp_es->setTitle(QCoreApplication::translate("MainWindow", "Op\303\247\303\265es", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
