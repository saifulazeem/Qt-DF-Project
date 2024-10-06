#include "df_gui_version_1.h"
#include "qchartview.h"
#include "ui_df_gui_version_1.h"

#include <QDebug>
//#include <iostream>
int x_itr=1, x_lop=0,top_count;
int numSamples = 1000000;    // 1 million samples
double f1=400000000;
double f2=5900000000;
QVector<double> xData;
QVector<double> yData;


double dbval=100;

//double f1=4000000,f2=5900000000;

int x_itr1z=0, x_lop1z=1;
float angle_to_addz=0.1757;
QVector<double> xxDataz;
QVector<double> yyDataz;
QPolarChart *polarChartz;
QLineSeries *series11z;
QScatterSeries *series1z;
QValueAxis *angularAxisz;
QValueAxis *radialAxisz;
QChartView *chartViewz;
#include <QtCharts/QSplineSeries>
QSplineSeries *seriez;
QSplineSeries *seriez2;

QVector<QPointF> newData1z; // New vector to store the highest point




df_gui_version_1::df_gui_version_1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::df_gui_version_1)
{



    ui->setupUi(this);

    ui->customplot_2->setVisible(false);
    ui->frame_21->setVisible(false);
    ui->frame_22->setVisible(false);

    //8 QcustomPlots Initlization------------

    ui->customplot_9->addGraph();
    ui->customplot_9->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_9->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_9->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_2->addGraph();
    ui->customplot_2->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_2->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_3->addGraph();
    ui->customplot_3->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_3->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_3->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_4->addGraph();
    ui->customplot_4->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_4->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_4->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_5->addGraph();
    ui->customplot_5->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_5->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_5->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_6->addGraph();
    ui->customplot_6->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_6->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_6->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_7->addGraph();
    ui->customplot_7->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_7->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_7->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    ui->customplot_8->addGraph();
    ui->customplot_8->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot_8->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot_8->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    //========================================Polar Satart=========================================================

    polarChartz = new QPolarChart();
    // polarChart->setTitle("Direction Finder");
    QColor rgbaColor(0, 0, 0); // Red color with 50% transparency
    rgbaColor.setAlpha(100);
    QBrush brush(rgbaColor);
    polarChartz->setBackgroundBrush(brush);


    // // Create angular and radial axes
    angularAxisz = new QValueAxis();
    angularAxisz->setTickCount(9); // 8 sectors + 1 to complete the circle
    angularAxisz->setLabelFormat("%.0f");
    angularAxisz->setRange(0, 360);
    angularAxisz->setLabelsColor(Qt::white);
    angularAxisz->setGridLineColor(Qt::green);
    polarChartz->addAxis(angularAxisz, QPolarChart::PolarOrientationAngular);

    radialAxisz = new QValueAxis();
    radialAxisz->setTickCount(10);
    radialAxisz->setLabelFormat("%.1f");
    radialAxisz->setRange(0, 256); // Example range, can be adjusted
    radialAxisz->setLabelsColor(Qt::white);
    radialAxisz->setGridLineColor(Qt::green);
    polarChartz->addAxis(radialAxisz,QPolarChart::PolarOrientationRadial);

    // // Create a scatter series to plot points in sector 7 (270 to 315 degrees)
    //series = new QScatterSeries();
    //series = new QLineSeries();
    seriez = new QSplineSeries();
    seriez->setPointsVisible(false);
    seriez->setMarkerSize(8);
    seriez->setName("Ploting Channel 7");
    seriez->append(45, 205); // Example point (angle, radius)
    seriez->append(75, 150);
    seriez->append(115, 50);
    seriez->append(0, 0);
    seriez->append(0, 0);
    seriez->append(225, 50); // main lobe start
    seriez->append(250, 100); // maib lobe mid
    seriez->append(275, 50); // main lobe end
    seriez->append(0, 0);
    seriez->append(0, 0);
    seriez->append(360,0);
    seriez->append(15, 105); //back lobe
    seriez->append(45, 205); //backlobe

    // series->sortByAngle();

    // // Set series properties
    // series->setConnectPoints(true); // Enable line connections between points
    // series->setWrapAround(true);

    // Define area series for filling
    QAreaSeries *areaSeries = new QAreaSeries(seriez, seriez2);
    areaSeries->setName("Filled Area");

    // Customize the appearance of the filled area
    areaSeries->setBrush(QBrush(QColor(255, 0, 0, 100))); // Set fill color with transparency (e.g., semi-transparent red)
    areaSeries->setPen(QPen(QColor(255, 0, 0))); // Set border color

    QBrush markerBrush(Qt::green);
    seriez->setBrush(markerBrush);
    // // Set the outline color of the points to black
    QPen black_pen = *new QPen();
    black_pen = seriez->pen(); // Get current pen settings
    black_pen.setColor(Qt::white); // Set outline color to black
    //black_pen.brush()
    black_pen.setWidth(2); // Set outline width (optional)
    seriez->setPen(black_pen); // Apply the updated pen to the series



    polarChartz->addSeries(areaSeries);
    //polarChartz->createDefaultAxes();

    // Attach the series to the axes
    seriez->attachAxis(angularAxisz);
    seriez->attachAxis(radialAxisz);

    // // Create a chart view with zooming enabled
    chartViewz = new QChartView(polarChartz);
    chartViewz->setRenderHint(QPainter::Antialiasing);

    QColor rgbaColor2(0, 0, 0); // Red color with 50% transparency
    rgbaColor2.setAlpha(100);
    QBrush brush2(rgbaColor2);

    chartViewz->setBackgroundBrush(brush2);

    //chartView->setMinimumSize(200, 380);

    ui->gridLayout->addWidget(chartViewz);


    // // create empty curve objects:
    // QCPCurve *fermatSpiral1 = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);
    // QCPCurve *fermatSpiral2 = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);
    // QCPCurve *deltoidRadial = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);
    // // generate the curve data points:
    // const int pointCount = 500;
    // QVector<QCPCurveData> dataSpiral1(pointCount), dataSpiral2(pointCount), dataDeltoid(pointCount);
    // for (int i=0; i<pointCount; ++i)
    // {
    //     double phi = i/(double)(pointCount-1)*8*M_PI;
    //     double theta = i/(double)(pointCount-1)*2*M_PI;
    //     dataSpiral1[i] = QCPCurveData(i, qSqrt(phi)*qCos(phi), qSqrt(phi)*qSin(phi));
    //     dataSpiral2[i] = QCPCurveData(i, -dataSpiral1[i].key, -dataSpiral1[i].value);
    //     dataDeltoid[i] = QCPCurveData(i, 2*qCos(2*theta)+qCos(1*theta)+2*qSin(theta), 2*qSin(2*theta)-qSin(1*theta));
    // }
    // // pass the data to the curves; we know t (i in loop above) is ascending, so set alreadySorted=true (saves an extra internal sort):
    // fermatSpiral1->data()->set(dataSpiral1, true);
    // fermatSpiral2->data()->set(dataSpiral2, true);
    // deltoidRadial->data()->set(dataDeltoid, true);
    // // color the curves:
    // fermatSpiral1->setPen(QPen(Qt::blue));
    // fermatSpiral1->setBrush(QBrush(QColor(0, 0, 255, 20)));
    // fermatSpiral2->setPen(QPen(QColor(255, 120, 0)));
    // fermatSpiral2->setBrush(QBrush(QColor(255, 120, 0, 30)));
    // QRadialGradient radialGrad(QPointF(310, 180), 200);
    // radialGrad.setColorAt(0, QColor(170, 20, 240, 100));
    // radialGrad.setColorAt(0.5, QColor(20, 10, 255, 40));
    // radialGrad.setColorAt(1,QColor(120, 20, 240, 10));
    // deltoidRadial->setPen(QPen(QColor(170, 20, 240)));
    // deltoidRadial->setBrush(QBrush(radialGrad));
    // // set some basic customPlot config:
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();


//CIRCLE CODE==============================================================================
    // // Create an empty curve object for the circle:
    // QCPCurve *circleCurve = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);

    // // Generate the curve data points for a circle:
    // const int pointCount = 100;  // Reduce point count for a smoother circle
    // QVector<QCPCurveData> dataCircle(pointCount);
    // double radius = 100.0;  // Adjust radius as needed
    // double centerX = 0.0;   // Center of the circle on the x-axis
    // double centerY = 0.0;   // Center of the circle on the y-axis

    // for (int i = 0; i < pointCount; ++i)
    // {
    //     double angle = i / (double)(pointCount - 1) * 2 * M_PI;
    //     double x = centerX + radius * qCos(angle);
    //     double y = centerY + radius * qSin(angle);
    //     dataCircle[i] = QCPCurveData(i, x, y);
    // }

    // // Pass the data to the curve; set alreadySorted=true since 'i' is ascending
    // circleCurve->data()->set(dataCircle, true);

    // // Set the pen and brush for the circle:
    // circleCurve->setPen(QPen(Qt::blue));
    // circleCurve->setBrush(QBrush(QColor(0, 0, 255, 20)));

    // // Set the center of the plot to be the center of the circle
    // ui->customplot_2->xAxis->setRange(centerX - radius, centerX + radius);
    // ui->customplot_2->yAxis->setRange(centerY - radius, centerY + radius);

    // // Set up the plot interactions and axis configuration:
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();
// Crile Code End========================================================================


// ===================================== 10 Cirlcels Code For Ploar  Start here======================================

    // // Number of circles to plot
    // const int numCircles = 10;


    // // Create an empty curve object for each circle
    // QVector<QCPCurve*> circles;

    // // Generate and plot each circle
    // for (int circleIndex = 0; circleIndex < numCircles; ++circleIndex)
    // {
    //     // Calculate radius for current circle
    //     double radius = 100.0 - 10.0 * circleIndex;  // Adjust decrement as needed

    //     // Create curve object for the current circle
    //     QCPCurve *circleCurve = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);

    //     // Generate the curve data points for the current circle
    //     const int pointCount = 100;  // Reduce point count for a smoother circle
    //     QVector<QCPCurveData> dataCircle(pointCount);

    //     for (int i = 0; i < pointCount; ++i)
    //     {
    //         double angle = i / (double)(pointCount - 1) * 2 * M_PI;
    //         double x = radius * qCos(angle);
    //         double y = radius * qSin(angle);
    //         dataCircle[i] = QCPCurveData(i, x, y);
    //     }

    //     // Pass the data to the curve; set alreadySorted=true since 'i' is ascending
    //     circleCurve->data()->set(dataCircle, true);

    //     // Set the pen and brush for the current circle
    //     circleCurve->setPen(QPen(Qt::blue));
    //     //circleCurve->setBrush(QBrush(QColor(255, 255, 255, 20 + 10 * circleIndex)));  // Adjust alpha value

    //     // Add the current circle to the vector of circles
    //     circles.append(circleCurve);
    // }

    // // Adjust the plot ranges to fit all circles
    // double maxRadius = 100.0;  // Radius of the largest circle
    // ui->customplot_2->xAxis->setRange(-maxRadius, maxRadius);
    // ui->customplot_2->yAxis->setRange(-maxRadius, maxRadius);

    // // Set up the plot interactions and axis configuration
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();

    // ===================================== 10 Cirlcels Code For Ploar  END here======================================



    // =====================================Code For Ploar where each cirle has 8 sectores START here======================================


    // // Number of circles to plot
    // const int numCircles = 10;

    // // Create an empty curve object for each circle
    // QVector<QCPCurve*> circles;

    // // Generate and plot each circle
    // for (int circleIndex = 0; circleIndex < numCircles; ++circleIndex)
    // {
    //     // Calculate radius for current circle
    //     double radius = 100.0 - 10.0 * circleIndex;  // Adjust decrement as needed

    //     // Create curve object for the current circle
    //     QCPCurve *circleCurve = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);

    //     // Generate the curve data points for the current circle
    //     const int pointCount = 100;  // Reduce point count for a smoother circle
    //     QVector<QCPCurveData> dataCircle(pointCount);

    //     for (int i = 0; i < pointCount; ++i)
    //     {
    //         double angle = i / (double)(pointCount - 1) * 2 * M_PI;
    //         double x = radius * qCos(angle);
    //         double y = radius * qSin(angle);
    //         dataCircle[i] = QCPCurveData(i, x, y);
    //     }

    //     // Pass the data to the curve; set alreadySorted=true since 'i' is ascending
    //     circleCurve->data()->set(dataCircle, true);

    //     // Set the pen and brush for the current circle
    //     circleCurve->setPen(QPen(Qt::blue));
    //     //circleCurve->setBrush(QBrush(QColor(255, 255, 255, 20 + 10 * circleIndex)));  // Adjust alpha value

    //     // Add the current circle to the vector of circles
    //     circles.append(circleCurve);

    //     // Divide the circle into 8 sectors with lines
    //     for (int sector = 0; sector < 8; ++sector)
    //     {
    //         double angle = sector * M_PI / 4.0;  // Angle for each sector (45 degrees)
    //         double x1 = radius * qCos(angle);
    //         double y1 = radius * qSin(angle);
    //         double x2 = -radius * qCos(angle);  // Opposite point on circumference
    //         double y2 = -radius * qSin(angle);

    //         // Draw a line segment from (x1, y1) to (x2, y2)
    //         QCPItemLine *sectorLine = new QCPItemLine(ui->customplot_2);
    //         sectorLine->start->setCoords(x1, y1);
    //         sectorLine->end->setCoords(x2, y2);
    //         sectorLine->setPen(QPen(Qt::black));  // Set pen color

    //         // Add the sector line to the plot
    //         ui->customplot_2->setAutoAddPlottableToLegend(sectorLine);
    //     }
    // }

    // // Adjust the plot ranges to fit all circles
    // double maxRadius = 100.0;  // Radius of the largest circle
    // ui->customplot_2->xAxis->setRange(-maxRadius, maxRadius);
    // ui->customplot_2->yAxis->setRange(-maxRadius, maxRadius);

    // // Set up the plot interactions and axis configuration
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();

    // =====================================Code For Ploar where each cirle has 8 sectores END here======================================


    // =====================================Code For Ploar where ONLY OUTERS cirle has 8 sectores START here======================================



    // // Number of circles to plot
    // const int numCircles = 10;

    // // Create an empty curve object for each circle
    // QVector<QCPCurve*> circles;

    // // Generate and plot each circle
    // for (int circleIndex = 0; circleIndex < numCircles; ++circleIndex)
    // {
    //     // Calculate radius for current circle
    //     double radius = 100.0 - 10.0 * circleIndex;  // Adjust decrement as needed

    //     // Create curve object for the current circle
    //     QCPCurve *circleCurve = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);

    //     // Generate the curve data points for the current circle
    //     const int pointCount = 100;  // Reduce point count for a smoother circle
    //     QVector<QCPCurveData> dataCircle(pointCount);

    //     for (int i = 0; i < pointCount; ++i)
    //     {
    //         double angle = i / (double)(pointCount - 1) * 2 * M_PI;
    //         double x = radius * qCos(angle);
    //         double y = radius * qSin(angle);
    //         dataCircle[i] = QCPCurveData(i, x, y);
    //     }

    //     // Pass the data to the curve; set alreadySorted=true since 'i' is ascending
    //     circleCurve->data()->set(dataCircle, true);

    //     // Set the pen and brush for the current circle
    //     circleCurve->setPen(QPen(Qt::blue));
    //     //circleCurve->setBrush(QBrush(QColor(255, 255, 255, 20 + 10 * circleIndex)));  // Adjust alpha value

    //     // Add the current circle to the vector of circles
    //     circles.append(circleCurve);

    //     // Divide the outermost circle into 8 sectors with lines
    //     if (circleIndex == 0)
    //     {
    //         for (int sector = 0; sector < 8; ++sector)
    //         {
    //             double angle = sector * M_PI / 4.0;  // Angle for each sector (45 degrees)
    //             double x1 = radius * qCos(angle);
    //             double y1 = radius * qSin(angle);
    //             double x2 = -radius * qCos(angle);  // Opposite point on circumference
    //             double y2 = -radius * qSin(angle);

    //             // Draw a line segment from (x1, y1) to (x2, y2)
    //             QCPItemLine *sectorLine = new QCPItemLine(ui->customplot_2);
    //             sectorLine->start->setCoords(x1, y1);
    //             sectorLine->end->setCoords(x2, y2);
    //             sectorLine->setPen(QPen(Qt::black));  // Set pen color

    //             // Add the sector line to the plot
    //             ui->customplot_2->setAutoAddPlottableToLegend(sectorLine);
    //         }
    //     }
    // }

    // // Adjust the plot ranges to fit all circles
    // double maxRadius = 100.0;  // Radius of the largest circle
    // ui->customplot_2->xAxis->setRange(-maxRadius, maxRadius);
    // ui->customplot_2->yAxis->setRange(-maxRadius, maxRadius);

    // // Set up the plot interactions and axis configuration
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();

    // =====================================Code For Ploar where OUTER cirle has 8 sectores n angels END here======================================


    // // Number of circles to plot
    // const int numCircles = 10;

    // // Create an empty curve object for each circle
    // QVector<QCPCurve*> circles;

    // // Generate and plot each circle
    // for (int circleIndex = 0; circleIndex < numCircles; ++circleIndex)
    // {
    //     // Calculate radius for current circle
    //     double radius = 100.0 - 10.0 * circleIndex;  // Adjust decrement as needed

    //     // Create curve object for the current circle
    //     QCPCurve *circleCurve = new QCPCurve(ui->customplot_2->xAxis, ui->customplot_2->yAxis);

    //     // Generate the curve data points for the current circle
    //     const int pointCount = 100;  // Reduce point count for a smoother circle
    //     QVector<QCPCurveData> dataCircle(pointCount);

    //     for (int i = 0; i < pointCount; ++i)
    //     {
    //         double angle = i / (double)(pointCount - 1) * 2 * M_PI;
    //         double x = radius * qCos(angle);
    //         double y = radius * qSin(angle);
    //         dataCircle[i] = QCPCurveData(i, x, y);
    //     }

    //     // Pass the data to the curve; set alreadySorted=true since 'i' is ascending
    //     circleCurve->data()->set(dataCircle, true);

    //     // Set the pen and brush for the current circle
    //     circleCurve->setPen(QPen(Qt::blue));
    //     //circleCurve->setBrush(QBrush(QColor(255, 255, 255, 20 + 10 * circleIndex)));  // Adjust alpha value

    //     // Add the current circle to the vector of circles
    //     circles.append(circleCurve);

    //     // Divide the outermost circle into 8 sectors with lines and labels
    //     if (circleIndex == 0)
    //     {
    //         for (int sector = 0; sector < 8; ++sector)
    //         {
    //             double angle = sector * M_PI / 4.0;  // Angle for each sector (45 degrees)
    //             double x1 = radius * qCos(angle);
    //             double y1 = radius * qSin(angle);
    //             double x2 = -radius * qCos(angle);  // Opposite point on circumference
    //             double y2 = -radius * qSin(angle);

    //             // Draw a line segment from (x1, y1) to (x2, y2)
    //             QCPItemLine *sectorLine = new QCPItemLine(ui->customplot_2);
    //             sectorLine->start->setCoords(x1, y1);
    //             sectorLine->end->setCoords(x2, y2);
    //             sectorLine->setPen(QPen(Qt::black));  // Set pen color

    //             // Add the sector line to the plot
    //             ui->customplot_2->setAutoAddPlottableToLegend(sectorLine);

    //             // Calculate label position slightly beyond the circle
    //             double labelRadius = radius + 10.0; // Adjust distance of label from circle
    //             double labelX = labelRadius * qCos(angle);
    //             double labelY = labelRadius * qSin(angle);

    //             // Create label text
    //             QString labelText = QString::number(sector * 45) + "°";

    //             // Add text label at the specified position
    //             QCPItemText *textLabel = new QCPItemText(ui->customplot_2);
    //             textLabel->position->setCoords(labelX, labelY); // Set label position
    //             textLabel->setText(labelText); // Set label text
    //             textLabel->setFont(QFont(font().family(), 10)); // Set font size

    //             // Add the text label to the plot
    //             ui->customplot_2->setAutoAddPlottableToLegend(textLabel);
    //         }
    //     }
    // }

    // // Adjust the plot ranges to fit all circles
    // double maxRadius = 100.0;  // Radius of the largest circle
    // ui->customplot_2->xAxis->setRange(-maxRadius, maxRadius);
    // ui->customplot_2->yAxis->setRange(-maxRadius, maxRadius);

    // // Set up the plot interactions and axis configuration
    // ui->customplot_2->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);
    // ui->customplot_2->axisRect()->setupFullAxesBox();
    // ui->customplot_2->rescaleAxes();


    //--================-------------------------==================





    //=======--------------------------------------------===========
    //============polar chart=====================================================================
    //*************************************************************************************************** commented 6-aug-24- 12 20 Pm

    // // Create a polar chart
    // QPolarChart *polarChart = new QPolarChart();
    // //polarChart->setTitle("Direction Finder");
    // QColor rgbaColor(0, 0, 0); // Red color with 50% transparency
    // rgbaColor.setAlpha(100);
    // QBrush brush(rgbaColor);

    // polarChart->setBackgroundBrush(brush);

    // // QPixmap backgroundPixmap(":/images/background.png");
    // // polarChart->setBackgroundVisible(false);


    // // Create angular and radial axes
    // QValueAxis *angularAxis = new QValueAxis();
    // angularAxis->setTickCount(9); // 8 sectors + 1 to complete the circle
    // angularAxis->setLabelFormat("%.0f");
    // angularAxis->setRange(0, 360);
    // angularAxis->setLabelsColor(Qt::white);
    // angularAxis->setGridLineColor(Qt::green);
    // //angularAxis->setShadesBrush(QBrush(QColor(249, 29, 255)));

    // polarChart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);
    // // Set font color of angular and radial axis labels to white

    // QValueAxis *radialAxis = new QValueAxis();
    // radialAxis->setTickCount(9);
    // radialAxis->setLabelFormat("%.1f");
    // radialAxis->setRange(0, 256); // Example range, can be adjusted
    // radialAxis->setLabelsColor(Qt::white);
    // radialAxis->setGridLineColor(Qt::green);
    // polarChart->addAxis(radialAxis,QPolarChart::PolarOrientationRadial);

    // // Create a scatter series to plot points in sector 7 (270 to 315 degrees)
    // //QScatterSeries *series = new QScatterSeries();
    // QLineSeries *series = new QLineSeries();
    // //QVector<double> x={295,295,295,295,295,295,295,298,300,302,303,304,305,306,307,308,309,310,311,311,311},y={0,20,45,100,150,180,190,202,203,204,205,206,207,206,204,203,200,198,120,50,0};
    // series->setMarkerSize(8);
    // series->setName("Ploting Channel 7");
    // //series->append(x,y);
    // series->append(311, 0); // Example point (angle, radius)
    // series->append(311, 50); // Example point (angle, radius)
    // series->append(311, 120); // Example point (angle, radius)
    // series->append(310, 198); // Example point (angle, radius)
    // series->append(309, 200); // Example point (angle, radius)
    // series->append(308, 203); // Example point (angle, radius)
    // series->append(307, 204); // Example point (angle, radius)
    // series->append(306, 206); // Example point (angle, radius)

    // series->append(305, 207); // Example point (angle, radius)
    // series->append(304, 206); // Example point (angle, radius)
    // series->append(303, 205); // Example point (angle, radius)
    // series->append(302, 204); // Example point (angle, radius)
    // series->append(300, 203); // Example point (angle, radius)
    // series->append(298, 202); // Example point (angle, radius)
    // series->append(295, 190); // Example point (angle, radius)
    // series->append(295, 180); // Example point (angle, radius)
    // series->append(295, 150); // Example point (angle, radius)
    // series->append(295, 100); // Example point (angle, radius)
    // series->append(295, 50); // Example point (angle, radius)
    // series->append(295, 20); // Example point (angle, radius)
    // series->append(295, 0); // Example point (angle, radius)



    // // Set the outline color of the points to black
    // QPen black_pen = *new QPen();
    // black_pen = series->pen(); // Get current pen settings
    // black_pen.setColor(Qt::white); // Set outline color to black
    // black_pen.setWidth(1); // Set outline width (optional)
    // series->setPen(black_pen); // Apply the updated pen to the series


    // polarChart->addSeries(series);

    // // Attach the series to the axes
    // series->attachAxis(angularAxis);
    // series->attachAxis(radialAxis);

    // // Create a chart view with zooming enabled
    // QChartView *chartView = new QChartView(polarChart);
    // chartView->setRenderHint(QPainter::Antialiasing);
    // chartView->setRubberBand(QChartView::RectangleRubberBand); // Enable zooming

    // QColor rgbaColor2(0, 0, 0); // Red color with 50% transparency
    // rgbaColor2.setAlpha(100);
    // QBrush brush2(rgbaColor2);

    // chartView->setBackgroundBrush(brush2);

    // //chartView->setMinimumSize(200,380 );

    // ui->gridLayout->addWidget(chartView);
    //ui->frame_2->layout()->addWidget(chartView);
    //*************************************************************************************************** commented 23-jul-24- 12 20 Pm
    //===========================Start new Lobe chartView================================================
    // // Create a polar chart
    // QPolarChart *polarChart = new QPolarChart();
    // //polarChart->setTitle("Direction Finder");
    // //polarChart->setBackgroundBrush(QBrush(Qt::black));

    // // Create series for the function plot
    // QLineSeries *series = new QLineSeries();
    // qreal theta_start = M_PI / 6;
    // qreal theta_end = M_PI / 3;
    // qreal delta_theta = (theta_end - theta_start) / 1000.0;

    // for (qreal theta = theta_start; theta <= theta_end; theta += delta_theta) {
    //     qreal r = f(theta);
    //     series->append(theta, r);
    // }

    // // Add series to chart
    // polarChart->addSeries(series);

    // // Create area series
    // QLineSeries *areaSeries = new QLineSeries();
    // areaSeries->setColor(Qt::blue);

    // // Calculate and add points for the shaded area
    // qreal area = integrateArea(theta_start, theta_end);
    // areaSeries->append(theta_start, 0); // Start from origin
    // for (qreal theta = theta_start; theta <= theta_end; theta += delta_theta) {
    //     qreal r = f(theta);
    //     areaSeries->append(theta, r);
    // }
    // areaSeries->append(theta_end, 0); // End at origin

    // // Add area series to chart
    // polarChart->addSeries(areaSeries);

    // // Set up angular axis
    // QValueAxis *angularAxis = new QValueAxis();
    // angularAxis->setTickCount(9); // Set number of angular ticks
    // angularAxis->setLabelFormat("%g");
    // angularAxis->setTitleText("θ (radians)");
    // polarChart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);

    // // Set up radial axis
    // QValueAxis *radialAxis = new QValueAxis();
    // radialAxis->setLabelFormat("%g");
    // radialAxis->setTitleText("f(θ)");
    // polarChart->addAxis(radialAxis, QPolarChart::PolarOrientationRadial);

    // // Attach axes to series
    // series->attachAxis(angularAxis);
    // series->attachAxis(radialAxis);
    // areaSeries->attachAxis(angularAxis);
    // areaSeries->attachAxis(radialAxis);

    // //chartView->setMinimumSize(150, 380);

    // QChartView *chartView = new QChartView(polarChart);
    // chartView->setRenderHint(QPainter::Antialiasing);
    // chartView->setRubberBand(QChartView::RectangleRubberBand); // Enable zooming
    // chartView->setBackgroundBrush(QBrush(Qt::black));


    // ui->gridLayout->addWidget(chartView);
    // //ui->frame_2->layout()->addWidget(chartView);
    // //===========================End Lobe Chart View=====================================================


    



    //=====================================End Polar******************************************************************

    ui->customplot->setBackground(QBrush(QColor(0, 0, 0))); // Set background color to black (RGB: 0, 0, 0)
    ui->customplot->addGraph();
    ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
    ui->customplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);


    QPen pen;
    pen.setColor(Qt::red);  // Set color to red
    ui->customplot->addGraph();
    ui->customplot->graph(1)->setPen(pen);
    ui->customplot->graph(1)->setScatterStyle(QCPScatterStyle::ssCircle);
    ui->customplot->graph(1)->setLineStyle(QCPGraph::lsNone);




    ui->comboBox_2->addItem("MHz");
    ui->comboBox_2->addItem("GHz");
    ui->comboBox->addItem("MHz");
    ui->comboBox->addItem("GHz");
    ui->comboBox_4->addItem("MHz");
    ui->comboBox_4->addItem("GHz");
    ui->comboBox_5->addItem("MHz");
    ui->comboBox_5->addItem("GHz");
    ui->comboBox_8->addItem("1");
    ui->comboBox_8->addItem("2");
    ui->comboBox_8->addItem("3");
    ui->comboBox_8->addItem("4");



    ui->radioButton->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color: Red; }");
    ui->radioButton_2->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color: Red; }");


    //ui->pushButton_4->setStyleSheet("color: #ffffff;");
    ui->pushButton_4->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color:rgb(107, 138, 122);"
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");
    ui->pushButton_5->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color:rgb(107, 138, 122); "
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");
    //ui->pushButton_4->setStyleSheet("background-color: #4d4d4d;");

    ui->pushButton_7->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color:#117AE9; "
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");

    ui->pushButton_8->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color: #117AE9; "
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");

    // ui->customplot->addGraph();
    // ui->customplot->graph(0)->setScatterStyle(QCPScatterStyle::ssCircle);
    // ui->customplot->graph(0)->setLineStyle(QCPGraph::lsLine);
    // //ui->customplot->graph(0)->setLineStyle(QCPPolarGraph);
    // ui->customplot->xAxis->setLabel("Frequency MHz/ GHz");
    // ui->customplot->yAxis->setLabel("Data Values");
    // ui->customplot->xAxis->setRange(0,5600);
    // ui->customplot->yAxis->setRange(0,1000);
    // ui->customplot->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom | QCP::iSelectPlottables);

    // QVector<double> x={1,5,10,15,20,25},y={12,3,45,6,78,9};
    // ui->customplot->graph(0)->setData(x,y);
    // ui->customplot->rescaleAxes();
    // ui->customplot->replot();
    // ui->customplot->update();


}


// qreal df_gui_version_1::f(qreal theta)
// {
//     return 2 * std::cos(4 * theta);
// }

// qreal df_gui_version_1::integrateArea(qreal theta_start, qreal theta_end)
// {
//     // Function to numerically integrate the area under the curve
//     const int num_steps = 1000;
//     qreal delta_theta = (theta_end - theta_start) / num_steps;
//     qreal area = 0;

//     for (qreal theta = theta_start; theta <= theta_end; theta += delta_theta) {
//         qreal r = f(theta);
//         area += r * delta_theta; // Area of each slice
//     }

//     return area;
// }

df_gui_version_1::~df_gui_version_1()
{
    delete ui;
    delete socket;
    delete socket2;


}

void df_gui_version_1::on_pushButton_4_clicked()
{

    //============================Start button -------------

    ui->pushButton_5->setEnabled(true);
    ui->pushButton_5->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color:rgb(107, 138, 122); "
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");

    ui->pushButton_4->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color: #a3a3a3; "
                                    "color: #4d4d4d; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color:rgb(107, 138, 122); "
                                    "} ");

    ui->pushButton_4->setEnabled(false);
    socket = new QUdpSocket(this);
    //udpSocket->bind(QHostAddress("http://"+hostid), portid); // Bind to the specified local host address and port 7

    socket->bind(QHostAddress::LocalHost, 7); // Bind to localhost on port 7
    ui->radioButton->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color: #1bc43a; }");
    connect(socket, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams);

    socket2 = new QUdpSocket(this);
    //udpSocket->bind(QHostAddress("http://"+hostid), portid); // Bind to the specified local host address and port 7

    socket2->bind(QHostAddress::LocalHost, 4021); // Bind to localhost on port 4021
    ui->radioButton_2->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color: #1bc43a; }");
    connect(socket2, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams2);



}


// Data For 8 Channels code Start here============

void df_gui_version_1::readDatagrams2() {


    while (socket2->hasPendingDatagrams()) {
        QElapsedTimer timer;
        seriez->clear();
        // Start the timer before the loop starts
        timer.start();
        xxDataz.clear();
        yyDataz.clear();



        QByteArray datagram;
        datagram.resize(socket2->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;

        socket2->readDatagram(datagram.data(), datagram.size(), &sender, &senderPort);

        // Ensure the size of the received data is a multiple of 4 bytes (size of int32_t)
        if (datagram.size() % sizeof(int32_t) != 0) {
            qDebug() << "Received data size is not a multiple of 4 bytes";
            continue;
        }

        // Interpret the received data as int32_t values
        const int32_t *intArray = reinterpret_cast<const int32_t*>(datagram.constData());
        int numInts = datagram.size() / sizeof(int32_t);

        // If there are less than 8 values, discard the packet
        if (numInts <= 8) {
            qDebug() << "Received data packet has less than 8 values, discarding...";
            continue;
        }




        //float x_freq=(f22-f11)/8192;
        int chnl_nbr=0;
        //if (x_lop1<=32){
        //x_lop1=x_lop1+1;
        for (int i = 8; i < numInts; ++i) {
            //float xfreq=f11+(x_freq*x_itr1);
            //std::cout << "x freq is: " << xfreq << std::endl;
            //xxData.append(xfreq);

            xxDataz.append(i-7);
            yyDataz.append( intArray[i]);
            qDebug() << " Y Value after Divide :  "<< qAbs(intArray[i]);


            //x_itr1=x_itr1+1;

            xxDataz.reserve(numSamples);
            yyDataz.reserve(numSamples);

        }
        chnl_nbr=intArray[7];
        //std::cout << "x chnl is: " << chnl_nbr << std::endl;

        if(chnl_nbr==8){
            float Qs=315.0;
            QPointF highestPoint8;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_2->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_2->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_2->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_2->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_2->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_2->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_2->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_2->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_2->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_2->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_2->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_2->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_2->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_2->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_2->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_2->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_2->replot();
            //x_lop1=x_lop1+1;

            //polar ploting channel 8
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 8");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }

            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint8 = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint8);
            float ypeak=(highestPoint8.y()+newData1z.at(0).y())/2;
            float xpeak=((360-highestPoint8.x())/2)+highestPoint8.x();
            QPointF midangle(xpeak,highestPoint8.y());
            qDebug() << " MID Value values ch 8 "<<midangle;

            qDebug() << " Y high values ch 8 "<<highestPoint8;

            newData1z.append(midangle);

            float xpeak2=((360-xpeak)/2)+xpeak;
            QPointF midangle2(xpeak2,highestPoint8.y());
            newData1z.append(midangle2);


            float xpeak3=((360-xpeak2)/2)+xpeak2;
            QPointF midangle3(xpeak3,highestPoint8.y());
            newData1z.append(midangle3);

            float xpeak4=((360-xpeak3)/2)+xpeak3;
            QPointF midangle4(xpeak4,highestPoint8.y());
            newData1z.append(midangle4);

            newData1z.append(QPointF(360,ypeak));


            newData1z.append(QPointF(0, ypeak));
            newData1z.append(newData1z.at(0));
            qDebug() << "new Data 0  Values: " << newData1z[0] << " NewData1 Size "<<newData1z.size();



            seriez->replace(newData1z);
            newData1z.clear();
            //series->append(newData1);
            polarChartz->update();
            chartViewz->update();

            newData.clear();
            //highestPoint8.isNull();
            //series->clear();

            //polar ploting end



        }
        if(chnl_nbr==1){

            float Qs=0.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();


            ui->customplot_6->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_6->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_6->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_6->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_6->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_6->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_6->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_6->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_6->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_6->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_6->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_6->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_6->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_6->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_6->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_6->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_6->replot();
            //x_lop1=x_lop1+1;

            //polar ploting

            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 1");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            //qDebug() << "new Data1 0  Values: " << newData1[0] << " Y high values "<<highestPoint;
            qDebug() << " Y high values ch 1 "<<highestPoint;


            //series->replace(newData);
            newData.clear();
            //polar ploting end






        }
        if(chnl_nbr==2){
            float Qs=45.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_7->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_7->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_7->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_7->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_7->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_7->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_7->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_7->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_7->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_7->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_7->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_7->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_7->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_7->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_7->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_7->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_7->replot();
            //x_lop1=x_lop1+1;


            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 1");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 2 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End




        }
        if(chnl_nbr==7){
            float Qs=270.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_3->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_3->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_3->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_3->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_3->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_3->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_3->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_3->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_3->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_3->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_3->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_3->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_3->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_3->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_3->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_3->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_3->replot();
            //x_lop1=x_lop1+1;

            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 7");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 7 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End




        }
        if(chnl_nbr==3){

            float Qs=90.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_8->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_8->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_8->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_8->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_8->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_8->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_8->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_8->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_8->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_8->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_8->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_8->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_8->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_8->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_8->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_8->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_8->replot();
            //x_lop1=x_lop1+1;

            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 3");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 3 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End


        }
        if(chnl_nbr==5){
            float Qs=180.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_5->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_5->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_5->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_5->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_5->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_5->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_5->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_5->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_5->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_5->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_5->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_5->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_5->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_5->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_5->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_5->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_5->replot();
            //x_lop1=x_lop1+1;

            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 5");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 5 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End



        }
        if(chnl_nbr==6){

            float Qs=225.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            ui->customplot_4->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_4->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_4->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_4->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_4->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_4->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_4->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_4->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_4->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_4->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_4->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_4->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_4->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_4->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_4->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_4->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_4->replot();
            //x_lop1=x_lop1+1;

            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 6");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 6 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End



        }
        if(chnl_nbr==4){

            float Qs=135.0;
            QPointF highestPoint;
            qreal maxY = std::numeric_limits<qreal>::lowest();

            //x_lop1=0;
            ui->customplot_9->graph(0)->setData(xxDataz, yyDataz);
            // Set plot labels and titles
            ui->customplot_9->xAxis->setLabel("Frequency (MHz/GHz)");
            ui->customplot_9->yAxis->setLabel("Amplitude (Db)");


            // Set font color to white for x-axis label
            ui->customplot_9->xAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for y-axis label
            ui->customplot_9->yAxis->setLabelColor(QColor(27, 196, 145));

            // Set font color to white for graph text
            ui->customplot_9->graph(0)->setPen(QColor(27, 196, 145));

            // Set font color to white for axis ticks and labels
            ui->customplot_9->xAxis->setTickLabelColor(QColor(27, 196, 145));
            ui->customplot_9->yAxis->setTickLabelColor(QColor(27, 196, 145));

            // Set font color to white for axis line
            ui->customplot_9->xAxis->setBasePen(QColor(27, 196, 145));
            ui->customplot_9->yAxis->setBasePen(QColor(27, 196, 145));

            // Set font color to white for axis grid lines
            ui->customplot_9->xAxis->grid()->setPen(QColor(27, 196, 145));
            ui->customplot_9->yAxis->grid()->setPen(QColor(27, 196, 145));

            // Set font color to white for legend
            ui->customplot_9->legend->setBrush(QColor(27, 196, 145));
            ui->customplot_9->legend->setTextColor(QColor(27, 196, 145));

            ui->customplot_9->xAxis->setRange(0,264);
            //ui->customplot_1->yAxis->setRange(-250,dbval1); // Adjust range as needed
            ui->customplot_9->yAxis->setRange(-250,50); // Adjust range as needed
            ui->customplot_9->replot();

            //polar ploting
            float detaa=Qs+angle_to_addz;
            QVector<QPointF> newData;

            seriez->setName("Ploting Channel 4");
            for(int z=0;z<yyDataz.size();++z){
                newData.append(QPointF(detaa, qAbs(yyDataz[z])));

                //qDebug() << "Q theta Values: " << detaa << " Y values "<<yyData[z];

                // series->append(detaa,yyData[z]);
                detaa=detaa+angle_to_addz;

            }


            for (const QPointF &point : newData) {
                if (point.y() > maxY) {
                    maxY = point.y();
                    highestPoint = point;
                }
            }

            // Store the highest point in newData1
            newData1z.append(highestPoint);
            qDebug() << " Y high values ch 4 "<<highestPoint;

            //series->replace(newData);
            newData.clear();
            //polar plotting End

        }

        // xxData.clear();
        // yyData.clear();

        // Calculate the elapsed time in milliseconds
        //qint64 elapsed = timer.nsecsElapsed() / 1000000; // Convert nanoseconds to milliseconds

        // Output the elapsed time for one iteration of the loop
        //qDebug() << "Time taken for one Channel: " << elapsed << " milliseconds";
        //x_lop1=x_lop1+1;

    }
}


// Data for 8 Channe;s code END Here===============



void df_gui_version_1::readDatagrams() {

    //QVector<double> x,y;

    while (socket->hasPendingDatagrams()) {
        QElapsedTimer timer;

        // Start the timer before the loop starts
        timer.start();

        QByteArray datagram;
        datagram.resize(socket->pendingDatagramSize());
        QHostAddress sender;
        quint16 senderPort;

        socket->readDatagram(datagram.data(), datagram.size(), &sender, &senderPort);

        // Ensure the size of the received data is a multiple of 4 bytes (size of int32_t)
        if (datagram.size() % sizeof(int32_t) != 0) {
            qDebug() << "Received data size is not a multiple of 4 bytes";
            continue;
        }

        // Interpret the received data as int32_t values
        const int32_t *intArray = reinterpret_cast<const int32_t*>(datagram.constData());
        int numInts = datagram.size() / sizeof(int32_t);

        // If there are less than 8 values, discard the packet
        if (numInts <= 8) {
            qDebug() << "Received data packet has less than 8 values, discarding...";
            continue;
        }


        float x_freq=(f2-f1)/8192;
        int pkt_nbr= intArray[3];

        if (pkt_nbr<=31){
            x_lop=x_lop+1;
            for (int i = 8; i < numInts; ++i) {
                float xfreq=f1+(x_freq*x_itr);
                //std::cout << "x freq is: " << xfreq << std::endl;
                xData.append(xfreq);

                //xData.append(x_itr);
                yData.append(intArray[i]);


                //if(intArray[i]>0){
                //     if(i==8){
                //          y.append(intArray[i]);
                //          x.append(xfreq);
                //     }
                //     if(i==9){
                //          y.append(intArray[i]);
                //          x.append(xfreq);
                //     }
                //     if(i==10){
                //          y.append(intArray[i]);
                //          x.append(xfreq);
                //     }
                //     if(i==11){
                //          y.append(intArray[i]);
                //          x.append(xfreq);
                //     }
                //     if(i>11){
                //         int chk=0;
                //         for (int j = 0; j < y.size(); ++j) {
                //             if (intArray[i] > y[j] && chk==0) {
                //                 y[j] = intArray[i];
                //                 x[j] =xfreq ;  // Update Xfr with the corresponding index
                //                 chk=1;
                //             }
                //         }
                //     }
                // //}

                x_itr=x_itr+1;

                xData.reserve(numSamples);
                yData.reserve(numSamples);

            }

                qDebug() << "Recived Packet number: " << intArray[3] << " milliseconds";

            if(pkt_nbr==31){
                    qDebug() << "Recived file number: " << intArray[6] << " milliseconds";

                x_lop=1;
                x_itr=1;
                //=================== Top Peaks logics Start====================================


                //top_count=ui->comboBox_8->currentText().toInt();

                // Create a copy of y and x to not modify the original vectors
                QVector<double> y_copy = yData;
                QVector<double> x_copy = xData;

                // Use std::partial_sort_copy to get the top `top_count` values
                QVector<double> yy(top_count);
                QVector<double> xx(top_count);

                std::partial_sort_copy(y_copy.begin(), y_copy.end(), yy.begin(), yy.end(), std::greater<double>());

                for (int i = 0; i < top_count; ++i) {
                    for (int j = 0; j < yData.size(); ++j) {
                        if (yy[i] == yData[j]) {
                            xx[i] = xData[j];
                            break;
                        }
                    }
                }

                //===========Top Peaks logic END========================================================

                ui->customplot->graph(0)->setData(xData, yData);
                // Set plot labels and titles
                ui->customplot->xAxis->setLabel("Frequency (MHz/GHz)");
                ui->customplot->yAxis->setLabel("Amplitude (Db)");


                // Set font color to white for x-axis label
                ui->customplot->xAxis->setLabelColor(QColor(27, 196, 145));

                // Set font color to white for y-axis label
                ui->customplot->yAxis->setLabelColor(QColor(27, 196, 145));

                // Set font color to white for graph text
                ui->customplot->graph(0)->setPen(QColor(27, 196, 145));

                // Set font color to white for axis ticks and labels
                ui->customplot->xAxis->setTickLabelColor(QColor(27, 196, 145));
                ui->customplot->yAxis->setTickLabelColor(QColor(27, 196, 145));

                // Set font color to white for axis line
                ui->customplot->xAxis->setBasePen(QColor(27, 196, 145));
                ui->customplot->yAxis->setBasePen(QColor(27, 196, 145));

                // Set font color to white for axis grid lines
                ui->customplot->xAxis->grid()->setPen(QColor(27, 196, 145));
                ui->customplot->yAxis->grid()->setPen(QColor(27, 196, 145));

                // Set font color to white for legend
                ui->customplot->legend->setBrush(QColor(27, 196, 145));
                ui->customplot->legend->setTextColor(QColor(27, 196, 145));

                // else{
                ui->customplot->xAxis->setRange(f1,f2);
                ui->customplot->yAxis->setRange(-250,dbval); // Adjust range as needed
                ui->customplot->replot();


                // Add new data from vectors x and y
                ui->customplot->graph(1)->setData(xx, yy);

                // Replot the graph to update with new data
                ui->customplot->replot();
                xData.clear();
                yData.clear();
                xx.clear();
                yy.clear();
                y_copy.clear();
                x_copy.clear();

                // Calculate the elapsed time in milliseconds
                qint64 elapsed = timer.nsecsElapsed() / 1000000; // Convert nanoseconds to milliseconds

                // Output the elapsed time for one iteration of the loop
                qDebug() << "Time taken for one iteration: " << elapsed << " milliseconds";

            }
        }

    }






}


void df_gui_version_1::on_pushButton_5_clicked()
{
    //====================Stop Button

    // Disconnect the readyRead signal
    disconnect(socket, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams);

    // Close the UDP socket
    socket->close();

    // Disconnect the readyRead signal
    disconnect(socket2, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams2);

    // Close the UDP socket
    socket2->close();
    ui->radioButton->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color:red; }");
    ui->radioButton_2->setStyleSheet("QRadioButton::indicator {width: 15px; height: 15px;border-radius: 7px; background-color:red; }");



    //ui->pushButton_4->setStyleSheet("background-color: #4d4d4d;");
    ui->pushButton_4->setEnabled(true);
    //ui->pushButton_4->setStyleSheet("border-radius: 15px;background-color: #4d4d4d;color: #ffffff;");
    ui->pushButton_4->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color:rgb(107, 138, 122);"
                                    "color: #ffffff; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color: #a3a3a3; "
                                    "} ");



    //ui->pushButton_5->setStyleSheet("border-radius: 15px;background-color: #a3a3a3;color: #4d4d4d;");
    ui->pushButton_5->setStyleSheet("QPushButton { "
                                    "border-radius: 15px; "
                                    "background-color: #a3a3a3; "
                                    "color: #4d4d4d; "
                                    "} "
                                    "QPushButton:hover { "
                                    "background-color:rgb(107, 138, 122);"
                                    "} ");


    ui->pushButton_5->setEnabled(false);


}

void df_gui_version_1::on_pushButton_8_clicked()
{
    //====================Apply Button For Scanner

    if (ui->comboBox_2->currentText()==ui->comboBox->currentText()){
        //double fs= ui->lineEdit_2->text().toDouble();
       // double fe= ui->lineEdit->text().toDouble();


        if (xData.isEmpty() || yData.isEmpty()) {

            ui->pushButton_7->setStyleSheet("QPushButton { "
                                            "border-radius: 15px; "
                                            "background-color: #4d4d4d; "
                                            "color: #ffffff; "
                                            "} "
                                            "QPushButton:hover { "
                                            "background-color: #a3a3a3; "
                                            "} ");

            ui->pushButton_8->setStyleSheet("QPushButton { "
                                            "border-radius: 15px; "
                                            "background-color: #4d4d4d; "
                                            "color: #ffffff; "
                                            "} "
                                            "QPushButton:hover { "
                                            "background-color: #a3a3a3; "
                                            "} ");

        }
        else{
            ui->pushButton_7->setStyleSheet("QPushButton { "
                                            "border-radius: 15px; "
                                            "background-color: #4d4d4d; "
                                            "color: #ffffff; "
                                            "} "
                                            "QPushButton:hover { "
                                            "background-color: #a3a3a3; "
                                            "} ");

            ui->pushButton_8->setStyleSheet("QPushButton { "
                                            "border-radius: 15px; "
                                            "background-color: #4d4d4d; "
                                            "color: #ffffff; "
                                            "} "
                                            "QPushButton:hover { "
                                            "background-color: #a3a3a3; "
                                            "} ");
            //ui->pushButton_8->setEnabled(false);

            // Disconnect the readyRead signal
            disconnect(socket, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams);

            // Close the UDP socket
            socket->close();
            QVector<double> x=xData,y=yData;

            // Retrieve start and end frequencies from lineEdit_2 and lineEdit
            double startFrequency = ui->lineEdit_2->text().toDouble();
            double endFrequency = ui->lineEdit->text().toDouble();

            // Filter data based on start and end frequencies
            QVector<double> filteredX, filteredY;
            for (int i = 0; i < x.size(); ++i) {
                if (x[i] >= startFrequency && x[i] <= endFrequency) {
                    filteredX.append(x[i]);
                    filteredY.append(y[i]);
                }
            }

            // Clear previous graph data
            //ui->customplot->graph(0)->clearData();

            // Set new data to the graph
            ui->customplot->graph(0)->setData(filteredX, filteredY);

            // Rescale axes to fit new data
            ui->customplot->rescaleAxes();

            // Replot the graph
            ui->customplot->replot();

        }

    }
    else{
        QMessageBox msgBox;

        // Setting the title and text of the message box
        msgBox.setText("Unit For fs and fe Must be Same e.g(fs=MHz,fe=MHz)");
        msgBox.setWindowTitle("Warning");
        msgBox.setIcon(QMessageBox::Warning);
        // Adding buttons to the message box (optional)
        msgBox.setStandardButtons(QMessageBox::Ok);

        // Executing the message box
         msgBox.exec();
    }
}





void df_gui_version_1::on_pushButton_7_clicked()
{
    // Reset Button For Sccaner==========================


    ui->lineEdit_3->setText("");

    if (xData.isEmpty() || yData.isEmpty()) {
        ui->pushButton_7->setStyleSheet("QPushButton { "
                                        "border-radius: 15px; "
                                        "background-color: #4d4d4d; "
                                        "color: #ffffff; "
                                        "} "
                                        "QPushButton:hover { "
                                        "background-color: #a3a3a3; "
                                        "} ");
        ui->pushButton_8->setStyleSheet("QPushButton { "
                                        "border-radius: 15px; "
                                        "background-color: #4d4d4d; "
                                        "color: #ffffff; "
                                        "} "
                                        "QPushButton:hover { "
                                        "background-color: #a3a3a3; "
                                        "} ");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
    }
    else {
        ui->pushButton_7->setStyleSheet("QPushButton { "
                                        "border-radius: 15px; "
                                        "background-color: #4d4d4d; "
                                        "color: #ffffff; "
                                        "} "
                                        "QPushButton:hover { "
                                        "background-color: #a3a3a3; "
                                        "} ");
        ui->pushButton_8->setStyleSheet("QPushButton { "
                                        "border-radius: 15px; "
                                        "background-color: #4d4d4d; "
                                        "color: #ffffff; "
                                        "} "
                                        "QPushButton:hover { "
                                        "background-color: #a3a3a3; "
                                        "} ");
        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->customplot->graph(0)->setData(xData, yData);

        // Rescale axes to fit new data
        ui->customplot->rescaleAxes();

        // Replot the graph
        ui->customplot->replot();
    }


}


void df_gui_version_1::on_lineEdit_3_textChanged(const QString &arg1)
{
    // Db Gain for Scaner
    //dbval = ui->lineEdit_3->text().toDouble();
    dbval =arg1.toDouble();


}


void df_gui_version_1::on_verticalSlider_valueChanged(int value)
{
    dbval=value;
    ui->label_2->setText(QString::number(value));

}


void df_gui_version_1::on_horizontalSlider_valueChanged(int value)
{
    ui->label_3->setText(QString::number(value));

}


void df_gui_version_1::on_pushButton_6_clicked()
{
    //df_channels.show();
}


void df_gui_version_1::on_comboBox_8_currentTextChanged(const QString &arg1)
{
    top_count=arg1.toInt();
}


void df_gui_version_1::on_pushButton_16_clicked()
{
    //Scan Logs------------------

    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);

    ui->frame_6->setVisible(false);
    ui->frame_7->setVisible(false);
    ui->frame_10->setVisible(false);
    ui->frame_8->setVisible(false);
    ui->frame_9->setVisible(false);
    ui->frame_11->setVisible(false);
    ui->frame->setVisible(false);


    // Assuming `frame_2` is a pointer to your QFrame
    int x = 552;
    int y = ui->frame_4->y();  // Preserve the current y-coordinate
    int width = ui->frame_4->width();  // Preserve the current width
    int height = ui->frame_4->height(); // Preserve the current height

    ui->frame_4->setGeometry(x, y, width, height);

    int yv = ui->frame_5->y();  // Preserve the current y-coordinate
    int widthv = ui->frame_5->width();  // Preserve the current width
    int heightv = ui->frame_5->height(); // Preserve the current height

    ui->frame_5->setGeometry(x, yv, widthv, heightv);

    ui->customplot_2->setVisible(true);
    ui->frame_21->setVisible(true);
    ui->frame_22->setVisible(true);


    //ui->customplot_2->setVisible(true);


    // ui->frame_5->move(553, ui->frame_2->y());
    // ui->frame_4->move(553, ui->frame_2->y());






}


void df_gui_version_1::on_pushButton_17_clicked()
{
    // MainView Button--------------------------

    ui->frame_2->setVisible(true);
    ui->frame_3->setVisible(true);

    ui->frame_6->setVisible(true);
    ui->frame_7->setVisible(true);
    ui->frame_10->setVisible(true);
    ui->frame_8->setVisible(true);
    ui->frame_9->setVisible(true);
    ui->frame_11->setVisible(true);
    ui->frame->setVisible(true);


    // Assuming `frame_2` is a pointer to your QFrame
    int x = 365;
    int y = ui->frame_4->y();  // Preserve the current y-coordinate
    int width = ui->frame_4->width();  // Preserve the current width
    int height = ui->frame_4->height(); // Preserve the current height

    ui->frame_4->setGeometry(x, y, width, height);

    int yv = ui->frame_5->y();  // Preserve the current y-coordinate
    int widthv = ui->frame_5->width();  // Preserve the current width
    int heightv = ui->frame_5->height(); // Preserve the current height

    ui->frame_5->setGeometry(x, yv, widthv, heightv);

    ui->customplot_2->setVisible(false);
    ui->frame_21->setVisible(false);
    ui->frame_22->setVisible(false);
}


void df_gui_version_1::on_pushButton_12_clicked()
{
    //QUIT Button
    // Disconnect the readyRead signal
    disconnect(socket, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams);

    // Close the UDP socket
    socket->close();

    // Disconnect the readyRead signal
    disconnect(socket2, &QUdpSocket::readyRead, this, &df_gui_version_1::readDatagrams2);

    // Close the UDP socket
    socket2->close();
    x_itr=1, x_lop=0;
    numSamples = 1000000;    // 1 million samples
    f1=400000000;
    f2=5900000000;



    dbval=100;

    //double f1=4000000,f2=5900000000;

    x_itr1z=0, x_lop1z=1;
    angle_to_addz=0.1757;

    QApplication::quit();  // Ends the application's event loop and closes the application


}

