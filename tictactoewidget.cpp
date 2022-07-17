#include "tictactoewidget.h"
#include <QPushButton>

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
    : QWidget(parent)
{
    setupBoard();
}

TicTacToeWidget::~TicTacToeWidget()
{
}

void TicTacToeWidget::initNewGame()
{
    for(int i = 0; i < 9; ++i){
        board.at(i)->setText(" ");
    }
}

void TicTacToeWidget::setupBoard()
{
    QGridLayout *gridLayout = new QGridLayout;

    for(int row = 0; row < 3; ++row){
        for(int coloumn = 0; coloumn < 3; ++coloumn){
            QPushButton *button = new QPushButton;
            button->setText(" ");
            button->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
            gridLayout->addWidget(button,row,coloumn);
            board.append(button);
        }
    }

    setLayout(gridLayout);
}

