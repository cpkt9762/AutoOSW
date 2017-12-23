enum EAppState
{
	k_EAppStateInvalid = 0,	// Invalid
	k_EAppStateUninstalled,	// Uninstalled
	k_EAppStateUpdateRequired,	// Update Required
	k_EAppStateFullyInstalled = 4,	// Fully Installed
	k_EAppStateSharedOnly = 64,	// Shared Only
	k_EAppStateUpdateOptional = 16,	// Update Optional
	k_EAppStateFilesMissing = 32,	// Files Missing
	k_EAppStateFilesCorrupt = 128,	// Files Corrupt
	k_EAppStateAppRunning = 8192,	// App Running
	k_EAppStateComponentInUse = 16384,	// Component In Use
	k_EAppStateBackupRunning = 4096,	// Backup Running
	k_EAppStateUpdateRunning = 256,	// Update Running
	k_EAppStateUpdatePaused = 512,	// Update Paused
	k_EAppStateUpdateStarted = 1024,	// Update Started
	k_EAppStateUpdateQueued = 8,	// Update Queued
	k_EAppStateUpdateHidden = 65536,	// Update Hidden
	k_EAppStateUninstalling = 2048,	// Uninstalling
	k_EAppStateMovingFolder = 32768,	// Moving Folder
}
