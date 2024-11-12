#ifndef XLINKTABLEMODELTOOLUI_H
#define XLINKTABLEMODELTOOLUI_H

#include <QAbstractTableModel>
#include <QActionGroup>
#include <QJsonObject>
#include <QMenu>
#include <QModelIndex>
#include <QWidget>

#include "xToolsBaseToolUi.h"

namespace Ui {
class xLinkTableModelToolUi;
}

class xToolsTableModelTool;
class xLinkTableModelToolUi : public xToolsBaseToolUi
{
    Q_OBJECT

public:
    explicit xLinkTableModelToolUi(QWidget *parent = nullptr);
    ~xLinkTableModelToolUi();
    void setStretchSections(QList<int> columns);
    void setSectionResizeModeToStretch();
    void setColumnVisible(int column, bool visible);

protected:
    virtual void onBaseToolUiInitialized(xToolsBaseTool *tool, const QString &settingGroup) override;
    virtual QList<int> defaultHideColumns();
    virtual void afterRowEdited(int row);
    virtual QDialog *itemEditor() = 0;

protected:
    QAbstractTableModel *mTableModel{nullptr};
    xToolsTableModelTool *m_TableModelTool{nullptr};

private:
    void clear();
    void remove(const QModelIndex &index);
    void importFromJson(const QByteArray &json);
    QByteArray exportAsJson();
    void edit(const QModelIndex &index);
    bool append();

private:
    QMenu *m_menu{nullptr};
    QString mItemsKey;

private:
    QModelIndex currentIndex();
    void writeToSettingsFile();
    bool isInitialized();

private:
    Ui::xLinkTableModelToolUi *ui;

    void onPushButtonEditClicked();
    void onPushButtonClearClicked();
    void onPushButtonDeleteClicked();
    void onPushButtonImportClicked();
    void onPushButtonExportClicked();
    void onPushButtonAppendClicked();
};

#endif // XLINKTABLEMODELTOOLUI_H
