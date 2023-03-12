#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
#include <QDebug>
#include <QDateTime>

//*** Current Folder
void test_current()
{
    qInfo() << QDir::currentPath();

    QDir dir;
    qInfo() << dir.absolutePath();
}

//*** Listing
void test_list(QString path, bool recursive = false)
{
    QDir root(path);
    if(!root.exists())
    {
        qWarning() << "Path not found" << path;
        return;
    }

    QFileInfoList list = root.entryInfoList(QDir::Filter::NoDotAndDotDot | QDir::Filter::AllEntries);

    foreach(QFileInfo fi, list)
    {
        qInfo() << "------------------------------";
        qInfo() << "Name" << fi.fileName();
        qInfo() << "Path" << fi.filePath();
        qInfo() << "Absolute" << fi.absoluteFilePath();
        qInfo() << "Created" << fi.birthTime().toString();
        qInfo() << "Modified" << fi.lastModified().toString();
        qInfo() << "Size" << fi.size();

        QString type = "Unknown";
        fi.isDir() ? type = "Dir" : type = "File";
        qInfo() << "Type: " << type;

        if(recursive && fi.isDir()) test_list(fi.absoluteFilePath());
    }
}

//*** Modifying
void test_modify(QDir root)
{
    if(root.exists("test"))
    {
        qInfo() << "Test folder already exists";
        return;
    }

    if(root.mkdir("test"))
    {
        QDir dir("test");
        qInfo() << "Created" << dir.absolutePath();

        if(root.rename("test", "test2"))
        {
            qInfo() << "Renamed" << dir.absolutePath();
            qInfo() << "Test" << dir.exists();

            if(root.exists("test2"))
            {
                if(root.mkdir("test2"))
                {
                    qInfo() << "Filed - could not remove the directory!";
                }
            }
        }
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    test_current();
//    test_list(QDir::currentPath(), true);
    test_modify(QDir::currentPath());
    return a.exec();
}
