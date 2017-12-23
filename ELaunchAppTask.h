enum ELaunchAppTask
{
	k_ELaunchAppTaskNone = 0,	// None
	k_ELaunchAppTaskCompleted,	// Completed
	k_ELaunchAppTaskCancelled,	// Cancelled
	k_ELaunchAppTaskFailed,	// Failed
	k_ELaunchAppTaskStarting,	// Starting
	k_ELaunchAppTaskRequestingLicense,	// RequestingLicense
	k_ELaunchAppTaskUpdatingAppInfo,	// UpdatingAppInfo
	k_ELaunchAppTaskUnlockingH264,	// UnlockingH264
	k_ELaunchAppTaskShowVR2DWarning = 11,	// ShowVR2DWarning
	k_ELaunchAppTaskShowVROculusOnly,	// ShowVROculusOnly
	k_ELaunchAppTaskShowCheckSystem = 8,	// ShowCheckSystem
	k_ELaunchAppTaskShowGameArgs = 15,	// ShowGameArgs
	k_ELaunchAppTaskShowCDKey,	// ShowCDKey
	k_ELaunchAppTaskShowVRStreamingLaunch = 13,	// ShowVRStreamingLaunch
	k_ELaunchAppTaskShowNoControllerConfig,	// ShowNoControllerConfig
	k_ELaunchAppTaskShowLaunchOption = 9,	// ShowLaunchOption
	k_ELaunchAppTaskShowEula,	// ShowEula
	k_ELaunchAppTaskWaitingPrevProcess = 17,	// WaitingPrevProcess
	k_ELaunchAppTaskDownloadingDepots,	// DownloadingDepots
	k_ELaunchAppTaskDownloadingWorkshop,	// DownloadingWorkshop
	k_ELaunchAppTaskUpdatingDRM,	// UpdatingDRM
	k_ELaunchAppTaskGettingLegacyKey,	// GettingLegacyKey
	k_ELaunchAppTaskRunningInstallScript,	// RunningInstallScript
	k_ELaunchAppTaskSynchronizingCloud,	// SynchronizingCloud
	k_ELaunchAppTaskProcessingShaderCache,	// ProcessingShaderCache
	k_ELaunchAppTaskVerifyingFiles,	// VerifyingFiles
	k_ELaunchAppTaskKickingOtherSession,	// KickingOtherSession
	k_ELaunchAppTaskWaitingOpenVRAppQuit,	// WaitingOpenVRAppQuit
	k_ELaunchAppTaskSiteLicenseSeatCheckout,	// SiteLicenseSeatCheckout
	k_ELaunchAppTaskDelayLaunch,	// DelayLaunch
	k_ELaunchAppTaskCreatingProcess,	// CreatingProcess
	k_ELaunchAppTaskWaitingGameWindow,	// WaitingGameWindow
}
