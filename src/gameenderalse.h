#ifndef GAMEENDERALSE_H
#define GAMEENDERALSE_H

#include "gamegamebryo.h"

#include <QObject>
#include <QtGlobal>

class GameEnderalSE : public GameGamebryo
{
  Q_OBJECT

  Q_PLUGIN_METADATA(IID "com.soundcontactstudio.GameEnderalSE" FILE "gameenderalse.json")

public:

  GameEnderalSE();

  virtual bool init(MOBase::IOrganizer *moInfo) override;

public: // IPluginGame interface

  virtual QString gameName() const override;
  virtual QIcon gameIcon() const override;
  virtual QList<MOBase::ExecutableInfo> executables() const override;
  virtual QList<MOBase::ExecutableForcedLoadSetting> executableForcedLoads() const override;
  virtual void initializeProfile(const QDir &path, ProfileSettings settings) const override;
  virtual QString steamAPPId() const override;
  virtual QStringList primaryPlugins() const override;
  virtual QStringList gameVariants() const override;
  virtual QString binaryName() const override;
  virtual QString getLauncherName() const override;
  virtual bool looksValid(const QDir& folder) const override;
  virtual QString gameShortName() const override;
  virtual QString gameNexusName() const override;
  virtual QStringList validShortNames() const override;
  virtual QStringList iniFiles() const override;
  virtual QStringList DLCPlugins() const override;
  virtual QStringList CCPlugins() const override;
  SortMechanism sortMechanism() const override;
  virtual LoadOrderMechanism loadOrderMechanism() const override;
  virtual int nexusModOrganizerID() const override;
  virtual int nexusGameID() const override;

public: // IPlugin interface

  virtual QString name() const override;
  virtual QString localizedName() const override;
  virtual QString author() const override;
  virtual QString description() const override;
  virtual MOBase::VersionInfo version() const override;
  virtual QList<MOBase::PluginSetting> settings() const override;
  virtual MappingType mappings() const override;


protected:

  std::shared_ptr<const GamebryoSaveGame> makeSaveGame(QString filePath) const override;
  QString savegameExtension() const override;
  QString savegameSEExtension() const override;

  QFileInfo findInGameFolder(const QString &relativePath) const;

  virtual QString identifyGamePath() const override;

};

#endif // _GAMESKYRIMSE_H
