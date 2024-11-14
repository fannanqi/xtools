#ifndef XTOOLSELEASCIIASSISTANT_H
#define XTOOLSELEASCIIASSISTANT_H

#include "widget.h"
#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <QTableWidget>
#include <QPushButton>
#include <QPlainTextEdit>
//#include "ui_xToolsEleAsciiAssistant.h"
class QScrollArea;
class QVBoxLayout;
namespace Ui {
class xToolsEleAsciiAssistant;
}

class xToolsEleAsciiAssistant : public QWidget
{
    Q_OBJECT

public:
    explicit xToolsEleAsciiAssistant(QWidget *parent = nullptr);
    ~xToolsEleAsciiAssistant();

    void addRow(const QStringList& row); // 添加一行数据的方法

private slots:
    void updateDateTime();
    void AddButtonClicked();
    void onButtonGroup3Clicked(int id);
    void onButtonGroup4Clicked(int id);
    void setupTableHeaders();
    void delButtonclicked();
    void clearAllRows();

private:
    Ui::xToolsEleAsciiAssistant *ui;
    QVBoxLayout *mainLayout;
    QScrollArea *mainWidget;
    QButtonGroup *buttonGroup3;
    QButtonGroup *buttonGroup4;
    QLabel *dateTimeLabel;
    QTimer *timer;
    QWidget *headwidget; // 声明 headwidget
    QTableWidget *tableWidget;
    QPushButton *AddButton;
    QPushButton *delButton;
    QPushButton *emptyButton;
};

#endif // XTOOLSELEASCIIASSISTANT_H
