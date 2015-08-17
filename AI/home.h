/*
 * This is stricly related to GUI - e.g handling various events that occur such as clicking on bfs button etc
 * */
#ifndef HOME_H
#define HOME_H

#include "headers.h"
#include "treegeneration.h"

namespace Ui {
class Home;
}

class Home : public QMainWindow
{
    Q_OBJECT

public:
    explicit Home(QWidget *parent = 0);
    ~Home();

private slots:
    void on_GenerateTree_clicked();

    void on_BFS_clicked();

    void on_DLS_clicked();

    void on_IDS_clicked();

    void on_AssignmentTests_clicked();

    void on_ViewTree_clicked();

private:
    Ui::Home *ui;
    TreeGeneration *GTWindow;
    Tree Treeobj;
};

#endif // HOME_H
