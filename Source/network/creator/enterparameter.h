#ifndef ENTERPARAMETER_H
#define ENTERPARAMETER_H

#include "ui_enterparameter.h"
#include "maincontrol.h"
#include <QWidget>
#include <QButtonGroup>
#include <QPlainTextEdit>
#include <QStringList>

namespace Ui {
class Enterparameter;
}

class Enterparameter : public QWidget
{
    Q_OBJECT

public:
    explicit Enterparameter(QWidget *parent = nullptr);
    ~Enterparameter();
    // 设置内容的方法
    void setContent(const QStringList &data);
    QStringList getInputData() const;
    QString getItemName() const;
    QStringList getContentData() const;

signals:
    void jumpToControl(); // 新增信号
    void dataReady(const QStringList &data); // 传递数据的信号

public slots:
    void onButtonGroup1Clicked(int id);
    void onButtonGroup2Clicked(int id);
    void SaveButtonClicked();

private:
    Ui::Enterparameter *ui; // UI指针
    QPlainTextEdit *plainTextEdit; // 纯文本编辑框指针
//    maincontrol *control; // 控制器指针
    QButtonGroup *buttonGroup1; // 按钮组1
    QButtonGroup *buttonGroup2; // 按钮组2
    void setComboBoxEditable(bool editable);
    void setLineEditPlaceholderTexts();
    void setupButtonGroups();
};

#endif // ENTERPARAMETER_H
