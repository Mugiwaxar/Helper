#include "texthelper.h"

#include <QDebug>
#include <QtGlobal>
#include <QTime>

QString TextHelper::ToBlue(QString text)
{
    return "<font color='blue'>" + text + "</font>";
}

QString TextHelper::ToBlue(int number)
{
    return ToBlue(QString::number(number));
}

QString TextHelper::ToBlue(unsigned int number)
{
    return ToBlue(QString::number(number));
}

QString TextHelper::ToBlue(float number)
{
    QString text;
    text = text.setNum(number);

    return ToBlue(text);
}



QString TextHelper::ToGreen(QString text)
{
    return "<font color='green'>" + text + "</font>";
}

QString TextHelper::ToGreen(int number)
{
    return ToGreen(QString::number(number));
}

QString TextHelper::ToGreen(unsigned int number)
{
    return ToGreen(QString::number(number));
}

QString TextHelper::ToGreen(float number)
{
    QString text;
    text = text.setNum(number);

    return ToGreen(text);
}


QString TextHelper::ToRed(QString text)
{
    return "<font color='red'>" + text + "</font>";
}

QString TextHelper::ToRed(int number)
{
    return ToRed(QString::number(number));
}

QString TextHelper::ToRed(unsigned int number)
{
    return ToRed(QString::number(number));
}

QString TextHelper::ToRed(float number)
{
    QString text;
    text = text.setNum(number);

    return ToRed(text);
}


QString TextHelper::ToPurple(QString text)
{
    return "<font color='purple'>" + text + "</font>";
}

QString TextHelper::ToPurple(int number)
{
    return ToPurple(QString::number(number));
}

QString TextHelper::ToPurple(unsigned int number)
{
    return ToPurple(QString::number(number));
}

QString TextHelper::ToPurple(float number)
{
    QString text;
    text = text.setNum(number);

    return ToPurple(text);
}


QString TextHelper::ToYellow(QString text)
{
    return "<font color='yellow'>" + text + "</font>";
}

QString TextHelper::ToYellow(int number)
{
    return ToYellow(QString::number(number));
}

QString TextHelper::ToYellow(unsigned int number)
{
    return ToYellow(QString::number(number));
}

QString TextHelper::ToYellow(float number)
{
    QString text;
    text = text.setNum(number);

    return ToYellow(text);
}



int TextHelper::getRandomNumber(int min, int max)
{
    if(min > max)
        min = max;

    qsrand(QTime::currentTime().msec() + qrand());

    max -= min - 1;
    int randNumber = qrand() % max + min;
    return randNumber;
}
