class CAdapterSteamRemoteStorage013
{
	virtual unknown_ret FileWrite( char const*, void const*, int32 ) = 0;
	virtual unknown_ret FileRead( char const*, void *, int32 ) = 0;
	virtual unknown_ret FileWriteAsync( char const*, void const*, uint32 ) = 0;
	virtual unknown_ret FileReadAsync( char const*, uint32, uint32 ) = 0;
	virtual unknown_ret FileReadAsyncComplete( uint64, void *, uint32 ) = 0;
	virtual unknown_ret FileForget( char const* ) = 0;
	virtual unknown_ret FileDelete( char const* ) = 0;
	virtual unknown_ret FileShare( char const* ) = 0;
	virtual unknown_ret SetSyncPlatforms( char const*, ERemoteStoragePlatform ) = 0;
	virtual unknown_ret FileWriteStreamOpen( char const* ) = 0;
	virtual unknown_ret FileWriteStreamWriteChunk( uint64, void const*, int32 ) = 0;
	virtual unknown_ret FileWriteStreamClose( uint64 ) = 0;
	virtual unknown_ret FileWriteStreamCancel( uint64 ) = 0;
	virtual unknown_ret FileExists( char const* ) = 0;
	virtual unknown_ret FilePersisted( char const* ) = 0;
	virtual unknown_ret GetFileSize( char const* ) = 0;
	virtual unknown_ret GetFileTimestamp( char const* ) = 0;
	virtual unknown_ret GetSyncPlatforms( char const* ) = 0;
	virtual unknown_ret GetFileCount() = 0;
	virtual unknown_ret GetFileNameAndSize( int32, int32 * ) = 0;
	virtual unknown_ret GetQuota( int32 *, int32 * ) = 0;
	virtual unknown_ret IsCloudEnabledForAccount() = 0;
	virtual unknown_ret IsCloudEnabledForApp() = 0;
	virtual unknown_ret SetCloudEnabledForApp( bool ) = 0;
	virtual unknown_ret UGCDownload( uint64, uint32 ) = 0;
	virtual unknown_ret GetUGCDownloadProgress( uint64, int32 *, int32 * ) = 0;
	virtual unknown_ret GetUGCDetails( uint64, uint32 *, char **, int32 *, CSteamID * ) = 0;
	virtual unknown_ret UGCRead( uint64, void *, int32, uint32, EUGCReadAction ) = 0;
	virtual unknown_ret GetCachedUGCCount() = 0;
	virtual unknown_ret GetCachedUGCHandle( int32 ) = 0;
	virtual unknown_ret PublishWorkshopFile( char const*, char const*, uint32, char const*, char const*, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t *, EWorkshopFileType ) = 0;
	virtual unknown_ret CreatePublishedFileUpdateRequest( uint64 ) = 0;
	virtual unknown_ret UpdatePublishedFileFile( uint64, char const* ) = 0;
	virtual unknown_ret UpdatePublishedFilePreviewFile( uint64, char const* ) = 0;
	virtual unknown_ret UpdatePublishedFileTitle( uint64, char const* ) = 0;
	virtual unknown_ret UpdatePublishedFileDescription( uint64, char const* ) = 0;
	virtual unknown_ret UpdatePublishedFileVisibility( uint64, ERemoteStoragePublishedFileVisibility ) = 0;
	virtual unknown_ret UpdatePublishedFileTags( uint64, SteamParamStringArray_t * ) = 0;
	virtual unknown_ret CommitPublishedFileUpdate( uint64 ) = 0;
	virtual unknown_ret GetPublishedFileDetails( uint64, uint32 ) = 0;
	virtual unknown_ret DeletePublishedFile( uint64 ) = 0;
	virtual unknown_ret EnumerateUserPublishedFiles( uint32 ) = 0;
	virtual unknown_ret SubscribePublishedFile( uint64 ) = 0;
	virtual unknown_ret EnumerateUserSubscribedFiles( uint32 ) = 0;
	virtual unknown_ret UnsubscribePublishedFile( uint64 ) = 0;
	virtual unknown_ret UpdatePublishedFileSetChangeDescription( uint64, char const* ) = 0;
	virtual unknown_ret GetPublishedItemVoteDetails( uint64 ) = 0;
	virtual unknown_ret UpdateUserPublishedItemVote( uint64, bool ) = 0;
	virtual unknown_ret GetUserPublishedItemVoteDetails( uint64 ) = 0;
	virtual unknown_ret EnumerateUserSharedWorkshopFiles( CSteamID, uint32, SteamParamStringArray_t *, SteamParamStringArray_t * ) = 0;
	virtual unknown_ret PublishVideo( EWorkshopVideoProvider, char const*, char const*, char const*, uint32, char const*, char const*, ERemoteStoragePublishedFileVisibility, SteamParamStringArray_t * ) = 0;
	virtual unknown_ret SetUserPublishedFileAction( uint64, EWorkshopFileAction ) = 0;
	virtual unknown_ret EnumeratePublishedFilesByUserAction( EWorkshopFileAction, uint32 ) = 0;
	virtual unknown_ret EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType, uint32, uint32, uint32, SteamParamStringArray_t *, SteamParamStringArray_t * ) = 0;
	virtual unknown_ret UGCDownloadToLocation( uint64, char const*, uint32 ) = 0;
};

