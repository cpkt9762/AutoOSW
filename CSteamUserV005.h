class CSteamUserV005
{
	virtual unknown_ret GetHSteamUser() = 0;
	virtual unknown_ret LogOn( CSteamID ) = 0;
	virtual unknown_ret LogOff() = 0;
	virtual unknown_ret BLoggedOn() = 0;
	virtual unknown_ret GetLogonState() = 0;
	virtual unknown_ret BConnected() = 0;
	virtual unknown_ret GetSteamID() = 0;
	virtual unknown_ret IsVACBanned( int32 ) = 0;
	virtual unknown_ret RequireShowVACBannedMessage( int32 ) = 0;
	virtual unknown_ret AcknowledgeVACBanning( int32 ) = 0;
	virtual unknown_ret SetSteam2Ticket( uint8 *, int32 ) = 0;
	virtual unknown_ret AddServerNetAddress( uint32, uint16 ) = 0;
	virtual unknown_ret SetEmail( char const* ) = 0;
	virtual unknown_ret SetRegistryString( EConfigSubTree, char const*, char const* ) = 0;
	virtual unknown_ret GetRegistryString( EConfigSubTree, char const*, char *, int32 ) = 0;
	virtual unknown_ret SetRegistryInt( EConfigSubTree, char const*, int32 ) = 0;
	virtual unknown_ret GetRegistryInt( EConfigSubTree, char const*, int32 * ) = 0;
	virtual unknown_ret InitiateGameConnection( void *, int32, CSteamID, CGameID, uint32, uint16, bool ) = 0;
	virtual unknown_ret TerminateGameConnection( uint32, uint16 ) = 0;
	virtual unknown_ret SetSelfAsPrimaryChatDestination() = 0;
	virtual unknown_ret IsPrimaryChatDestination() = 0;
	virtual unknown_ret RequestLegacyCDKey( uint32 ) = 0;
	virtual unknown_ret SendGuestPassByEmail( char const*, uint64, bool ) = 0;
	virtual unknown_ret SendGuestPassByAccountID( uint32, uint64, bool ) = 0;
	virtual unknown_ret AckGuestPass( char const* ) = 0;
	virtual unknown_ret RedeemGuestPass( char const* ) = 0;
	virtual unknown_ret GetGuestPassToGiveCount() = 0;
	virtual unknown_ret GetGuestPassToRedeemCount() = 0;
	virtual unknown_ret GetGuestPassLastUpdateTime() = 0;
	virtual unknown_ret GetGuestPassToGiveInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 *, char *, int32 ) = 0;
	virtual unknown_ret GetGuestPassToRedeemInfo( uint32, uint64 *, uint32 *, uint32 *, uint32 *, uint32 *, uint32 * ) = 0;
	virtual unknown_ret GetGuestPassToRedeemSenderAddress( uint32, char *, int32 ) = 0;
	virtual unknown_ret GetGuestPassToRedeemSenderName( uint32, char *, int32 ) = 0;
	virtual unknown_ret AcknowledgeMessageByGID( char const* ) = 0;
	virtual unknown_ret SetLanguage( char const* ) = 0;
	virtual unknown_ret TrackAppUsageEvent( CGameID, int32, char const* ) = 0;
	virtual unknown_ret SetAccountName( char const* ) = 0;
	virtual unknown_ret SetPassword( char const* ) = 0;
	virtual unknown_ret SetAccountCreationTime( uint32 ) = 0;
};

