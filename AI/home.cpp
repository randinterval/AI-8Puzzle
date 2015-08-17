#include "home.h"
#include "ui_home.h"
#include "QMessageBox"
#include <QDesktopServices>
#include <QUrl>
#include <QInputDialog>
#include "Algorithms.h"

Home::Home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);
    this->setWindowTitle("Uninformed Search Strategies - Artifical Intelligence");
}

Home::~Home()
{
    delete ui;
}

void Home::on_GenerateTree_clicked()
{
    GTWindow = new TreeGeneration(&this->Treeobj);
    GTWindow->show();
}

void Home::on_ViewTree_clicked()
{
    this->Treeobj.print_TreeWiz();
    system("dot tree.dot -Tsvg -o tree.svg");
    QDesktopServices::openUrl(QUrl("tree.svg"));

}

void Home::on_BFS_clicked()
{
    queue <Node *> Path;
    if(Algorithms::BFS(this->Treeobj.getTree(),Path))
    {

        QMessageBox Alert;
        Alert.setText("\t\tGoal Route Found!\n\n");
        string st;
        QString qst;
        while(!Path.empty())
        {
            Node * node = Path.front();
            node->stateToString(st);
            qst = QString::fromStdString(st);
            if(Path.size()!=1)
            {
                Alert.setText(Alert.text()+qst+" -> ");
            }
            else
            {
                Alert.setText(Alert.text()+qst);
            }
            Path.pop();
        }
        Alert.exec();
    }
    else
    {
        QMessageBox Alert;
        Alert.setText("No Route to Goal Node Found!");
        Alert.exec();
    }
}

void Home::on_DLS_clicked()
{
    bool status;
    int depth = QInputDialog::getInt(this,"Depth Limit","Enter Depth Limit",0,0,21478,1,&status);
    if(!status)
    {
        QMessageBox Alert;
        Alert.setText("Please specify Depth!");
        Alert.exec();
        return;
    }
    queue <Node *> Path;
    if(Algorithms::DLS(depth,this->Treeobj.getTree(),Path))
    {
        QMessageBox Alert;
        Alert.setText("\t\tGoal Route Found!\n\n");
        string st;
        QString qst;
        while(!Path.empty())
        {
            Node * node = Path.front();
            node->stateToString(st);
            qst = QString::fromStdString(st);
            if(Path.size()!=1)
            {
                Alert.setText(Alert.text()+qst+" -> ");
            }
            else
            {
                Alert.setText(Alert.text()+qst);
            }
            Path.pop();
        }
        Alert.exec();
    }
    else
    {
        QMessageBox Alert;
        Alert.setText("No Route to Goal Node Found!");
        Alert.exec();
    }
}

void Home::on_IDS_clicked()
{
    bool status;
    int depth = QInputDialog::getInt(this,"Depth Limit","Enter Maximum Depth Limit",0,0,21478,1,&status);
    if(!status)
    {
        QMessageBox Alert;
        Alert.setText("Please specify Depth!");
        Alert.exec();
        return;
    }
    queue <Node *> Path;
    int cutoff;
    if(Algorithms::IDS(depth,this->Treeobj.getTree(),cutoff,Path))
    {
        QMessageBox Alert;
        Alert.setText("\t\tGoal Route Found At Depth "+QString::number(cutoff)+"!\n\n");
        string st;
        QString qst;
        while(!Path.empty())
        {
            Node * node = Path.front();
            node->stateToString(st);
            qst = QString::fromStdString(st);
            if(Path.size()!=1)
            {
                Alert.setText(Alert.text()+qst+" -> ");
            }
            else
            {
                Alert.setText(Alert.text()+qst);
            }
            Path.pop();
        }
        Alert.exec();
    }
    else
    {
        QMessageBox Alert;
        Alert.setText("No Route to Goal Node Found!");
        Alert.exec();
    }
}

void Home::on_AssignmentTests_clicked()
{
    QMessageBox Alert;
    Alert.setText("Setting Initial State to AKIPSAN T");
    Alert.exec();
    this->Treeobj.getTree()->setState("AKIPSAN T");
    Alert.setText("Generating Tree Up to 5 Levels");
    Alert.exec();
    this->Treeobj.generate_Tree(5);
    Alert.setText("Running BFS On the Graph");
    Alert.exec();
    this->on_BFS_clicked();
    Alert.setText("Running DLS Algorithm with K = 3");
    Alert.exec();
    if(true)
    {
        queue <Node *> Path;
        if(Algorithms::DLS(3,this->Treeobj.getTree(),Path))
        {
            QMessageBox Alert;
            Alert.setText("\t\tGoal Route Found!\n\n");
            string st;
            QString qst;
            while(!Path.empty())
            {
                Node * node = Path.front();
                node->stateToString(st);
                qst = QString::fromStdString(st);
                if(Path.size()!=1)
                {
                    Alert.setText(Alert.text()+qst+" -> ");
                }
                else
                {
                    Alert.setText(Alert.text()+qst);
                }
                Path.pop();
            }
            Alert.exec();
        }
        else
        {
            QMessageBox Alert;
            Alert.setText("No Route to Goal Node Found!");
            Alert.exec();
        }
    }
    Alert.setText("Running IDS Algorithm with Maximum Limit 5");
    Alert.exec();
    if(true)
    {
        queue <Node *> Path;
        int cutoff;
        if(Algorithms::IDS(5,this->Treeobj.getTree(),cutoff,Path))
        {
            QMessageBox Alert;
            Alert.setText("\t\tGoal Route Found At Depth "+QString::number(cutoff)+"!\n\n");
            string st;
            QString qst;
            while(!Path.empty())
            {
                Node * node = Path.front();
                node->stateToString(st);
                qst = QString::fromStdString(st);
                if(Path.size()!=1)
                {
                    Alert.setText(Alert.text()+qst+" -> ");
                }
                else
                {
                    Alert.setText(Alert.text()+qst);
                }
                Path.pop();
            }
            Alert.exec();
        }
        else
        {
            QMessageBox Alert;
            Alert.setText("No Route to Goal Node Found!");
            Alert.exec();
        }
    }
}


