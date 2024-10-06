/********************************************************************************
** Form generated from reading UI file 'dfchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFCHANNEL_H
#define UI_DFCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DFChannel
{
public:
    QFrame *frame;
    QFrame *frame_2;
    QCustomPlot *customplot_1;
    QCustomPlot *customplot_4;
    QCustomPlot *customplot_7;
    QCustomPlot *customplot_8;
    QCustomPlot *customplot_5;
    QCustomPlot *customplot_3;
    QCustomPlot *customplot_2;
    QCustomPlot *customplot_6;
    QFrame *frame_3;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QFrame *frame_12;
    QPushButton *pushButton_12;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_11;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *DFChannel)
    {
        if (DFChannel->objectName().isEmpty())
            DFChannel->setObjectName("DFChannel");
        DFChannel->resize(1920, 1080);
        frame = new QFrame(DFChannel);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-21, 75, 1941, 1011));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:rgba(107, 138, 122, 0.5);\n"
"\n"
"\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 0, 1921, 1011));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:#3A383F;\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        customplot_1 = new QCustomPlot(frame_2);
        customplot_1->setObjectName("customplot_1");
        customplot_1->setGeometry(QRect(140, 50, 400, 160));
        customplot_1->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_4 = new QCustomPlot(frame_2);
        customplot_4->setObjectName("customplot_4");
        customplot_4->setGeometry(QRect(140, 240, 400, 160));
        customplot_4->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_7 = new QCustomPlot(frame_2);
        customplot_7->setObjectName("customplot_7");
        customplot_7->setGeometry(QRect(140, 440, 400, 160));
        customplot_7->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_8 = new QCustomPlot(frame_2);
        customplot_8->setObjectName("customplot_8");
        customplot_8->setGeometry(QRect(1380, 630, 400, 160));
        customplot_8->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_5 = new QCustomPlot(frame_2);
        customplot_5->setObjectName("customplot_5");
        customplot_5->setGeometry(QRect(1380, 440, 400, 160));
        customplot_5->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_3 = new QCustomPlot(frame_2);
        customplot_3->setObjectName("customplot_3");
        customplot_3->setGeometry(QRect(1380, 240, 400, 160));
        customplot_3->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_2 = new QCustomPlot(frame_2);
        customplot_2->setObjectName("customplot_2");
        customplot_2->setGeometry(QRect(1380, 50, 400, 160));
        customplot_2->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_6 = new QCustomPlot(frame_2);
        customplot_6->setObjectName("customplot_6");
        customplot_6->setGeometry(QRect(140, 630, 400, 160));
        customplot_6->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(590, 50, 721, 740));
        frame_3->setStyleSheet(QString::fromUtf8("background-image: url(:/map5.jpg);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame_3);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 721, 781));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_12 = new QFrame(frame_2);
        frame_12->setObjectName("frame_12");
        frame_12->setGeometry(QRect(0, 810, 1921, 131));
        frame_12->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:#141218;\n"
"\n"
"\n"
"\n"
"}"));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        pushButton_12 = new QPushButton(frame_12);
        pushButton_12->setObjectName("pushButton_12");
        pushButton_12->setGeometry(QRect(440, 20, 120, 50));
        QFont font;
        font.setBold(true);
        pushButton_12->setFont(font);
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_16 = new QPushButton(frame_12);
        pushButton_16->setObjectName("pushButton_16");
        pushButton_16->setGeometry(QRect(1030, 20, 150, 50));
        pushButton_16->setFont(font);
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#117AE9;\n"
"border-radius:5px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
""));
        pushButton_17 = new QPushButton(frame_12);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(820, 20, 150, 50));
        pushButton_17->setFont(font);
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#117AE9;\n"
"border-radius:5px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
""));
        pushButton_11 = new QPushButton(frame_12);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(1660, 10, 191, 91));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/uni_logo185x80.png);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        pushButton_5 = new QPushButton(frame_12);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(90, 20, 120, 50));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_6 = new QPushButton(frame_12);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(260, 20, 120, 50));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_7 = new QPushButton(frame_12);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(1240, 20, 150, 50));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#117AE9;\n"
"border-radius:5px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
""));
        pushButton = new QPushButton(DFChannel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1921, 86));
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#141218;\n"
"color:#ffffff;\n"
"font-size:24px;\n"
"}"));
        pushButton_2 = new QPushButton(DFChannel);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 0, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/df_logo_100x100.png);\n"
"background-position:fixed;\n"
"border-color:#102b03;\n"
"background-color:transparent\n"
"}"));
        pushButton_3 = new QPushButton(DFChannel);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(1720, 0, 201, 81));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/AEEL_ (1).png);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        label = new QLabel(DFChannel);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 111, 16));
        QFont font1;
        font1.setPointSize(7);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#ffffff;\n"
"}"));

        retranslateUi(DFChannel);

        QMetaObject::connectSlotsByName(DFChannel);
    } // setupUi

    void retranslateUi(QWidget *DFChannel)
    {
        DFChannel->setWindowTitle(QCoreApplication::translate("DFChannel", "Form", nullptr));
        pushButton_12->setText(QCoreApplication::translate("DFChannel", "QUIT", nullptr));
        pushButton_16->setText(QCoreApplication::translate("DFChannel", "Console Log", nullptr));
        pushButton_17->setText(QCoreApplication::translate("DFChannel", "Main View", nullptr));
        pushButton_11->setText(QString());
        pushButton_5->setText(QCoreApplication::translate("DFChannel", "Start", nullptr));
        pushButton_6->setText(QCoreApplication::translate("DFChannel", "Stop", nullptr));
        pushButton_7->setText(QCoreApplication::translate("DFChannel", "Expert View", nullptr));
        pushButton->setText(QCoreApplication::translate("DFChannel", "Track Hawk Direction Finder", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QCoreApplication::translate("DFChannel", "Track Hawk Direction Finder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFChannel: public Ui_DFChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFCHANNEL_H
