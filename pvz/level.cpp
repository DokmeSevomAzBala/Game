#include "level.h"
#include <QDebug>

std::vector<QStringList> levelList;
int Level::level = 1;
//int Level::sequencePosition = 0;

Level::Level()
{
}

void Level::loadLevels()
{
    QFile save_file(":/CSVs/pvz_levels.csv");
    if (save_file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream text(&save_file);
        level=text.readLine().split(":").at(1).toInt();
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

QStringList Level::poses(int l)
{
    return levelList.at(l-1);
}

bool Level::savegame(int level)
{
    QFile save_file(":/CSVs/pvz_levels.csv");
    if (!save_file.open(QIODevice::WriteOnly | QIODevice::Text))
        return 1;
    QString writtofile="current level:";
    writtofile.append(level);
    save_file.seek(0);
    QTextStream write(&save_file);
    write<<writtofile;
    return 0;
}
