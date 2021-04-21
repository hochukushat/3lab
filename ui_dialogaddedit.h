/********************************************************************************
** Form generated from reading UI file 'dialogaddedit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDEDIT_H
#define UI_DIALOGADDEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogAddEdit
{
public:
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *labelHead;
    QLabel *labelMan;
    QLineEdit *lineEditMan;
    QLabel *labelModel;
    QLineEdit *lineEditModel;
    QLabel *labelType;
    QComboBox *comboType;
    QLabel *labelConstr;
    QComboBox *comboConstr;
    QLabel *labelInterface;
    QComboBox *comboInterface;
    QLabel *labelKolVo;
    QLineEdit *lineEditKolVo;
    QGroupBox *groupDopKl_2;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *radioYes_2;
    QRadioButton *radioNo_2;
    QGroupBox *groupDopKl;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioYes;
    QRadioButton *radioNo;
    QLabel *labelPrice;
    QLineEdit *lineEditPrice;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogAddEdit)
    {
        if (DialogAddEdit->objectName().isEmpty())
            DialogAddEdit->setObjectName(QString::fromUtf8("DialogAddEdit"));
        DialogAddEdit->resize(340, 358);
        horizontalLayout = new QHBoxLayout(DialogAddEdit);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelHead = new QLabel(DialogAddEdit);
        labelHead->setObjectName(QString::fromUtf8("labelHead"));
        QFont font;
        font.setPointSize(12);
        labelHead->setFont(font);

        formLayout->setWidget(0, QFormLayout::SpanningRole, labelHead);

        labelMan = new QLabel(DialogAddEdit);
        labelMan->setObjectName(QString::fromUtf8("labelMan"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelMan);

        lineEditMan = new QLineEdit(DialogAddEdit);
        lineEditMan->setObjectName(QString::fromUtf8("lineEditMan"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditMan);

        labelModel = new QLabel(DialogAddEdit);
        labelModel->setObjectName(QString::fromUtf8("labelModel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelModel);

        lineEditModel = new QLineEdit(DialogAddEdit);
        lineEditModel->setObjectName(QString::fromUtf8("lineEditModel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditModel);

        labelType = new QLabel(DialogAddEdit);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelType);

        comboType = new QComboBox(DialogAddEdit);
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->addItem(QString());
        comboType->setObjectName(QString::fromUtf8("comboType"));

        formLayout->setWidget(3, QFormLayout::FieldRole, comboType);

        labelConstr = new QLabel(DialogAddEdit);
        labelConstr->setObjectName(QString::fromUtf8("labelConstr"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelConstr);

        comboConstr = new QComboBox(DialogAddEdit);
        comboConstr->addItem(QString());
        comboConstr->addItem(QString());
        comboConstr->addItem(QString());
        comboConstr->addItem(QString());
        comboConstr->setObjectName(QString::fromUtf8("comboConstr"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboConstr);

        labelInterface = new QLabel(DialogAddEdit);
        labelInterface->setObjectName(QString::fromUtf8("labelInterface"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelInterface);

        comboInterface = new QComboBox(DialogAddEdit);
        comboInterface->addItem(QString());
        comboInterface->addItem(QString());
        comboInterface->addItem(QString());
        comboInterface->setObjectName(QString::fromUtf8("comboInterface"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboInterface);

        labelKolVo = new QLabel(DialogAddEdit);
        labelKolVo->setObjectName(QString::fromUtf8("labelKolVo"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelKolVo);

        lineEditKolVo = new QLineEdit(DialogAddEdit);
        lineEditKolVo->setObjectName(QString::fromUtf8("lineEditKolVo"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditKolVo);

        groupDopKl_2 = new QGroupBox(DialogAddEdit);
        groupDopKl_2->setObjectName(QString::fromUtf8("groupDopKl_2"));
        verticalLayout_3 = new QVBoxLayout(groupDopKl_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        radioYes_2 = new QRadioButton(groupDopKl_2);
        radioYes_2->setObjectName(QString::fromUtf8("radioYes_2"));

        verticalLayout_3->addWidget(radioYes_2);

        radioNo_2 = new QRadioButton(groupDopKl_2);
        radioNo_2->setObjectName(QString::fromUtf8("radioNo_2"));

        verticalLayout_3->addWidget(radioNo_2);


        formLayout->setWidget(7, QFormLayout::LabelRole, groupDopKl_2);

        groupDopKl = new QGroupBox(DialogAddEdit);
        groupDopKl->setObjectName(QString::fromUtf8("groupDopKl"));
        verticalLayout_2 = new QVBoxLayout(groupDopKl);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioYes = new QRadioButton(groupDopKl);
        radioYes->setObjectName(QString::fromUtf8("radioYes"));

        verticalLayout_2->addWidget(radioYes);

        radioNo = new QRadioButton(groupDopKl);
        radioNo->setObjectName(QString::fromUtf8("radioNo"));

        verticalLayout_2->addWidget(radioNo);


        formLayout->setWidget(7, QFormLayout::FieldRole, groupDopKl);

        labelPrice = new QLabel(DialogAddEdit);
        labelPrice->setObjectName(QString::fromUtf8("labelPrice"));

        formLayout->setWidget(8, QFormLayout::LabelRole, labelPrice);

        lineEditPrice = new QLineEdit(DialogAddEdit);
        lineEditPrice->setObjectName(QString::fromUtf8("lineEditPrice"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditPrice);

        buttonBox = new QDialogButtonBox(DialogAddEdit);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(9, QFormLayout::FieldRole, buttonBox);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(DialogAddEdit);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAddEdit, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAddEdit, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAddEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogAddEdit)
    {
        DialogAddEdit->setWindowTitle(QCoreApplication::translate("DialogAddEdit", "Dialog", nullptr));
        labelHead->setText(QCoreApplication::translate("DialogAddEdit", "TextLabel", nullptr));
        labelMan->setText(QCoreApplication::translate("DialogAddEdit", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", nullptr));
        labelModel->setText(QCoreApplication::translate("DialogAddEdit", "\320\234\320\276\320\264\320\265\320\273\321\214", nullptr));
        labelType->setText(QCoreApplication::translate("DialogAddEdit", "\320\242\320\270\320\277 \320\274\320\265\321\205\320\260\320\275\320\270\320\267\320\274\320\260", nullptr));
        comboType->setItemText(0, QCoreApplication::translate("DialogAddEdit", "\320\234\320\265\320\274\320\261\321\200\320\260\320\275\320\275\320\260\321\217", nullptr));
        comboType->setItemText(1, QCoreApplication::translate("DialogAddEdit", "\320\234\320\265\321\205\320\260\320\275\320\270\321\207\320\265\321\201\320\272\320\260\321\217", nullptr));
        comboType->setItemText(2, QCoreApplication::translate("DialogAddEdit", "\320\234\320\265\321\205\320\276\320\274\320\265\320\274\320\261\321\200\320\260\320\275\320\275\320\260\321\217", nullptr));

        labelConstr->setText(QCoreApplication::translate("DialogAddEdit", "\320\242\320\270\320\277 \320\272\320\276\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\320\270", nullptr));
        comboConstr->setItemText(0, QCoreApplication::translate("DialogAddEdit", "\320\232\320\273\320\260\321\201\321\201\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));
        comboConstr->setItemText(1, QCoreApplication::translate("DialogAddEdit", "\320\255\321\200\320\263\320\276\320\275\320\276\320\274\320\270\321\207\320\275\321\213\320\271", nullptr));
        comboConstr->setItemText(2, QCoreApplication::translate("DialogAddEdit", "\320\240\320\260\320\267\320\264\320\265\320\273\321\214\320\275\321\213\320\271", nullptr));
        comboConstr->setItemText(3, QCoreApplication::translate("DialogAddEdit", "\320\240\320\276\320\274\320\261\320\270\321\207\320\265\321\201\320\272\320\270\320\271", nullptr));

        labelInterface->setText(QCoreApplication::translate("DialogAddEdit", "\320\242\320\270\320\277 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", nullptr));
        comboInterface->setItemText(0, QCoreApplication::translate("DialogAddEdit", "PS2", nullptr));
        comboInterface->setItemText(1, QCoreApplication::translate("DialogAddEdit", "USB", nullptr));
        comboInterface->setItemText(2, QCoreApplication::translate("DialogAddEdit", "\320\221\320\265\320\267\320\277\321\200\320\276\320\262\320\276\320\264\320\275\320\276\320\271", nullptr));

        labelKolVo->setText(QCoreApplication::translate("DialogAddEdit", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\273\320\260\320\262\320\270\321\210", nullptr));
        groupDopKl_2->setTitle(QCoreApplication::translate("DialogAddEdit", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\277\320\276\320\264\321\201\320\262\320\265\321\202\320\272\320\270", nullptr));
        radioYes_2->setText(QCoreApplication::translate("DialogAddEdit", "\320\224\320\260", nullptr));
        radioNo_2->setText(QCoreApplication::translate("DialogAddEdit", "\320\235\320\265\321\202", nullptr));
        groupDopKl->setTitle(QCoreApplication::translate("DialogAddEdit", "\320\235\320\260\320\273\320\270\321\207\320\270\320\265 \320\264\320\276\320\277.\320\272\320\273\320\260\320\262\320\270\321\210", nullptr));
        radioYes->setText(QCoreApplication::translate("DialogAddEdit", "\320\224\320\260", nullptr));
        radioNo->setText(QCoreApplication::translate("DialogAddEdit", "\320\235\320\265\321\202", nullptr));
        labelPrice->setText(QCoreApplication::translate("DialogAddEdit", "\320\246\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddEdit: public Ui_DialogAddEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDEDIT_H
