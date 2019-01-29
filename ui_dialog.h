/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *scoreLable;
    QLabel *replay;
    QLabel *bestscore;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(475, 428);
        scoreLable = new QLabel(Dialog);
        scoreLable->setObjectName(QString::fromUtf8("scoreLable"));
        scoreLable->setGeometry(QRect(180, 50, 51, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setBold(true);
        font.setWeight(75);
        scoreLable->setFont(font);
        replay = new QLabel(Dialog);
        replay->setObjectName(QString::fromUtf8("replay"));
        replay->setGeometry(QRect(170, 210, 91, 51));
        bestscore = new QLabel(Dialog);
        bestscore->setObjectName(QString::fromUtf8("bestscore"));
        bestscore->setGeometry(QRect(90, 10, 221, 41));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        scoreLable->setText(QString());
        replay->setText(QString());
        bestscore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
