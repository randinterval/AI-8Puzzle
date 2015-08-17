#include "ui_treegeneration.h"
#include "treegeneration.h"
#include <QMessageBox>



TreeGeneration::TreeGeneration(Tree * Treeobj,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TreeGeneration)
{
    ui->setupUi(this);
    this->Treeobj = Treeobj;
    Node * root = this->Treeobj->getTree();
    string state;
    root->stateToString(state);
    QString qstate = QString::fromStdString(state);
    ui->r0c0->setText(qstate.left(1));
    ui->r0c1->setText(qstate.mid(1,1));
    ui->r0c2->setText(qstate.mid(2,1));
    ui->r1c0->setText(qstate.mid(3,1));
    ui->r1c1->setText(qstate.mid(4,1));
    ui->r1c2->setText(qstate.mid(5,1));
    ui->r2c0->setText(qstate.mid(6,1));
    ui->r2c1->setText(qstate.mid(7,1));
    ui->r2c2->setText(qstate.mid(8,1));
    this->setWindowTitle("Tree Generation");

}

TreeGeneration::~TreeGeneration()
{
    delete ui;
}


void TreeGeneration::on_GenerateTreeDepth_clicked()
{
    int depth = ui->depthvalue->value();
    Treeobj->generate_Tree(depth);
    QMessageBox alert;
    alert.setText("Tree has been Generated :)");
    alert.exec();
}

void TreeGeneration::on_GenerateTreeGoal_clicked()
{
    Treeobj->generate_Tree();
    QMessageBox alert;
    alert.setText("Tree has been Generated :)");
    alert.exec();
}

void TreeGeneration::on_randomize_clicked()
{
    srand(time(NULL));
    random_shuffle(&this->Treeobj->getTree()->state[0][0], &this->Treeobj->getTree()->state[0][0] + 3*3);
    Node * root = this->Treeobj->getTree();
    string state;
    root->stateToString(state);
    QString qstate = QString::fromStdString(state);
    ui->r0c0->setText(qstate.left(1));
    ui->r0c1->setText(qstate.mid(1,1));
    ui->r0c2->setText(qstate.mid(2,1));
    ui->r1c0->setText(qstate.mid(3,1));
    ui->r1c1->setText(qstate.mid(4,1));
    ui->r1c2->setText(qstate.mid(5,1));
    ui->r2c0->setText(qstate.mid(6,1));
    ui->r2c1->setText(qstate.mid(7,1));
    ui->r2c2->setText(qstate.mid(8,1));
}
