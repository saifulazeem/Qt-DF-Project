/********************************************************************************
** Form generated from reading UI file 'df_gui_version_1.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DF_GUI_VERSION_1_H
#define UI_DF_GUI_VERSION_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_df_gui_version_1
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QFrame *frame;
    QRadioButton *radioButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QGroupBox *groupBox_4;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QGroupBox *groupBox_12;
    QComboBox *comboBox_8;
    QGroupBox *groupBox_5;
    QGroupBox *groupBox_6;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_4;
    QGroupBox *groupBox_7;
    QLineEdit *lineEdit_5;
    QComboBox *comboBox_5;
    QGroupBox *groupBox_8;
    QLineEdit *lineEdit_6;
    QComboBox *comboBox_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QGroupBox *groupBox_9;
    QComboBox *comboBox_7;
    QPushButton *pushButton_11;
    QPushButton *pushButton_3;
    QGroupBox *groupBox_10;
    QCustomPlot *customplot;
    QSlider *verticalSlider;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox_11;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *df_gui_version_1)
    {
        if (df_gui_version_1->objectName().isEmpty())
            df_gui_version_1->setObjectName("df_gui_version_1");
        df_gui_version_1->resize(1055, 885);
        df_gui_version_1->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	\n"
"background-image: url(:/jpgtopngconverter-com.jpg);\n"
"}"));
        centralwidget = new QWidget(df_gui_version_1);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1061, 81));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"color:#102b03;\n"
"font-size:24px;\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 0, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/df_logo_100x100.png);\n"
"background-position:fixed;\n"
"border-color:#102b03;\n"
"background-color:transparent\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 111, 16));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#102b03;\n"
"}"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(700, 80, 361, 771));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"background-color:rgba(107, 138, 122, 0.5);\n"
"\n"
"\n"
"\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(20, 10, 101, 22));
        radioButton->setStyleSheet(QString::fromUtf8(""));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(20, 50, 81, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
"\n"
""));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(120, 50, 81, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(220, 50, 81, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 110, 331, 261));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(10, 30, 151, 81));
        lineEdit_2 = new QLineEdit(groupBox_3);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 40, 71, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox_2 = new QComboBox(groupBox_3);
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(90, 40, 51, 31));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(170, 30, 151, 81));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 40, 71, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(90, 40, 51, 31));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(10, 120, 151, 81));
        lineEdit_3 = new QLineEdit(groupBox_4);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(10, 40, 71, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox_3 = new QComboBox(groupBox_4);
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(90, 40, 51, 31));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(150, 210, 71, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(230, 210, 71, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        groupBox_12 = new QGroupBox(groupBox);
        groupBox_12->setObjectName("groupBox_12");
        groupBox_12->setGeometry(QRect(170, 120, 151, 81));
        comboBox_8 = new QComboBox(groupBox_12);
        comboBox_8->setObjectName("comboBox_8");
        comboBox_8->setGeometry(QRect(10, 40, 131, 31));
        groupBox_5 = new QGroupBox(frame);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(10, 370, 331, 261));
        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(10, 30, 151, 81));
        lineEdit_4 = new QLineEdit(groupBox_6);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(10, 40, 71, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox_4 = new QComboBox(groupBox_6);
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setGeometry(QRect(90, 40, 51, 31));
        groupBox_7 = new QGroupBox(groupBox_5);
        groupBox_7->setObjectName("groupBox_7");
        groupBox_7->setGeometry(QRect(170, 30, 151, 81));
        lineEdit_5 = new QLineEdit(groupBox_7);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(10, 40, 71, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox_5 = new QComboBox(groupBox_7);
        comboBox_5->setObjectName("comboBox_5");
        comboBox_5->setGeometry(QRect(90, 40, 51, 31));
        groupBox_8 = new QGroupBox(groupBox_5);
        groupBox_8->setObjectName("groupBox_8");
        groupBox_8->setGeometry(QRect(10, 120, 151, 81));
        lineEdit_6 = new QLineEdit(groupBox_8);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(10, 40, 71, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-radius:5px;\n"
"}"));
        comboBox_6 = new QComboBox(groupBox_8);
        comboBox_6->setObjectName("comboBox_6");
        comboBox_6->setGeometry(QRect(90, 40, 51, 31));
        pushButton_9 = new QPushButton(groupBox_5);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(150, 210, 71, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(230, 210, 71, 41));
        pushButton_10->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#4d4d4d;\n"
"border-radius:15px;\n"
"\n"
"}\n"
"QPushButton:Pressed{\n"
"\n"
"background-color:#a3a3a3;\n"
"\n"
"}\n"
""));
        groupBox_9 = new QGroupBox(groupBox_5);
        groupBox_9->setObjectName("groupBox_9");
        groupBox_9->setGeometry(QRect(170, 120, 151, 81));
        comboBox_7 = new QComboBox(groupBox_9);
        comboBox_7->setObjectName("comboBox_7");
        comboBox_7->setGeometry(QRect(10, 40, 131, 31));
        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName("pushButton_11");
        pushButton_11->setGeometry(QRect(20, 640, 321, 121));
        pushButton_11->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/uni_logo (2).png);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(870, 0, 191, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/Screenshot 2024-06-10 142407.jpg);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        groupBox_10 = new QGroupBox(centralwidget);
        groupBox_10->setObjectName("groupBox_10");
        groupBox_10->setGeometry(QRect(10, 90, 681, 331));
        groupBox_10->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color:rgba(107, 138, 122, 0.6);\n"
"border-radius:10px;\n"
"padding:15px;\n"
"\n"
"}"));
        customplot = new QCustomPlot(groupBox_10);
        customplot->setObjectName("customplot");
        customplot->setGeometry(QRect(70, 30, 561, 251));
        customplot->setStyleSheet(QString::fromUtf8("QCustomPlot{\n"
"background-color:#4d4d4d;\n"
"}"));
        verticalSlider = new QSlider(groupBox_10);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setGeometry(QRect(19, 79, 31, 201));
        verticalSlider->setMinimum(-150);
        verticalSlider->setOrientation(Qt::Vertical);
        horizontalSlider = new QSlider(groupBox_10);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(169, 300, 321, 20));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(8192);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(groupBox_10);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 50, 31, 16));
        label_3 = new QLabel(groupBox_10);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(500, 300, 31, 16));
        groupBox_11 = new QGroupBox(centralwidget);
        groupBox_11->setObjectName("groupBox_11");
        groupBox_11->setGeometry(QRect(10, 440, 681, 411));
        groupBox_11->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color:rgba(107, 138, 122, 0.6);\n"
"border-radius:10px;\n"
"\n"
"\n"
"}"));
        gridLayoutWidget = new QWidget(groupBox_11);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(-1, 19, 681, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        df_gui_version_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(df_gui_version_1);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1055, 21));
        df_gui_version_1->setMenuBar(menubar);
        statusbar = new QStatusBar(df_gui_version_1);
        statusbar->setObjectName("statusbar");
        df_gui_version_1->setStatusBar(statusbar);

        retranslateUi(df_gui_version_1);

        QMetaObject::connectSlotsByName(df_gui_version_1);
    } // setupUi

    void retranslateUi(QMainWindow *df_gui_version_1)
    {
        df_gui_version_1->setWindowTitle(QCoreApplication::translate("df_gui_version_1", "df_gui_version_1", nullptr));
        pushButton->setText(QCoreApplication::translate("df_gui_version_1", "Track Hawk Direction Finder", nullptr));
        pushButton_2->setText(QString());
        label->setText(QCoreApplication::translate("df_gui_version_1", "TextLHawk Direction Finder", nullptr));
        radioButton->setText(QCoreApplication::translate("df_gui_version_1", "DF-Connected", nullptr));
        pushButton_4->setText(QCoreApplication::translate("df_gui_version_1", "Start", nullptr));
        pushButton_5->setText(QCoreApplication::translate("df_gui_version_1", "Stop", nullptr));
        pushButton_6->setText(QCoreApplication::translate("df_gui_version_1", "Expert View", nullptr));
        groupBox->setTitle(QCoreApplication::translate("df_gui_version_1", "Sccaner Settings", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("df_gui_version_1", "fs(MHz/GHz)", nullptr));
        comboBox_2->setCurrentText(QString());
        comboBox_2->setPlaceholderText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("df_gui_version_1", "fe(MHz/GHz)", nullptr));
        comboBox->setPlaceholderText(QString());
        groupBox_4->setTitle(QCoreApplication::translate("df_gui_version_1", "Gain", nullptr));
        comboBox_3->setPlaceholderText(QCoreApplication::translate("df_gui_version_1", "Db", nullptr));
        pushButton_7->setText(QCoreApplication::translate("df_gui_version_1", "Reset", nullptr));
        pushButton_8->setText(QCoreApplication::translate("df_gui_version_1", "Apply", nullptr));
        groupBox_12->setTitle(QCoreApplication::translate("df_gui_version_1", "Detected peaks", nullptr));
        comboBox_8->setPlaceholderText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("df_gui_version_1", "Sccaner Settings", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("df_gui_version_1", "fc(MHz/GHz)", nullptr));
        comboBox_4->setPlaceholderText(QString());
        groupBox_7->setTitle(QCoreApplication::translate("df_gui_version_1", "Reciver Bandwidth", nullptr));
        comboBox_5->setPlaceholderText(QString());
        groupBox_8->setTitle(QCoreApplication::translate("df_gui_version_1", "Reciver Gain", nullptr));
        comboBox_6->setPlaceholderText(QCoreApplication::translate("df_gui_version_1", "Db", nullptr));
        pushButton_9->setText(QCoreApplication::translate("df_gui_version_1", "Reset", nullptr));
        pushButton_10->setText(QCoreApplication::translate("df_gui_version_1", "Apply", nullptr));
        groupBox_9->setTitle(QCoreApplication::translate("df_gui_version_1", "Sample Capture", nullptr));
        comboBox_7->setPlaceholderText(QString());
        pushButton_11->setText(QString());
        pushButton_3->setText(QString());
        groupBox_10->setTitle(QCoreApplication::translate("df_gui_version_1", "Sccaner", nullptr));
        label_2->setText(QCoreApplication::translate("df_gui_version_1", "1", nullptr));
        label_3->setText(QCoreApplication::translate("df_gui_version_1", "1", nullptr));
        groupBox_11->setTitle(QCoreApplication::translate("df_gui_version_1", "Direction Finder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class df_gui_version_1: public Ui_df_gui_version_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DF_GUI_VERSION_1_H
