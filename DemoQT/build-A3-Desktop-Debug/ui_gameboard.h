/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameBoard
{
public:
    QLabel *bestScoreLabel;
    QLabel *rankingLabel;
    QLabel *bestScore;
    QLabel *ranking;
    QPushButton *logoutButton;
    QPushButton *startGame;
    QPushButton *checkAccountButton;
    QLabel *greetingLable;

    void setupUi(QWidget *GameBoard)
    {
        if (GameBoard->objectName().isEmpty())
            GameBoard->setObjectName("GameBoard");
        GameBoard->resize(884, 651);
        bestScoreLabel = new QLabel(GameBoard);
        bestScoreLabel->setObjectName("bestScoreLabel");
        bestScoreLabel->setGeometry(QRect(290, 100, 111, 20));
        rankingLabel = new QLabel(GameBoard);
        rankingLabel->setObjectName("rankingLabel");
        rankingLabel->setGeometry(QRect(290, 180, 58, 16));
        bestScore = new QLabel(GameBoard);
        bestScore->setObjectName("bestScore");
        bestScore->setGeometry(QRect(440, 100, 58, 16));
        ranking = new QLabel(GameBoard);
        ranking->setObjectName("ranking");
        ranking->setGeometry(QRect(440, 180, 58, 16));
        logoutButton = new QPushButton(GameBoard);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(270, 290, 100, 32));
        startGame = new QPushButton(GameBoard);
        startGame->setObjectName("startGame");
        startGame->setGeometry(QRect(420, 290, 100, 32));
        checkAccountButton = new QPushButton(GameBoard);
        checkAccountButton->setObjectName("checkAccountButton");
        checkAccountButton->setGeometry(QRect(660, 50, 100, 32));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        checkAccountButton->setFont(font);
        greetingLable = new QLabel(GameBoard);
        greetingLable->setObjectName("greetingLable");
        greetingLable->setGeometry(QRect(320, 390, 171, 21));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(greetingLable->sizePolicy().hasHeightForWidth());
        greetingLable->setSizePolicy(sizePolicy);
        logoutButton->raise();
        bestScoreLabel->raise();
        rankingLabel->raise();
        bestScore->raise();
        ranking->raise();
        startGame->raise();
        checkAccountButton->raise();
        greetingLable->raise();

        retranslateUi(GameBoard);

        QMetaObject::connectSlotsByName(GameBoard);
    } // setupUi

    void retranslateUi(QWidget *GameBoard)
    {
        GameBoard->setWindowTitle(QCoreApplication::translate("GameBoard", "GameBoard", nullptr));
        bestScoreLabel->setText(QCoreApplication::translate("GameBoard", "Best Score", nullptr));
        rankingLabel->setText(QCoreApplication::translate("GameBoard", "Ranking", nullptr));
        bestScore->setText(QCoreApplication::translate("GameBoard", "TextLabel", nullptr));
        ranking->setText(QCoreApplication::translate("GameBoard", "TextLabel", nullptr));
        logoutButton->setText(QCoreApplication::translate("GameBoard", "logout", nullptr));
        startGame->setText(QCoreApplication::translate("GameBoard", "start game", nullptr));
        checkAccountButton->setText(QCoreApplication::translate("GameBoard", "my account", nullptr));
        greetingLable->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameBoard: public Ui_GameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H
