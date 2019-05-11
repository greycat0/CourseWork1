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
    QPushButton *pushButton_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QPushButton *add_button;
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
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(pushButton_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setMinimumSize(QSize(200, 300));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 297, 298));
        sizePolicy1.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(pushButton);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(200, 300));
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

        listWidget->setCurrentRow(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
#ifndef QT_NO_WHATSTHIS
        pushButton_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>hello</p></body></html>", nullptr));
#endif // QT_NO_WHATSTHIS
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \321\215\321\202\320\260\320\273\320\276\320\275", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "\320\260", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "\320\261", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "\320\262", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "\320\263", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "\320\264", nullptr));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "\320\265", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "\321\221", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "\320\266", nullptr));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "\320\267", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "\320\270", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "\320\271", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "\320\272", nullptr));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "\320\273", nullptr));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "\320\274", nullptr));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "\320\275", nullptr));
        QListWidgetItem *___qlistwidgetitem15 = listWidget->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "\320\276", nullptr));
        QListWidgetItem *___qlistwidgetitem16 = listWidget->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "\320\277", nullptr));
        QListWidgetItem *___qlistwidgetitem17 = listWidget->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "\321\200", nullptr));
        QListWidgetItem *___qlistwidgetitem18 = listWidget->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "\321\201", nullptr));
        QListWidgetItem *___qlistwidgetitem19 = listWidget->item(19);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "\321\202", nullptr));
        QListWidgetItem *___qlistwidgetitem20 = listWidget->item(20);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "\321\203", nullptr));
        QListWidgetItem *___qlistwidgetitem21 = listWidget->item(21);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "\321\204", nullptr));
        QListWidgetItem *___qlistwidgetitem22 = listWidget->item(22);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "\321\205", nullptr));
        QListWidgetItem *___qlistwidgetitem23 = listWidget->item(23);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "\321\206", nullptr));
        QListWidgetItem *___qlistwidgetitem24 = listWidget->item(24);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "\321\207", nullptr));
        QListWidgetItem *___qlistwidgetitem25 = listWidget->item(25);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "\321\210", nullptr));
        QListWidgetItem *___qlistwidgetitem26 = listWidget->item(26);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "\321\211", nullptr));
        QListWidgetItem *___qlistwidgetitem27 = listWidget->item(27);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "\321\214", nullptr));
        QListWidgetItem *___qlistwidgetitem28 = listWidget->item(28);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "\321\213", nullptr));
        QListWidgetItem *___qlistwidgetitem29 = listWidget->item(29);
        ___qlistwidgetitem29->setText(QApplication::translate("MainWindow", "\321\212", nullptr));
        QListWidgetItem *___qlistwidgetitem30 = listWidget->item(30);
        ___qlistwidgetitem30->setText(QApplication::translate("MainWindow", "\321\215", nullptr));
        QListWidgetItem *___qlistwidgetitem31 = listWidget->item(31);
        ___qlistwidgetitem31->setText(QApplication::translate("MainWindow", "\321\216", nullptr));
        QListWidgetItem *___qlistwidgetitem32 = listWidget->item(32);
        ___qlistwidgetitem32->setText(QApplication::translate("MainWindow", "\321\217", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        add_button->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\270\320\274\320\262\320\276\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
