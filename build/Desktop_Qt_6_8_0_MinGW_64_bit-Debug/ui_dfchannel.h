/********************************************************************************
** Form generated from reading UI file 'dfchannel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFCHANNEL_H
#define UI_DFCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_DFChannel
{
public:
    QFrame *frame;
    QCustomPlot *customplot_9;
    QFrame *frame_2;
    QPushButton *pushButton_4;
    QCustomPlot *customplot_1;
    QCustomPlot *customplot_4;
    QCustomPlot *customplot_7;
    QCustomPlot *customplot_8;
    QCustomPlot *customplot_5;
    QCustomPlot *customplot_3;
    QCustomPlot *customplot_2;
    QCustomPlot *customplot_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;

    void setupUi(QWidget *DFChannel)
    {
        if (DFChannel->objectName().isEmpty())
            DFChannel->setObjectName("DFChannel");
        DFChannel->resize(1059, 784);
        frame = new QFrame(DFChannel);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(-21, 75, 1081, 711));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:rgba(107, 138, 122, 0.5);\n"
"\n"
"\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        customplot_9 = new QCustomPlot(frame);
        customplot_9->setObjectName("customplot_9");
        customplot_9->setGeometry(QRect(385, 185, 331, 311));
        customplot_9->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 0, 1061, 711));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-image:url(:/jpgtopngconverter-com.jpg);\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton_4 = new QPushButton(frame_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(930, 610, 131, 111));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/file (3) (3).png);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
"background-color:transparent;\n"
"\n"
"\n"
"}"));
        customplot_1 = new QCustomPlot(frame_2);
        customplot_1->setObjectName("customplot_1");
        customplot_1->setGeometry(QRect(150, 20, 301, 141));
        customplot_1->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_4 = new QCustomPlot(frame_2);
        customplot_4->setObjectName("customplot_4");
        customplot_4->setGeometry(QRect(20, 180, 301, 141));
        customplot_4->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_7 = new QCustomPlot(frame_2);
        customplot_7->setObjectName("customplot_7");
        customplot_7->setGeometry(QRect(20, 340, 301, 141));
        customplot_7->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_8 = new QCustomPlot(frame_2);
        customplot_8->setObjectName("customplot_8");
        customplot_8->setGeometry(QRect(620, 520, 301, 141));
        customplot_8->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_5 = new QCustomPlot(frame_2);
        customplot_5->setObjectName("customplot_5");
        customplot_5->setGeometry(QRect(740, 340, 301, 141));
        customplot_5->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_3 = new QCustomPlot(frame_2);
        customplot_3->setObjectName("customplot_3");
        customplot_3->setGeometry(QRect(740, 180, 301, 141));
        customplot_3->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_2 = new QCustomPlot(frame_2);
        customplot_2->setObjectName("customplot_2");
        customplot_2->setGeometry(QRect(620, 20, 301, 141));
        customplot_2->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        customplot_6 = new QCustomPlot(frame_2);
        customplot_6->setObjectName("customplot_6");
        customplot_6->setGeometry(QRect(150, 520, 301, 141));
        customplot_6->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        frame_2->raise();
        customplot_9->raise();
        pushButton = new QPushButton(DFChannel);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1061, 81));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"color:#102b03;\n"
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
        pushButton_3->setGeometry(QRect(870, 0, 191, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/Screenshot 2024-06-10 142407.jpg);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        label = new QLabel(DFChannel);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 60, 111, 16));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#102b03;\n"
"}"));

        retranslateUi(DFChannel);

        QMetaObject::connectSlotsByName(DFChannel);
    } // setupUi

    void retranslateUi(QWidget *DFChannel)
    {
        DFChannel->setWindowTitle(QCoreApplication::translate("DFChannel", "Form", nullptr));
        pushButton_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("DFChannel", "Track Hawk Direction Finder", nullptr));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        label->setText(QCoreApplication::translate("DFChannel", "TextLHawk Direction Finder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFChannel: public Ui_DFChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFCHANNEL_H
