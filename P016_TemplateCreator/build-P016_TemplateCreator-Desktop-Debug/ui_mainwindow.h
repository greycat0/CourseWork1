/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *save_button;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QPushButton *add_button;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *edit_button;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(627, 445);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        save_button = new QPushButton(centralWidget);
        save_button->setObjectName(QString::fromUtf8("save_button"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(save_button->sizePolicy().hasHeightForWidth());
        save_button->setSizePolicy(sizePolicy);
        save_button->setStyleSheet(QString::fromUtf8("border-color: rgb(204, 0, 0);\n"
"background-color: rgb(115, 210, 22);\n"
"color: rgb(245, 121, 0);"));

        verticalLayout_3->addWidget(save_button);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy1);
        listWidget->setMinimumSize(QSize(200, 300));
        listWidget->setMaximumSize(QSize(200, 16777215));
        listWidget->setMovement(QListView::Static);
        listWidget->setProperty("isWrapping", QVariant(true));
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setViewMode(QListView::IconMode);
        listWidget->setModelColumn(0);
        listWidget->setUniformItemSizes(false);
        listWidget->setItemAlignment(Qt::AlignLeading);

        verticalLayout_2->addWidget(listWidget);

        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        sizePolicy.setHeightForWidth(add_button->sizePolicy().hasHeightForWidth());
        add_button->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(add_button);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setMinimumSize(QSize(200, 300));
        scrollArea->setStyleSheet(QString::fromUtf8("border-color: rgb(204, 0, 0);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 395, 298));
        sizePolicy2.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        edit_button = new QPushButton(centralWidget);
        edit_button->setObjectName(QString::fromUtf8("edit_button"));
        sizePolicy.setHeightForWidth(edit_button->sizePolicy().hasHeightForWidth());
        edit_button->setSizePolicy(sizePolicy);
        edit_button->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(edit_button);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 627, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        listWidget->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        save_button->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>hello</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        save_button->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        add_button->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\270\320\274\320\262\320\276\320\273", nullptr));
        edit_button->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\215\321\202\320\260\320\273\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
