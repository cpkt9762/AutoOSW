class CSteamUserV012
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret InitiateGameConnection( void *, int32, CSteamID, uint32, uint16, bool ) = 0;
	virtual unknown_ret TerminateGameConnection( uint32, uint16 ) = 0;
	virtual unknown_ret TrackAppUsageEvent( CGameID, int32, char const* ) = 0;
	virtual unknown_ret GetUserDataFolder( char *, int32 ) = 0;
	virtual unknown_ret StartVoiceRecording() = 0;
	virtual unknown_ret StopVoiceRecording() = 0;
	virtual unknown_ret GetCompressedVoice( void *, uint32, uint32 * ) = 0;
	virtual unknown_ret DecompressVoice( void const*, uint32, void *, uint32, uint32 * ) = 0;
	virtual unknown_ret GetAuthSessionTicket( void *, int32, uint32 * ) = 0;
	virtual unknown_ret BeginAuthSession( void const*, int32, CSteamID ) = 0;
	virtual unknown_ret EndAuthSession( CSteamID ) = 0;
	virtual unknown_ret CancelAuthTicket( uint32 ) = 0;
	virtual unknown_ret UserHasLicenseForApp( CSteamID, uint32 ) = 0;
};

