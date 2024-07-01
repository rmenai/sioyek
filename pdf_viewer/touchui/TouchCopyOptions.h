#pragma once

#include <QWidget>
#include <QQuickWidget>
#include <QQmlContext>
#include <QQuickItem>


class TouchCopyOptions : public QWidget {
    Q_OBJECT
public:
    TouchCopyOptions(QWidget* parent = nullptr);
    void resizeEvent(QResizeEvent* resize_event) override;

public slots:
    void handleCopyClicked();
    void handleSearchClicked();
    void handleScholarClicked();
    void handleGoogleClicked();
    void handleHighlightClicked();
    void handleDownloadClicked();
    void handleSmartJumpClicked();

signals:
    void copyClicked();
    void searchClicked();
    void scholarClicked();
    void googleClicked();
    void highlightClicked();
    void downloadClicked();
    void smartJumpClicked();

private:
    QQuickWidget* quick_widget = nullptr;

};
