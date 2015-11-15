#include "musicdesktopwallpaperthread.h"
#include "musicbgthememanager.h"
#include "musicregeditmanager.h"

#include <time.h>
#include <QFileInfo>

#if defined Q_OS_WIN
#   include <Windows.h>
#   if defined Q_CC_MSVC
#      pragma comment(lib, "user32.lib")
#   endif
#endif

MusicDesktopWallpaperThread::MusicDesktopWallpaperThread(QObject *parent)
    : QThread(parent)
{
    MusicRegeditManager().getDesktopWallControlPanel(m_originPath, m_originType);
    qsrand(time(NULL));
    m_run = true;
    m_currentImageIndex = 0;
    m_returnToOrigin = false;
}

MusicDesktopWallpaperThread::~MusicDesktopWallpaperThread()
{
    stopAndQuitThread();
    if(m_returnToOrigin)
    {
        setWallpaper(m_originPath, m_originType);
    }
}

void MusicDesktopWallpaperThread::start()
{
    m_run = true;
    QThread::start();
}

void MusicDesktopWallpaperThread::run()
{
    QStringList path = m_paramter.value("Path").toStringList();
    int time = m_paramter.value("Time").toInt();
    int type = m_paramter.value("Type").toInt();
    int func = m_paramter.value("Func").toInt();
    m_returnToOrigin = m_paramter.value("Close").toBool();
    while(m_run)
    {
        if(path.isEmpty())
        {
            stopAndQuitThread();
            return;
        }
        if(m_paramter["Mode"].toInt() == 2)
        {
            path.clear();
            QString name = M_BG_MANAGER->getArtPhotoPathByIndex();
            !name.isEmpty() ? path << name : path << m_originPath;
        }
        if( func == 1) ///random mode
        {
            m_currentImageIndex = qrand() % path.size();
        }
        else if(++m_currentImageIndex >= path.size())
        {
            m_currentImageIndex = 0;
        }
        setWallpaper(path[m_currentImageIndex], type);
        sleep(time);
    }
}

void MusicDesktopWallpaperThread::setParamters(const MStriantMap &p)
{
    m_paramter = p;
}

void MusicDesktopWallpaperThread::stopAndQuitThread()
{
    if(isRunning())
    {
        m_run = false;
        wait();
    }
    quit();
}

void MusicDesktopWallpaperThread::setWallpaper(const QString &path, int type) const
{
    MusicRegeditManager().setDesktopWallControlPanel(path, type);
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0,
                         (TCHAR*)path.toStdWString().c_str(),
                         SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
}
