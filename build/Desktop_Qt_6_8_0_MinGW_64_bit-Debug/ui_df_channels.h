/********************************************************************************
** Form generated from reading UI file 'df_channels.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DF_CHANNELS_H
#define UI_DF_CHANNELS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_df_channels
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_2;

    void setupUi(QWidget *df_channels)
    {
        if (df_channels->objectName().isEmpty())
            df_channels->setObjectName("df_channels");
        df_channels->resize(1057, 760);
        df_channels->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-image:url(:/jpgtopngconverter-com.jpg)\n"
"}"));
        pushButton = new QPushButton(df_channels);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 0, 1061, 81));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:rgb(107, 138, 122);\n"
"color:#102b03;\n"
"font-size:24px;\n"
"}"));
        pushButton_3 = new QPushButton(df_channels);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(870, 0, 191, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/Screenshot 2024-06-10 142407.jpg);\n"
"background-repeat:no-repeat;\n"
"background-color:transparent;\n"
"}"));
        label = new QLabel(df_channels);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 60, 111, 16));
        QFont font;
        font.setPointSize(7);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:#102b03;\n"
"}"));
        pushButton_2 = new QPushButton(df_channels);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 0, 81, 61));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image:url(:/df_logo_100x100.png);\n"
"background-position:fixed;\n"
"border-color:#102b03;\n"
"background-color:transparent\n"
"}"));

        retranslateUi(df_channels);

        QMetaObject::connectSlotsByName(df_channels);
    } // setupUi

    void retranslateUi(QWidget *df_channels)
    {
        df_channels->setWindowTitle(QCoreApplication::translate("df_channels", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("df_channels", "Track Hawk Direction Finder", nullptr));
        pushButton_3->setText(QString());
        label->setText(QCoreApplication::translate("df_channels", "TextLHawk Direction Finder", nullptr));
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class df_channels: public Ui_df_channels {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DF_CHANNELS_H
