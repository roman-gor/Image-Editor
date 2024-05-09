#ifndef HELPFORM_H
#define HELPFORM_H

#include <QWidget>

namespace Ui {
class HelpForm;
}

class HelpForm : public QWidget
{
    Q_OBJECT

public:
    explicit HelpForm(QWidget *parent = nullptr);
    ~HelpForm();

private slots:
    void on_aboutProgButton_clicked();

    void on_editImgButton_clicked();

    void on_saveButton_clicked();

private:
    Ui::HelpForm *ui;
};

#endif // HELPFORM_H
