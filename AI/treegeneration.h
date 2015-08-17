#ifndef TREEGENERATION_H
#define TREEGENERATION_H

#include <QDialog>
#include "Tree.h"

namespace Ui {
class TreeGeneration;
}

class TreeGeneration : public QDialog
{
    Q_OBJECT

public:
    explicit TreeGeneration(Tree * , QWidget *parent = 0);
    ~TreeGeneration();


private slots:
    void on_GenerateTreeDepth_clicked();

    void on_GenerateTreeGoal_clicked();

    void on_randomize_clicked();

private:
    Ui::TreeGeneration *ui;
    Tree  * Treeobj;
};

#endif // TREEGENERATION_H
