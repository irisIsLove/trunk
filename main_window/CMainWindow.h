#ifndef CMAINWINDOW_H
#define CMAINWINDOW_H

#ifdef MAIN_WINDOW_EXPORT
#define EXPORT_MAIN_WINDOW __declspec(dllexport)
#else
#define EXPORT_MAIN_WINDOW __declspec(dllimport)
#endif

#include <QWidget>

namespace Ui {
class CMainWindow;
}

class EXPORT_MAIN_WINDOW CMainWindow : public QWidget {
  Q_OBJECT

public:
  explicit CMainWindow(QWidget* parent = nullptr);
  ~CMainWindow();

private:
  void setIcon();

  Ui::CMainWindow* ui;
};

#endif // CMAINWINDOW_H
