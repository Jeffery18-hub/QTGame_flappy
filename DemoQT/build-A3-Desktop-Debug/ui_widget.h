/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QGraphicsView *graphicsView;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *startGameButton;
    QPushButton *backButton;
    QHBoxLayout *horizontalLayout;
    QRadioButton *easyButton;
    QRadioButton *normalButton;
    QRadioButton *hardButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(450, 550);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setObjectName("gridLayout");
        graphicsView = new QGraphicsView(Widget);
        graphicsView->setObjectName("graphicsView");
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMaximumSize(QSize(403, 503));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout->addWidget(graphicsView, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        startGameButton = new QPushButton(Widget);
        startGameButton->setObjectName("startGameButton");

        horizontalLayout_2->addWidget(startGameButton);

        backButton = new QPushButton(Widget);
        backButton->setObjectName("backButton");

        horizontalLayout_2->addWidget(backButton);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        easyButton = new QRadioButton(Widget);
        easyButton->setObjectName("easyButton");
        sizePolicy.setHeightForWidth(easyButton->sizePolicy().hasHeightForWidth());
        easyButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(easyButton);

        normalButton = new QRadioButton(Widget);
        normalButton->setObjectName("normalButton");
        sizePolicy.setHeightForWidth(normalButton->sizePolicy().hasHeightForWidth());
        normalButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(normalButton);

        hardButton = new QRadioButton(Widget);
        hardButton->setObjectName("hardButton");
        sizePolicy.setHeightForWidth(hardButton->sizePolicy().hasHeightForWidth());
        hardButton->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(hardButton);


        gridLayout->addLayout(horizontalLayout, 5, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        startGameButton->setText(QCoreApplication::translate("Widget", "Start Game", nullptr));
        backButton->setText(QCoreApplication::translate("Widget", "Back", nullptr));
        easyButton->setText(QCoreApplication::translate("Widget", "EASY", nullptr));
        normalButton->setText(QCoreApplication::translate("Widget", "NORMAL", nullptr));
        hardButton->setText(QCoreApplication::translate("Widget", "HARD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
