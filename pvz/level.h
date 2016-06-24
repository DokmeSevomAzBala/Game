#ifndef LEVEL_H
#define LEVEL_H

#include <vector>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QStringList>
#include <QString>

class Level
{
public:
    Level();
    static void loadLevels();                   // Load level file into easily accessible vector.
    static bool validLevelFile();               // Checks whether text file is valid or not.
    static int level;                           // Holds user's level.

};

#endif // LEVEL_H
