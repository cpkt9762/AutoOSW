class CAdapterSteamMatchmaking007
{
	virtual unknown_ret GetFavoriteGameCount() = 0;
	virtual unknown_ret GetFavoriteGame( int32, uint32 *, uint32 *, uint16 *, uint16 *, uint32 *, uint32 * ) = 0;
	virtual unknown_ret AddFavoriteGame( uint32, uint32, uint16, uint16, uint32, uint32 ) = 0;
	virtual unknown_ret RemoveFavoriteGame( uint32, uint32, uint16, uint16, uint32 ) = 0;
	virtual unknown_ret RequestLobbyList() = 0;
	virtual unknown_ret AddRequestLobbyListStringFilter( char const*, char const*, ELobbyComparison ) = 0;
	virtual unknown_ret AddRequestLobbyListNumericalFilter( char const*, int32, ELobbyComparison ) = 0;
	virtual unknown_ret AddRequestLobbyListNearValueFilter( char const*, int32 ) = 0;
	virtual unknown_ret AddRequestLobbyListFilterSlotsAvailable( int32 ) = 0;
	virtual unknown_ret GetLobbyByIndex( int32 ) = 0;
	virtual unknown_ret CreateLobby( ELobbyType, int32 ) = 0;
	virtual unknown_ret JoinLobby( CSteamID ) = 0;
	virtual unknown_ret LeaveLobby( CSteamID ) = 0;
	virtual unknown_ret InviteUserToLobby( CSteamID, CSteamID ) = 0;
	virtual unknown_ret GetNumLobbyMembers( CSteamID ) = 0;
	virtual unknown_ret GetLobbyMemberByIndex( CSteamID, int32 ) = 0;
	virtual unknown_ret GetLobbyData( CSteamID, char const* ) = 0;
	virtual unknown_ret SetLobbyData( CSteamID, char const*, char const* ) = 0;
	virtual unknown_ret GetLobbyDataCount( CSteamID ) = 0;
	virtual unknown_ret GetLobbyDataByIndex( CSteamID, int32, char *, int32, char *, int32 ) = 0;
	virtual unknown_ret DeleteLobbyData( CSteamID, char const* ) = 0;
	virtual unknown_ret GetLobbyMemberData( CSteamID, CSteamID, char const* ) = 0;
	virtual unknown_ret SetLobbyMemberData( CSteamID, char const*, char const* ) = 0;
	virtual unknown_ret SendLobbyChatMsg( CSteamID, void const*, int32 ) = 0;
	virtual unknown_ret GetLobbyChatEntry( CSteamID, int32, CSteamID*, void *, int32, EChatEntryType * ) = 0;
	virtual unknown_ret RequestLobbyData( CSteamID ) = 0;
	virtual unknown_ret SetLobbyGameServer( CSteamID, uint32, uint16, CSteamID ) = 0;
	virtual unknown_ret GetLobbyGameServer( CSteamID, uint32 *, uint16 *, CSteamID* ) = 0;
	virtual unknown_ret SetLobbyMemberLimit( CSteamID, int32 ) = 0;
	virtual unknown_ret GetLobbyMemberLimit( CSteamID ) = 0;
	virtual unknown_ret SetLobbyType( CSteamID, ELobbyType ) = 0;
	virtual unknown_ret SetLobbyJoinable( CSteamID, bool ) = 0;
	virtual unknown_ret GetLobbyOwner( CSteamID ) = 0;
	virtual unknown_ret SetLobbyOwner( CSteamID, CSteamID ) = 0;
};

