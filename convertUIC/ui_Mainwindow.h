/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *ActionDiscover;
    QAction *ActionClear;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *ActionStartOptions;
    QAction *actionExit;
    QAction *ActionOpenByID;
    QAction *ActionForceIP;
    QAction *ActionCommand;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *layout_H;
    QMenuBar *menuBar;
    QMenu *menuAction;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(700, 416);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWindow->sizePolicy().hasHeightForWidth());
        mainWindow->setSizePolicy(sizePolicy);
        mainWindow->setMinimumSize(QSize(700, 350));
        mainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/VimbaViewer/Images/stripes_256.png"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        mainWindow->setIconSize(QSize(24, 24));
        ActionDiscover = new QAction(mainWindow);
        ActionDiscover->setObjectName(QStringLiteral("ActionDiscover"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/VimbaViewer/Images/refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionDiscover->setIcon(icon1);
        ActionClear = new QAction(mainWindow);
        ActionClear->setObjectName(QStringLiteral("ActionClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/VimbaViewer/Images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionClear->setIcon(icon2);
        actionAbout = new QAction(mainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout_Qt = new QAction(mainWindow);
        actionAbout_Qt->setObjectName(QStringLiteral("actionAbout_Qt"));
        ActionStartOptions = new QAction(mainWindow);
        ActionStartOptions->setObjectName(QStringLiteral("ActionStartOptions"));
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        ActionOpenByID = new QAction(mainWindow);
        ActionOpenByID->setObjectName(QStringLiteral("ActionOpenByID"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/VimbaViewer/Images/goldeye-g.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionOpenByID->setIcon(icon3);
        ActionForceIP = new QAction(mainWindow);
        ActionForceIP->setObjectName(QStringLiteral("ActionForceIP"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/VimbaViewer/Images/forceIp.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionForceIP->setIcon(icon4);
        ActionCommand = new QAction(mainWindow);
        ActionCommand->setObjectName(QStringLiteral("ActionCommand"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/VimbaViewer/Images/actionCommand.png"), QSize(), QIcon::Normal, QIcon::Off);
        ActionCommand->setIcon(icon5);
        centralWidget = new QWidget(mainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        layout_H = new QHBoxLayout();
        layout_H->setSpacing(6);
        layout_H->setObjectName(QStringLiteral("layout_H"));
        layout_H->setContentsMargins(11, 11, 11, 11);

        horizontalLayout_2->addLayout(layout_H);

        mainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 31));
        menuAction = new QMenu(menuBar);
        menuAction->setObjectName(QStringLiteral("menuAction"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        mainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QStringLiteral(""));
        mainWindow->addToolBar(Qt::LeftToolBarArea, mainToolBar);

        menuBar->addAction(menuAction->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuAction->addAction(ActionOpenByID);
        menuAction->addAction(ActionForceIP);
        menuAction->addAction(ActionCommand);
        menuAction->addAction(ActionDiscover);
        menuAction->addAction(ActionClear);
        menuAction->addSeparator();
        menuAction->addAction(actionExit);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAbout_Qt);
        menuSettings->addAction(ActionStartOptions);
        mainToolBar->addAction(ActionOpenByID);
        mainToolBar->addAction(ActionForceIP);
        mainToolBar->addAction(ActionCommand);
        mainToolBar->addAction(ActionDiscover);
        mainToolBar->addAction(ActionClear);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "Vimba Viewer", Q_NULLPTR));
        ActionDiscover->setText(QApplication::translate("mainWindow", "Refresh", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ActionDiscover->setToolTip(QApplication::translate("mainWindow", "Refresh camera tree", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        ActionDiscover->setShortcut(QApplication::translate("mainWindow", "Ctrl+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ActionClear->setText(QApplication::translate("mainWindow", "Clear Logger", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ActionClear->setToolTip(QApplication::translate("mainWindow", "Clear log window", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        ActionClear->setShortcut(QApplication::translate("mainWindow", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("mainWindow", "About", Q_NULLPTR));
        actionAbout_Qt->setText(QApplication::translate("mainWindow", "About Qt", Q_NULLPTR));
        ActionStartOptions->setText(QApplication::translate("mainWindow", "Start Options...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ActionStartOptions->setShortcut(QApplication::translate("mainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionExit->setText(QApplication::translate("mainWindow", "Exit", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionExit->setShortcut(QApplication::translate("mainWindow", "Ctrl+F4", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ActionOpenByID->setText(QApplication::translate("mainWindow", "Open Camera by IP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ActionOpenByID->setToolTip(QApplication::translate("mainWindow", "Open a camera that was not discovered", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        ActionOpenByID->setShortcut(QApplication::translate("mainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ActionForceIP->setText(QApplication::translate("mainWindow", "Force IP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ActionForceIP->setToolTip(QApplication::translate("mainWindow", "Force specific IP address to camera with given MAC address", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ActionCommand->setText(QApplication::translate("mainWindow", "Action Command Broadcast", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ActionCommand->setToolTip(QApplication::translate("mainWindow", "Trigger over Ethernet - Action Commands", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menuAction->setTitle(QApplication::translate("mainWindow", "Action", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("mainWindow", "Help", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("mainWindow", "Settings", Q_NULLPTR));
        mainToolBar->setWindowTitle(QApplication::translate("mainWindow", "MainWindow ToolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H
