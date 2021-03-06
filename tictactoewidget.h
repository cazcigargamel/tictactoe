#ifndef TICTACTOEWIDGET_H
#define TICTACTOEWIDGET_H

#include <QWidget>
#include <QGridLayout>

class QPushButton;

class TicTacToeWidget : public QWidget
{
    Q_OBJECT

public:
    TicTacToeWidget(QWidget *parent = nullptr);
    ~TicTacToeWidget();
    void initNewGame();
private:
    QList<QPushButton*> board;
    void setupBoard();
};
#endif // TICTACTOEWIDGET_H
