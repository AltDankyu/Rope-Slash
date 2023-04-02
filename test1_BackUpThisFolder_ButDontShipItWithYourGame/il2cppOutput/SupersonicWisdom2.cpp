#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<SupersonicWisdomSDK.SwUserState>
struct Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9;
// System.Collections.Generic.Dictionary`2<UnityEngine.NetworkReachability,System.String>
struct Dictionary_2_tCDB399DDFE6EF998CF21BBB8D87713F678E82B4C;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// SupersonicWisdomSDK.ISwSessionListener[]
struct ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// SupersonicWisdomSDK.ISwAdvertisingIdsGetter
struct ISwAdvertisingIdsGetter_tFE46DA36CEB397F612BED8C9D004C4A547CFE70C;
// SupersonicWisdomSDK.ISwKeyValueStore
struct ISwKeyValueStore_tD6011A512102D6AFBA726C4213351C00B7E1E084;
// SupersonicWisdomSDK.ISwLogger
struct ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5;
// SupersonicWisdomSDK.ISwMainThreadRunner
struct ISwMainThreadRunner_t7026FFFD4C0FE2F15B2F1CB90522EC73241184D8;
// SupersonicWisdomSDK.ISwRemoteConfigListener
struct ISwRemoteConfigListener_tB32559797891CC9D8D086D914895083F75B7555F;
// SupersonicWisdomSDK.ISwSessionListener
struct ISwSessionListener_tD0F794030DF19501238F046C77EEFEE164E79D15;
// SupersonicWisdomSDK.ISwSettings
struct ISwSettings_t537483A6BAEC7C543DDFF9CAE8E9DF1930D54612;
// SupersonicWisdomSDK.ISwWebRequestClient
struct ISwWebRequestClient_t36A681F4139CBBE0F8856BF91EE5BDE698269F44;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// SupersonicWisdomSDK.OnLoaded
struct OnLoaded_t7A72ECED8E664E0AD69F929665FAF42127DA617D;
// SupersonicWisdomSDK.OnSessionEnded
struct OnSessionEnded_t0478C85CA0FA1F3478DB6D12C8715F427D580F2F;
// SupersonicWisdomSDK.OnSessionStarted
struct OnSessionStarted_tF7BE050F17A616C162AEC53493308BE73BBFDF0E;
// System.String
struct String_t;
// SupersonicWisdomSDK.SwAbConfig
struct SwAbConfig_t1484EA3FB7AE1E748E4D07F2064C33EB9CCDD3DB;
// SupersonicWisdomSDK.SwCoreRemoteConfigRepository
struct SwCoreRemoteConfigRepository_t8987466BDA90C3299FB47E3FBA9D0B6E0D686D20;
// SupersonicWisdomSDK.SwCoreTracker
struct SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03;
// SupersonicWisdomSDK.SwCoroutineService
struct SwCoroutineService_tBE55B5CF39BC6BFFEB3EADD2910A780A79C7B3BE;
// SupersonicWisdomSDK.SwLocalConfig
struct SwLocalConfig_tD45E2F4872C3DCB00CBAC205980BAE59780B7A2F;
// SupersonicWisdomSDK.SwNativeAdapter
struct SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF;
// SupersonicWisdomSDK.SwNativeApi
struct SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435;
// SupersonicWisdomSDK.SwNativeBridge
struct SwNativeBridge_t1D8C0FFAE9557880E807742A3700BE5F3306B344;
// SupersonicWisdomSDK.SwRemoteConfig
struct SwRemoteConfig_t2A10A6B2DB63563AB88AACC6AAF3AC3B1D2B90F1;
// SupersonicWisdomSDK.SwRemoteConfigRequestPayload
struct SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370;
// SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig
struct SwStage1AppsFlyerLocalConfig_tF9FD7EB22C0FCD274277DF9614E3035492CE6EBE;
// SupersonicWisdomSDK.SwStage1NativeAdapter
struct SwStage1NativeAdapter_t9D798317855FD12C6AC58E7A437E7C8CB4B875BB;
// SupersonicWisdomSDK.SwStage1RemoteConfigRepository
struct SwStage1RemoteConfigRepository_t99185AF0F29C7E4078A66ABE2DDAB5F21C02DF2E;
// SupersonicWisdomSDK.SwStage1SessionListener
struct SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E;
// SupersonicWisdomSDK.SwStage1UserData
struct SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336;
// SupersonicWisdomSDK.SwStoreKeys
struct SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056;
// SupersonicWisdomSDK.SwTimerManager
struct SwTimerManager_t6EFBE5D0A9B75C94DF84D54B2966A10F2ADD0780;
// SupersonicWisdomSDK.SwUserData
struct SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D;
// SupersonicWisdomSDK.SwUserState
struct SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF;
// SupersonicWisdomSDK.SwUserData/OnUserStateChange
struct OnUserStateChange_t52F23B9619444A553CC7A5F9EB3D6F435122A87B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISwKeyValueStore_tD6011A512102D6AFBA726C4213351C00B7E1E084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0289B6E3BF758098593A167B518BE3CC87767F98;
IL2CPP_EXTERN_C String_t* _stringLiteral1C907F1E3A0F05D2EC804B54011775895EED413F;
IL2CPP_EXTERN_C String_t* _stringLiteral3F2B260E76F9E4C23E6D25F8ED7CA6C4C4D14A7A;
IL2CPP_EXTERN_C String_t* _stringLiteral78A145F2DAC03F270FE6CE23A92FE0CB9DACB538;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE4147FB278C7DD15338AA876AB7E2545CE211955;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CUpdateUserStateOnStartSessionU3Eb__0_mFD810E061B8B286B8FD16639DB81863E6C987DED_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// SupersonicWisdomSDK.SwCoreRemoteConfigRepository
struct SwCoreRemoteConfigRepository_t8987466BDA90C3299FB47E3FBA9D0B6E0D686D20  : public RuntimeObject
{
	// SupersonicWisdomSDK.OnLoaded SupersonicWisdomSDK.SwCoreRemoteConfigRepository::OnLoadedEvent
	OnLoaded_t7A72ECED8E664E0AD69F929665FAF42127DA617D* ___OnLoadedEvent_3;
	// SupersonicWisdomSDK.ISwRemoteConfigListener SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_listener
	RuntimeObject* ____listener_4;
	// SupersonicWisdomSDK.ISwSettings SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_settings
	RuntimeObject* ____settings_5;
	// SupersonicWisdomSDK.ISwWebRequestClient SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_webRequestClient
	RuntimeObject* ____webRequestClient_6;
	// SupersonicWisdomSDK.SwCoreTracker SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_tracker
	SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03* ____tracker_7;
	// SupersonicWisdomSDK.SwStoreKeys SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_storeKeys
	SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ____storeKeys_8;
	// SupersonicWisdomSDK.SwUserData SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_userData
	SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ____userData_9;
	// System.Boolean SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_didInit
	bool ____didInit_10;
	// System.Boolean SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_didResolve
	bool ____didResolve_11;
	// SupersonicWisdomSDK.SwAbConfig SupersonicWisdomSDK.SwCoreRemoteConfigRepository::_ab
	SwAbConfig_t1484EA3FB7AE1E748E4D07F2064C33EB9CCDD3DB* ____ab_12;
	// System.Boolean SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<Unavailable>k__BackingField
	bool ___U3CUnavailableU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<AccessibleConfig>k__BackingField
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___U3CAccessibleConfigU3Ek__BackingField_14;
	// SupersonicWisdomSDK.SwRemoteConfig SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<InitialRemoteConfig>k__BackingField
	SwRemoteConfig_t2A10A6B2DB63563AB88AACC6AAF3AC3B1D2B90F1* ___U3CInitialRemoteConfigU3Ek__BackingField_15;
	// SupersonicWisdomSDK.SwRemoteConfig SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<LatestRemoteConfig>k__BackingField
	SwRemoteConfig_t2A10A6B2DB63563AB88AACC6AAF3AC3B1D2B90F1* ___U3CLatestRemoteConfigU3Ek__BackingField_16;
	// SupersonicWisdomSDK.SwRemoteConfig SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<RemoteConfig>k__BackingField
	SwRemoteConfig_t2A10A6B2DB63563AB88AACC6AAF3AC3B1D2B90F1* ___U3CRemoteConfigU3Ek__BackingField_17;
	// SupersonicWisdomSDK.SwRemoteConfigError SupersonicWisdomSDK.SwCoreRemoteConfigRepository::<RemoteConfigError>k__BackingField
	int32_t ___U3CRemoteConfigErrorU3Ek__BackingField_18;
};

// SupersonicWisdomSDK.SwCoreTracker
struct SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03  : public RuntimeObject
{
	// SupersonicWisdomSDK.ISwWebRequestClient SupersonicWisdomSDK.SwCoreTracker::_webRequestClient
	RuntimeObject* ____webRequestClient_3;
	// SupersonicWisdomSDK.SwNativeAdapter SupersonicWisdomSDK.SwCoreTracker::_wisdomNativeAdapter
	SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF* ____wisdomNativeAdapter_4;
	// SupersonicWisdomSDK.SwTimerManager SupersonicWisdomSDK.SwCoreTracker::_timerManager
	SwTimerManager_t6EFBE5D0A9B75C94DF84D54B2966A10F2ADD0780* ____timerManager_5;
	// SupersonicWisdomSDK.SwUserData SupersonicWisdomSDK.SwCoreTracker::_userData
	SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ____userData_6;
};

// SupersonicWisdomSDK.SwInfra
struct SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E  : public RuntimeObject
{
};

// SupersonicWisdomSDK.SwLocalConfig
struct SwLocalConfig_tD45E2F4872C3DCB00CBAC205980BAE59780B7A2F  : public RuntimeObject
{
};

// SupersonicWisdomSDK.SwNativeAdapter
struct SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF  : public RuntimeObject
{
	// SupersonicWisdomSDK.SwUserData SupersonicWisdomSDK.SwNativeAdapter::UserData
	SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___UserData_1;
	// System.Boolean SupersonicWisdomSDK.SwNativeAdapter::_didFirstSessionStart
	bool ____didFirstSessionStart_2;
	// System.String SupersonicWisdomSDK.SwNativeAdapter::_abId
	String_t* ____abId_3;
	// System.String SupersonicWisdomSDK.SwNativeAdapter::_abName
	String_t* ____abName_4;
	// System.String SupersonicWisdomSDK.SwNativeAdapter::_abVariant
	String_t* ____abVariant_5;
	// SupersonicWisdomSDK.ISwSessionListener[] SupersonicWisdomSDK.SwNativeAdapter::_sessionListeners
	ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC* ____sessionListeners_6;
	// SupersonicWisdomSDK.ISwSettings SupersonicWisdomSDK.SwNativeAdapter::_settings
	RuntimeObject* ____settings_7;
	// SupersonicWisdomSDK.SwNativeApi SupersonicWisdomSDK.SwNativeAdapter::_wisdomNativeApi
	SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435* ____wisdomNativeApi_8;
};

// SupersonicWisdomSDK.SwNativeApi
struct SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435  : public RuntimeObject
{
	// SupersonicWisdomSDK.SwNativeBridge SupersonicWisdomSDK.SwNativeApi::NativeBridge
	SwNativeBridge_t1D8C0FFAE9557880E807742A3700BE5F3306B344* ___NativeBridge_2;
};

// SupersonicWisdomSDK.SwRemoteConfigRequestPayload
struct SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370  : public RuntimeObject
{
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::bundle
	String_t* ___bundle_0;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::gameId
	String_t* ___gameId_1;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::sysLang
	String_t* ___sysLang_2;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::os
	String_t* ___os_3;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::osver
	String_t* ___osver_4;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::version
	String_t* ___version_5;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::device
	String_t* ___device_6;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::session
	String_t* ___session_7;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::uuid
	String_t* ___uuid_8;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::abid
	String_t* ___abid_9;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::isNew
	String_t* ___isNew_10;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::apiVersion
	String_t* ___apiVersion_11;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::sdkVersion
	String_t* ___sdkVersion_12;
	// System.Int64 SupersonicWisdomSDK.SwRemoteConfigRequestPayload::sdkVersionId
	int64_t ___sdkVersionId_13;
	// System.Int64 SupersonicWisdomSDK.SwRemoteConfigRequestPayload::stage
	int64_t ___stage_14;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::testId
	String_t* ___testId_15;
	// System.String SupersonicWisdomSDK.SwRemoteConfigRequestPayload::appSetId
	String_t* ___appSetId_16;
};

// SupersonicWisdomSDK.SwStage1SessionListener
struct SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E  : public RuntimeObject
{
	// SupersonicWisdomSDK.SwUserData SupersonicWisdomSDK.SwStage1SessionListener::_userData
	SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ____userData_0;
};

// SupersonicWisdomSDK.SwStoreKeys
struct SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056  : public RuntimeObject
{
};

// SupersonicWisdomSDK.SwUserState
struct SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0  : public RuntimeObject
{
	// System.Int64 SupersonicWisdomSDK.SwUserState::age
	int64_t ___age_0;
	// System.Int64 SupersonicWisdomSDK.SwUserState::completedLevels
	int64_t ___completedLevels_1;
	// System.Int64 SupersonicWisdomSDK.SwUserState::consecutiveCompletedLevels
	int64_t ___consecutiveCompletedLevels_2;
	// System.Int64 SupersonicWisdomSDK.SwUserState::consecutiveFailedLevels
	int64_t ___consecutiveFailedLevels_3;
	// System.Int64 SupersonicWisdomSDK.SwUserState::levelAttempts
	int64_t ___levelAttempts_4;
	// System.Int64 SupersonicWisdomSDK.SwUserState::levelRevives
	int64_t ___levelRevives_5;
	// System.Int64 SupersonicWisdomSDK.SwUserState::playedLevels
	int64_t ___playedLevels_6;
	// System.Int64 SupersonicWisdomSDK.SwUserState::todaySessionsCount
	int64_t ___todaySessionsCount_7;
	// System.Int64 SupersonicWisdomSDK.SwUserState::totalSessionsCount
	int64_t ___totalSessionsCount_8;
	// System.Boolean SupersonicWisdomSDK.SwUserState::isDuringLevel
	bool ___isDuringLevel_9;
	// System.String SupersonicWisdomSDK.SwUserState::SessionId
	String_t* ___SessionId_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF  : public RuntimeObject
{
	// SupersonicWisdomSDK.SwStage1SessionListener SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0::<>4__this
	SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* ___U3CU3E4__this_0;
	// System.String SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0::sessionId
	String_t* ___sessionId_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// SupersonicWisdomSDK.SwEventMetadataDto
struct SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 
{
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::bundle
	String_t* ___bundle_0;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::apiKey
	String_t* ___apiKey_1;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::os
	String_t* ___os_2;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::osVer
	String_t* ___osVer_3;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::version
	String_t* ___version_4;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::device
	String_t* ___device_5;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::uuid
	String_t* ___uuid_6;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::swInstallationId
	String_t* ___swInstallationId_7;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::appsFlyerId
	String_t* ___appsFlyerId_8;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::abId
	String_t* ___abId_9;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::abName
	String_t* ___abName_10;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::abVariant
	String_t* ___abVariant_11;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::installDate
	String_t* ___installDate_12;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::gameId
	String_t* ___gameId_13;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::sdkVersion
	String_t* ___sdkVersion_14;
	// System.Int64 SupersonicWisdomSDK.SwEventMetadataDto::sdkVersionId
	int64_t ___sdkVersionId_15;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::sdkStage
	String_t* ___sdkStage_16;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::feature
	String_t* ___feature_17;
	// System.Int64 SupersonicWisdomSDK.SwEventMetadataDto::featureVersion
	int64_t ___featureVersion_18;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::unityVersion
	String_t* ___unityVersion_19;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::attStatus
	String_t* ___attStatus_20;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::noAds
	String_t* ___noAds_21;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::products
	String_t* ___products_22;
	// System.String SupersonicWisdomSDK.SwEventMetadataDto::appSetId
	String_t* ___appSetId_23;
};
// Native definition for P/Invoke marshalling of SupersonicWisdomSDK.SwEventMetadataDto
struct SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768_marshaled_pinvoke
{
	char* ___bundle_0;
	char* ___apiKey_1;
	char* ___os_2;
	char* ___osVer_3;
	char* ___version_4;
	char* ___device_5;
	char* ___uuid_6;
	char* ___swInstallationId_7;
	char* ___appsFlyerId_8;
	char* ___abId_9;
	char* ___abName_10;
	char* ___abVariant_11;
	char* ___installDate_12;
	char* ___gameId_13;
	char* ___sdkVersion_14;
	int64_t ___sdkVersionId_15;
	char* ___sdkStage_16;
	char* ___feature_17;
	int64_t ___featureVersion_18;
	char* ___unityVersion_19;
	char* ___attStatus_20;
	char* ___noAds_21;
	char* ___products_22;
	char* ___appSetId_23;
};
// Native definition for COM marshalling of SupersonicWisdomSDK.SwEventMetadataDto
struct SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768_marshaled_com
{
	Il2CppChar* ___bundle_0;
	Il2CppChar* ___apiKey_1;
	Il2CppChar* ___os_2;
	Il2CppChar* ___osVer_3;
	Il2CppChar* ___version_4;
	Il2CppChar* ___device_5;
	Il2CppChar* ___uuid_6;
	Il2CppChar* ___swInstallationId_7;
	Il2CppChar* ___appsFlyerId_8;
	Il2CppChar* ___abId_9;
	Il2CppChar* ___abName_10;
	Il2CppChar* ___abVariant_11;
	Il2CppChar* ___installDate_12;
	Il2CppChar* ___gameId_13;
	Il2CppChar* ___sdkVersion_14;
	int64_t ___sdkVersionId_15;
	Il2CppChar* ___sdkStage_16;
	Il2CppChar* ___feature_17;
	int64_t ___featureVersion_18;
	Il2CppChar* ___unityVersion_19;
	Il2CppChar* ___attStatus_20;
	Il2CppChar* ___noAds_21;
	Il2CppChar* ___products_22;
	Il2CppChar* ___appSetId_23;
};

// SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig
struct SwStage1AppsFlyerLocalConfig_tF9FD7EB22C0FCD274277DF9614E3035492CE6EBE  : public SwLocalConfig_tD45E2F4872C3DCB00CBAC205980BAE59780B7A2F
{
};

// SupersonicWisdomSDK.SwStage1NativeAdapter
struct SwStage1NativeAdapter_t9D798317855FD12C6AC58E7A437E7C8CB4B875BB  : public SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF
{
};

// SupersonicWisdomSDK.SwStage1RemoteConfigRepository
struct SwStage1RemoteConfigRepository_t99185AF0F29C7E4078A66ABE2DDAB5F21C02DF2E  : public SwCoreRemoteConfigRepository_t8987466BDA90C3299FB47E3FBA9D0B6E0D686D20
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// SupersonicWisdomSDK.SwUserData
struct SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D  : public RuntimeObject
{
	// SupersonicWisdomSDK.SwUserData/OnUserStateChange SupersonicWisdomSDK.SwUserData::OnUserStateChangeEvent
	OnUserStateChange_t52F23B9619444A553CC7A5F9EB3D6F435122A87B* ___OnUserStateChangeEvent_1;
	// System.String SupersonicWisdomSDK.SwUserData::BundleIdentifier
	String_t* ___BundleIdentifier_2;
	// System.String SupersonicWisdomSDK.SwUserData::Language
	String_t* ___Language_3;
	// System.String SupersonicWisdomSDK.SwUserData::Platform
	String_t* ___Platform_4;
	// System.String SupersonicWisdomSDK.SwUserData::Country
	String_t* ___Country_5;
	// SupersonicWisdomSDK.ISwSettings SupersonicWisdomSDK.SwUserData::Settings
	RuntimeObject* ___Settings_6;
	// SupersonicWisdomSDK.SwStoreKeys SupersonicWisdomSDK.SwUserData::StoreKeys
	SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ___StoreKeys_7;
	// SupersonicWisdomSDK.ISwAdvertisingIdsGetter SupersonicWisdomSDK.SwUserData::_idsGetter
	RuntimeObject* ____idsGetter_8;
	// System.Int64 SupersonicWisdomSDK.SwUserData::_installDateInSeconds
	int64_t ____installDateInSeconds_9;
	// System.String SupersonicWisdomSDK.SwUserData::_customUuid
	String_t* ____customUuid_10;
	// System.String SupersonicWisdomSDK.SwUserData::_installDate
	String_t* ____installDate_11;
	// SupersonicWisdomSDK.SwUserState SupersonicWisdomSDK.SwUserData::_userState
	SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* ____userState_12;
	// System.String SupersonicWisdomSDK.SwUserData::<OrganizationAdvertisingId>k__BackingField
	String_t* ___U3COrganizationAdvertisingIdU3Ek__BackingField_13;
	// System.String SupersonicWisdomSDK.SwUserData::<Uuid>k__BackingField
	String_t* ___U3CUuidU3Ek__BackingField_14;
	// System.Boolean SupersonicWisdomSDK.SwUserData::<IsNew>k__BackingField
	bool ___U3CIsNewU3Ek__BackingField_15;
	// System.DateTime SupersonicWisdomSDK.SwUserData::<InstallDateTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CInstallDateTimeU3Ek__BackingField_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// SupersonicWisdomSDK.SwStage1UserData
struct SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336  : public SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D
{
	// System.String SupersonicWisdomSDK.SwStage1UserData::<AppsFlyerId>k__BackingField
	String_t* ___U3CAppsFlyerIdU3Ek__BackingField_17;
};

// System.Action`1<SupersonicWisdomSDK.SwUserState>
struct Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// SupersonicWisdomSDK.SwCoreRemoteConfigRepository

// SupersonicWisdomSDK.SwCoreRemoteConfigRepository

// SupersonicWisdomSDK.SwCoreTracker
struct SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03_StaticFields
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.NetworkReachability,System.String> SupersonicWisdomSDK.SwCoreTracker::ConnectionDictionary
	Dictionary_2_tCDB399DDFE6EF998CF21BBB8D87713F678E82B4C* ___ConnectionDictionary_2;
};

// SupersonicWisdomSDK.SwCoreTracker

// SupersonicWisdomSDK.SwInfra
struct SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_StaticFields
{
	// System.Threading.Thread SupersonicWisdomSDK.SwInfra::MainThread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___MainThread_0;
	// SupersonicWisdomSDK.ISwKeyValueStore SupersonicWisdomSDK.SwInfra::<KeyValueStore>k__BackingField
	RuntimeObject* ___U3CKeyValueStoreU3Ek__BackingField_1;
	// SupersonicWisdomSDK.ISwLogger SupersonicWisdomSDK.SwInfra::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_2;
	// SupersonicWisdomSDK.ISwMainThreadRunner SupersonicWisdomSDK.SwInfra::<MainThreadRunner>k__BackingField
	RuntimeObject* ___U3CMainThreadRunnerU3Ek__BackingField_3;
	// SupersonicWisdomSDK.SwCoroutineService SupersonicWisdomSDK.SwInfra::<CoroutineService>k__BackingField
	SwCoroutineService_tBE55B5CF39BC6BFFEB3EADD2910A780A79C7B3BE* ___U3CCoroutineServiceU3Ek__BackingField_4;
};

// SupersonicWisdomSDK.SwInfra

// SupersonicWisdomSDK.SwLocalConfig

// SupersonicWisdomSDK.SwLocalConfig

// SupersonicWisdomSDK.SwNativeAdapter

// SupersonicWisdomSDK.SwNativeAdapter

// SupersonicWisdomSDK.SwNativeApi
struct SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435_StaticFields
{
	// SupersonicWisdomSDK.OnSessionEnded SupersonicWisdomSDK.SwNativeApi::OnSessionEndedCallbacks
	OnSessionEnded_t0478C85CA0FA1F3478DB6D12C8715F427D580F2F* ___OnSessionEndedCallbacks_0;
	// SupersonicWisdomSDK.OnSessionStarted SupersonicWisdomSDK.SwNativeApi::OnSessionStartedCallbacks
	OnSessionStarted_tF7BE050F17A616C162AEC53493308BE73BBFDF0E* ___OnSessionStartedCallbacks_1;
};

// SupersonicWisdomSDK.SwNativeApi

// SupersonicWisdomSDK.SwRemoteConfigRequestPayload

// SupersonicWisdomSDK.SwRemoteConfigRequestPayload

// SupersonicWisdomSDK.SwStage1SessionListener

// SupersonicWisdomSDK.SwStage1SessionListener

// SupersonicWisdomSDK.SwStoreKeys

// SupersonicWisdomSDK.SwStoreKeys

// SupersonicWisdomSDK.SwUserState

// SupersonicWisdomSDK.SwUserState

// SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0

// SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// SupersonicWisdomSDK.SwEventMetadataDto

// SupersonicWisdomSDK.SwEventMetadataDto

// SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig

// SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig

// SupersonicWisdomSDK.SwStage1NativeAdapter

// SupersonicWisdomSDK.SwStage1NativeAdapter

// SupersonicWisdomSDK.SwStage1RemoteConfigRepository

// SupersonicWisdomSDK.SwStage1RemoteConfigRepository

// System.Void

// System.Void

// SupersonicWisdomSDK.SwUserData

// SupersonicWisdomSDK.SwUserData

// SupersonicWisdomSDK.SwStage1UserData

// SupersonicWisdomSDK.SwStage1UserData

// System.Action`1<SupersonicWisdomSDK.SwUserState>

// System.Action`1<SupersonicWisdomSDK.SwUserState>
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// SupersonicWisdomSDK.ISwSessionListener[]
struct ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void SupersonicWisdomSDK.SwLocalConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwLocalConfig__ctor_m902907B0861AF1438EB8700AFF5901348ABA6880 (SwLocalConfig_tD45E2F4872C3DCB00CBAC205980BAE59780B7A2F* __this, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwNativeAdapter::.ctor(SupersonicWisdomSDK.SwNativeApi,SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwUserData,SupersonicWisdomSDK.ISwSessionListener[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwNativeAdapter__ctor_m9C975BADE2D6759A3CF1E8D3B56884F4F618C3A6 (SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF* __this, SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435* ___0_wisdomNativeApi, RuntimeObject* ___1_settings, SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___2_userData, ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC* ___3_listeners, const RuntimeMethod* method) ;
// SupersonicWisdomSDK.SwEventMetadataDto SupersonicWisdomSDK.SwNativeAdapter::GetEventMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 SwNativeAdapter_GetEventMetadata_m6DAB8BE9BDDA382479D34CF3A4702434F9106A77 (SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF* __this, const RuntimeMethod* method) ;
// System.String SupersonicWisdomSDK.SwStage1UserData::get_AppsFlyerId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SwStage1UserData_get_AppsFlyerId_m993F417ECD90B21CC9E5F1D8C935F85178ABB282_inline (SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* __this, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwCoreRemoteConfigRepository::.ctor(SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwUserData,SupersonicWisdomSDK.ISwWebRequestClient,SupersonicWisdomSDK.SwCoreTracker,SupersonicWisdomSDK.SwStoreKeys,SupersonicWisdomSDK.ISwRemoteConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwCoreRemoteConfigRepository__ctor_m2EA8BD9BB06BB563F0CDC99C0EC0020AD458D370 (SwCoreRemoteConfigRepository_t8987466BDA90C3299FB47E3FBA9D0B6E0D686D20* __this, RuntimeObject* ___0_settings, SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___1_userData, RuntimeObject* ___2_webRequestClient, SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03* ___3_tracker, SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ___4_storeKeys, RuntimeObject* ___5_listener, const RuntimeMethod* method) ;
// SupersonicWisdomSDK.SwRemoteConfigRequestPayload SupersonicWisdomSDK.SwCoreRemoteConfigRepository::CreatePayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* SwCoreRemoteConfigRepository_CreatePayload_m9C8DBA1B8BCCE68EDBC5FCD9A3B359CAFE05A3E4 (SwCoreRemoteConfigRepository_t8987466BDA90C3299FB47E3FBA9D0B6E0D686D20* __this, const RuntimeMethod* method) ;
// SupersonicWisdomSDK.ISwKeyValueStore SupersonicWisdomSDK.SwInfra::get_KeyValueStore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SwInfra_get_KeyValueStore_mA271B01FA2E0ACD83DB3478E2B4CE259655DF893_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// SupersonicWisdomSDK.ISwLogger SupersonicWisdomSDK.SwInfra::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SwInfra_get_Logger_m24595D22F278BFA90222EF043E6E4246B2278F1F_inline (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwStage1SessionListener::UpdateUserStateOnStartSession(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1SessionListener_UpdateUserStateOnStartSession_m5185D60D129AFF7DFFDC31428E477899E14BA45F (SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* __this, String_t* ___0_sessionId, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mAB43938D066D00B6491EF2D408647FC50350FB99 (U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<SupersonicWisdomSDK.SwUserState>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD9CB4E26B914DD361C5C23A29DBBBD7DB331AF47 (Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean SupersonicWisdomSDK.SwUserData::ModifyUserStateSync(System.Action`1<SupersonicWisdomSDK.SwUserState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwUserData_ModifyUserStateSync_mB5B24F307492A9098E94DD9F615576A795CFE12E (SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* __this, Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9* ___0_modifier, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwUserData::AfterUserStateChangeInternal(SupersonicWisdomSDK.SwUserStateChangeReason,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwUserData_AfterUserStateChangeInternal_mB2858FD867393F099998841B9591804A6D5C2579 (SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* __this, int32_t ___0_reason, bool ___1_silent, const RuntimeMethod* method) ;
// System.Boolean SupersonicWisdomSDK.SwUserData::UpdateAge(SupersonicWisdomSDK.SwUserState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SwUserData_UpdateAge_m0150DBC848492BAA3C1C5D89E042EE37C1AD8A88 (SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* __this, SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* ___0_userState, const RuntimeMethod* method) ;
// System.Void SupersonicWisdomSDK.SwUserData::.ctor(SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwStoreKeys,SupersonicWisdomSDK.ISwAdvertisingIdsGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwUserData__ctor_mE030713F6D28E5D25CCD8BFE878DD3F7753B931A (SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* __this, RuntimeObject* ___0_settings, SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ___1_storeKeys, RuntimeObject* ___2_idsGetter, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.Dictionary`2<System.String,System.Object> SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig::get_LocalConfigValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* SwStage1AppsFlyerLocalConfig_get_LocalConfigValues_mC419EB8DF464EA38EA84559794F7FB4AF393CE20 (SwStage1AppsFlyerLocalConfig_tF9FD7EB22C0FCD274277DF9614E3035492CE6EBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0289B6E3BF758098593A167B518BE3CC87767F98);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F2B260E76F9E4C23E6D25F8ED7CA6C4C4D14A7A);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_0 = NULL;
	{
		// return new Dictionary<string, object>
		// {
		//     { AppsFlyerDefaultDomainKey, AppsFlyerDefaultDomainDefaultValue }
		// };
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_1 = L_0;
		NullCheck(L_1);
		Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_1, _stringLiteral3F2B260E76F9E4C23E6D25F8ED7CA6C4C4D14A7A, _stringLiteral0289B6E3BF758098593A167B518BE3CC87767F98, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_2 = V_0;
		return L_2;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1AppsFlyerLocalConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1AppsFlyerLocalConfig__ctor_mE4E7527019D5DCC2CDCC2ACE8DAAC4C95AD5486B (SwStage1AppsFlyerLocalConfig_tF9FD7EB22C0FCD274277DF9614E3035492CE6EBE* __this, const RuntimeMethod* method) 
{
	{
		SwLocalConfig__ctor_m902907B0861AF1438EB8700AFF5901348ABA6880(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupersonicWisdomSDK.SwStage1NativeAdapter::.ctor(SupersonicWisdomSDK.SwNativeApi,SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwUserData,SupersonicWisdomSDK.ISwSessionListener[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1NativeAdapter__ctor_mE25D2FBCE5987F0FFBECF31814C302407CDB8ACA (SwStage1NativeAdapter_t9D798317855FD12C6AC58E7A437E7C8CB4B875BB* __this, SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435* ___0_wisdomNativeApi, RuntimeObject* ___1_settings, SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___2_userData, ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC* ___3_listeners, const RuntimeMethod* method) 
{
	{
		// public SwStage1NativeAdapter(SwNativeApi wisdomNativeApi, ISwSettings settings, SwUserData userData, [CanBeNull] ISwSessionListener[] listeners) : base(wisdomNativeApi, settings, userData, listeners)
		SwNativeApi_t269EAB0794DB2FDDFB915AF109118584DD5BE435* L_0 = ___0_wisdomNativeApi;
		RuntimeObject* L_1 = ___1_settings;
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_2 = ___2_userData;
		ISwSessionListenerU5BU5D_t5905D5D04B56F199914D1469285B0648935EB8CC* L_3 = ___3_listeners;
		SwNativeAdapter__ctor_m9C975BADE2D6759A3CF1E8D3B56884F4F618C3A6(__this, L_0, L_1, L_2, L_3, NULL);
		// { }
		return;
	}
}
// SupersonicWisdomSDK.SwEventMetadataDto SupersonicWisdomSDK.SwStage1NativeAdapter::GetEventMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 SwStage1NativeAdapter_GetEventMetadata_mFE4DA0EB2DCF7771EDAD9A7F13F2883A0082D95F (SwStage1NativeAdapter_t9D798317855FD12C6AC58E7A437E7C8CB4B875BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* V_1 = NULL;
	SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var eventMetadata = base.GetEventMetadata();
		SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 L_0;
		L_0 = SwNativeAdapter_GetEventMetadata_m6DAB8BE9BDDA382479D34CF3A4702434F9106A77(__this, NULL);
		V_0 = L_0;
		// var stage1UserData = (SwStage1UserData)UserData;
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_1 = ((SwNativeAdapter_tFE39E667448D1E4520ADA9072625AE6E7540EFFF*)__this)->___UserData_1;
		V_1 = ((SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336*)CastclassClass((RuntimeObject*)L_1, SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336_il2cpp_TypeInfo_var));
		// eventMetadata.appsFlyerId = stage1UserData.AppsFlyerId;
		SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* L_2 = V_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = SwStage1UserData_get_AppsFlyerId_m993F417ECD90B21CC9E5F1D8C935F85178ABB282_inline(L_2, NULL);
		(&V_0)->___appsFlyerId_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___appsFlyerId_8), (void*)L_3);
		// return eventMetadata;
		SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 L_4 = V_0;
		V_2 = L_4;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		SwEventMetadataDto_t9C6E0E53D966458FE4746941CD885EB48C4C6768 L_5 = V_2;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupersonicWisdomSDK.SwStage1RemoteConfigRepository::.ctor(SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwUserData,SupersonicWisdomSDK.ISwWebRequestClient,SupersonicWisdomSDK.SwCoreTracker,SupersonicWisdomSDK.SwStoreKeys,SupersonicWisdomSDK.ISwRemoteConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1RemoteConfigRepository__ctor_m7F4B872F656743C7DDBFC80711A6334779B7FEDF (SwStage1RemoteConfigRepository_t99185AF0F29C7E4078A66ABE2DDAB5F21C02DF2E* __this, RuntimeObject* ___0_settings, SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___1_userData, RuntimeObject* ___2_webRequestClient, SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03* ___3_tracker, SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ___4_storeKeys, RuntimeObject* ___5_listener, const RuntimeMethod* method) 
{
	{
		// public SwStage1RemoteConfigRepository(ISwSettings settings, SwUserData userData, ISwWebRequestClient webRequestClient, SwCoreTracker tracker, SwStoreKeys storeKeys, ISwRemoteConfigListener listener) : base(settings, userData, webRequestClient, tracker, storeKeys, listener)
		RuntimeObject* L_0 = ___0_settings;
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_1 = ___1_userData;
		RuntimeObject* L_2 = ___2_webRequestClient;
		SwCoreTracker_t5E9378719A5A44AE44CC03694535D4AB0A24DD03* L_3 = ___3_tracker;
		SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* L_4 = ___4_storeKeys;
		RuntimeObject* L_5 = ___5_listener;
		SwCoreRemoteConfigRepository__ctor_m2EA8BD9BB06BB563F0CDC99C0EC0020AD458D370(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// { }
		return;
	}
}
// SupersonicWisdomSDK.SwRemoteConfigRequestPayload SupersonicWisdomSDK.SwStage1RemoteConfigRepository::CreatePayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* SwStage1RemoteConfigRepository_CreatePayload_m80A35D508706AAFBCF69D35FF5FBACC79ECE2004 (SwStage1RemoteConfigRepository_t99185AF0F29C7E4078A66ABE2DDAB5F21C02DF2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwKeyValueStore_tD6011A512102D6AFBA726C4213351C00B7E1E084_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE4147FB278C7DD15338AA876AB7E2545CE211955);
		s_Il2CppMethodInitialized = true;
	}
	SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* V_0 = NULL;
	SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* V_1 = NULL;
	{
		// var payload = base.CreatePayload();
		SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* L_0;
		L_0 = SwCoreRemoteConfigRepository_CreatePayload_m9C8DBA1B8BCCE68EDBC5FCD9A3B359CAFE05A3E4(__this, NULL);
		V_0 = L_0;
		// payload.testId = SwInfra.KeyValueStore.GetString(SwStage1DeepLinkConstants.TestIdStorageKey);
		SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = SwInfra_get_KeyValueStore_mA271B01FA2E0ACD83DB3478E2B4CE259655DF893_inline(NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(5 /* System.String SupersonicWisdomSDK.ISwKeyValueStore::GetString(System.String,System.String) */, ISwKeyValueStore_tD6011A512102D6AFBA726C4213351C00B7E1E084_il2cpp_TypeInfo_var, L_2, _stringLiteralE4147FB278C7DD15338AA876AB7E2545CE211955, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		NullCheck(L_1);
		L_1->___testId_15 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___testId_15), (void*)L_3);
		// return payload;
		SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* L_4 = V_0;
		V_1 = L_4;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		SwRemoteConfigRequestPayload_t6E0815B0A9E5643DB5D21FD0C9361C27FC9A6370* L_5 = V_1;
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupersonicWisdomSDK.SwStage1SessionListener::.ctor(SupersonicWisdomSDK.SwUserData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1SessionListener__ctor_m87C21AAED376D87B2A47617A778F9E388F6F715C (SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* __this, SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* ___0_userData, const RuntimeMethod* method) 
{
	{
		// public SwStage1SessionListener(SwUserData userData)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _userData = userData;
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_0 = ___0_userData;
		__this->____userData_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____userData_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1SessionListener::OnSessionEnded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1SessionListener_OnSessionEnded_m2418EF4D2B1E7160DA0AB38CA14683DF884A0E89 (SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* __this, String_t* ___0_sessionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C907F1E3A0F05D2EC804B54011775895EED413F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SwInfra.Logger.Log($"Unity:SwSessions:OnSessionEnded:{sessionId}");
		RuntimeObject* L_0;
		L_0 = SwInfra_get_Logger_m24595D22F278BFA90222EF043E6E4246B2278F1F_inline(NULL);
		String_t* L_1 = ___0_sessionId;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1C907F1E3A0F05D2EC804B54011775895EED413F, L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void SupersonicWisdomSDK.ISwLogger::Log(System.String) */, ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1SessionListener::OnSessionStarted(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1SessionListener_OnSessionStarted_mF601D52FA5E76202DF9A39CFCC9CEA34373209C4 (SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* __this, String_t* ___0_sessionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A145F2DAC03F270FE6CE23A92FE0CB9DACB538);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UpdateUserStateOnStartSession(sessionId);
		String_t* L_0 = ___0_sessionId;
		SwStage1SessionListener_UpdateUserStateOnStartSession_m5185D60D129AFF7DFFDC31428E477899E14BA45F(__this, L_0, NULL);
		// SwInfra.Logger.Log($"Unity:SwSessions:OnSessionStarted:{sessionId}");
		RuntimeObject* L_1;
		L_1 = SwInfra_get_Logger_m24595D22F278BFA90222EF043E6E4246B2278F1F_inline(NULL);
		String_t* L_2 = ___0_sessionId;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral78A145F2DAC03F270FE6CE23A92FE0CB9DACB538, L_2, NULL);
		NullCheck(L_1);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void SupersonicWisdomSDK.ISwLogger::Log(System.String) */, ISwLogger_t4F86CF97B79B0F4DAAB3299C84EDD317F16536F5_il2cpp_TypeInfo_var, L_1, L_3);
		// }
		return;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1SessionListener::UpdateUserStateOnStartSession(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1SessionListener_UpdateUserStateOnStartSession_m5185D60D129AFF7DFFDC31428E477899E14BA45F (SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* __this, String_t* ___0_sessionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CUpdateUserStateOnStartSessionU3Eb__0_mFD810E061B8B286B8FD16639DB81863E6C987DED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* L_0 = (U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_mAB43938D066D00B6491EF2D408647FC50350FB99(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* L_2 = V_0;
		String_t* L_3 = ___0_sessionId;
		NullCheck(L_2);
		L_2->___sessionId_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sessionId_1), (void*)L_3);
		// _userData.ModifyUserStateSync(mutableUserState =>
		// {
		//     _userData.UpdateAge(mutableUserState);
		//     mutableUserState.SessionId = sessionId;
		//     mutableUserState.todaySessionsCount++;
		//     mutableUserState.totalSessionsCount++;
		// });
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_4 = __this->____userData_0;
		U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* L_5 = V_0;
		Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9* L_6 = (Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9*)il2cpp_codegen_object_new(Action_1_tB91375E62E581688EA56D46606B96A59A577FDE9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mD9CB4E26B914DD361C5C23A29DBBBD7DB331AF47(L_6, L_5, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CUpdateUserStateOnStartSessionU3Eb__0_mFD810E061B8B286B8FD16639DB81863E6C987DED_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = SwUserData_ModifyUserStateSync_mB5B24F307492A9098E94DD9F615576A795CFE12E(L_4, L_6, NULL);
		// _userData.AfterUserStateChangeInternal(SwUserStateChangeReason.SessionStart, true);
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_8 = __this->____userData_0;
		NullCheck(L_8);
		SwUserData_AfterUserStateChangeInternal_mB2858FD867393F099998841B9591804A6D5C2579(L_8, 1, (bool)1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_mAB43938D066D00B6491EF2D408647FC50350FB99 (U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1SessionListener/<>c__DisplayClass4_0::<UpdateUserStateOnStartSession>b__0(SupersonicWisdomSDK.SwUserState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0_U3CUpdateUserStateOnStartSessionU3Eb__0_mFD810E061B8B286B8FD16639DB81863E6C987DED (U3CU3Ec__DisplayClass4_0_t8810E3109A743A7718397B8199670DBAD6A193DF* __this, SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* ___0_mutableUserState, const RuntimeMethod* method) 
{
	{
		// _userData.UpdateAge(mutableUserState);
		SwStage1SessionListener_tA0D8F864B9F1F1E8E3F50822C61FDA642D12D90E* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		SwUserData_t349EDCFBEFE8BA5BB73D4D7A83569F768DA13D4D* L_1 = L_0->____userData_0;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_2 = ___0_mutableUserState;
		NullCheck(L_1);
		bool L_3;
		L_3 = SwUserData_UpdateAge_m0150DBC848492BAA3C1C5D89E042EE37C1AD8A88(L_1, L_2, NULL);
		// mutableUserState.SessionId = sessionId;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_4 = ___0_mutableUserState;
		String_t* L_5 = __this->___sessionId_1;
		NullCheck(L_4);
		L_4->___SessionId_10 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___SessionId_10), (void*)L_5);
		// mutableUserState.todaySessionsCount++;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_6 = ___0_mutableUserState;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_7 = L_6;
		NullCheck(L_7);
		int64_t L_8 = L_7->___todaySessionsCount_7;
		NullCheck(L_7);
		L_7->___todaySessionsCount_7 = ((int64_t)il2cpp_codegen_add(L_8, ((int64_t)1)));
		// mutableUserState.totalSessionsCount++;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_9 = ___0_mutableUserState;
		SwUserState_tFB528022E19883B94C8160B5BFA74F0B5A635FC0* L_10 = L_9;
		NullCheck(L_10);
		int64_t L_11 = L_10->___totalSessionsCount_8;
		NullCheck(L_10);
		L_10->___totalSessionsCount_8 = ((int64_t)il2cpp_codegen_add(L_11, ((int64_t)1)));
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String SupersonicWisdomSDK.SwStage1UserData::get_AppsFlyerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SwStage1UserData_get_AppsFlyerId_m993F417ECD90B21CC9E5F1D8C935F85178ABB282 (SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* __this, const RuntimeMethod* method) 
{
	{
		// public string AppsFlyerId { get; set; }
		String_t* L_0 = __this->___U3CAppsFlyerIdU3Ek__BackingField_17;
		return L_0;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1UserData::set_AppsFlyerId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1UserData_set_AppsFlyerId_mC5E37F1ADA6C8B8CA46FAABA8FCFCEF568A4D823 (SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public string AppsFlyerId { get; set; }
		String_t* L_0 = ___0_value;
		__this->___U3CAppsFlyerIdU3Ek__BackingField_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAppsFlyerIdU3Ek__BackingField_17), (void*)L_0);
		return;
	}
}
// System.Void SupersonicWisdomSDK.SwStage1UserData::.ctor(SupersonicWisdomSDK.ISwSettings,SupersonicWisdomSDK.SwStoreKeys,SupersonicWisdomSDK.ISwAdvertisingIdsGetter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SwStage1UserData__ctor_mE3AFFD34C601DC52C82A9323B1551B88B773B80F (SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* __this, RuntimeObject* ___0_settings, SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* ___1_storeKeys, RuntimeObject* ___2_idsGetter, const RuntimeMethod* method) 
{
	{
		// public SwStage1UserData(ISwSettings settings, SwStoreKeys storeKeys, ISwAdvertisingIdsGetter idsGetter) : base(settings, storeKeys, idsGetter)
		RuntimeObject* L_0 = ___0_settings;
		SwStoreKeys_t745C89F90D7B084D4B2B7CFD0D8FC8E4F14A6056* L_1 = ___1_storeKeys;
		RuntimeObject* L_2 = ___2_idsGetter;
		SwUserData__ctor_mE030713F6D28E5D25CCD8BFE878DD3F7753B931A(__this, L_0, L_1, L_2, NULL);
		// { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SwStage1UserData_get_AppsFlyerId_m993F417ECD90B21CC9E5F1D8C935F85178ABB282_inline (SwStage1UserData_t7C417900364A0AEB5954D417176B65F5B661D336* __this, const RuntimeMethod* method) 
{
	{
		// public string AppsFlyerId { get; set; }
		String_t* L_0 = __this->___U3CAppsFlyerIdU3Ek__BackingField_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SwInfra_get_KeyValueStore_mA271B01FA2E0ACD83DB3478E2B4CE259655DF893_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ISwKeyValueStore KeyValueStore { get; private set; }
		RuntimeObject* L_0 = ((SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_StaticFields*)il2cpp_codegen_static_fields_for(SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_il2cpp_TypeInfo_var))->___U3CKeyValueStoreU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* SwInfra_get_Logger_m24595D22F278BFA90222EF043E6E4246B2278F1F_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ISwLogger Logger { get; private set; }
		RuntimeObject* L_0 = ((SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_StaticFields*)il2cpp_codegen_static_fields_for(SwInfra_t93FBAFF9DA69D4868A53DE8203C84604B4278A7E_il2cpp_TypeInfo_var))->___U3CLoggerU3Ek__BackingField_2;
		return L_0;
	}
}
