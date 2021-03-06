#ifndef MUSICPLAYLISTMANAGER_H
#define MUSICPLAYLISTMANAGER_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (c) 2015 - 2017 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include "musicsong.h"
#include "musicabstractxml.h"

/*! @brief The class of the wpl XML Config Manager.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_CORE_EXPORT MusicWPLConfigManager : public MusicAbstractXml
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit MusicWPLConfigManager(QObject *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Write datas into xml file.
     */
    void writeWPLXMLConfig(const MusicSongItems &musics, const QString &path);
    /*!
     * Read datas into xml file.
     */
    void readWPLXMLConfig(MusicSongItems &musics);

protected:
    /*!
     * Read Music File Path.
     */
    MusicSongs readMusicFilePath(const QDomNode &node) const;

};


/*! @brief The class of the xspf XML Config Manager.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_CORE_EXPORT MusicXSPFConfigManager : public MusicAbstractXml
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit MusicXSPFConfigManager(QObject *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Write datas into xml file.
     */
    void writeXSPFXMLConfig(const MusicSongItems &musics, const QString &path);
    /*!
     * Read datas into xml file.
     */
    void readXSPFXMLConfig(MusicSongItems &musics);

protected:
    /*!
     * Read Music File Path.
     */
    MusicSongs readMusicFilePath(const QDomNode &node) const;

};


/*! @brief The class of the asx XML Config Manager.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_CORE_EXPORT MusicASXConfigManager : public MusicAbstractXml
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit MusicASXConfigManager(QObject *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Write datas into xml file.
     */
    void writeASXXMLConfig(const MusicSongItems &musics, const QString &path);
    /*!
     * Read datas into xml file.
     */
    void readASXXMLConfig(MusicSongItems &musics);

};


/*! @brief The class of the playlist manager.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_CORE_EXPORT MusicPlayListManager
{
public:
    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Import error message alert.
     */
    static void messageAlert();
    /*!
     * Write music playlist data to file.
     */
    void setMusicSongItems(const QString &save, const MusicSongItem &item);
    /*!
     * Read music playlist data from file.
     */
    void getMusicSongItems(const QStringList &open, MusicSongItems &items);

protected:
    /*!
     * Read ttk music playlist data from file.
     */
    void readLisList(const QString &path, MusicSongItems &items);
    /*!
     * Write ttk music playlist data to file.
     */
    void writeLisList(const QString &path, const MusicSongItem &item);
    /*!
     * Read m3u music playlist data from file.
     */
    void readM3UList(const QString &path, MusicSongItems &items);
    /*!
     * Write m3u music playlist data to file.
     */
    void writeM3UList(const QString &path, const MusicSongItem &item);
    /*!
     * Read pls music playlist data from file.
     */
    void readPLSList(const QString &path, MusicSongItems &items);
    /*!
     * Write pls music playlist data to file.
     */
    void writePLSList(const QString &path, const MusicSongItem &item);
    /*!
     * Read wpl music playlist data from file.
     */
    void readWPLList(const QString &path, MusicSongItems &items);
    /*!
     * Write wpl music playlist data to file.
     */
    void writeWPLList(const QString &path, const MusicSongItem &item);
    /*!
     * Read xspf music playlist data from file.
     */
    void readXSPFList(const QString &path, MusicSongItems &items);
    /*!
     * Write xspf music playlist data to file.
     */
    void writeXSPFList(const QString &path, const MusicSongItem &item);
    /*!
     * Read asx music playlist data from file.
     */
    void readASXList(const QString &path, MusicSongItems &items);
    /*!
     * Write asx music playlist data to file.
     */
    void writeASXList(const QString &path, const MusicSongItem &item);

};

#endif // MUSICPLAYLISTMANAGER_H
