#ifndef DF_GUI_VERSION_1_H
#define DF_GUI_VERSION_1_H

#include <QMainWindow>
#include <windows.h>
#include <QTimer>
#include <QVector>
#include <QUdpSocket>
#include <dfchannel.h>
//#include <QtCharts/QPolarChart>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QLineSeries>
#include <QElapsedTimer>
#include <QtGui/QPixmap>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QAreaSeries>






QT_BEGIN_NAMESPACE
namespace Ui {
class df_gui_version_1;
}
QT_END_NAMESPACE

class df_gui_version_1 : public QMainWindow
{
    Q_OBJECT

public:
    df_gui_version_1(QWidget *parent = nullptr);
    ~df_gui_version_1();

private slots:
    //qreal f(qreal theta);
    //qreal integrateArea(qreal theta_start, qreal theta_end);
    void readDatagrams();
    void readDatagrams2();
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();
    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    void on_verticalSlider_valueChanged(int value);

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_6_clicked();

    void on_comboBox_8_currentTextChanged(const QString &arg1);

    void on_pushButton_16_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::df_gui_version_1 *ui;
    //DFChannel df_channels;
    QUdpSocket *socket, *socket2;
    //QVector<double> xxData;
    //QVector<double> yyData;

};
#endif // DF_GUI_VERSION_1_H
