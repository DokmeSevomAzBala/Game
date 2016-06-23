#include "level.h"
#include <QDebug>

std::vector<QStringList> levelList;
int Level::level = 0 ;

Level::Level()
{
}

void Level::loadLevels()
{
    QFile save_file(":/CSVs/pvz_levels.csv");
    if (save_file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() <<"LLLLLLLLLLLLLLLLLLLLLLLL";
        QTextStream text(&save_file);
        while(!text.atEnd())
        {
            levelList.push_back(text.readLine().split(":")); // Fill levelList with info from pvz_levels.csv.
        }
    }
}

bool Level::validLevelFile()
{
    QFile save_file(":/CSVs/pvz_levels.csv");
    if (!save_file.open(QIODevice::ReadOnly | QIODevice::Text))
        return 0;

    if (!levelList.size())
        return 0;

    return 1;
}
