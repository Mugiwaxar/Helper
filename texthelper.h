#ifndef TEXTHELPER_H
#define TEXTHELPER_H

#include <QString>
#include "helper_global.h"


// ---------------------------- //
// Aide au formatage des textes //
// ---------------------------- //


class HELPERSHARED_EXPORT TextHelper
{
public:

    static QString ToBlue(QString text);
    static QString ToBlue(int number);
    static QString ToBlue(unsigned int number);
    static QString ToBlue(float number);

    static QString ToGreen(QString text);
    static QString ToGreen(int number);
    static QString ToGreen(unsigned int number);
    static QString ToGreen(float number);

    static QString ToRed(QString text);
    static QString ToRed(int number);
    static QString ToRed(unsigned int number);
    static QString ToRed(float number);

    static QString ToPurple(QString text);
    static QString ToPurple(int number);
    static QString ToPurple(unsigned int number);
    static QString ToPurple(float number);


    static QString ToYellow(QString text);
    static QString ToYellow(int number);
    static QString ToYellow(unsigned int number);
    static QString ToYellow(float number);

    static int getRandomNumber(int min, int max);

};

#endif // TEXTHELPER_H
