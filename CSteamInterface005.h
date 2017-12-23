class CSteamInterface005
{
	virtual unknown_ret ~CSteamInterface005() = 0;
	virtual unknown_ret ~CSteamInterface005() = 0;
	virtual unknown_ret ChangePassword( char const*, char const*, TSteamError * ) = 0;
	virtual unknown_ret GetCurrentEmailAddress( char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret ChangePersonalQA( char const*, char const*, char const*, TSteamError * ) = 0;
	virtual unknown_ret ChangeEmailAddress( char const*, TSteamError * ) = 0;
	virtual unknown_ret VerifyEmailAddress( char const*, TSteamError * ) = 0;
	virtual unknown_ret RequestEmailAddressVerificationEmail( TSteamError * ) = 0;
	virtual unknown_ret ChangeAccountName( char const*, char const*, TSteamError * ) = 0;
	virtual unknown_ret MountAppFilesystem( TSteamError * ) = 0;
	virtual unknown_ret UnmountAppFilesystem( TSteamError * ) = 0;
	virtual unknown_ret MountFilesystem( uint32, char const*, TSteamError * ) = 0;
	virtual unknown_ret UnmountFilesystem( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret Stat( char const*, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret SetvBuf( unsigned long, void *, ESteamBufferMethod, uint32, TSteamError * ) = 0;
	virtual unknown_ret FlushFile( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret OpenFile( char const*, char const*, TSteamError * ) = 0;
	virtual unknown_ret OpenFileEx( char const*, char const*, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret OpenTmpFile( TSteamError * ) = 0;
	virtual unknown_ret ClearError( TSteamError * ) = 0;
	virtual unknown_ret GetVersion( char *, uint32 ) = 0;
	virtual unknown_ret GetOfflineStatus( TSteamOfflineStatus *, TSteamError * ) = 0;
	virtual unknown_ret ChangeOfflineStatus( TSteamOfflineStatus *, TSteamError * ) = 0;
	virtual unknown_ret ProcessCall( uint32, TSteamProgress *, TSteamError * ) = 0;
	virtual unknown_ret AbortCall( uint32, TSteamError * ) = 0;
	virtual unknown_ret BlockingCall( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret SetMaxStallCount( uint32, TSteamError * ) = 0;
	virtual unknown_ret CloseFile( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret ReadFile( void *, uint32, uint32, unsigned long, TSteamError * ) = 0;
	virtual unknown_ret WriteFile( void const*, uint32, uint32, unsigned long, TSteamError * ) = 0;
	virtual unknown_ret Getc( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret Putc( int32, unsigned long, TSteamError * ) = 0;
	virtual unknown_ret SeekFile( unsigned long, long, ESteamSeekMethod, TSteamError * ) = 0;
	virtual unknown_ret TellFile( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret SizeFile( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret FindFirst( char const*, ESteamFindFilter, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret FindNext( unsigned long, TSteamElemInfo *, TSteamError * ) = 0;
	virtual unknown_ret FindClose( unsigned long, TSteamError * ) = 0;
	virtual unknown_ret GetLocalFileCopy( char const*, TSteamError * ) = 0;
	virtual unknown_ret IsFileImmediatelyAvailable( char const*, TSteamError * ) = 0;
	virtual unknown_ret HintResourceNeed( char const*, int32, TSteamError * ) = 0;
	virtual unknown_ret ForgetAllHints( TSteamError * ) = 0;
	virtual unknown_ret PauseCachePreloading( TSteamError * ) = 0;
	virtual unknown_ret ResumeCachePreloading( TSteamError * ) = 0;
	virtual unknown_ret WaitForResources( char const*, TSteamError * ) = 0;
	virtual unknown_ret StartEngine( TSteamError * ) = 0;
	virtual unknown_ret ShutdownEngine( TSteamError * ) = 0;
	virtual unknown_ret Startup( uint32, TSteamError * ) = 0;
	virtual unknown_ret Cleanup( TSteamError * ) = 0;
	virtual unknown_ret NumAppsRunning( TSteamError * ) = 0;
	virtual unknown_ret CreateAccount( char const*, char const*, char const*, char const*, char const*, char const*, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GenerateSuggestedAccountNames( char const*, char const*, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret IsLoggedIn( int32 *, TSteamError * ) = 0;
	virtual unknown_ret Logout( TSteamError * ) = 0;
	virtual unknown_ret IsSecureComputer( int32 *, TSteamError * ) = 0;
	virtual unknown_ret CreateLogContext( char const* ) = 0;
	virtual unknown_ret Log( unsigned long, char const* ) = 0;
	virtual unknown_ret LogResourceLoadStarted( char const* ) = 0;
	virtual unknown_ret LogResourceLoadFinished( char const* ) = 0;
	virtual unknown_ret RefreshLogin( char const*, int32, TSteamError * ) = 0;
	virtual unknown_ret VerifyPassword( char const*, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetUserType( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppStats( TSteamAppStats *, TSteamError * ) = 0;
	virtual unknown_ret IsAccountNameInUse( char const*, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppIds( uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionStats( TSteamSubscriptionStats *, TSteamError * ) = 0;
	virtual unknown_ret RefreshAccountInfo( int32, TSteamError * ) = 0;
	virtual unknown_ret Subscribe( uint32, TSteamSubscriptionBillingInfo const*, TSteamError * ) = 0;
	virtual unknown_ret Unsubscribe( uint32, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionReceipt( uint32, TSteamSubscriptionReceipt *, TSteamError * ) = 0;
	virtual unknown_ret GetAccountStatus( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret SetUser( char const*, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetUser( char *, uint32, uint32 *, TSteamGlobalUserID *, TSteamError * ) = 0;
	virtual unknown_ret Login( char const*, char const*, int32, TSteamError * ) = 0;
	virtual unknown_ret AckSubscriptionReceipt( uint32, TSteamError * ) = 0;
	virtual unknown_ret IsAppSubscribed( uint32, int32 *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionIds( uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscription( uint32, TSteamSubscription *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscriptionDiscount( uint32, uint32, TSteamSubscriptionDiscount *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateSubscriptionDiscountQualifier( uint32, uint32, uint32, TSteamDiscountQualifier *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateApp( uint32, TSteamApp *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppLaunchOption( uint32, uint32, TSteamAppLaunchOption *, TSteamError * ) = 0;
	virtual unknown_ret DeleteAccount( TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppIcon( uint32, uint32, uint8 *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret LaunchApp( uint32, uint32, char const*, TSteamError * ) = 0;
	virtual unknown_ret GetCacheFilePath( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppVersion( uint32, uint32, TSteamAppVersion *, TSteamError * ) = 0;
	virtual unknown_ret EnumerateAppDependency( uint32, uint32, TSteamAppDependencyInfo *, TSteamError * ) = 0;
	virtual unknown_ret StartLoadingCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret InsertAppDependency( uint32, uint32, TSteamAppDependencyInfo *, TSteamError * ) = 0;
	virtual unknown_ret RemoveAppDependency( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret FindApp( char const*, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppDependencies( uint32, uint32 *, uint32, TSteamError * ) = 0;
	virtual unknown_ret IsSubscribed( uint32, int32 *, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUserDefinedInfo( uint32, char const*, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret WaitForAppReadyToLaunch( uint32, TSteamError * ) = 0;
	virtual unknown_ret IsCacheLoadingEnabled( uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret StopLoadingCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret GetEncryptedUserIDTicket( void const*, uint32, void *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret FlushCache( uint32, TSteamError * ) = 0;
	virtual unknown_ret RepairOrDecryptCaches( uint32, int32, TSteamError * ) = 0;
	virtual unknown_ret LoadCacheFromDir( uint32, char const*, TSteamError * ) = 0;
	virtual unknown_ret GetCacheDefaultDirectory( char *, TSteamError * ) = 0;
	virtual unknown_ret SetCacheDefaultDirectory( char const*, TSteamError * ) = 0;
	virtual unknown_ret GetAppDir( uint32, char *, TSteamError * ) = 0;
	virtual unknown_ret MoveApp( uint32, char const*, TSteamError * ) = 0;
	virtual unknown_ret GetAppCacheSize( uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret SetAppCacheSize( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret SetAppVersion( uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret Uninstall( TSteamError * ) = 0;
	virtual unknown_ret SetNotificationCallback( void ( * )( ESteamNotificationCallbackEvent, uint32 ), TSteamError * ) = 0;
	virtual unknown_ret ChangeForgottenPassword( char const*, char const*, char const*, char const*, int32 *, TSteamError * ) = 0;
	virtual unknown_ret RequestForgottenPasswordEmail( char const*, char *, TSteamError * ) = 0;
	virtual unknown_ret RequestAccountsByEmailAddressEmail( char const*, TSteamError * ) = 0;
	virtual unknown_ret RequestAccountsByCdKeyEmail( char const*, TSteamError * ) = 0;
	virtual unknown_ret GetNumAccountsWithEmailAddress( char const*, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret UpdateAccountBillingInfo( TSteamPaymentCardInfo const*, TSteamError * ) = 0;
	virtual unknown_ret UpdateSubscriptionBillingInfo( uint32, TSteamSubscriptionBillingInfo const*, TSteamError * ) = 0;
	virtual unknown_ret GetSponsorUrl( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetContentServerInfo( uint32, uint32 *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUpdateStats( uint32, ESteamAppUpdateStatsQueryType, TSteamUpdateStats *, TSteamError * ) = 0;
	virtual unknown_ret GetTotalUpdateStats( TSteamUpdateStats *, TSteamError * ) = 0;
	virtual unknown_ret CreateCachePreloaders( TSteamError * ) = 0;
	virtual unknown_ret Win32SetMiniDumpComment( char const* ) = 0;
	virtual unknown_ret Win32SetMiniDumpSourceControlId( uint32 ) = 0;
	virtual unknown_ret Win32SetMiniDumpEnableFullMemory() = 0;
	virtual unknown_ret Win32WriteMiniDump( char const*, char const*, char const*, char const*, uint32 ) = 0;
	virtual unknown_ret GetCurrentAppId( uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppPurchaseCountry( uint32, char *, uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetLocalClientVersion( uint32 *, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret IsFileNeededByCache( uint32, char const*, uint32, TSteamError * ) = 0;
	virtual unknown_ret LoadFileToCache( uint32, char const*, void const*, uint32, uint32, TSteamError * ) = 0;
	virtual unknown_ret GetCacheDecryptionKey( uint32, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionExtendedInfo( uint32, char const*, char *, uint32, uint32 *, TSteamError * ) = 0;
	virtual unknown_ret GetSubscriptionPurchaseCountry( uint32, char *, uint32, int32 *, TSteamError * ) = 0;
	virtual unknown_ret GetAppUserDefinedRecord( uint32, void ( * )( char const*, char const*, void * ), void *, TSteamError * ) = 0;
};

