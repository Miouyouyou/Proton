#ifdef __cplusplus
extern "C" {
#endif
extern HSteamUser cppISteamUser_SteamUser004_GetHSteamUser(void *);
extern void cppISteamUser_SteamUser004_LogOn(void *, CSteamID);
extern void cppISteamUser_SteamUser004_LogOff(void *);
extern bool cppISteamUser_SteamUser004_BLoggedOn(void *);
extern ELogonState cppISteamUser_SteamUser004_GetLogonState(void *);
extern bool cppISteamUser_SteamUser004_BConnected(void *);
extern CSteamID cppISteamUser_SteamUser004_GetSteamID(void *);
extern bool cppISteamUser_SteamUser004_IsVACBanned(void *, int);
extern bool cppISteamUser_SteamUser004_RequireShowVACBannedMessage(void *, int);
extern void cppISteamUser_SteamUser004_AcknowledgeVACBanning(void *, int);
extern int cppISteamUser_SteamUser004_NClientGameIDAdd(void *, int);
extern void cppISteamUser_SteamUser004_RemoveClientGame(void *, int);
extern void cppISteamUser_SteamUser004_SetClientGameServer(void *, int, uint32, uint16);
extern void cppISteamUser_SteamUser004_SetSteam2Ticket(void *, uint8 *, int);
extern void cppISteamUser_SteamUser004_AddServerNetAddress(void *, uint32, uint16);
extern bool cppISteamUser_SteamUser004_SetEmail(void *, const char *);
extern int cppISteamUser_SteamUser004_GetSteamGameConnectToken(void *, void *, int);
extern bool cppISteamUser_SteamUser004_SetRegistryString(void *, EConfigSubTree, const char *, const char *);
extern bool cppISteamUser_SteamUser004_GetRegistryString(void *, EConfigSubTree, const char *, char *, int);
extern bool cppISteamUser_SteamUser004_SetRegistryInt(void *, EConfigSubTree, const char *, int);
extern bool cppISteamUser_SteamUser004_GetRegistryInt(void *, EConfigSubTree, const char *, int *);
extern int cppISteamUser_SteamUser004_InitiateGameConnection(void *, void *, int, CSteamID, int, uint32, uint16, bool);
extern void cppISteamUser_SteamUser004_TerminateGameConnection(void *, uint32, uint16);
extern void cppISteamUser_SteamUser004_SetSelfAsPrimaryChatDestination(void *);
extern bool cppISteamUser_SteamUser004_IsPrimaryChatDestination(void *);
extern void cppISteamUser_SteamUser004_RequestLegacyCDKey(void *, uint32);
#ifdef __cplusplus
}
#endif
