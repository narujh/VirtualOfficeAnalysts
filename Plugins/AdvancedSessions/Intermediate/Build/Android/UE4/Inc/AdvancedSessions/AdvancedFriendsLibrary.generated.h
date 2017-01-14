// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBPUniqueNetId;
class UTexture2D;
class APlayerController;
struct FBPOnlineRecentPlayer;
struct FBPFriendInfo;
#ifdef ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h
#error "AdvancedFriendsLibrary.generated.h already included, missing '#pragma once' in AdvancedFriendsLibrary.h"
#endif
#define ADVANCEDSESSIONS_AdvancedFriendsLibrary_generated_h

#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL_REF(Z_Param_Out_IsFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::IsAFriend(Z_Param_PlayerController,Z_Param_UniqueNetId,Z_Param_Out_IsFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStoredRecentPlayersList) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_TARRAY_REF(FBPOnlineRecentPlayer,Z_Param_Out_PlayersList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetStoredRecentPlayersList(Z_Param_UniqueNetId,Z_Param_Out_PlayersList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStoredFriendsList) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FBPFriendInfo,Z_Param_Out_FriendsList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetStoredFriendsList(Z_Param_PlayerController,Z_Param_Out_FriendsList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_FriendUniqueNetId); \
		P_GET_STRUCT_REF(FBPFriendInfo,Z_Param_Out_Friend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetFriend(Z_Param_PlayerController,Z_Param_FriendUniqueNetId,Z_Param_Out_Friend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSessionInviteToFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::SendSessionInviteToFriend(Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSessionInviteToFriends) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FBPUniqueNetId,Z_Param_Out_Friends); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::SendSessionInviteToFriends(Z_Param_PlayerController,Z_Param_Out_Friends,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetFriendSteamLevel) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UAdvancedFriendsLibrary::GetFriendSteamLevel(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestSteamFriendInfo) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UAdvancedFriendsLibrary::RequestSteamFriendInfo(Z_Param_UniqueNetId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamFriendAvatar) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_PROPERTY(UByteProperty,Z_Param_AvatarSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UAdvancedFriendsLibrary::GetSteamFriendAvatar(Z_Param_UniqueNetId,SteamAvatarSize(Z_Param_AvatarSize)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_UBOOL_REF(Z_Param_Out_IsFriend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::IsAFriend(Z_Param_PlayerController,Z_Param_UniqueNetId,Z_Param_Out_IsFriend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStoredRecentPlayersList) \
	{ \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_UniqueNetId); \
		P_GET_TARRAY_REF(FBPOnlineRecentPlayer,Z_Param_Out_PlayersList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetStoredRecentPlayersList(Z_Param_UniqueNetId,Z_Param_Out_PlayersList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStoredFriendsList) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FBPFriendInfo,Z_Param_Out_FriendsList); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetStoredFriendsList(Z_Param_PlayerController,Z_Param_Out_FriendsList); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT(FBPUniqueNetId,Z_Param_FriendUniqueNetId); \
		P_GET_STRUCT_REF(FBPFriendInfo,Z_Param_Out_Friend); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::GetFriend(Z_Param_PlayerController,Z_Param_FriendUniqueNetId,Z_Param_Out_Friend); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSessionInviteToFriend) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_STRUCT_REF(FBPUniqueNetId,Z_Param_Out_FriendUniqueNetId); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::SendSessionInviteToFriend(Z_Param_PlayerController,Z_Param_Out_FriendUniqueNetId,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSessionInviteToFriends) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_TARRAY_REF(FBPUniqueNetId,Z_Param_Out_Friends); \
		P_GET_PROPERTY_REF(UByteProperty,Z_Param_Out_Result); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAdvancedFriendsLibrary::SendSessionInviteToFriends(Z_Param_PlayerController,Z_Param_Out_Friends,(EBlueprintResultSwitch&)(Z_Param_Out_Result)); \
		P_NATIVE_END; \
	}


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesUAdvancedFriendsLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsLibrary(); \
	public: \
	DECLARE_CLASS(UAdvancedFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_INCLASS \
	private: \
	static void StaticRegisterNativesUAdvancedFriendsLibrary(); \
	friend ADVANCEDSESSIONS_API class UClass* Z_Construct_UClass_UAdvancedFriendsLibrary(); \
	public: \
	DECLARE_CLASS(UAdvancedFriendsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AdvancedSessions"), NO_API) \
	DECLARE_SERIALIZER(UAdvancedFriendsLibrary) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsLibrary(UAdvancedFriendsLibrary&&); \
	NO_API UAdvancedFriendsLibrary(const UAdvancedFriendsLibrary&); \
public:


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdvancedFriendsLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdvancedFriendsLibrary(UAdvancedFriendsLibrary&&); \
	NO_API UAdvancedFriendsLibrary(const UAdvancedFriendsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdvancedFriendsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdvancedFriendsLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdvancedFriendsLibrary)


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_PRIVATE_PROPERTY_OFFSET
#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_32_PROLOG
#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_PRIVATE_PROPERTY_OFFSET \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_RPC_WRAPPERS \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_INCLASS \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_PRIVATE_PROPERTY_OFFSET \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_INCLASS_NO_PURE_DECLS \
	VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VirtualOfficeAnalysts_Plugins_AdvancedSessions_Source_AdvancedSessions_Classes_AdvancedFriendsLibrary_h


#define FOREACH_ENUM_STEAMAVATARSIZE(op) \
	op(SteamAvatarSize::SteamAvatar_Small) \
	op(SteamAvatarSize::SteamAvatar_Medium) \
	op(SteamAvatarSize::SteamAvatar_Large) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
