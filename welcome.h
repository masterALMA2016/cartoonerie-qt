#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

#include "welcomeaddproject.h"
#include "welcomeproject.h"
#include "projectmanager.h"

#include <QStringListModel>

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    QWidget *current;
    WelcomeAddProject *welcomeHome;
    ProjectManager* projectManager;
    void updateList();
    explicit Welcome(QWidget *parent = 0);
    ~Welcome();

public slots:
     void selectProject(const QItemSelection& selection);

private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
