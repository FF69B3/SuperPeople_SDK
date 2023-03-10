                                                      /* Create by #FF69B4 */
// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	Open                           = 2,
	ERangeBoundTypes_MAX           = 3
};


// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	Game                           = 0,
	Engine                         = 1,
	Editor                         = 2,
	ELocalizedTextSourceCategory_MAX = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EAutomationEventType_MAX       = 3
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	None                           = 0,
	Default                        = 1,
	TextEditBeam                   = 2,
	ResizeLeftRight                = 3,
	ResizeUpDown                   = 4,
	ResizeSouthEast                = 5,
	ResizeSouthWest                = 6,
	CardinalCross                  = 7,
	Crosshairs                     = 8,
	Hand                           = 9,
	GrabHand                       = 10,
	GrabHandClosed                 = 11,
	SlashedCircle                  = 12,
	EyeDropper                     = 13,
	EMouseCursor_MAX               = 14
};


// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_SpectatorOrOwner          = 14,
	COND_SpectatorOrOwnerOrReplay  = 15,
	COND_InitialOrSkipOwner        = 16,
	COND_SpectatorOrReplay         = 17,
	COND_Never                     = 18,
	COND_Max                       = 19
};


// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	Invalid                        = 0,
	Valid                          = 1,
	NotValidated                   = 2,
	EDataValidationResult_MAX      = 3
};


// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	Default                        = 0,
	Never                          = 1,
	Always                         = 2,
	EPropertyAccessChangeNotifyMode_MAX = 3
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	Micrometers                    = 0,
	Millimeters                    = 1,
	Centimeters                    = 2,
	Meters                         = 3,
	Kilometers                     = 4,
	Inches                         = 5,
	Feet                           = 6,
	Yards                          = 7,
	Miles                          = 8,
	Lightyears                     = 9,
	Degrees                        = 10,
	Radians                        = 11,
	MetersPerSecond                = 12,
	KilometersPerHour              = 13,
	MilesPerHour                   = 14,
	Celsius                        = 15,
	Farenheit                      = 16,
	Kelvin                         = 17,
	Micrograms                     = 18,
	Milligrams                     = 19,
	Grams                          = 20,
	Kilograms                      = 21,
	MetricTons                     = 22,
	Ounces                         = 23,
	Pounds                         = 24,
	Stones                         = 25,
	Newtons                        = 26,
	PoundsForce                    = 27,
	KilogramsForce                 = 28,
	Hertz                          = 29,
	Kilohertz                      = 30,
	Megahertz                      = 31,
	Gigahertz                      = 32,
	RevolutionsPerMinute           = 33,
	Bytes                          = 34,
	Kilobytes                      = 35,
	Megabytes                      = 36,
	Gigabytes                      = 37,
	Terabytes                      = 38,
	Lumens                         = 39,
	Milliseconds                   = 40,
	Seconds                        = 41,
	Minutes                        = 42,
	Hours                          = 43,
	Days                           = 44,
	Months                         = 45,
	Years                          = 46,
	Multiplier                     = 47,
	Percentage                     = 48,
	Unspecified                    = 49,
	EUnit_MAX                      = 50
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR                = 64,
	PF_PLATFORM_HDR01              = 65,
	PF_PLATFORM_HDR02              = 66,
	PF_NV12                        = 67,
	PF_R32G32_UINT                 = 68,
	PF_ETC2_R11_EAC                = 69,
	PF_ETC2_RG11_EAC               = 70,
	PF_MAX                         = 71
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EAxis_MAX                      = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	None                           = 0,
	UTC                            = 1,
	SinceGStartTime                = 2,
	Local                          = 3,
	ELogTimes_MAX                  = 4
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	FromStart                      = 0,
	FromEnd                        = 1,
	ESearchDir_MAX                 = 2
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	CaseSensitive                  = 0,
	IgnoreCase                     = 1,
	ESearchCase_MAX                = 2
};



// Enum CustomizableObject.ECustomizableObjectRelevancy
enum class ECustomizableObjectRelevancy : uint8_t
{
	All                            = 0,
	ClientOnly                     = 1,
	ECustomizableObjectRelevancy_MAX = 2
};


// Enum CustomizableObject.ECustomizableObjectProjectorType
enum class ECustomizableObjectProjectorType : uint8_t
{
	Planar                         = 0,
	Cylindrical                    = 1,
	Wrapping                       = 2,
	ECustomizableObjectProjectorType_MAX = 3
};


// Enum CustomizableObject.EMutableCompileMeshType
enum class EMutableCompileMeshType : uint8_t
{
	Full                           = 0,
	Local                          = 1,
	LocalAndChildren               = 2,
	AddWorkingSetNoChildren        = 3,
	AddWorkingSetAndChildren       = 4,
	EMutableCompileMeshType_MAX    = 5
};


// Enum CustomizableObject.ECustomizableObjectGroupType
enum class ECustomizableObjectGroupType : uint8_t
{
	COGT_TOGGLE                    = 0,
	COGT_ALL                       = 1,
	COGT_ONE                       = 2,
	COGT_ONE_OR_NONE               = 3,
	COGT_MAX                       = 4
};


// Enum CustomizableObject.EMutableParameterType
enum class EMutableParameterType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int                            = 2,
	Float                          = 3,
	Color                          = 4,
	Projector                      = 5,
	Texture                        = 6,
	EMutableParameterType_MAX      = 7
};



// Enum Engine.ETextGender
enum class ETextGender : uint8_t
{
	Masculine                      = 0,
	Feminine                       = 1,
	Neuter                         = 2,
	ETextGender_MAX                = 3
};


// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8_t
{
	Int                            = 0,
	UInt                           = 1,
	Float                          = 2,
	Double                         = 3,
	Text                           = 4,
	Gender                         = 5,
	EFormatArgumentType_MAX        = 6
};


// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8_t
{
	Destroyed                      = 0,
	LevelTransition                = 1,
	EndPlayInEditor                = 2,
	RemovedFromWorld               = 3,
	Quit                           = 4,
	EEndPlayReason_MAX             = 5
};


// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8_t
{
	TG_PrePhysics                  = 0,
	TG_StartPhysics                = 1,
	TG_DuringPhysics               = 2,
	TG_EndPhysics                  = 3,
	TG_PostPhysics                 = 4,
	TG_PostUpdateWork              = 5,
	TG_LastDemotable               = 6,
	TG_NewlySpawned                = 7,
	TG_MAX                         = 8
};


// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8_t
{
	Native                         = 0,
	SimpleConstructionScript       = 1,
	UserConstructionScript         = 2,
	Instance                       = 3,
	EComponentCreationMethod_MAX   = 4
};


// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8_t
{
	Unknown                        = 0,
	Good                           = 1,
	Bad                            = 2,
	Serious                        = 3,
	Critical                       = 4,
	NumSeverities                  = 5,
	ETemperatureSeverityType_MAX   = 6
};


// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8_t
{
	Custom                         = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	UseGlobalPhysicsSetting        = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};


// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8_t
{
	OneShot                        = 0,
	OneShot_Reverse                = 1,
	Loop_Reset                     = 2,
	PingPong                       = 3,
	EInterpToBehaviourType_MAX     = 4
};


// Enum Engine.ETeleportType
enum class ETeleportType : uint8_t
{
	None                           = 0,
	TeleportPhysics                = 1,
	ResetPhysics                   = 2,
	ETeleportType_MAX              = 3
};


// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8_t
{
	PIDT_None                      = 0,
	PIDT_Int                       = 1,
	PIDT_Float                     = 2,
	PIDT_String                    = 3,
	PIDT_Object                    = 4,
	PIDT_Custom                    = 5,
	PIDT_MAX                       = 6
};


// Enum Engine.EMovementMode
enum class EMovementMode : uint8_t
{
	MOVE_None                      = 0,
	MOVE_Walking                   = 1,
	MOVE_NavWalking                = 2,
	MOVE_Falling                   = 3,
	MOVE_Swimming                  = 4,
	MOVE_Flying                    = 5,
	MOVE_Custom                    = 6,
	MOVE_MAX                       = 7
};


// Enum Engine.ENetworkFailure
enum class ENetworkFailure : uint8_t
{
	NetDriverAlreadyExists         = 0,
	NetDriverCreateFailure         = 1,
	NetDriverListenFailure         = 2,
	ConnectionLost                 = 3,
	ConnectionTimeout              = 4,
	FailureReceived                = 5,
	OutdatedClient                 = 6,
	OutdatedServer                 = 7,
	PendingConnectionFailure       = 8,
	NetGuidMismatch                = 9,
	NetChecksumMismatch            = 10,
	ServerConnectionLost           = 11,
	SecuritySeedMismatch           = 12,
	PreLoginFailure                = 13,
	JoinFailure                    = 14,
	ENetworkFailure_MAX            = 15
};


// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8_t
{
	NoLevel                        = 0,
	LoadMapFailure                 = 1,
	InvalidURL                     = 2,
	PackageMissing                 = 3,
	PackageVersion                 = 4,
	NoDownload                     = 5,
	TravelFailure                  = 6,
	CheatCommands                  = 7,
	PendingNetGameCreateFailure    = 8,
	CloudSaveFailure               = 9,
	ServerTravelFailure            = 10,
	ClientTravelFailure            = 11,
	ETravelFailure_MAX             = 12
};


// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8_t
{
	Unknown                        = 0,
	Portrait                       = 1,
	PortraitUpsideDown             = 2,
	LandscapeLeft                  = 3,
	LandscapeRight                 = 4,
	FaceUp                         = 5,
	FaceDown                       = 6,
	EScreenOrientation_MAX         = 7
};


// Enum Engine.EApplicationState
enum class EApplicationState : uint8_t
{
	Unknown                        = 0,
	Inactive                       = 1,
	Background                     = 2,
	Active                         = 3,
	EApplicationState_MAX          = 4
};


// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8_t
{
	ObjectTypeQuery1               = 0,
	ObjectTypeQuery2               = 1,
	ObjectTypeQuery3               = 2,
	ObjectTypeQuery4               = 3,
	ObjectTypeQuery5               = 4,
	ObjectTypeQuery6               = 5,
	ObjectTypeQuery7               = 6,
	ObjectTypeQuery8               = 7,
	ObjectTypeQuery9               = 8,
	ObjectTypeQuery10              = 9,
	ObjectTypeQuery11              = 10,
	ObjectTypeQuery12              = 11,
	ObjectTypeQuery13              = 12,
	ObjectTypeQuery14              = 13,
	ObjectTypeQuery15              = 14,
	ObjectTypeQuery16              = 15,
	ObjectTypeQuery17              = 16,
	ObjectTypeQuery18              = 17,
	ObjectTypeQuery19              = 18,
	ObjectTypeQuery20              = 19,
	ObjectTypeQuery21              = 20,
	ObjectTypeQuery22              = 21,
	ObjectTypeQuery23              = 22,
	ObjectTypeQuery24              = 23,
	ObjectTypeQuery25              = 24,
	ObjectTypeQuery26              = 25,
	ObjectTypeQuery27              = 26,
	ObjectTypeQuery28              = 27,
	ObjectTypeQuery29              = 28,
	ObjectTypeQuery30              = 29,
	ObjectTypeQuery31              = 30,
	ObjectTypeQuery32              = 31,
	ObjectTypeQuery_MAX            = 32,
	EObjectTypeQuery_MAX           = 33
};


// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8_t
{
	None                           = 0,
	ForOneFrame                    = 1,
	ForDuration                    = 2,
	Persistent                     = 3,
	EDrawDebugTrace_MAX            = 4
};


// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8_t
{
	TraceTypeQuery1                = 0,
	TraceTypeQuery2                = 1,
	TraceTypeQuery3                = 2,
	TraceTypeQuery4                = 3,
	TraceTypeQuery5                = 4,
	TraceTypeQuery6                = 5,
	TraceTypeQuery7                = 6,
	TraceTypeQuery8                = 7,
	TraceTypeQuery9                = 8,
	TraceTypeQuery10               = 9,
	TraceTypeQuery11               = 10,
	TraceTypeQuery12               = 11,
	TraceTypeQuery13               = 12,
	TraceTypeQuery14               = 13,
	TraceTypeQuery15               = 14,
	TraceTypeQuery16               = 15,
	TraceTypeQuery17               = 16,
	TraceTypeQuery18               = 17,
	TraceTypeQuery19               = 18,
	TraceTypeQuery20               = 19,
	TraceTypeQuery21               = 20,
	TraceTypeQuery22               = 21,
	TraceTypeQuery23               = 22,
	TraceTypeQuery24               = 23,
	TraceTypeQuery25               = 24,
	TraceTypeQuery26               = 25,
	TraceTypeQuery27               = 26,
	TraceTypeQuery28               = 27,
	TraceTypeQuery29               = 28,
	TraceTypeQuery30               = 29,
	TraceTypeQuery31               = 30,
	TraceTypeQuery32               = 31,
	TraceTypeQuery_MAX             = 32,
	ETraceTypeQuery_MAX            = 33
};


// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8_t
{
	Move                           = 0,
	Stop                           = 1,
	Return                         = 2,
	EMoveComponentAction_MAX       = 3
};


// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8_t
{
	Quit                           = 0,
	Background                     = 1,
	EQuitPreference_MAX            = 2
};


// Enum Engine.EMKReplaySampling
enum class EMKReplaySampling : uint8_t
{
	Not                            = 0,
	Net                            = 1,
	NetOnlyRecording               = 2,
	Client                         = 3,
	ClientOnlyRecording            = 4,
	EMKReplaySampling_MAX          = 5
};


// Enum Engine.ENetRole
enum class ENetRole : uint8_t
{
	ROLE_None                      = 0,
	ROLE_SimulatedProxy            = 1,
	ROLE_AutonomousProxy           = 2,
	ROLE_Authority                 = 3,
	ROLE_MAX                       = 4
};


// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8_t
{
	KeepRelativeOffset             = 0,
	KeepWorldPosition              = 1,
	SnapToTarget                   = 2,
	SnapToTargetIncludingScale     = 3,
	EAttachLocation_MAX            = 4
};


// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	SnapToTarget                   = 2,
	EAttachmentRule_MAX            = 3
};


// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8_t
{
	KeepRelative                   = 0,
	KeepWorld                      = 1,
	EDetachmentRule_MAX            = 2
};


// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8_t
{
	DORM_Never                     = 0,
	DORM_Awake                     = 1,
	DORM_DormantAll                = 2,
	DORM_DormantPartial            = 3,
	DORM_Initial                   = 4,
	DORM_MAX                       = 5
};


// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8_t
{
	Disabled                       = 0,
	Player0                        = 1,
	Player1                        = 2,
	Player2                        = 3,
	Player3                        = 4,
	Player4                        = 5,
	Player5                        = 6,
	Player6                        = 7,
	Player7                        = 8,
	EAutoReceiveInput_MAX          = 9
};


// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8_t
{
	Undefined                      = 0,
	AlwaysSpawn                    = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding           = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};


// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8_t
{
	ByteComponents                 = 0,
	ShortComponents                = 1,
	ERotatorQuantization_MAX       = 2
};


// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8_t
{
	RoundWholeNumber               = 0,
	RoundOneDecimal                = 1,
	RoundTwoDecimals               = 2,
	CompressedToMinimum            = 3,
	EVectorQuantization_MAX        = 4
};


// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8_t
{
	UseConfigDefault               = 0,
	AlwaysUpdate                   = 1,
	OnlyUpdateMovable              = 2,
	NeverUpdate                    = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};


// Enum Engine.ECameraAnimPlaySpace
enum class ECameraAnimPlaySpace : uint8_t
{
	CameraLocal                    = 0,
	World                          = 1,
	UserDefined                    = 2,
	ECameraAnimPlaySpace_MAX       = 3
};


// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8_t
{
	VTBlend_Linear                 = 0,
	VTBlend_Cubic                  = 1,
	VTBlend_EaseIn                 = 2,
	VTBlend_EaseOut                = 3,
	VTBlend_EaseInOut              = 4,
	VTBlend_MAX                    = 5
};


// Enum Engine.ETravelType
enum class ETravelType : uint8_t
{
	TRAVEL_Absolute                = 0,
	TRAVEL_Partial                 = 1,
	TRAVEL_Relative                = 2,
	TRAVEL_MAX                     = 3
};


// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8_t
{
	ECC_WorldStatic                = 0,
	ECC_WorldDynamic               = 1,
	ECC_Pawn                       = 2,
	ECC_Visibility                 = 3,
	ECC_Camera                     = 4,
	ECC_PhysicsBody                = 5,
	ECC_Vehicle                    = 6,
	ECC_Destructible               = 7,
	ECC_EngineTraceChannel1        = 8,
	ECC_EngineTraceChannel2        = 9,
	ECC_EngineTraceChannel3        = 10,
	ECC_EngineTraceChannel4        = 11,
	ECC_EngineTraceChannel5        = 12,
	ECC_EngineTraceChannel6        = 13,
	ECC_GameTraceChannel1          = 14,
	ECC_GameTraceChannel2          = 15,
	ECC_GameTraceChannel3          = 16,
	ECC_GameTraceChannel4          = 17,
	ECC_GameTraceChannel5          = 18,
	ECC_GameTraceChannel6          = 19,
	ECC_GameTraceChannel7          = 20,
	ECC_GameTraceChannel8          = 21,
	ECC_GameTraceChannel9          = 22,
	ECC_GameTraceChannel10         = 23,
	ECC_GameTraceChannel11         = 24,
	ECC_GameTraceChannel12         = 25,
	ECC_GameTraceChannel13         = 26,
	ECC_GameTraceChannel14         = 27,
	ECC_GameTraceChannel15         = 28,
	ECC_GameTraceChannel16         = 29,
	ECC_GameTraceChannel17         = 30,
	ECC_GameTraceChannel18         = 31,
	ECC_OverlapAll_Deprecated      = 32,
	ECC_MAX                        = 33
};


// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8_t
{
	CAS_LeftStick                  = 0,
	CAS_RightStick                 = 1,
	CAS_MAX                        = 2
};


// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8_t
{
	Start                          = 0,
	Update                         = 1,
	Stop                           = 2,
	EDynamicForceFeedbackAction_MAX = 3
};


// Enum Engine.ECameraType
enum class ECameraType : uint8_t
{
	NotCamera                      = 0,
	FreeCamera                     = 1,
	PlayerCamera                   = 2,
	ECameraType_MAX                = 3
};


// Enum Engine.EReplayViewMode
enum class EReplayViewMode : uint8_t
{
	DontUsed                       = 0,
	Player                         = 1,
	Follow                         = 2,
	EReplayViewMode_MAX            = 3
};


// Enum Engine.EFractureSoundType
enum class EFractureSoundType : uint8_t
{
	None                           = 0,
	GlassSmall                     = 1,
	GlassLarge                     = 2,
	WoodSmall                      = 3,
	WoodLarge                      = 4,
	Rock                           = 5,
	EFractureSoundType_MAX         = 6
};


// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8_t
{
	DoNotLock                      = 0,
	LockOnCapture                  = 1,
	LockAlways                     = 2,
	LockInFullscreen               = 3,
	EMouseLockMode_MAX             = 4
};


// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8_t
{
	Overlay                        = 0,
	VerticalBox                    = 1,
	EWindowTitleBarMode_MAX        = 2
};


// Enum Engine.TextureFilter
enum class ETextureFilter : uint8_t
{
	TF_Nearest                     = 0,
	TF_Bilinear                    = 1,
	TF_Trilinear                   = 2,
	TF_Default                     = 3,
	TF_MAX                         = 4
};


// Enum Engine.EInputEvent
enum class EInputEvent : uint8_t
{
	IE_Pressed                     = 0,
	IE_Released                    = 1,
	IE_Repeat                      = 2,
	IE_DoubleClick                 = 3,
	IE_Axis                        = 4,
	IE_MAX                         = 5
};


// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8_t
{
	RTS_World                      = 0,
	RTS_Actor                      = 1,
	RTS_Component                  = 2,
	RTS_ParentBoneSpace            = 3,
	RTS_MAX                        = 4
};


// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8_t
{
	Static                         = 0,
	Stationary                     = 1,
	Movable                        = 2,
	EComponentMobility_MAX         = 3
};


// Enum Engine.EDetailMode
enum class EDetailMode : uint8_t
{
	DM_Low                         = 0,
	DM_Medium                      = 1,
	DM_High                        = 2,
	DM_MAX                         = 3
};


// Enum Engine.ERenderingStyle
enum class ERenderingStyle : uint8_t
{
	RENDER_STYLE_ALWAYS            = 0,
	RENDER_STYLE                   = 1,
	RENDER_STYLE01                 = 2,
	RENDER_STYLE02                 = 3,
	RENDER_STYLE03                 = 4,
	RENDER_STYLE04                 = 5,
	RENDER_STYLE05                 = 6,
	RENDER_STYLE06                 = 7,
	RENDER_STYLE07                 = 8,
	RENDER_STYLE08                 = 9,
	RENDER_STYLE09                 = 10,
	RENDER_STYLE_MAX               = 11
};


// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8_t
{
	Disabled                       = 0,
	PlacedInWorld                  = 1,
	Spawned                        = 2,
	PlacedInWorldOrSpawned         = 3,
	EAutoPossessAI_MAX             = 4
};


// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8_t
{
	TL_TimelineLength              = 0,
	TL_LastKeyFrame                = 1,
	TL_MAX                         = 2
};


// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8_t
{
	Disabled                       = 0,
	Linear                         = 1,
	Exponential                    = 2,
	Replay                         = 3,
	ENetworkSmoothingMode_MAX      = 4
};


// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8_t
{
	Disabled                       = 0,
	Hard_shadows                   = 1,
	Area_shadows                   = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};


// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8_t
{
	Raster                         = 0,
	RayTracing                     = 1,
	ETranslucencyType_MAX          = 2
};


// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8_t
{
	ScreenSpace                    = 0,
	RayTracing                     = 1,
	EReflectionsType_MAX           = 2
};


// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8_t
{
	Disabled                       = 0,
	BruteForce                     = 1,
	FinalGather                    = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};


// Enum Engine.EFilmicTonemapperType
enum class EFilmicTonemapperType : uint8_t
{
	EngineDefault                  = 0,
	Disable                        = 1,
	Enable                         = 2,
	EFilmicTonemapperType_MAX      = 3
};


// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8_t
{
	BM_SOG                         = 0,
	BM_FFT                         = 1,
	BM_MAX                         = 2
};


// Enum Engine.EPhysicalSurface
enum class EPhysicalSurface : uint8_t
{
	SurfaceType_Default            = 0,
	SurfaceType1                   = 1,
	SurfaceType2                   = 2,
	SurfaceType3                   = 3,
	SurfaceType4                   = 4,
	SurfaceType5                   = 5,
	SurfaceType6                   = 6,
	SurfaceType7                   = 7,
	SurfaceType8                   = 8,
	SurfaceType9                   = 9,
	SurfaceType10                  = 10,
	SurfaceType11                  = 11,
	SurfaceType12                  = 12,
	SurfaceType13                  = 13,
	SurfaceType14                  = 14,
	SurfaceType15                  = 15,
	SurfaceType16                  = 16,
	SurfaceType17                  = 17,
	SurfaceType18                  = 18,
	SurfaceType19                  = 19,
	SurfaceType20                  = 20,
	SurfaceType21                  = 21,
	SurfaceType22                  = 22,
	SurfaceType23                  = 23,
	SurfaceType24                  = 24,
	SurfaceType25                  = 25,
	SurfaceType26                  = 26,
	SurfaceType27                  = 27,
	SurfaceType28                  = 28,
	SurfaceType29                  = 29,
	SurfaceType30                  = 30,
	SurfaceType31                  = 31,
	SurfaceType32                  = 32,
	SurfaceType33                  = 33,
	SurfaceType34                  = 34,
	SurfaceType35                  = 35,
	SurfaceType36                  = 36,
	SurfaceType37                  = 37,
	SurfaceType38                  = 38,
	SurfaceType39                  = 39,
	SurfaceType40                  = 40,
	SurfaceType41                  = 41,
	SurfaceType42                  = 42,
	SurfaceType43                  = 43,
	SurfaceType44                  = 44,
	SurfaceType45                  = 45,
	SurfaceType46                  = 46,
	SurfaceType47                  = 47,
	SurfaceType48                  = 48,
	SurfaceType49                  = 49,
	SurfaceType50                  = 50,
	SurfaceType51                  = 51,
	SurfaceType52                  = 52,
	SurfaceType53                  = 53,
	SurfaceType54                  = 54,
	SurfaceType55                  = 55,
	SurfaceType56                  = 56,
	SurfaceType57                  = 57,
	SurfaceType58                  = 58,
	SurfaceType59                  = 59,
	SurfaceType60                  = 60,
	SurfaceType61                  = 61,
	SurfaceType62                  = 62,
	SurfaceType_Max                = 63,
	EPhysicalSurface_MAX           = 64
};


// Enum Engine.EFastArraySerializerDeltaFlags
enum class EFastArraySerializerDeltaFlags : uint8_t
{
	None                           = 0,
	HasBeenSerialized              = 1,
	HasDeltaBeenRequested          = 2,
	IsUsingDeltaSerialization      = 3,
	EFastArraySerializerDeltaFlags_MAX = 4
};


// Enum Engine.ERadialImpulseFalloff
enum class ERadialImpulseFalloff : uint8_t
{
	RIF_Constant                   = 0,
	RIF_Linear                     = 1,
	RIF_MAX                        = 2
};


// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ECameraProjectionMode_MAX      = 2
};


// Enum Engine.EBlendMode
enum class EBlendMode : uint8_t
{
	BLEND_Opaque                   = 0,
	BLEND_Masked                   = 1,
	BLEND_Translucent              = 2,
	BLEND_Additive                 = 3,
	BLEND_Modulate                 = 4,
	BLEND_AlphaComposite           = 5,
	BLEND_AlphaHoldout             = 6,
	BLEND_MAX                      = 7
};


// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8_t
{
	RCCE_Cycle                     = 0,
	RCCE_CycleWithOffset           = 1,
	RCCE_Oscillate                 = 2,
	RCCE_Linear                    = 3,
	RCCE_Constant                  = 4,
	RCCE_None                      = 5,
	RCCE_MAX                       = 6
};


// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8_t
{
	RCTWM_WeightedNone             = 0,
	RCTWM_WeightedArrive           = 1,
	RCTWM_WeightedLeave            = 2,
	RCTWM_WeightedBoth             = 3,
	RCTWM_MAX                      = 4
};


// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8_t
{
	RCTM_Auto                      = 0,
	RCTM_User                      = 1,
	RCTM_Break                     = 2,
	RCTM_None                      = 3,
	RCTM_MAX                       = 4
};


// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8_t
{
	RCIM_Linear                    = 0,
	RCIM_Constant                  = 1,
	RCIM_Cubic                     = 2,
	RCIM_None                      = 3,
	RCIM_MAX                       = 4
};


// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8_t
{
	NoCollision                    = 0,
	QueryOnly                      = 1,
	PhysicsOnly                    = 2,
	QueryAndPhysics                = 3,
	ECollisionEnabled_MAX          = 4
};


// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8_t
{
	ECR_Ignore                     = 0,
	ECR_Overlap                    = 1,
	ECR_Block                      = 2,
	ECR_MAX                        = 3
};


// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8_t
{
	WalkableSlope_Default          = 0,
	WalkableSlope_Increase         = 1,
	WalkableSlope_Decrease         = 2,
	WalkableSlope_Unwalkable       = 3,
	WalkableSlope_Max              = 4
};


// Enum Engine.EDOFMode
enum class EDOFMode : uint8_t
{
	Default                        = 0,
	SixDOF                         = 1,
	YZPlane                        = 2,
	XZPlane                        = 3,
	XYPlane                        = 4,
	CustomPlane                    = 5,
	None                           = 6,
	EDOFMode_MAX                   = 7
};


// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8_t
{
	ERSM_Default                   = 0,
	ERSM                           = 1,
	ERSM01                         = 2,
	ERSM02                         = 3,
	ERSM03                         = 4,
	ERSM04                         = 5,
	ERSM05                         = 6,
	ERSM06                         = 7,
	ERSM07                         = 8,
	ERSM08                         = 9,
	ERSM_MAX                       = 10
};


// Enum Engine.ESleepFamily
enum class ESleepFamily : uint8_t
{
	Normal                         = 0,
	Sensitive                      = 1,
	Custom                         = 2,
	ESleepFamily_MAX               = 3
};


// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8_t
{
	Never                          = 0,
	Exclusive                      = 1,
	Always                         = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};


// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8_t
{
	ECB_No                         = 0,
	ECB_Yes                        = 1,
	ECB_Owner                      = 2,
	ECB_MAX                        = 3
};


// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8_t
{
	No                             = 0,
	Yes                            = 1,
	EvenIfNotCollidable            = 2,
	DontExport                     = 3,
	EHasCustomNavigableGeometry_MAX = 4
};


// Enum Engine.ELightmapType
enum class ELightmapType : uint8_t
{
	Default                        = 0,
	ForceSurface                   = 1,
	ForceVolumetric                = 2,
	ELightmapType_MAX              = 3
};


// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8_t
{
	ILCQ_Off                       = 0,
	ILCQ_Point                     = 1,
	ILCQ_Volume                    = 2,
	ILCQ_MAX                       = 3
};


// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8_t
{
	SDPG_World                     = 0,
	SDPG_Foreground                = 1,
	SDPG_MAX                       = 2
};


// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	HermiteCubic                   = 2,
	Sinusoidal                     = 3,
	QuadraticInOut                 = 4,
	CubicInOut                     = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	Custom                         = 14,
	EAlphaBlendOption_MAX          = 15
};


// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8_t
{
	CanBeLeader                    = 0,
	AlwaysFollower                 = 1,
	AlwaysLeader                   = 2,
	TransitionLeader               = 3,
	TransitionFollower             = 4,
	EAnimGroupRole_MAX             = 5
};


// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8_t
{
	LinkedLayers                   = 0,
	LinkedAnimGraph                = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};


// Enum Engine.AnimationKeyFormat
enum class EAnimationKeyFormat : uint8_t
{
	AKF_ConstantKeyLerp            = 0,
	AKF_VariableKeyLerp            = 1,
	AKF_PerTrackCompression        = 2,
	AKF_MAX                        = 3
};


// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8_t
{
	RCT_Float                      = 0,
	RCT_Vector                     = 1,
	RCT_Transform                  = 2,
	RCT_MAX                        = 3
};


// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8_t
{
	AACF_NONE                      = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable                  = 3,
	AACF_DriveMaterial_DEPRECATED  = 4,
	AACF_Metadata                  = 5,
	AACF_DriveTrack                = 6,
	AACF_Disabled                  = 7,
	AACF_MAX                       = 8
};


// Enum Engine.AnimationCompressionFormat
enum class EAnimationCompressionFormat : uint8_t
{
	ACF_None                       = 0,
	ACF_Float96NoW                 = 1,
	ACF_Fixed48NoW                 = 2,
	ACF_IntervalFixed32NoW         = 3,
	ACF_Fixed32NoW                 = 4,
	ACF_Float32NoW                 = 5,
	ACF_Identity                   = 6,
	ACF_MAX                        = 7
};


// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8_t
{
	ABPT_None                      = 0,
	ABPT_RefPose                   = 1,
	ABPT_AnimScaled                = 2,
	ABPT_AnimFrame                 = 3,
	ABPT_MAX                       = 4
};


// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8_t
{
	NoRootMotionExtraction         = 0,
	IgnoreRootMotion               = 1,
	RootMotionFromEverything       = 2,
	RootMotionFromMontagesOnly     = 3,
	ERootMotionMode_MAX            = 4
};


// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8_t
{
	RefPose                        = 0,
	AnimFirstFrame                 = 1,
	Zero                           = 2,
	ERootMotionRootLock_MAX        = 3
};


// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8_t
{
	MontageLength                  = 0,
	Duration                       = 1,
	EMontagePlayReturnType_MAX     = 2
};


// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8_t
{
	DirectionalArrow               = 0,
	Sphere                         = 1,
	Line                           = 2,
	OnScreenMessage                = 3,
	CoordinateSystem               = 4,
	EDrawDebugItemType_MAX         = 5
};


// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	Proportional                   = 2,
	EAnimLinkMethod_MAX            = 3
};


// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8_t
{
	Moved                          = 0,
	NotMoved                       = 1,
	InvalidSection                 = 2,
	InvalidMontage                 = 3,
	EMontageSubStepResult_MAX      = 4
};


// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8_t
{
	Begin                          = 0,
	End                            = 1,
	EAnimNotifyEventType_MAX       = 2
};


// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8_t
{
	Default                        = 0,
	WorldSpace                     = 1,
	WorldRotation                  = 2,
	EInertializationSpace_MAX      = 3
};


// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8_t
{
	Invalid                        = 0,
	Valid                          = 1,
	Excluded                       = 2,
	EInertializationBoneState_MAX  = 3
};


// Enum Engine.EInertializationState
enum class EInertializationState : uint8_t
{
	Inactive                       = 0,
	Pending                        = 1,
	Active                         = 2,
	EInertializationState_MAX      = 3
};


// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8_t
{
	EM_Standard                    = 0,
	EM_Freeze                      = 1,
	EM_DelayedFreeze               = 2,
	EM_MAX                         = 3
};


// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8_t
{
	EDS_SourcePose                 = 0,
	EDS_DestinationPose            = 1,
	EDS_MAX                        = 2
};


// Enum Engine.ECopyType
enum class ECopyType : uint8_t
{
	PlainProperty                  = 0,
	BoolProperty                   = 1,
	StructProperty                 = 2,
	ObjectProperty                 = 3,
	NameProperty                   = 4,
	ECopyType_MAX                  = 5
};


// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8_t
{
	None                           = 0,
	LogicalNegateBool              = 1,
	EPostCopyOperation_MAX         = 2
};


// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8_t
{
	NeverAsPin                     = 0,
	PinHiddenByDefault             = 1,
	PinShownByDefault              = 2,
	AlwaysAsPin                    = 3,
	EPinHidingMode_MAX             = 4
};


// Enum Engine.AnimPhysCollisionType
enum class EAnimPhysCollisionType : uint8_t
{
	CoM                            = 0,
	CustomSphere                   = 1,
	InnerSphere                    = 2,
	OuterSphere                    = 3,
	AnimPhysCollisionType_MAX      = 4
};


// Enum Engine.AnimPhysTwistAxis
enum class EAnimPhysTwistAxis : uint8_t
{
	AxisX                          = 0,
	AxisY                          = 1,
	AxisZ                          = 2,
	AnimPhysTwistAxis_MAX          = 3
};


// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8_t
{
	ETAA_Default                   = 0,
	ETAA_Finished                  = 1,
	ETAA_Looped                    = 2,
	ETAA_MAX                       = 3
};


// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8_t
{
	TLT_StandardBlend              = 0,
	TLT_Inertialization            = 1,
	TLT_Custom                     = 2,
	TLT_MAX                        = 3
};


// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8_t
{
	TBM_Linear                     = 0,
	TBM_Cubic                      = 1,
	TBM_MAX                        = 2
};


// Enum Engine.EComponentType
enum class EComponentType : uint8_t
{
	None                           = 0,
	TranslationX                   = 1,
	TranslationY                   = 2,
	TranslationZ                   = 3,
	RotationX                      = 4,
	RotationY                      = 5,
	RotationZ                      = 6,
	Scale                          = 7,
	ScaleX                         = 8,
	ScaleY                         = 9,
	ScaleZ                         = 10,
	EComponentType_MAX             = 11
};


// Enum Engine.EAxisOption
enum class EAxisOption : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	X_Neg                          = 3,
	Y_Neg                          = 4,
	Z_Neg                          = 5,
	Custom                         = 6,
	EAxisOption_MAX                = 7
};


// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	EAnimInterpolationType_MAX     = 2
};


// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8_t
{
	Override                       = 0,
	DoNotOverride                  = 1,
	NormalizeByWeight              = 2,
	BlendByWeight                  = 3,
	UseBasePose                    = 4,
	UseMaxValue                    = 5,
	UseMinValue                    = 6,
	ECurveBlendOption_MAX          = 7
};


// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8_t
{
	AAT_None                       = 0,
	AAT_LocalSpaceBase             = 1,
	AAT_RotationOffsetMeshSpace    = 2,
	AAT_MAX                        = 3
};


// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8_t
{
	NoFiltering                    = 0,
	LOD                            = 1,
	ENotifyFilterType_MAX          = 2
};


// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8_t
{
	Queued                         = 0,
	BranchingPoint                 = 1,
	EMontageNotifyTickType_MAX     = 2
};


// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8_t
{
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation     = 1,
	BRS_CopyFromTarget             = 2,
	BRS_MAX                        = 3
};


// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8_t
{
	BCS_WorldSpace                 = 0,
	BCS_ComponentSpace             = 1,
	BCS_ParentBoneSpace            = 2,
	BCS_BoneSpace                  = 3,
	BCS_MAX                        = 4
};


// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8_t
{
	BA_X                           = 0,
	BA_Y                           = 1,
	BA_Z                           = 2,
	BA_MAX                         = 3
};


// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8_t
{
	Unknown                        = 0,
	NeverCook                      = 1,
	DevelopmentCook                = 2,
	DevelopmentAlwaysCook          = 3,
	AlwaysCook                     = 4,
	EPrimaryAssetCookRule_MAX      = 5
};


// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8_t
{
	Continues                      = 0,
	Silent                         = 1,
	Hold                           = 2,
	ENaturalSoundFalloffMode_MAX   = 3
};


// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8_t
{
	Sphere                         = 0,
	Capsule                        = 1,
	Box                            = 2,
	Cone                           = 3,
	EAttenuationShape_MAX          = 4
};


// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	Inverse                        = 2,
	LogReverse                     = 3,
	NaturalSound                   = 4,
	Custom                         = 5,
	EAttenuationDistanceModel_MAX  = 6
};


// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8_t
{
	Linear                         = 0,
	Logarithmic                    = 1,
	SCurve                         = 2,
	Sin                            = 3,
	Count                          = 4,
	EAudioFaderCurve_MAX           = 5
};


// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8_t
{
	Playing                        = 0,
	Stopped                        = 1,
	Paused                         = 2,
	FadingIn                       = 3,
	FadingOut                      = 4,
	Count                          = 5,
	EAudioComponentPlayState_MAX   = 6
};


// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8_t
{
	Speaker                        = 0,
	Controller                     = 1,
	ControllerFallbackToSpeaker    = 2,
	EAudioOutputTarget_MAX         = 3
};


// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	FullVolume                     = 2,
	EMonoChannelUpmixMethod_MAX    = 3
};


// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8_t
{
	Linear                         = 0,
	EqualPower                     = 1,
	EPanningMethod_MAX             = 2
};


// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : uint8_t
{
	Low16000Hz                     = 0,
	Normal24000Hz                  = 1,
	EVoiceSampleRate_MAX           = 2
};


// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8_t
{
	BL_AfterTonemapping            = 0,
	BL_BeforeTonemapping           = 1,
	BL_BeforeTranslucency          = 2,
	BL_ReplacingTonemapper         = 3,
	BL_SSRInput                    = 4,
	BL_MAX                         = 5
};


// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8_t
{
	AllAnimations                  = 0,
	HighestWeightedAnimation       = 1,
	None                           = 2,
	ENotifyTriggerMode_MAX         = 3
};


// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8_t
{
	BSA_None                       = 0,
	BSA_X                          = 1,
	BSA_Y                          = 2,
	BSA_Max                        = 3
};


// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8_t
{
	Disabled                       = 0,
	Dependency                     = 1,
	ExplicitlyEnabled              = 2,
	EBlueprintNativizationFlag_MAX = 3
};


// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8_t
{
	Default                        = 0,
	Development                    = 1,
	FinalRelease                   = 2,
	EBlueprintCompileMode_MAX      = 3
};


// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8_t
{
	BPTYPE_Normal                  = 0,
	BPTYPE_Const                   = 1,
	BPTYPE_MacroLibrary            = 2,
	BPTYPE_Interface               = 3,
	BPTYPE_LevelScript             = 4,
	BPTYPE_FunctionLibrary         = 5,
	BPTYPE_MAX                     = 6
};


// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8_t
{
	BS_Unknown                     = 0,
	BS_Dirty                       = 1,
	BS_Error                       = 2,
	BS_UpToDate                    = 3,
	BS_BeingCreated                = 4,
	BS_UpToDateWithWarnings        = 5,
	BS_MAX                         = 6
};


// Enum Engine.EBodyCollisionResponse
enum class EBodyCollisionResponse : uint8_t
{
	BodyCollision_Enabled          = 0,
	BodyCollision_Disabled         = 1,
	BodyCollision_MAX              = 2
};


// Enum Engine.EPhysicsType
enum class EPhysicsType : uint8_t
{
	PhysType_Default               = 0,
	PhysType_Kinematic             = 1,
	PhysType_Simulated             = 2,
	PhysType_MAX                   = 3
};


// Enum Engine.ECollisionTraceFlag
enum class ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault                 = 0,
	CTF_UseSimpleAndComplex        = 1,
	CTF_UseSimpleAsComplex         = 2,
	CTF_UseComplexAsSimple         = 3,
	CTF_MAX                        = 4
};


// Enum Engine.EBrushType
enum class EBrushType : uint8_t
{
	Brush_Default                  = 0,
	Brush_Add                      = 1,
	Brush_Subtract                 = 2,
	Brush_MAX                      = 3
};


// Enum Engine.ECsgOper
enum class ECsgOper : uint8_t
{
	CSG_Active                     = 0,
	CSG_Add                        = 1,
	CSG_Subtract                   = 2,
	CSG_Intersect                  = 3,
	CSG_Deintersect                = 4,
	CSG_None                       = 5,
	CSG_MAX                        = 6
};


// Enum Engine.EInitialOscillatorOffset
enum class EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom               = 0,
	EOO_OffsetZero                 = 1,
	EOO_MAX                        = 2
};


// Enum Engine.EOscillatorWaveform
enum class EOscillatorWaveform : uint8_t
{
	SineWave                       = 0,
	PerlinNoise                    = 1,
	EOscillatorWaveform_MAX        = 2
};


// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8_t
{
	Linear                         = 0,
	Quadratic                      = 1,
	ECameraShakeAttenuation_MAX    = 2
};


// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8_t
{
	CABM_Linear                    = 0,
	CABM_Cubic                     = 1,
	CABM_MAX                       = 2
};


// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8_t
{
	CSD_KeyValueReadComplete       = 0,
	CSD_KeyValueWriteComplete      = 1,
	CSD_ValueChanged               = 2,
	CSD_DocumentQueryComplete      = 3,
	CSD_DocumentReadComplete       = 4,
	CSD_DocumentWriteComplete      = 5,
	CSD_DocumentConflictDetected   = 6,
	CSD_MAX                        = 7
};


// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8_t
{
	SLERP                          = 0,
	TwistAndSwing                  = 1,
	EAngularDriveMode_MAX          = 2
};


// Enum Engine.ELinearConstraintMotion
enum class ELinearConstraintMotion : uint8_t
{
	LCM_Free                       = 0,
	LCM_Limited                    = 1,
	LCM_Locked                     = 2,
	LCM_MAX                        = 3
};


// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8_t
{
	Empty                          = 0,
	SimpleCurves                   = 1,
	RichCurves                     = 2,
	ECurveTableMode_MAX            = 3
};


// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8_t
{
	RowFound                       = 0,
	RowNotFound                    = 1,
	EEvaluateCurveTableResult_MAX  = 2
};


// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8_t
{
	Singular                       = 0,
	Plural                         = 1,
	EGrammaticalNumber_MAX         = 2
};


// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8_t
{
	Neuter                         = 0,
	Masculine                      = 1,
	Feminine                       = 2,
	Mixed                          = 3,
	EGrammaticalGender_MAX         = 4
};


// Enum Engine.DistributionParamMode
enum class EDistributionParamMode : uint8_t
{
	DPM_Normal                     = 0,
	DPM_Abs                        = 1,
	DPM_Direct                     = 2,
	DPM_MAX                        = 3
};


// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8_t
{
	EDVMF_Same                     = 0,
	EDVMF_Different                = 1,
	EDVMF_Mirror                   = 2,
	EDVMF_MAX                      = 3
};


// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8_t
{
	EDVLF_None                     = 0,
	EDVLF_XY                       = 1,
	EDVLF_XZ                       = 2,
	EDVLF_YZ                       = 3,
	EDVLF_XYZ                      = 4,
	EDVLF_MAX                      = 5
};


// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	DevelopmentOnly                = 2,
	ENodeEnabledState_MAX          = 3
};


// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8_t
{
	NoPins                         = 0,
	Shown                          = 1,
	Hidden                         = 2,
	ENodeAdvancedPins_MAX          = 3
};


// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8_t
{
	FullTitle                      = 0,
	ListView                       = 1,
	EditableTitle                  = 2,
	MenuTitle                      = 3,
	MAX_TitleTypes                 = 4,
	ENodeTitleType_MAX             = 5
};


// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8_t
{
	None                           = 0,
	Array                          = 1,
	Set                            = 2,
	Map                            = 3,
	EPinContainerType_MAX          = 4
};


// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8_t
{
	EGPD_Input                     = 0,
	EGPD_Output                    = 1,
	EGPD_MAX                       = 2
};


// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8_t
{
	BPST_Original                  = 0,
	BPST_VariantA                  = 1,
	BPST_MAX                       = 2
};


// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8_t
{
	CONNECT_RESPONSE_MAKE          = 0,
	CONNECT_RESPONSE_DISALLOW      = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAX           = 6
};


// Enum Engine.EGraphType
enum class EGraphType : uint8_t
{
	GT_Function                    = 0,
	GT_Ubergraph                   = 1,
	GT_Macro                       = 2,
	GT_Animation                   = 3,
	GT_StateMachine                = 4,
	GT_MAX                         = 5
};


// Enum Engine.ETransitionType
enum class ETransitionType : uint8_t
{
	None                           = 0,
	Paused                         = 1,
	Loading                        = 2,
	Saving                         = 3,
	Connecting                     = 4,
	Precaching                     = 5,
	WaitingToConnect               = 6,
	MAX                            = 7
};


// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8_t
{
	FULLYLOAD_Map                  = 0,
	FULLYLOAD_Game_PreLoadClass    = 1,
	FULLYLOAD_Game_PostLoadClass   = 2,
	FULLYLOAD_Always               = 3,
	FULLYLOAD_Mutator              = 4,
	FULLYLOAD_MAX                  = 5
};


// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8_t
{
	VMI_BrushWireframe             = 0,
	VMI_Wireframe                  = 1,
	VMI_Unlit                      = 2,
	VMI_Lit                        = 3,
	VMI_Lit_DetailLighting         = 4,
	VMI_LightingOnly               = 5,
	VMI_LightComplexity            = 6,
	VMI_ShaderComplexity           = 7,
	VMI_LightmapDensity            = 8,
	VMI_LitLightmapDensity         = 9,
	VMI_ReflectionOverride         = 10,
	VMI_VisualizeBuffer            = 11,
	VMI_StationaryLightOverlap     = 12,
	VMI_CollisionPawn              = 13,
	VMI_CollisionVisibility        = 14,
	VMI_LODColoration              = 15,
	VMI_QuadOverdraw               = 16,
	VMI_PrimitiveDistanceAccuracy  = 17,
	VMI_MeshUVDensityAccuracy      = 18,
	VMI_ShaderComplexityWithQuadOverdraw = 19,
	VMI_HLODColoration             = 20,
	VMI_GroupLODColoration         = 21,
	VMI_MaterialTextureScaleAccuracy = 22,
	VMI_RequiredTextureResolution  = 23,
	VMI_PathTracing                = 24,
	VMI_RayTracingDebug            = 25,
	VMI_Max                        = 26,
	VMI_Unknown                    = 27
};


// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8_t
{
	Generic                        = 0,
	DemoNotFound                   = 1,
	Corrupt                        = 2,
	InvalidVersion                 = 3,
	InitBase                       = 4,
	GameSpecificHeader             = 5,
	ReplayStreamerInternal         = 6,
	LoadMap                        = 7,
	Serialization                  = 8,
	EDemoPlayFailure_MAX           = 9
};


// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8_t
{
	NotLagging                     = 0,
	Lagging                        = 1,
	ENetworkLagState_MAX           = 2
};


// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8_t
{
	NoCapture                      = 0,
	CapturePermanently             = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown         = 3,
	CaptureDuringRightMouseDown    = 4,
	EMouseCaptureMode_MAX          = 5
};


// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};


// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8_t
{
	Default                        = 0,
	ForceCPUAndGPU                 = 1,
	EMeshBufferAccess_MAX          = 2
};


// Enum Engine.EConstraintFrame
enum class EConstraintFrame : uint8_t
{
	Frame1                         = 0,
	Frame2                         = 1,
	EConstraintFrame_MAX           = 2
};


// Enum Engine.EAngularConstraintMotion
enum class EAngularConstraintMotion : uint8_t
{
	ACM_Free                       = 0,
	ACM_Limited                    = 1,
	ACM_Locked                     = 2,
	ACM_MAX                        = 3
};


// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8_t
{
	Invalid                        = 0,
	Bone                           = 1,
	Socket                         = 2,
	EComponentSocketType_MAX       = 3
};


// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Cyan                           = 3,
	Magenta                        = 4,
	Yellow                         = 5,
	White                          = 6,
	Black                          = 7,
	MAX                            = 8
};


// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8_t
{
	ShiftBucket0                   = 0,
	ShiftBucket1                   = 1,
	ShiftBucket2                   = 2,
	ShiftBucket3                   = 3,
	ShiftBucket4                   = 4,
	ShiftBucket5                   = 5,
	ShiftBucketMax                 = 6,
	EUpdateRateShiftBucket_MAX     = 7
};


// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8_t
{
	SMF_None                       = 0,
	SMF_Streamed                   = 1,
	SMF_MAX                        = 2
};


// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8_t
{
	LMPT_NormalPadding             = 0,
	LMPT_PrePadding                = 1,
	LMPT_NoPadding                 = 2,
	LMPT_MAX                       = 3
};


// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8_t
{
	ETS_EventSignature             = 0,
	ETS_FloatSignature             = 1,
	ETS_VectorSignature            = 2,
	ETS_LinearColorSignature       = 3,
	ETS_InvalidSignature           = 4,
	ETS_MAX                        = 5
};


// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8_t
{
	BSIT_Average                   = 0,
	BSIT_Linear                    = 1,
	BSIT_Cubic                     = 2,
	BSIT_MAX                       = 3
};


// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8_t
{
	OverlapFilter_All              = 0,
	OverlapFilter_DynamicOnly      = 1,
	OverlapFilter_StaticOnly       = 2,
	OverlapFilter_MAX              = 3
};


// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8_t
{
	Quality_Preview                = 0,
	Quality_Medium                 = 1,
	Quality_High                   = 2,
	Quality_Production             = 3,
	Quality_MAX                    = 4
};


// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8_t
{
	MSC_Less                       = 0,
	MSC_LessEqual                  = 1,
	MSC_Greater                    = 2,
	MSC_GreaterEqual               = 3,
	MSC_Equal                      = 4,
	MSC_NotEqual                   = 5,
	MSC_Never                      = 6,
	MSC_Always                     = 7,
	MSC_Count                      = 8,
	MSC_MAX                        = 9
};


// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8_t
{
	SAMPLERTYPE_Color              = 0,
	SAMPLERTYPE_Grayscale          = 1,
	SAMPLERTYPE_Alpha              = 2,
	SAMPLERTYPE_Normal             = 3,
	SAMPLERTYPE_Masks              = 4,
	SAMPLERTYPE_DistanceFieldFont  = 5,
	SAMPLERTYPE_LinearColor        = 6,
	SAMPLERTYPE_LinearGrayscale    = 7,
	SAMPLERTYPE_Data               = 8,
	SAMPLERTYPE_External           = 9,
	SAMPLERTYPE_VirtualColor       = 10,
	SAMPLERTYPE_VirtualGrayscale   = 11,
	SAMPLERTYPE_VirtualAlpha       = 12,
	SAMPLERTYPE_VirtualNormal      = 13,
	SAMPLERTYPE_VirtualMasks       = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX                = 17
};


// Enum Engine.EMaterialTessellationMode
enum class EMaterialTessellationMode : uint8_t
{
	MTM_NoTessellation             = 0,
	MTM_FlatTessellation           = 1,
	MTM_PNTriangles                = 2,
	MTM_MAX                        = 3
};


// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8_t
{
	MSM_Unlit                      = 0,
	MSM_DefaultLit                 = 1,
	MSM_Subsurface                 = 2,
	MSM_PreintegratedSkin          = 3,
	MSM_ClearCoat                  = 4,
	MSM_SubsurfaceProfile          = 5,
	MSM_TwoSidedFoliage            = 6,
	MSM_Hair                       = 7,
	MSM_Cloth                      = 8,
	MSM_Eye                        = 9,
	MSM_SingleLayerWater           = 10,
	MSM_ThinTranslucent            = 11,
	MSM_Bark                       = 12,
	MSM_NUM                        = 13,
	MSM_FromMaterialExpression     = 14,
	MSM_MAX                        = 15
};


// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8_t
{
	SceneDepth                     = 0,
	DistanceField                  = 1,
	EParticleCollisionMode_MAX     = 2
};


// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8_t
{
	ETrailWidthMode_FromCentre     = 0,
	ETrailWidthMode_FromFirst      = 1,
	ETrailWidthMode_FromSecond     = 2,
	ETrailWidthMode_MAX            = 3
};


// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8_t
{
	Force8BitsPerChannel           = 0,
	Default                        = 1,
	HighPrecisionNormals           = 2,
	Force16BitsPerChannel          = 3,
	EGBufferFormat_MAX             = 4
};


// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8_t
{
	SCCM_Overwrite                 = 0,
	SCCM_Additive                  = 1,
	SCCM_Composite                 = 2,
	SCCM_MAX                       = 3
};


// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8_t
{
	SCS_SceneColorHDR              = 0,
	SCS_SceneColorHDRNoAlpha       = 1,
	SCS_FinalColorLDR              = 2,
	SCS_SceneColorSceneDepth       = 3,
	SCS_SceneDepth                 = 4,
	SCS_DeviceDepth                = 5,
	SCS_Normal                     = 6,
	SCS_BaseColor                  = 7,
	SCS_FinalColorHDR              = 8,
	SCS_FinalToneCurveHDR          = 9,
	SCS_MAX                        = 10
};


// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8_t
{
	SortByDistance                 = 0,
	SortByProjectedZ               = 1,
	SortAlongAxis                  = 2,
	ETranslucentSortPolicy_MAX     = 3
};


// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8_t
{
	RM_IndexOfRefraction           = 0,
	RM_PixelNormalOffset           = 1,
	RM_MAX                         = 2
};


// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8_t
{
	TLM_VolumetricNonDirectional   = 0,
	TLM_VolumetricDirectional      = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface                    = 4,
	TLM_SurfacePerPixelLighting    = 5,
	TLM_MAX                        = 6
};


// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8_t
{
	SSM_FromTextureAsset           = 0,
	SSM_Wrap_WorldGroupSettings    = 1,
	SSM_Clamp_WorldGroupSettings   = 2,
	SSM_MAX                        = 3
};


// Enum Engine.EDecalDetailRenderingMode
enum class EDecalDetailRenderingMode : uint8_t
{
	DDRM_Low                       = 0,
	DDRM_Medium                    = 1,
	DDRM_High                      = 2,
	DDRM_MAX                       = 3
};


// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8_t
{
	OCM_Minimum                    = 0,
	OCM_Multiply                   = 1,
	OCM_MAX                        = 2
};


// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8_t
{
	AspectRatio_MaintainYFOV       = 0,
	AspectRatio_MaintainXFOV       = 1,
	AspectRatio_MajorAxisFOV       = 2,
	AspectRatio_MAX                = 3
};


// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8_t
{
	Offline                        = 0,
	Runtime                        = 1,
	EFontCacheType_MAX             = 2
};


// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8_t
{
	FontICS_Default                = 0,
	FontICS_Ansi                   = 1,
	FontICS_Symbol                 = 2,
	FontICS_MAX                    = 3
};


// Enum Engine.EStandbyType
enum class EStandbyType : uint8_t
{
	STDBY_Rx                       = 0,
	STDBY_Tx                       = 1,
	STDBY_BadPing                  = 2,
	STDBY_MAX                      = 3
};


// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8_t
{
	DoNotTrace                     = 0,
	TraceFullPath                  = 1,
	OnlyTraceWhileAscending        = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};


// Enum Engine.EWindowMode
enum class EWindowMode : uint8_t
{
	Fullscreen                     = 0,
	WindowedFullscreen             = 1,
	Windowed                       = 2,
	EWindowMode_MAX                = 3
};


// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8_t
{
	HPP_World                      = 0,
	HPP_Wireframe                  = 1,
	HPP_Foreground                 = 2,
	HPP_UI                         = 3,
	HPP_MAX                        = 4
};


// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8_t
{
	Luminance                      = 0,
	Red                            = 1,
	Green                          = 2,
	Blue                           = 3,
	Alpha                          = 4,
	EImportanceWeight_MAX          = 5
};


// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8_t
{
	AMD_ClickedBanner              = 0,
	AMD_UserClosedAd               = 1,
	AMD_MAX                        = 2
};


// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8_t
{
	Float                          = 0,
	Bool                           = 1,
	Curve                          = 2,
	EAnimAlphaInputType_MAX        = 3
};


// Enum Engine.ETrackActiveCondition
enum class ETrackActiveCondition : uint8_t
{
	ETAC_Always                    = 0,
	ETAC_GoreEnabled               = 1,
	ETAC_GoreDisabled              = 2,
	ETAC_MAX                       = 3
};


// Enum Engine.EInterpTrackMoveRotMode
enum class EInterpTrackMoveRotMode : uint8_t
{
	IMR_Keyframed                  = 0,
	IMR_LookAtGroup                = 1,
	IMR_Ignore                     = 2,
	IMR_MAX                        = 3
};


// Enum Engine.EInterpMoveAxis
enum class EInterpMoveAxis : uint8_t
{
	AXIS_TranslationX              = 0,
	AXIS_TranslationY              = 1,
	AXIS_TranslationZ              = 2,
	AXIS_RotationX                 = 3,
	AXIS_RotationY                 = 4,
	AXIS_RotationZ                 = 5,
	AXIS_MAX                       = 6
};


// Enum Engine.ETrackToggleAction
enum class ETrackToggleAction : uint8_t
{
	ETTA_Off                       = 0,
	ETTA_On                        = 1,
	ETTA_Toggle                    = 2,
	ETTA_Trigger                   = 3,
	ETTA_MAX                       = 4
};


// Enum Engine.EVisibilityTrackCondition
enum class EVisibilityTrackCondition : uint8_t
{
	EVTC_Always                    = 0,
	EVTC_GoreEnabled               = 1,
	EVTC_GoreDisabled              = 2,
	EVTC_MAX                       = 3
};


// Enum Engine.EVisibilityTrackAction
enum class EVisibilityTrackAction : uint8_t
{
	EVTA_Hide                      = 0,
	EVTA_Show                      = 1,
	EVTA_Toggle                    = 2,
	EVTA_MAX                       = 3
};


// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8_t
{
	None                           = 0,
	Scroll                         = 1,
	Magnify                        = 2,
	Swipe                          = 3,
	Rotate                         = 4,
	LongPress                      = 5,
	ESlateGesture_MAX              = 6
};


// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8_t
{
	First                          = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	EMatrixColumns_MAX             = 4
};


// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8_t
{
	QuatInterp                     = 0,
	EulerInterp                    = 1,
	DualQuatInterp                 = 2,
	ELerpInterpolationMode_MAX     = 3
};


// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8_t
{
	Linear                         = 0,
	Step                           = 1,
	SinusoidalIn                   = 2,
	SinusoidalOut                  = 3,
	SinusoidalInOut                = 4,
	EaseIn                         = 5,
	EaseOut                        = 6,
	EaseInOut                      = 7,
	ExpoIn                         = 8,
	ExpoOut                        = 9,
	ExpoInOut                      = 10,
	CircularIn                     = 11,
	CircularOut                    = 12,
	CircularInOut                  = 13,
	EEasingFunc_MAX                = 14
};


// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8_t
{
	HalfToEven                     = 0,
	HalfFromZero                   = 1,
	HalfToZero                     = 2,
	FromZero                       = 3,
	ToZero                         = 4,
	ToNegativeInfinity             = 5,
	ToPositiveInfinity             = 6,
	ERoundingMode_MAX              = 7
};


// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8_t
{
	SVB_Loading                    = 0,
	SVB_LoadingAndVisibility       = 1,
	SVB_VisibilityBlockingOnLoad   = 2,
	SVB_BlockingOnLoad             = 3,
	SVB_LoadingNotVisible          = 4,
	SVB_MAX                        = 5
};


// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8_t
{
	MDR_None                       = 0,
	MDR_ColorNormalRoughness       = 1,
	MDR_Color                      = 2,
	MDR_ColorNormal                = 3,
	MDR_ColorRoughness             = 4,
	MDR_Normal                     = 5,
	MDR_NormalRoughness            = 6,
	MDR_Roughness                  = 7,
	MDR_MAX                        = 8
};


// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8_t
{
	DBM_Translucent                = 0,
	DBM_Stain                      = 1,
	DBM_Normal                     = 2,
	DBM_Emissive                   = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color              = 5,
	DBM_DBuffer_ColorNormal        = 6,
	DBM_DBuffer_ColorRoughness     = 7,
	DBM_DBuffer_Normal             = 8,
	DBM_DBuffer_NormalRoughness    = 9,
	DBM_DBuffer_Roughness          = 10,
	DBM_DBuffer_Emissive           = 11,
	DBM_DBuffer_AlphaComposite     = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite             = 15,
	DBM_AmbientOcclusion           = 16,
	DBM_MAX                        = 17
};


// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8_t
{
	TCC_Red                        = 0,
	TCC_Green                      = 1,
	TCC_Blue                       = 2,
	TCC_Alpha                      = 3,
	TCC_MAX                        = 4
};


// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8_t
{
	Blend                          = 0,
	UseA                           = 1,
	UseB                           = 2,
	EMaterialAttributeBlend_MAX    = 3
};


// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EChannelMaskParameterColor_MAX = 4
};


// Enum Engine.EClampMode
enum class EClampMode : uint8_t
{
	CMODE_Clamp                    = 0,
	CMODE_ClampMin                 = 1,
	CMODE_ClampMax                 = 2,
	CMODE_MAX                      = 3
};


// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8_t
{
	CMOT_Float1                    = 0,
	CMOT_Float2                    = 1,
	CMOT_Float3                    = 2,
	CMOT_Float4                    = 3,
	CMOT_MAX                       = 4
};


// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8_t
{
	TDOF_NearAndFarMask            = 0,
	TDOF_NearMask                  = 1,
	TDOF_FarMask                   = 2,
	TDOF_CircleOfConfusionRadius   = 3,
	TDOF_MAX                       = 4
};


// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8_t
{
	FunctionInput_Scalar           = 0,
	FunctionInput_Vector2          = 1,
	FunctionInput_Vector3          = 2,
	FunctionInput_Vector4          = 3,
	FunctionInput_Texture2D        = 4,
	FunctionInput_TextureCube      = 5,
	FunctionInput_Texture2DArray   = 6,
	FunctionInput_VolumeTexture    = 7,
	FunctionInput_StaticBool       = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal  = 10,
	FunctionInput_MAX              = 11
};


// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8_t
{
	NOISEFUNCTION_SimplexTex       = 0,
	NOISEFUNCTION_GradientTex      = 1,
	NOISEFUNCTION_GradientTex3D    = 2,
	NOISEFUNCTION_GradientALU      = 3,
	NOISEFUNCTION_ValueALU         = 4,
	NOISEFUNCTION_VoronoiALU       = 5,
	NOISEFUNCTION_MAX              = 6
};


// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8_t
{
	RVTMVM_None                    = 0,
	RVTMVM_MipLevel                = 1,
	RVTMVM_MipBias                 = 2,
	RVTMVM_MAX                     = 3
};


// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8_t
{
	Coordinates                    = 0,
	OffsetFraction                 = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};


// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8_t
{
	STLOD_Pop                      = 0,
	STLOD_Smooth                   = 1,
	STLOD_MAX                      = 2
};


// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8_t
{
	STW_None                       = 0,
	STW_Fastest                    = 1,
	STW_Fast                       = 2,
	STW_Better                     = 3,
	STW_Best                       = 4,
	STW_Palm                       = 5,
	STW_BestPlus                   = 6,
	STW_MAX                        = 7
};


// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8_t
{
	STG_Branch                     = 0,
	STG_Frond                      = 1,
	STG_Leaf                       = 2,
	STG_FacingLeaf                 = 3,
	STG_Billboard                  = 4,
	STG_MAX                        = 5
};


// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8_t
{
	TMTM_TextureSize               = 0,
	TMTM_TexelSize                 = 1,
	TMTM_MAX                       = 2
};


// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8_t
{
	TMVM_None                      = 0,
	TMVM_MipLevel                  = 1,
	TMVM_MipBias                   = 2,
	TMVM_Derivative                = 3,
	TMVM_MAX                       = 4
};


// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8_t
{
	TRANSFORM_Tangent              = 0,
	TRANSFORM_Local                = 1,
	TRANSFORM_World                = 2,
	TRANSFORM_View                 = 3,
	TRANSFORM_Camera               = 4,
	TRANSFORM_ParticleWorld        = 5,
	TRANSFORM_MAX                  = 6
};


// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8_t
{
	TRANSFORMSOURCE_Tangent        = 0,
	TRANSFORMSOURCE_Local          = 1,
	TRANSFORMSOURCE_World          = 2,
	TRANSFORMSOURCE_View           = 3,
	TRANSFORMSOURCE_Camera         = 4,
	TRANSFORMSOURCE_ParticleWorld  = 5,
	TRANSFORMSOURCE_MAX            = 6
};


// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8_t
{
	TRANSFORMPOSSOURCE_Local       = 0,
	TRANSFORMPOSSOURCE_World       = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View        = 3,
	TRANSFORMPOSSOURCE_Camera      = 4,
	TRANSFORMPOSSOURCE_Particle    = 5,
	TRANSFORMPOSSOURCE_MAX         = 6
};


// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8_t
{
	VNF_CellnoiseALU               = 0,
	VNF_VectorALU                  = 1,
	VNF_GradientALU                = 2,
	VNF_CurlALU                    = 3,
	VNF_VoronoiALU                 = 4,
	VNF_MAX                        = 5
};


// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8_t
{
	MEVP_BufferSize                = 0,
	MEVP_FieldOfView               = 1,
	MEVP_TanHalfFieldOfView        = 2,
	MEVP_ViewSize                  = 3,
	MEVP_WorldSpaceViewPosition    = 4,
	MEVP_WorldSpaceCameraPosition  = 5,
	MEVP_ViewportOffset            = 6,
	MEVP_TemporalSampleCount       = 7,
	MEVP_TemporalSampleIndex       = 8,
	MEVP_TemporalSampleOffset      = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure               = 12,
	MEVP_MAX                       = 13
};


// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8_t
{
	WPT_Default                    = 0,
	WPT_ExcludeAllShaderOffsets    = 1,
	WPT_CameraRelative             = 2,
	WPT_CameraRelativeNoOffsets    = 3,
	WPT_MAX                        = 4
};


// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8_t
{
	Default                        = 0,
	MaterialLayer                  = 1,
	MaterialLayerBlend             = 2,
	EMaterialFunctionUsage_MAX     = 3
};


// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8_t
{
	MATUSAGE_SkeletalMesh          = 0,
	MATUSAGE_ParticleSprites       = 1,
	MATUSAGE_BeamTrails            = 2,
	MATUSAGE_MeshParticles         = 3,
	MATUSAGE_StaticLighting        = 4,
	MATUSAGE_MorphTargets          = 5,
	MATUSAGE_SplineMesh            = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections   = 8,
	MATUSAGE_Clothing              = 9,
	MATUSAGE_NiagaraSprites        = 10,
	MATUSAGE_NiagaraRibbons        = 11,
	MATUSAGE_NiagaraMeshParticles  = 12,
	MATUSAGE_GeometryCache         = 13,
	MATUSAGE_Water                 = 14,
	MATUSAGE_HairStrands           = 15,
	MATUSAGE_LidarPointCloud       = 16,
	MATUSAGE_MAX                   = 17
};


// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8_t
{
	LayerParameter                 = 0,
	BlendParameter                 = 1,
	GlobalParameter                = 2,
	EMaterialParameterAssociation_MAX = 3
};


// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8_t
{
	MaterialMergeType_Default      = 0,
	MaterialMergeType_Simplygon    = 1,
	MaterialMergeType_MAX          = 2
};


// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8_t
{
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_MAX          = 4
};


// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8_t
{
	PPI_SceneColor                 = 0,
	PPI_SceneDepth                 = 1,
	PPI_DiffuseColor               = 2,
	PPI_SpecularColor              = 3,
	PPI_SubsurfaceColor            = 4,
	PPI_BaseColor                  = 5,
	PPI_Specular                   = 6,
	PPI_Metallic                   = 7,
	PPI_WorldNormal                = 8,
	PPI_SeparateTranslucency       = 9,
	PPI_Opacity                    = 10,
	PPI_Roughness                  = 11,
	PPI_MaterialAO                 = 12,
	PPI_CustomDepth                = 13,
	PPI_PostProcessInput0          = 14,
	PPI_PostProcessInput1          = 15,
	PPI_PostProcessInput2          = 16,
	PPI_PostProcessInput3          = 17,
	PPI_PostProcessInput4          = 18,
	PPI_PostProcessInput5          = 19,
	PPI_PostProcessInput6          = 20,
	PPI_DecalMask                  = 21,
	PPI_ShadingModelColor          = 22,
	PPI_ShadingModelID             = 23,
	PPI_AmbientOcclusion           = 24,
	PPI_CustomStencil              = 25,
	PPI_StoredBaseColor            = 26,
	PPI_StoredSpecular             = 27,
	PPI_Velocity                   = 28,
	PPI_WorldTangent               = 29,
	PPI_Anisotropy                 = 30,
	PPI_MAX                        = 31
};


// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8_t
{
	MD_Surface                     = 0,
	MD_DeferredDecal               = 1,
	MD_LightFunction               = 2,
	MD_Volume                      = 3,
	MD_PostProcess                 = 4,
	MD_UI                          = 5,
	MD_RuntimeVirtualTexture       = 6,
	MD_MAX                         = 7
};


// Enum Engine.EMeshInstancingReplacementMethod
enum class EMeshInstancingReplacementMethod : uint8_t
{
	RemoveOriginalActors           = 0,
	KeepOriginalActorsAsEditorOnly = 1,
	EMeshInstancingReplacementMethod_MAX = 2
};


// Enum Engine.EUVOutput
enum class EUVOutput : uint8_t
{
	DoNotOutputChannel             = 0,
	OutputChannel                  = 1,
	EUVOutput_MAX                  = 2
};


// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8_t
{
	MeshMergeType_Default          = 0,
	MeshMergeType_MergeActor       = 1,
	MeshMergeType_MAX              = 2
};


// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8_t
{
	AllLODs                        = 0,
	SpecificLOD                    = 1,
	CalculateLOD                   = 2,
	LowestDetailLOD                = 3,
	EMeshLODSelectionType_MAX      = 4
};


// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8_t
{
	AngleWeighted                  = 0,
	AreaWeighted                   = 1,
	EqualWeighted                  = 2,
	EProxyNormalComputationMethod_MAX = 3
};


// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8_t
{
	High                           = 0,
	Medium                         = 1,
	Low                            = 2,
	ELandscapeCullingPrecision_MAX = 3
};


// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8_t
{
	Triangles                      = 0,
	Vertices                       = 1,
	Any                            = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};


// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8_t
{
	Off                            = 0,
	Lowest                         = 1,
	Low                            = 2,
	Normal                         = 3,
	High                           = 4,
	Highest                        = 5,
	EMeshFeatureImportance_MAX     = 6
};


// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	EVertexPaintAxis_MAX           = 3
};


// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8_t
{
	MTR_Succeeded                  = 0,
	MTR_Failed                     = 1,
	MTR_Canceled                   = 2,
	MTR_RestoredFromServer         = 3,
	MTR_MAX                        = 4
};


// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8_t
{
	MTD_PurchaseQueryComplete      = 0,
	MTD_PurchaseComplete           = 1,
	MTD_MAX                        = 2
};


// Enum Engine.EKillType
enum class EKillType : uint8_t
{
	Kill                           = 0,
	Knockout                       = 1,
	Resuscitated                   = 2,
	Reported                       = 3,
	EKillType_MAX                  = 4
};


// Enum Engine.EReplayFailure
enum class EReplayFailure : uint8_t
{
	OK                             = 0,
	PlayReplayCommand              = 1,
	PlayReplayNoWorld              = 2,
	PlayReplayCorrupt              = 3,
	PlayReplayCreateDriver         = 4,
	ConnectNoWorld                 = 5,
	ConnectNoGameInstance          = 6,
	ConnectInitBase                = 7,
	ConnectCreateReplayStreamer    = 8,
	PlaybackStreamerReady          = 9,
	ConnectNoWorldContext          = 10,
	ReadHeaderDemoNotFound         = 11,
	ReadHeaderCorrupt              = 12,
	ReadHeaderGameSpecific         = 13,
	TickPlayStreamerInternal       = 14,
	TickPlayStreamerFileAr         = 15,
	ReadFrameFileAr                = 16,
	ReadFrameStreamerInternal      = 17,
	ReadFrameMismatchTimeChecksum  = 18,
	ReadFrameServerDeltaTime       = 19,
	ReadFrameReadPacketError       = 20,
	ReadFrameNotReachable1         = 21,
	ReadFrameNotReachable2         = 22,
	ProcessPacket                  = 23,
	CheckpointReady                = 24,
	CheckpointDriverInvalid        = 25,
	InstantReady                   = 26,
	InstantDriverInvalid           = 27,
	DownloadHeader                 = 28,
	DownloadHeaderLevelNamesAndTimes = 29,
	LoadMap                        = 30,
	PlayKillcamNoWorld             = 31,
	PlayKillcamNoDriver            = 32,
	PlayKillcamNoActiveReplay      = 33,
	PlayKillcamInvalidArguments    = 34,
	PlayKillcamCorrupt             = 35,
	PlayKillcamSetViewTarget       = 36,
	PlayKillcamSetTime             = 37,
	PlayKillcamFindViewTargetTimeout = 38,
	SpawnReplayPcNoWorld           = 39,
	SpawnReplayPcLoadClass         = 40,
	SpawnReplayPc                  = 41,
	PLAYBACK_FAILURE_MAX           = 42,
	RecordingReplayCommand         = 43,
	RecordingReplayRejectOption    = 44,
	RecordingReplayNoWorld         = 45,
	RecordingReplayAlreadyPlaying  = 46,
	RecordingReplayCorrupt         = 47,
	RecordingReplayCreateDriver    = 48,
	RecordingReplayPrepare         = 49,
	ListenNoWorld                  = 50,
	ListenNoGameInstance           = 51,
	ListenInitBase                 = 52,
	ListenCreateReplayStreamer     = 53,
	ListenNoWorldSettings          = 54,
	ListenWriteHeader              = 55,
	RecordingStreamerReady         = 56,
	ContinueListen                 = 57,
	TickRecordStreamerInternal     = 58,
	TickRecordStreamerFileAr       = 59,
	TickRecordNoGameDriver         = 60,
	TickRecordNoGameConnection     = 61,
	TickRecordCorrupt              = 62,
	SaveCheckpointNoGameDriver     = 63,
	SaveCheckpointNoGameConnection = 64,
	OnSeamlessTravelWriteHeader    = 65,
	RECORDING_FAILURE_MAX          = 66,
	EReplayFailure_MAX             = 67
};


// Enum Engine.FNavigationSystemRunMode
enum class EFNavigationSystemRunMode : uint8_t
{
	InvalidMode                    = 0,
	GameMode                       = 1,
	EditorMode                     = 2,
	SimulationMode                 = 3,
	PIEMode                        = 4,
	FNavigationSystemRunMode_MAX   = 5
};


// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8_t
{
	Invalid                        = 0,
	Error                          = 1,
	Fail                           = 2,
	Success                        = 3,
	ENavigationQueryResult_MAX     = 4
};


// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8_t
{
	Cleared                        = 0,
	NewPath                        = 1,
	UpdatedDueToGoalMoved          = 2,
	UpdatedDueToNavigationChanged  = 3,
	Invalidated                    = 4,
	RePathFailed                   = 5,
	MetaPathUpdate                 = 6,
	Custom                         = 7,
	ENavPathEvent_MAX              = 8
};


// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8_t
{
	Invalid                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringModeConfig_MAX = 3
};


// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8_t
{
	Default                        = 0,
	Instant                        = 1,
	Lazy                           = 2,
	ENavDataGatheringMode_MAX      = 3
};


// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3
};


// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8_t
{
	BothWays                       = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ENavLinkDirection_MAX          = 3
};


// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8_t
{
	ERM_Normal                     = 0,
	ERM_Point                      = 1,
	ERM_Cross                      = 2,
	ERM_LightsOnly                 = 3,
	ERM_None                       = 4,
	ERM_MAX                        = 5
};


// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8_t
{
	PSUVIM_None                    = 0,
	PSUVIM_Linear                  = 1,
	PSUVIM_Linear_Blend            = 2,
	PSUVIM_Random                  = 3,
	PSUVIM_Random_Blend            = 4,
	PSUVIM_MAX                     = 5
};


// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8_t
{
	EPBM_Instant                   = 0,
	EPBM_Interpolated              = 1,
	EPBM_MAX                       = 2
};


// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8_t
{
	Auto                           = 0,
	Complete                       = 1,
	DisableTick                    = 2,
	DisableTickAndKill             = 3,
	Num                            = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};


// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	Critical                       = 3,
	Num                            = 4,
	EParticleSignificanceLevel_MAX = 5
};


// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8_t
{
	PDM_Low                        = 0,
	PDM_Medium                     = 1,
	PDM_High                       = 2,
	PDM_MAX                        = 3
};


// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8_t
{
	EPSSM_Random                   = 0,
	EPSSM_Sequential               = 1,
	EPSSM_MAX                      = 2
};


// Enum Engine.EModuleType
enum class EModuleType : uint8_t
{
	EPMT_General                   = 0,
	EPMT_TypeData                  = 1,
	EPMT_Beam                      = 2,
	EPMT_Trail                     = 3,
	EPMT_Spawn                     = 4,
	EPMT_Required                  = 5,
	EPMT_Event                     = 6,
	EPMT_Light                     = 7,
	EPMT_SubUV                     = 8,
	EPMT_MAX                       = 9
};


// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8_t
{
	EAPSM_Random                   = 0,
	EAPSM_Sequential               = 1,
	EAPSM_MAX                      = 2
};


// Enum Engine.Beam2SourceTargetTangentMethod
enum class EBeam2SourceTargetTangentMethod : uint8_t
{
	PEB2STTM_Direct                = 0,
	PEB2STTM_UserSet               = 1,
	PEB2STTM_Distribution          = 2,
	PEB2STTM_Emitter               = 3,
	PEB2STTM_MAX                   = 4
};


// Enum Engine.Beam2SourceTargetMethod
enum class EBeam2SourceTargetMethod : uint8_t
{
	PEB2STM_Default                = 0,
	PEB2STM_UserSet                = 1,
	PEB2STM_Emitter                = 2,
	PEB2STM_Particle               = 3,
	PEB2STM_Actor                  = 4,
	PEB2STM_MAX                    = 5
};


// Enum Engine.BeamModifierType
enum class EBeamModifierType : uint8_t
{
	PEB2MT_Source                  = 0,
	PEB2MT_Target                  = 1,
	PEB2MT_MAX                     = 2
};


// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8_t
{
	EPCOUM_DirectSet               = 0,
	EPCOUM_Additive                = 1,
	EPCOUM_Scalar                  = 2,
	EPCOUM_MAX                     = 3
};


// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8_t
{
	EPCC_Kill                      = 0,
	EPCC_Freeze                    = 1,
	EPCC_HaltCollisions            = 2,
	EPCC_FreezeTranslation         = 3,
	EPCC_FreezeRotation            = 4,
	EPCC_FreezeMovement            = 5,
	EPCC_MAX                       = 6
};


// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8_t
{
	Bounce                         = 0,
	Stop                           = 1,
	Kill                           = 2,
	EParticleCollisionResponse_MAX = 3
};


// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8_t
{
	BONESOCKETSEL_Sequential       = 0,
	BONESOCKETSEL_Random           = 1,
	BONESOCKETSEL_MAX              = 2
};


// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8_t
{
	BONESOCKETSOURCE_Bones         = 0,
	BONESOCKETSOURCE_Sockets       = 1,
	BONESOCKETSOURCE_MAX           = 2
};


// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8_t
{
	ELESM_Random                   = 0,
	ELESM_Sequential               = 1,
	ELESM_MAX                      = 2
};


// Enum Engine.CylinderHeightAxis
enum class ECylinderHeightAxis : uint8_t
{
	PMLPC_HEIGHTAXIS_X             = 0,
	PMLPC_HEIGHTAXIS_Y             = 1,
	PMLPC_HEIGHTAXIS_Z             = 2,
	PMLPC_HEIGHTAXIS_MAX           = 3
};


// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8_t
{
	VERTSURFACESOURCE_Vert         = 0,
	VERTSURFACESOURCE_Surface      = 1,
	VERTSURFACESOURCE_MAX          = 2
};


// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8_t
{
	EOChainMode_Add                = 0,
	EOChainMode_Scale              = 1,
	EOChainMode_Link               = 2,
	EOChainMode_MAX                = 3
};


// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8_t
{
	EPAL_NONE                      = 0,
	EPAL_X                         = 1,
	EPAL_Y                         = 2,
	EPAL_Z                         = 3,
	EPAL_NEGATIVE_X                = 4,
	EPAL_NEGATIVE_Y                = 5,
	EPAL_NEGATIVE_Z                = 6,
	EPAL_ROTATE_X                  = 7,
	EPAL_ROTATE_Y                  = 8,
	EPAL_ROTATE_Z                  = 9,
	EPAL_MAX                       = 10
};


// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8_t
{
	EDPV_UserSet                   = 0,
	EDPV_AutoSet                   = 1,
	EDPV_VelocityX                 = 2,
	EDPV_VelocityY                 = 3,
	EDPV_VelocityZ                 = 4,
	EDPV_VelocityMag               = 5,
	EDPV_MAX                       = 6
};


// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8_t
{
	ENM_CameraFacing               = 0,
	ENM_Spherical                  = 1,
	ENM_Cylindrical                = 2,
	ENM_MAX                        = 3
};


// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8_t
{
	PSORTMODE_None                 = 0,
	PSORTMODE_ViewProjDepth        = 1,
	PSORTMODE_DistanceToView       = 2,
	PSORTMODE_Age_OldestFirst      = 3,
	PSORTMODE_Age_NewestFirst      = 4,
	PSORTMODE_MAX                  = 5
};


// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8_t
{
	None                           = 0,
	FlipUV                         = 1,
	FlipUOnly                      = 2,
	FlipVOnly                      = 3,
	RandomFlipUV                   = 4,
	RandomFlipUOnly                = 5,
	RandomFlipVOnly                = 6,
	RandomFlipUVIndependent        = 7,
	EParticleUVFlipMode_MAX        = 8
};


// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8_t
{
	PET2SRCM_Default               = 0,
	PET2SRCM_Particle              = 1,
	PET2SRCM_Actor                 = 2,
	PET2SRCM_MAX                   = 3
};


// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8_t
{
	PEBTM_None                     = 0,
	PEBTM_Full                     = 1,
	PEBTM_Partial                  = 2,
	PEBTM_MAX                      = 3
};


// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8_t
{
	PEB2M_Distance                 = 0,
	PEB2M_Target                   = 1,
	PEB2M_Branch                   = 2,
	PEB2M_MAX                      = 3
};


// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8_t
{
	XAxisFacing_NoUp               = 0,
	XAxisFacing_ZUp                = 1,
	XAxisFacing_NegativeZUp        = 2,
	XAxisFacing_YUp                = 3,
	XAxisFacing_NegativeYUp        = 4,
	LockedAxis_ZAxisFacing         = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing         = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing    = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing    = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX   = 13
};


// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8_t
{
	CameraFacing_NoneUP            = 0,
	CameraFacing_ZUp               = 1,
	CameraFacing_NegativeZUp       = 2,
	CameraFacing_YUp               = 3,
	CameraFacing_NegativeYUp       = 4,
	CameraFacing_MAX               = 5
};


// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8_t
{
	PSMA_MeshFaceCameraWithRoll    = 0,
	PSMA_MeshFaceCameraWithSpin    = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX                       = 3
};


// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8_t
{
	Trails_CameraUp                = 0,
	Trails_SourceUp                = 1,
	Trails_WorldUp                 = 2,
	Trails_MAX                     = 3
};


// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8_t
{
	PSA_FacingCameraPosition       = 0,
	PSA_Square                     = 1,
	PSA_Rectangle                  = 2,
	PSA_Velocity                   = 3,
	PSA_AwayFromCenter             = 4,
	PSA_TypeSpecific               = 5,
	PSA_FacingCameraDistanceBlend  = 6,
	PSA_MAX                        = 7
};


// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8_t
{
	EPSOBM_None                    = 0,
	EPSOBM_ParticleBounds          = 1,
	EPSOBM_CustomBounds            = 2,
	EPSOBM_MAX                     = 3
};


// Enum Engine.ParticleSystemLODMethod
enum class EParticleSystemLODMethod : uint8_t
{
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX    = 3
};


// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8_t
{
	EPSUM_RealTime                 = 0,
	EPSUM_FixedTime                = 1,
	EPSUM_MAX                      = 2
};


// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8_t
{
	EPET_Any                       = 0,
	EPET_Spawn                     = 1,
	EPET_Death                     = 2,
	EPET_Collision                 = 3,
	EPET_Burst                     = 4,
	EPET_Blueprint                 = 5,
	EPET_MAX                       = 6
};


// Enum Engine.ParticleReplayState
enum class EParticleReplayState : uint8_t
{
	PRS_Disabled                   = 0,
	PRS_Capturing                  = 1,
	PRS_Replaying                  = 2,
	PRS_MAX                        = 3
};


// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8_t
{
	PSPT_None                      = 0,
	PSPT_Scalar                    = 1,
	PSPT_ScalarRand                = 2,
	PSPT_Vector                    = 3,
	PSPT_VectorRand                = 4,
	PSPT_Color                     = 5,
	PSPT_Actor                     = 6,
	PSPT_Material                  = 7,
	PSPT_VectorUnitRand            = 8,
	PSPT_MAX                       = 9
};


// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	Invalid                        = 4,
	ESettingsLockedAxis_MAX        = 5
};


// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8_t
{
	Full3D                         = 0,
	YZPlane                        = 1,
	XZPlane                        = 2,
	XYPlane                        = 3,
	ESettingsDOF_MAX               = 4
};


// Enum Engine.EFrictionCombineMode
enum class EFrictionCombineMode : uint8_t
{
	Average                        = 0,
	Min                            = 1,
	Multiply                       = 2,
	Max                            = 3
};


// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8_t
{
	CapturedScene                  = 0,
	SpecifiedCubemap               = 1,
	EReflectionSourceType_MAX      = 2
};


// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8_t
{
	DBBPF_B8G8R8A8                 = 0,
	DBBPF_A16B16G16R16_DEPRECATED  = 1,
	DBBPF_FloatRGB_DEPRECATED      = 2,
	DBBPF_FloatRGBA                = 3,
	DBBPF_A2B10G10R10              = 4,
	DBBPF_MAX                      = 5
};


// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8_t
{
	AEM_Histogram                  = 0,
	AEM_Basic                      = 1,
	AEM_Manual                     = 2,
	AEM_MAX                        = 3
};


// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8_t
{
	Disabled                       = 0,
	LinearColorSpaceOnly           = 1,
	AllowThroughTonemapper         = 2,
	EAlphaChannelMode_MAX          = 3
};


// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8_t
{
	None                           = 0,
	OpaqueOnly                     = 1,
	OpaqueAndMasked                = 2,
	Auto                           = 3,
	EEarlyZPass_MAX                = 4
};


// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledOnDemand                = 2,
	EnabledWithStencil             = 3,
	ECustomDepthStencil_MAX        = 4
};


// Enum Engine.EMobileMSAASampleCount
enum class EMobileMSAASampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	EMobileMSAASampleCount_MAX     = 4
};


// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8_t
{
	One                            = 0,
	Two                            = 1,
	Four                           = 2,
	Eight                          = 3,
	ECompositingSampleCount_MAX    = 4
};


// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8_t
{
	NoClear                        = 0,
	HardwareClear                  = 1,
	QuadAtMaxZ                     = 2,
	EClearSceneOptions_MAX         = 3
};


// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8_t
{
	Line                           = 0,
	Dash                           = 1,
	EReporterLineStyle_MAX         = 2
};


// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	ELegendPosition_MAX            = 2
};


// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8_t
{
	Lines                          = 0,
	Filled                         = 1,
	EGraphDataStyle_MAX            = 2
};


// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8_t
{
	Lines                          = 0,
	Notches                        = 1,
	Grid                           = 2,
	EGraphAxisStyle_MAX            = 3
};


// Enum Engine.ReverbPreset
enum class EReverbPreset : uint8_t
{
	REVERB_Default                 = 0,
	REVERB_Bathroom                = 1,
	REVERB_StoneRoom               = 2,
	REVERB_Auditorium              = 3,
	REVERB_ConcertHall             = 4,
	REVERB_Cave                    = 5,
	REVERB_Hallway                 = 6,
	REVERB_StoneCorridor           = 7,
	REVERB_Alley                   = 8,
	REVERB_Forest                  = 9,
	REVERB_City                    = 10,
	REVERB_Mountains               = 11,
	REVERB_Quarry                  = 12,
	REVERB_Plain                   = 13,
	REVERB_ParkingLot              = 14,
	REVERB_SewerPipe               = 15,
	REVERB_Underwater              = 16,
	REVERB_SmallRoom               = 17,
	REVERB_MediumRoom              = 18,
	REVERB_LargeRoom               = 19,
	REVERB_MediumHall              = 20,
	REVERB_LargeHall               = 21,
	REVERB_Plate                   = 22,
	REVERB_MAX                     = 23
};


// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8_t
{
	RCKTCF_uint16                  = 0,
	RCKTCF_float32                 = 1,
	RCKTCF_MAX                     = 2
};


// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8_t
{
	RCCF_Empty                     = 0,
	RCCF_Constant                  = 1,
	RCCF_Linear                    = 2,
	RCCF_Cubic                     = 3,
	RCCF_Mixed                     = 4,
	RCCF_MAX                       = 5
};


// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8_t
{
	Absolute                       = 0,
	Relative                       = 1,
	EConstraintTransform_MAX       = 2
};


// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8_t
{
	Orientation                    = 0,
	Translation                    = 1,
	MAX                            = 2
};


// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8_t
{
	MaintainLastRootMotionVelocity = 0,
	SetVelocity                    = 1,
	ClampVelocity                  = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};


// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8_t
{
	UseSensitiveLiftoffCheck       = 0,
	DisablePartialEndTick          = 1,
	IgnoreZAccumulate              = 2,
	ERootMotionSourceSettingsFlags_MAX = 3
};


// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8_t
{
	Prepared                       = 0,
	Finished                       = 1,
	MarkedForRemoval               = 2,
	ERootMotionSourceStatusFlags_MAX = 3
};


// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8_t
{
	Override                       = 0,
	Additive                       = 1,
	ERootMotionAccumulateMode_MAX  = 2
};


// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8_t
{
	BaseColor                      = 0,
	BaseColor_Normal_DEPRECATED    = 1,
	BaseColor_Normal_Specular      = 2,
	BaseColor_Normal_Specular_YCoCg = 3,
	BaseColor_Normal_Specular_Mask_YCoCg = 4,
	WorldHeight                    = 5,
	Count                          = 6,
	ERuntimeVirtualTextureMaterialType_MAX = 7
};


// Enum Engine.ELightUnits
enum class ELightUnits : uint8_t
{
	Unitless                       = 0,
	Candelas                       = 1,
	Lumens                         = 2,
	ELightUnits_MAX                = 3
};


// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8_t
{
	AAM_None                       = 0,
	AAM_FXAA                       = 1,
	AAM_TemporalAA                 = 2,
	AAM_MSAA                       = 3,
	AAM_MAX                        = 4
};


// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8_t
{
	DOFM_BokehDOF                  = 0,
	DOFM_Gaussian                  = 1,
	DOFM_CircleDOF                 = 2,
	DOFM_MAX                       = 3
};


// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8_t
{
	PRM_LegacySceneCapture         = 0,
	PRM_RenderScenePrimitives      = 1,
	PRM_UseShowOnlyList            = 2,
	PRM_MAX                        = 3
};


// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8_t
{
	MP_EmissiveColor               = 0,
	MP_Opacity                     = 1,
	MP_OpacityMask                 = 2,
	MP_DiffuseColor                = 3,
	MP_SpecularColor               = 4,
	MP_BaseColor                   = 5,
	MP_Metallic                    = 6,
	MP_Specular                    = 7,
	MP_Roughness                   = 8,
	MP_Anisotropy                  = 9,
	MP_Normal                      = 10,
	MP_Tangent                     = 11,
	MP_WorldPositionOffset         = 12,
	MP_WorldDisplacement           = 13,
	MP_TessellationMultiplier      = 14,
	MP_SubsurfaceColor             = 15,
	MP_CustomData0                 = 16,
	MP_CustomData1                 = 17,
	MP_AmbientOcclusion            = 18,
	MP_Refraction                  = 19,
	MP_CustomizedUVs0              = 20,
	MP_CustomizedUVs1              = 21,
	MP_CustomizedUVs2              = 22,
	MP_CustomizedUVs3              = 23,
	MP_CustomizedUVs4              = 24,
	MP_CustomizedUVs5              = 25,
	MP_CustomizedUVs6              = 26,
	MP_CustomizedUVs7              = 27,
	MP_PixelDepthOffset            = 28,
	MP_ShadingModel                = 29,
	MP_MaterialAttributes          = 30,
	MP_CustomOutput                = 31,
	MP_MAX                         = 32
};


// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8_t
{
	Exclusive                      = 0,
	Inclusive                      = 1,
	ESkinCacheDefaultBehavior_MAX  = 2
};


// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8_t
{
	Auto                           = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	ESkinCacheUsage_MAX            = 3
};


// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8_t
{
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic  = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};


// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8_t
{
	AnimationBlueprint             = 0,
	AnimationSingleNode            = 1,
	AnimationCustomMode            = 2,
	EAnimationMode_MAX             = 3
};


// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8_t
{
	SkipSimulatingBones            = 0,
	SkipAllBones                   = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};


// Enum Engine.EClothMassMode
enum class EClothMassMode : uint8_t
{
	UniformMass                    = 0,
	TotalMass                      = 1,
	Density                        = 2,
	MaxClothMassMode               = 3,
	EClothMassMode_MAX             = 4
};


// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8_t
{
	AttributeCurve                 = 0,
	MaterialCurve                  = 1,
	MorphTargetCurve               = 2,
	MaxAnimCurveType               = 3,
	EAnimCurveType_MAX             = 4
};


// Enum Engine.ESkeletalMeshSkinningImportVersions
enum class ESkeletalMeshSkinningImportVersions : uint8_t
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 3,
	ESkeletalMeshSkinningImportVersions_MAX = 4
};


// Enum Engine.ESkeletalMeshGeoImportVersions
enum class ESkeletalMeshGeoImportVersions : uint8_t
{
	Before_Versionning             = 0,
	SkeletalMeshBuildRefactor      = 1,
	VersionPlusOne                 = 2,
	LatestVersion                  = 3,
	ESkeletalMeshGeoImportVersions_MAX = 4
};


// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8_t
{
	Remove                         = 0,
	Keep                           = 1,
	Invalid                        = 2,
	EBoneFilterActionOption_MAX    = 3
};


// Enum Engine.SkeletalMeshOptimizationImportance
enum class ESkeletalMeshOptimizationImportance : uint8_t
{
	SMOI_Off                       = 0,
	SMOI_Lowest                    = 1,
	SMOI_Low                       = 2,
	SMOI_Normal                    = 3,
	SMOI_High                      = 4,
	SMOI_Highest                   = 5,
	SMOI_MAX                       = 6
};


// Enum Engine.SkeletalMeshOptimizationType
enum class ESkeletalMeshOptimizationType : uint8_t
{
	SMOT_NumOfTriangles            = 0,
	SMOT_MaxDeviation              = 1,
	SMOT_TriangleOrDeviation       = 2,
	SMOT_MAX                       = 3
};


// Enum Engine.SkeletalMeshTerminationCriterion
enum class ESkeletalMeshTerminationCriterion : uint8_t
{
	SMTC_NumOfTriangles            = 0,
	SMTC_NumOfVerts                = 1,
	SMTC_TriangleOrVert            = 2,
	SMTC_AbsNumOfTriangles         = 3,
	SMTC_AbsNumOfVerts             = 4,
	SMTC_AbsTriangleOrVert         = 5,
	SMTC_MAX                       = 6
};


// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8_t
{
	Animation                      = 0,
	Skeleton                       = 1,
	AnimationScaled                = 2,
	AnimationRelative              = 3,
	OrientAndScale                 = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};


// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8_t
{
	WorldSpace                     = 0,
	ComponentSpace                 = 1,
	EBoneSpaces_MAX                = 2
};


// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8_t
{
	AlwaysTickPoseAndRefreshBones  = 0,
	AlwaysTickPose                 = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered       = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};


// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8_t
{
	PBO_None                       = 0,
	PBO_Term                       = 1,
	PBO_MAX                        = 2
};


// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8_t
{
	BVS_HiddenByParent             = 0,
	BVS_Visible                    = 1,
	BVS_ExplicitlyHidden           = 2,
	BVS_MAX                        = 3
};


// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8_t
{
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform  = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};


// Enum Engine.ESpecularOcclusionMode
enum class ESpecularOcclusionMode : uint8_t
{
	SOM_NonDirectional             = 0,
	SOM_DirectionalCones           = 1,
	SOM_Combine                    = 2,
	SOM_Maximum                    = 3,
	SOM_MAX                        = 4
};


// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8_t
{
	SLS_CapturedScene              = 0,
	SLS_SpecifiedCubemap           = 1,
	SLS_MAX                        = 2
};


// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EPriorityAttenuationMethod_MAX = 3
};


// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESubmixSendMethod_MAX          = 3
};


// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	EReverbSendMethod_MAX          = 3
};


// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	EAirAbsorptionMethod_MAX       = 2
};


// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8_t
{
	SPATIALIZATION_Default         = 0,
	SPATIALIZATION_HRTF            = 1,
	SPATIALIZATION_MAX             = 2
};


// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8_t
{
	SOUNDDISTANCE_Normal           = 0,
	SOUNDDISTANCE_InfiniteXYPlane  = 1,
	SOUNDDISTANCE_InfiniteXZPlane  = 2,
	SOUNDDISTANCE_InfiniteYZPlane  = 3,
	SOUNDDISTANCE_MAX              = 4
};


// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8_t
{
	Disabled                       = 0,
	PlayWhenSilent                 = 1,
	Restart                        = 2,
	EVirtualizationMode_MAX        = 3
};


// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8_t
{
	PreventNew                     = 0,
	StopOldest                     = 1,
	StopFarthestThenPreventNew     = 2,
	StopFarthestThenOldest         = 3,
	StopLowestPriority             = 4,
	StopQuietest                   = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count                          = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};


// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8_t
{
	SOUNDGROUP_Default             = 0,
	SOUNDGROUP_Effects             = 1,
	SOUNDGROUP_UI                  = 2,
	SOUNDGROUP_Music               = 3,
	SOUNDGROUP_Voice               = 4,
	SOUNDGROUP_GameSoundGroup1     = 5,
	SOUNDGROUP_GameSoundGroup2     = 6,
	SOUNDGROUP_GameSoundGroup3     = 7,
	SOUNDGROUP_GameSoundGroup4     = 8,
	SOUNDGROUP_GameSoundGroup5     = 9,
	SOUNDGROUP_GameSoundGroup6     = 10,
	SOUNDGROUP_GameSoundGroup7     = 11,
	SOUNDGROUP_GameSoundGroup8     = 12,
	SOUNDGROUP_GameSoundGroup9     = 13,
	SOUNDGROUP_GameSoundGroup10    = 14,
	SOUNDGROUP_GameSoundGroup11    = 15,
	SOUNDGROUP_GameSoundGroup12    = 16,
	SOUNDGROUP_GameSoundGroup13    = 17,
	SOUNDGROUP_GameSoundGroup14    = 18,
	SOUNDGROUP_GameSoundGroup15    = 19,
	SOUNDGROUP_GameSoundGroup16    = 20,
	SOUNDGROUP_GameSoundGroup17    = 21,
	SOUNDGROUP_GameSoundGroup18    = 22,
	SOUNDGROUP_GameSoundGroup19    = 23,
	SOUNDGROUP_GameSoundGroup20    = 24,
	SOUNDGROUP_MAX                 = 25
};


// Enum Engine.ModulationParamMode
enum class EModulationParamMode : uint8_t
{
	MPM_Normal                     = 0,
	MPM_Abs                        = 1,
	MPM_Direct                     = 2,
	MPM_MAX                        = 3
};


// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	ESourceBusChannels_MAX         = 2
};


// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};


// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8_t
{
	Linear                         = 0,
	CustomCurve                    = 1,
	Manual                         = 2,
	ESendLevelControlMethod_MAX    = 3
};


// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8_t
{
	SoundWave                      = 0,
	WavFile                        = 1,
	EAudioRecordingExportType_MAX  = 2
};


// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8_t
{
	VerySmall                      = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	VeryLarge                      = 4,
	ESoundWaveFFTSize_MAX          = 5
};


// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8_t
{
	DTYPE_Setup                    = 0,
	DTYPE_Invalid                  = 1,
	DTYPE_Preview                  = 2,
	DTYPE_Native                   = 3,
	DTYPE_RealTime                 = 4,
	DTYPE_Procedural               = 5,
	DTYPE_Xenon                    = 6,
	DTYPE_Streaming                = 7,
	DTYPE_MAX                      = 8
};


// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8_t
{
	Inherited                      = 0,
	RetainOnLoad                   = 1,
	PrimeOnLoad                    = 2,
	LoadOnDemand                   = 3,
	ForceInline                    = 4,
	Uninitialized                  = 5,
	ESoundWaveLoadingBehavior_MAX  = 6
};


// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8_t
{
	Local                          = 0,
	World                          = 1,
	ESplineCoordinateSpace_MAX     = 2
};


// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8_t
{
	Linear                         = 0,
	Curve                          = 1,
	Constant                       = 2,
	CurveClamped                   = 3,
	CurveCustomTangent             = 4,
	ESplinePointType_MAX           = 5
};


// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESplineMeshAxis_MAX            = 3
};


// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8_t
{
	OT_NumOfTriangles              = 0,
	OT_MaxDeviation                = 1,
	OT_MAX                         = 2
};


// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8_t
{
	IL_Off                         = 0,
	IL_Lowest                      = 1,
	IL_Low                         = 2,
	IL_Normal                      = 3,
	IL_High                        = 4,
	IL_Highest                     = 5,
	TEMP_BROKEN2                   = 6,
	EImportanceLevel_MAX           = 7
};


// Enum Engine.ENormalMode
enum class ENormalMode : uint8_t
{
	NM_PreserveSmoothingGroups     = 0,
	NM_RecalculateNormals          = 1,
	NM_RecalculateNormalsSmooth    = 2,
	NM_RecalculateNormalsHard      = 3,
	TEMP_BROKEN                    = 4,
	ENormalMode_MAX                = 5
};


// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8_t
{
	SLSH_QuadLayer                 = 0,
	SLSH_CylinderLayer             = 1,
	SLSH_CubemapLayer              = 2,
	SLSH_EquirectLayer             = 3,
	SLSH_MAX                       = 4
};


// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8_t
{
	SLT_WorldLocked                = 0,
	SLT_TrackerLocked              = 1,
	SLT_FaceLocked                 = 2,
	SLT_MAX                        = 3
};


// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8_t
{
	OSM_Alpha                      = 0,
	OSM_ColorBrightness            = 1,
	OSM_RedChannel                 = 2,
	OSM_GreenChannel               = 3,
	OSM_BlueChannel                = 4,
	OSM_MAX                        = 5
};


// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8_t
{
	BVC_FourVertices               = 0,
	BVC_EightVertices              = 1,
	BVC_MAX                        = 2
};


// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8_t
{
	EVRTA_TextTop                  = 0,
	EVRTA_TextCenter               = 1,
	EVRTA_TextBottom               = 2,
	EVRTA_QuadTop                  = 3,
	EVRTA_MAX                      = 4
};


// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8_t
{
	EHTA_Left                      = 0,
	EHTA_Center                    = 1,
	EHTA_Right                     = 2,
	EHTA_MAX                       = 3
};


// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8_t
{
	TLCA_Default                   = 0,
	TLCA_None                      = 1,
	TLCA_Lowest                    = 2,
	TLCA_Low                       = 3,
	TLCA_Medium                    = 4,
	TLCA_High                      = 5,
	TLCA_Highest                   = 6,
	TLCA_MAX                       = 7
};


// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8_t
{
	TCQ_Default                    = 0,
	TCQ_Lowest                     = 1,
	TCQ_Low                        = 2,
	TCQ_Medium                     = 3,
	TCQ_High                       = 4,
	TCQ_Highest                    = 5,
	TCQ_MAX                        = 6
};


// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8_t
{
	TSF_Invalid                    = 0,
	TSF_G8                         = 1,
	TSF_BGRA8                      = 2,
	TSF_BGRE8                      = 3,
	TSF_RGBA16                     = 4,
	TSF_RGBA16F                    = 5,
	TSF_RGBA8                      = 6,
	TSF_RGBE8                      = 7,
	TSF_G16                        = 8,
	TSF_MAX                        = 9
};


// Enum Engine.ETextureSourceArtType
enum class ETextureSourceArtType : uint8_t
{
	TSAT_Uncompressed              = 0,
	TSAT_PNGCompressed             = 1,
	TSAT_DDSFile                   = 2,
	TSAT_MAX                       = 3
};


// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8_t
{
	TMC_ResidentMips               = 0,
	TMC_AllMips                    = 1,
	TMC_AllMipsBiased              = 2,
	TMC_MAX                        = 3
};


// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8_t
{
	CTM_Disabled                   = 0,
	CTM_NormalRoughnessToRed       = 1,
	CTM_NormalRoughnessToGreen     = 2,
	CTM_NormalRoughnessToBlue      = 3,
	CTM_NormalRoughnessToAlpha     = 4,
	CTM_MAX                        = 5
};


// Enum Engine.TextureAddress
enum class ETextureAddress : uint8_t
{
	TA_Wrap                        = 0,
	TA_Clamp                       = 1,
	TA_Mirror                      = 2,
	TA_MAX                         = 3
};


// Enum Engine.TextureCompressionSettings
enum class ETextureCompressionSettings : uint8_t
{
	TC_Default                     = 0,
	TC_Normalmap                   = 1,
	TC_Masks                       = 2,
	TC_Grayscale                   = 3,
	TC_Displacementmap             = 4,
	TC_VectorDisplacementmap       = 5,
	TC_HDR                         = 6,
	TC_EditorIcon                  = 7,
	TC_Alpha                       = 8,
	TC_DistanceFieldFont           = 9,
	TC_HDR_Compressed              = 10,
	TC_BC7                         = 11,
	TC_MAX                         = 12
};


// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8_t
{
	Default                        = 0,
	AllMips                        = 1,
	OnlyFirstMip                   = 2,
	ETextureMipLoadOptions_MAX     = 3
};


// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8_t
{
	Point                          = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	AnisotropicPoint               = 3,
	AnisotropicLinear              = 4,
	ETextureSamplerFilter_MAX      = 5
};


// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8_t
{
	None                           = 0,
	PadToPowerOfTwo                = 1,
	PadToSquarePowerOfTwo          = 2,
	ETexturePowerOfTwoSetting_MAX  = 3
};


// Enum Engine.TextureMipGenSettings
enum class ETextureMipGenSettings : uint8_t
{
	TMGS_FromTextureGroup          = 0,
	TMGS_SimpleAverage             = 1,
	TMGS_Sharpen0                  = 2,
	TMGS_Sharpen1                  = 3,
	TMGS_Sharpen2                  = 4,
	TMGS_Sharpen3                  = 5,
	TMGS_Sharpen4                  = 6,
	TMGS_Sharpen5                  = 7,
	TMGS_Sharpen6                  = 8,
	TMGS_Sharpen7                  = 9,
	TMGS_Sharpen8                  = 10,
	TMGS_Sharpen9                  = 11,
	TMGS_Sharpen10                 = 12,
	TMGS_NoMipmaps                 = 13,
	TMGS_LeaveExistingMips         = 14,
	TMGS_Blur1                     = 15,
	TMGS_Blur2                     = 16,
	TMGS_Blur3                     = 17,
	TMGS_Blur4                     = 18,
	TMGS_Blur5                     = 19,
	TMGS_Unfiltered                = 20,
	TMGS_MAX                       = 21
};


// Enum Engine.TextureGroup
enum class ETextureGroup : uint8_t
{
	TEXTUREGROUP_World             = 0,
	TEXTUREGROUP_WorldNormalMap    = 1,
	TEXTUREGROUP_WorldSpecular     = 2,
	TEXTUREGROUP_Character         = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon            = 6,
	TEXTUREGROUP_WeaponNormalMap   = 7,
	TEXTUREGROUP_WeaponSpecular    = 8,
	TEXTUREGROUP_Vehicle           = 9,
	TEXTUREGROUP_VehicleNormalMap  = 10,
	TEXTUREGROUP_VehicleSpecular   = 11,
	TEXTUREGROUP_Cinematic         = 12,
	TEXTUREGROUP_Effects           = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox            = 15,
	TEXTUREGROUP_UI                = 16,
	TEXTUREGROUP_Lightmap          = 17,
	TEXTUREGROUP_RenderTarget      = 18,
	TEXTUREGROUP_MobileFlattened   = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap         = 22,
	TEXTUREGROUP_ColorLookupTable  = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh             = 26,
	TEXTUREGROUP_IESLightProfile   = 27,
	TEXTUREGROUP_Pixels2D          = 28,
	TEXTUREGROUP_HierarchicalLOD   = 29,
	TEXTUREGROUP_Impostor          = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData          = 32,
	TEXTUREGROUP_16BitData         = 33,
	TEXTUREGROUP_Project01         = 34,
	TEXTUREGROUP_Project02         = 35,
	TEXTUREGROUP_Project03         = 36,
	TEXTUREGROUP_Project04         = 37,
	TEXTUREGROUP_Project05         = 38,
	TEXTUREGROUP_Project06         = 39,
	TEXTUREGROUP_Project07         = 40,
	TEXTUREGROUP_Project08         = 41,
	TEXTUREGROUP_Project09         = 42,
	TEXTUREGROUP_Project10         = 43,
	TEXTUREGROUP_Project11         = 44,
	TEXTUREGROUP_Project12         = 45,
	TEXTUREGROUP_Project13         = 46,
	TEXTUREGROUP_Project14         = 47,
	TEXTUREGROUP_Project15         = 48,
	TEXTUREGROUP_MAX               = 49
};


// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8_t
{
	RTF_R8                         = 0,
	RTF_RG8                        = 1,
	RTF_RGBA8                      = 2,
	RTF_RGBA8_SRGB                 = 3,
	RTF_R16f                       = 4,
	RTF_RG16f                      = 5,
	RTF_RGBA16f                    = 6,
	RTF_R32f                       = 7,
	RTF_RG32f                      = 8,
	RTF_RGBA32f                    = 9,
	RTF_RGB10A2                    = 10,
	RTF_MAX                        = 11
};


// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8_t
{
	Closed                         = 0,
	Error                          = 1,
	Synchronized                   = 2,
	Synchronizing                  = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};


// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8_t
{
	Forward                        = 0,
	Backward                       = 1,
	ETimelineDirection_MAX         = 2
};


// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8_t
{
	T_Original                     = 0,
	T_TargetMin                    = 1,
	T_TargetMax                    = 2,
	MAX                            = 3
};


// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8_t
{
	TID_AuthorizeComplete          = 0,
	TID_TweetUIComplete            = 1,
	TID_RequestComplete            = 2,
	TID_MAX                        = 3
};


// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8_t
{
	TRM_Get                        = 0,
	TRM_Post                       = 1,
	TRM_Delete                     = 2,
	TRM_MAX                        = 3
};


// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8_t
{
	UDSS_UpToDate                  = 0,
	UDSS_Dirty                     = 1,
	UDSS_Error                     = 2,
	UDSS_Duplicate                 = 3,
	UDSS_MAX                       = 4
};


// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8_t
{
	ShortestSide                   = 0,
	LongestSide                    = 1,
	Horizontal                     = 2,
	Vertical                       = 3,
	Custom                         = 4,
	EUIScalingRule_MAX             = 5
};


// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8_t
{
	Always                         = 0,
	NonPointer                     = 1,
	NavigationOnly                 = 2,
	Never                          = 3,
	ERenderFocusRule_MAX           = 4
};


// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8_t
{
	VFCO_Extrude                   = 0,
	VFCO_Revolve                   = 1,
	VFCO_MAX                       = 2
};


// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8_t
{
	Directional                    = 0,
	Point                          = 1,
	EWindSourceType_MAX            = 2
};


// Enum Engine.ELevelScanRule
enum class ELevelScanRule : uint8_t
{
	All                            = 0,
	EXT_World                      = 1,
	EXT_Only                       = 2,
	Grid_World                     = 3,
	Grid_Only                      = 4,
	Landscape_Only                 = 5,
	WorldArt                       = 6,
	Dev                            = 7,
	Custom                         = 8,
	ELevelScanRule_MAX             = 9
};


// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	EPSCPoolMethod_MAX             = 5
};


// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8_t
{
	VLM_VolumetricLightmap         = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX                        = 2
};


// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8_t
{
	VIS_LeastAggressive            = 0,
	VIS_ModeratelyAggressive       = 1,
	VIS_MostAggressive             = 2,
	VIS_Max                        = 3
};



// Enum LowEntryExtendedStandardLibrary.ELowEntryBatteryState
enum class ELowEntryBatteryState : uint8_t
{
	Charging                       = 0,
	Discharging                    = 1,
	Full                           = 2,
	NotCharging                    = 3,
	Unknown                        = 4,
	ELowEntryBatteryState_MAX      = 5
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary0to9
enum class ELowEntryExtendedStandardLibrary0to9 : uint8_t
{
	_0_                            = 0,
	_1_                            = 1,
	_2_                            = 2,
	_3_                            = 3,
	_4_                            = 4,
	_5_                            = 5,
	_6_                            = 6,
	_7_                            = 7,
	_8_                            = 8,
	_9_                            = 9,
	_MAX                           = 10
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibrary1to10other
enum class ELowEntryExtendedStandardLibrary1to10other : uint8_t
{
	_1_                            = 0,
	_2_                            = 1,
	_3_                            = 2,
	_4_                            = 3,
	_5_                            = 4,
	_6_                            = 5,
	_7_                            = 6,
	_8_                            = 7,
	_9_                            = 8,
	_10_                           = 9,
	Other                          = 10,
	ELowEntryExtendedStandardLibrary1to10other_MAX = 11
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryExtendedStandardLibraryTrueOrFalse
enum class ELowEntryExtendedStandardLibraryTrueOrFalse : uint8_t
{
	_True_                         = 0,
	_False_                        = 1,
	_MAX                           = 2
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryHmacAlgorithm
enum class ELowEntryHmacAlgorithm : uint8_t
{
	MD5                            = 0,
	SHA1                           = 1,
	SHA256                         = 2,
	SHA512                         = 3,
	ELowEntryHmacAlgorithm_MAX     = 4
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryImageFormat
enum class ELowEntryImageFormat : uint8_t
{
	Invalid                        = 0,
	PNG                            = 1,
	JPEG                           = 2,
	GrayscaleJPEG                  = 3,
	BMP                            = 4,
	ICO                            = 5,
	EXR                            = 6,
	ICNS                           = 7,
	ELowEntryImageFormat_MAX       = 8
};


// Enum LowEntryExtendedStandardLibrary.ELowEntryRGBFormat
enum class ELowEntryRGBFormat : uint8_t
{
	Invalid                        = 0,
	RGBA                           = 1,
	BGRA                           = 2,
	Gray                           = 3,
	ELowEntryRGBFormat_MAX         = 4
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenType
enum class ELowEntrySplitScreenType : uint8_t
{
	None                           = 0,
	TwoPlayer_Horizontal           = 1,
	TwoPlayer_Vertical             = 2,
	ThreePlayer_FavorTop           = 3,
	ThreePlayer_FavorBottom        = 4,
	ThreePlayer_Vertical           = 5,
	FourPlayer_Grid                = 6,
	FourPlayer_Vertical            = 7,
	ELowEntrySplitScreenType_MAX   = 8
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeThreePlayers
enum class ELowEntrySplitScreenTypeThreePlayers : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	ELowEntrySplitScreenTypeThreePlayers_MAX = 2
};


// Enum LowEntryExtendedStandardLibrary.ELowEntrySplitScreenTypeTwoPlayers
enum class ELowEntrySplitScreenTypeTwoPlayers : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ELowEntrySplitScreenTypeTwoPlayers_MAX = 2
};



// Enum LowEntrySocketConnection.ELowEntryLatentFunctionCallAction
enum class ELowEntryLatentFunctionCallAction : uint8_t
{
	Start                          = 0,
	Cancel                         = 1,
	ELowEntryLatentFunctionCallAction_MAX = 2
};



// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};



// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class EMediaWebcamCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	DepthSensor                    = 1,
	Front                          = 2,
	Rear                           = 3,
	Unknown                        = 4,
	EMediaWebcamCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class EMediaVideoCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Software                       = 2,
	Unknown                        = 3,
	Webcam                         = 4,
	EMediaVideoCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class EMediaAudioCaptureDeviceFilter : uint8_t
{
	None                           = 0,
	Card                           = 1,
	Microphone                     = 2,
	Software                       = 3,
	Unknown                        = 4,
	EMediaAudioCaptureDeviceFilter_MAX = 5
};


// Enum MediaAssets.EMediaPlayerTrack
enum class EMediaPlayerTrack : uint8_t
{
	Audio                          = 0,
	Caption                        = 1,
	Metadata                       = 2,
	Script                         = 3,
	Subtitle                       = 4,
	Text                           = 5,
	Video                          = 6,
	EMediaPlayerTrack_MAX          = 7
};


// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class EMediaSoundComponentFFTSize : uint8_t
{
	Min                            = 0,
	Small                          = 1,
	Medium                         = 2,
	Large                          = 3,
	EMediaSoundComponentFFTSize_MAX = 4
};


// Enum MediaAssets.EMediaSoundChannels
enum class EMediaSoundChannels : uint8_t
{
	Mono                           = 0,
	Stereo                         = 1,
	Surround                       = 2,
	EMediaSoundChannels_MAX        = 3
};



// Enum SubstanceCore.ESubstanceInputType
enum class ESubstanceInputType : uint8_t
{
	SIT_Float                      = 0,
	SIT_Float2                     = 1,
	SIT_Float3                     = 2,
	SIT_Float4                     = 3,
	SIT_Integer                    = 4,
	SIT_Image                      = 5,
	SIT_Unused                     = 6,
	SIT_Unused01                   = 7,
	SIT_Integer2                   = 8,
	SIT_Integer3                   = 9,
	SIT_Integer4                   = 10,
	SIT_MAX                        = 11
};


// Enum SubstanceCore.ESubstanceGenerationMode
enum class ESubstanceGenerationMode : uint8_t
{
	SGM_PlatformDefault            = 0,
	SGM_Baked                      = 1,
	SGM_OnLoadSync                 = 2,
	SGM_OnLoadSyncAndCache         = 3,
	SGM_OnLoadAsync                = 4,
	SGM_OnLoadAsyncAndCache        = 5,
	SGM_MAX                        = 6
};


// Enum SubstanceCore.EDefaultSubstanceTextureSize
enum class EDefaultSubstanceTextureSize : uint8_t
{
	Size                           = 0,
	Size01                         = 1,
	Size02                         = 2,
	Size03                         = 3,
	Size04                         = 4,
	Size05                         = 5,
	Size06                         = 6,
	Size07                         = 7,
	Size08                         = 8,
	Size09                         = 9,
	Size_MAX                       = 10
};


// Enum SubstanceCore.ESubstanceEngineType
enum class ESubstanceEngineType : uint8_t
{
	SET_CPU                        = 0,
	SET_GPU                        = 1,
	SET_MAX                        = 2
};


// Enum SubstanceCore.ESubstanceTextureSize
enum class ESubstanceTextureSize : uint8_t
{
	ERL                            = 0,
	ERL01                          = 1,
	ERL02                          = 2,
	ERL03                          = 3,
	ERL04                          = 4,
	ERL05                          = 5,
	ERL06                          = 6,
	ERL07                          = 7,
	ERL08                          = 8,
	ERL09                          = 9,
	ERL_MAX                        = 10
};



// Enum CoherentUIGTPlugin.ECoherentUIGTKeys
enum class ECoherentUIGTKeys : uint8_t
{
	LeftMouseButton                = 0,
	RightMouseButton               = 1,
	MiddleMouseButton              = 2,
	ThumbMouseButton               = 3,
	ThumbMouseButton2              = 4,
	BackSpace                      = 5,
	Tab                            = 6,
	Enter                          = 7,
	Pause                          = 8,
	CapsLock                       = 9,
	Escape                         = 10,
	SpaceBar                       = 11,
	PageUp                         = 12,
	PageDown                       = 13,
	End                            = 14,
	Home                           = 15,
	Left                           = 16,
	Up                             = 17,
	Right                          = 18,
	Down                           = 19,
	Insert                         = 20,
	Delete                         = 21,
	Zero                           = 22,
	One                            = 23,
	Two                            = 24,
	Three                          = 25,
	Four                           = 26,
	Five                           = 27,
	Six                            = 28,
	Seven                          = 29,
	Eight                          = 30,
	Nine                           = 31,
	A                              = 32,
	B                              = 33,
	C                              = 34,
	D                              = 35,
	E                              = 36,
	F                              = 37,
	G                              = 38,
	H                              = 39,
	I                              = 40,
	J                              = 41,
	K                              = 42,
	L                              = 43,
	M                              = 44,
	N                              = 45,
	O                              = 46,
	P                              = 47,
	Q                              = 48,
	R                              = 49,
	S                              = 50,
	T                              = 51,
	U                              = 52,
	V                              = 53,
	W                              = 54,
	X                              = 55,
	Y                              = 56,
	Z                              = 57,
	NumPadZero                     = 58,
	NumPadOne                      = 59,
	NumPadTwo                      = 60,
	NumPadThree                    = 61,
	NumPadFour                     = 62,
	NumPadFive                     = 63,
	NumPadSix                      = 64,
	NumPadSeven                    = 65,
	NumPadEight                    = 66,
	NumPadNine                     = 67,
	Multiply                       = 68,
	Add                            = 69,
	Subtract                       = 70,
	Decimal                        = 71,
	Divide                         = 72,
	F1                             = 73,
	F2                             = 74,
	F3                             = 75,
	F4                             = 76,
	F5                             = 77,
	F6                             = 78,
	F7                             = 79,
	F8                             = 80,
	F9                             = 81,
	F10                            = 82,
	F11                            = 83,
	F12                            = 84,
	NumLock                        = 85,
	ScrollLock                     = 86,
	LeftShift                      = 87,
	RightShift                     = 88,
	LeftControl                    = 89,
	RightControl                   = 90,
	LeftAlt                        = 91,
	RightAlt                       = 92,
	LeftCommand                    = 93,
	RightCommand                   = 94,
	Semicolon                      = 95,
	Equals                         = 96,
	Comma                          = 97,
	Underscore                     = 98,
	Period                         = 99,
	Slash                          = 100,
	Tilde                          = 101,
	LeftBracket                    = 102,
	Backslash                      = 103,
	RightBracket                   = 104,
	Quote                          = 105,
	Unknown                        = 106,
	ECoherentUIGTKeys_MAX          = 107
};


// Enum CoherentUIGTPlugin.ECoherentUIGTInputPropagationBehaviour
enum class ECoherentUIGTInputPropagationBehaviour : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Joystick                       = 2,
	KeyboardAndJoystick            = 3,
	ECoherentUIGTInputPropagationBehaviour_MAX = 4
};


// Enum CoherentUIGTPlugin.ECoh_MouseButton
enum class ECoh_MouseButton : uint8_t
{
	ButtonNone                     = 0,
	ButtonLeft                     = 1,
	ButtonMiddle                   = 2,
	ButtonRight                    = 3,
	ECoh_MAX                       = 4
};


// Enum CoherentUIGTPlugin.ECoh_EventType
enum class ECoh_EventType : uint8_t
{
	MouseMove                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	MouseWheel                     = 3,
	ECoh_MAX                       = 4
};


// Enum CoherentUIGTPlugin.ECoherentUIGTMSAA
enum class ECoherentUIGTMSAA : uint8_t
{
	MSAA_1x                        = 0,
	MSAA_2x                        = 1,
	MSAA_4x                        = 2,
	MSAA_MAX                       = 3
};


// Enum CoherentUIGTPlugin.ECoherentUIGTSettingsSeverity
enum class ECoherentUIGTSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentUIGTSettingsSeverity_MAX = 6
};


// Enum CoherentUIGTPlugin.EGamepadBehaviourOnFocusLost
enum class EGamepadBehaviourOnFocusLost : uint8_t
{
	ResetState                     = 0,
	UseCurrentState                = 1,
	UseStateBeforeReset            = 2,
	EGamepadBehaviourOnFocusLost_MAX = 3
};


// Enum CoherentUIGTPlugin.EGTInputWidgetLineTraceMode
enum class EGTInputWidgetLineTraceMode : uint8_t
{
	GTInputLineTrace_Single        = 0,
	GTInputLineTrace_Multi         = 1,
	GTInputLineTrace_MAX           = 2
};


// Enum CoherentUIGTPlugin.EGTInputWidgetRaycastQuality
enum class EGTInputWidgetRaycastQuality : uint8_t
{
	RaycastQuality_Fast            = 0,
	RaycastQuality_Balanced        = 1,
	RaycastQuality_Accurate        = 2,
	RaycastQuality_MAX             = 3
};



// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	NotAccessible                  = 0,
	Auto                           = 1,
	Summary                        = 2,
	Custom                         = 3,
	ToolTip                        = 4,
	ESlateAccessibleBehavior_MAX   = 5
};


// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	HitTestInvisible               = 3,
	SelfHitTestInvisible           = 4,
	ESlateVisibility_MAX           = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	Default                        = 0,
	Number                         = 1,
	Web                            = 2,
	Email                          = 3,
	Password                       = 4,
	AlphaNumeric                   = 5,
	EVirtualKeyboardType_MAX       = 6
};


// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	Started                        = 0,
	Finished                       = 1,
	EWidgetAnimationEvent_MAX      = 2
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	PingPong                       = 2,
	EUMGSequencePlayMode_MAX       = 3
};


// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	Never                          = 0,
	Auto                           = 1,
	EWidgetTickFrequency_MAX       = 2
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	MouseDown                      = 0,
	TopLeft                        = 1,
	TopCenter                      = 2,
	TopRight                       = 3,
	CenterLeft                     = 4,
	CenterCenter                   = 5,
	CenterRight                    = 6,
	BottomLeft                     = 7,
	BottomCenter                   = 8,
	BottomRight                    = 9,
	EDragPivot_MAX                 = 10
};


// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Wrap                           = 2,
	Overlay                        = 3,
	EDynamicBoxType_MAX            = 4
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	Automatic                      = 0,
	Fill                           = 1,
	ESlateSizeRule_MAX             = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	None                           = 0,
	Designing                      = 1,
	ShowOutline                    = 2,
	ExecutePreConstruct            = 3,
	EWidgetDesignFlags_MAX         = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	Function                       = 0,
	Property                       = 1,
	EBindingKind_MAX               = 2
};


// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	Visible                        = 0,
	SelfHitTestInvisible           = 1,
	EWindowVisibility_MAX          = 2
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	Plane                          = 0,
	Cylinder                       = 1,
	EWidgetGeometryMode_MAX        = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	Opaque                         = 0,
	Masked                         = 1,
	Transparent                    = 2,
	EWidgetBlendMode_MAX           = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	RealTime                       = 0,
	GameTime                       = 1,
	EWidgetTimingPolicy_MAX        = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	World                          = 0,
	Screen                         = 1,
	EWidgetSpace_MAX               = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	World                          = 0,
	Mouse                          = 1,
	CenterScreen                   = 2,
	Custom                         = 3,
	EWidgetInteractionSource_MAX   = 4
};



// Enum CoherentRenderingPlugin.ECoherentRenderingSettingsSeverity
enum class ECoherentRenderingSettingsSeverity : uint8_t
{
	Trace                          = 0,
	Debug                          = 1,
	Info                           = 2,
	Warning                        = 3,
	AssertFailure                  = 4,
	Error                          = 5,
	ECoherentRenderingSettingsSeverity_MAX = 6
};



// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class EInAppPurchaseStatus : uint8_t
{
	Invalid                        = 0,
	Failed                         = 1,
	Deferred                       = 2,
	Canceled                       = 3,
	Purchased                      = 4,
	Restored                       = 5,
	EInAppPurchaseStatus_MAX       = 6
};


// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class EOnlineProxyStoreOfferDiscountType : uint8_t
{
	NotOnSale                      = 0,
	Percentage                     = 1,
	DiscountAmount                 = 2,
	PayAmount                      = 3,
	EOnlineProxyStoreOfferDiscountType_MAX = 4
};


// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class EBeaconConnectionState : uint8_t
{
	Invalid                        = 0,
	Closed                         = 1,
	Pending                        = 2,
	Open                           = 3,
	EBeaconConnectionState_MAX     = 4
};


// Enum OnlineSubsystemUtils.EClientRequestType
enum class EClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ReservationRemoveMembers       = 6,
	EClientRequestType_MAX         = 7
};


// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class EPartyReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	PartyLimitReached              = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX    = 16
};


// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class ESpectatorClientRequestType : uint8_t
{
	NonePending                    = 0,
	ExistingSessionReservation     = 1,
	ReservationUpdate              = 2,
	EmptyServerReservation         = 3,
	Reconnect                      = 4,
	Abandon                        = 5,
	ESpectatorClientRequestType_MAX = 6
};


// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class ESpectatorReservationResult : uint8_t
{
	NoResult                       = 0,
	RequestPending                 = 1,
	GeneralError                   = 2,
	SpectatorLimitReached          = 3,
	IncorrectPlayerCount           = 4,
	RequestTimedOut                = 5,
	ReservationDuplicate           = 6,
	ReservationNotFound            = 7,
	ReservationAccepted            = 8,
	ReservationDenied              = 9,
	ReservationDenied_CrossPlayRestriction = 10,
	ReservationDenied_Banned       = 11,
	ReservationRequestCanceled     = 12,
	ReservationInvalid             = 13,
	BadSessionId                   = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX = 16
};



// Enum OnlineSubsystem.EInAppPurchaseState
enum class EInAppPurchaseState : uint8_t
{
	Unknown                        = 0,
	Success                        = 1,
	Failed                         = 2,
	Cancelled                      = 3,
	Invalid                        = 4,
	NotAllowed                     = 5,
	Restored                       = 6,
	AlreadyOwned                   = 7,
	EInAppPurchaseState_MAX        = 8
};


// Enum OnlineSubsystem.EMPMatchOutcome
enum class EMPMatchOutcome : uint8_t
{
	None                           = 0,
	Quit                           = 1,
	Won                            = 2,
	Lost                           = 3,
	Tied                           = 4,
	TimeExpired                    = 5,
	First                          = 6,
	Second                         = 7,
	Third                          = 8,
	Fourth                         = 9,
	EMPMatchOutcome_MAX            = 10
};



// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	MagnitudeSpectrum              = 0,
	PowerSpectrum                  = 1,
	EAudioSpectrumType_MAX         = 2
};


// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	None                           = 0,
	Hamming                        = 1,
	Hann                           = 2,
	Blackman                       = 3,
	EFFTWindowType_MAX             = 4
};


// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	NearestNeighbor                = 0,
	Linear                         = 1,
	Quadratic                      = 2,
	EFFTPeakInterpolationMethod_MAX = 3
};


// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
	DefaultSize                    = 0,
	Min                            = 1,
	Small                          = 2,
	Medium                         = 3,
	Large                          = 4,
	Max                            = 5
};


// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	Disabled                       = 0,
	Average                        = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5
};



// Enum UFSM.FSM_Transition
enum class EFSM_Transition : uint8_t
{
	Aborted                        = 0,
	Succeeded                      = 1,
	FSM_MAX                        = 2
};


// Enum UFSM.ESeverity
enum class ESeverity : uint8_t
{
	Fatal                          = 0,
	Error                          = 1,
	Warning                        = 2,
	Info                           = 3,
	ESeverity_MAX                  = 4
};



// Enum AIModule.EPathFollowingResult
enum class EPathFollowingResult : uint8_t
{
	Success                        = 0,
	Blocked                        = 1,
	OffPath                        = 2,
	Aborted                        = 3,
	Skipped_DEPRECATED             = 4,
	Invalid                        = 5,
	EPathFollowingResult_MAX       = 6
};


// Enum AIModule.EEnvQueryStatus
enum class EEnvQueryStatus : uint8_t
{
	Processing                     = 0,
	Success                        = 1,
	Failed                         = 2,
	Aborted                        = 3,
	OwnerLost                      = 4,
	MissingParam                   = 5,
	EEnvQueryStatus_MAX            = 6
};


// Enum AIModule.EAISenseNotifyType
enum class EAISenseNotifyType : uint8_t
{
	OnEveryPerception              = 0,
	OnPerceptionChange             = 1,
	EAISenseNotifyType_MAX         = 2
};


// Enum AIModule.EAITaskPriority
enum class EAITaskPriority : uint8_t
{
	Lowest                         = 0,
	Low                            = 1,
	AutonomousAI                   = 2,
	High                           = 3,
	Ultimate                       = 4,
	EAITaskPriority_MAX            = 5
};


// Enum AIModule.EGenericAICheck
enum class EGenericAICheck : uint8_t
{
	Less                           = 0,
	LessOrEqual                    = 1,
	Equal                          = 2,
	NotEqual                       = 3,
	GreaterOrEqual                 = 4,
	Greater                        = 5,
	IsTrue                         = 6,
	MAX                            = 7
};


// Enum AIModule.EAILockSource
enum class EAILockSource : uint8_t
{
	Animation                      = 0,
	Logic                          = 1,
	Script                         = 2,
	Gameplay                       = 3,
	MAX                            = 4
};


// Enum AIModule.EAIRequestPriority
enum class EAIRequestPriority : uint8_t
{
	SoftScript                     = 0,
	Logic                          = 1,
	HardScript                     = 2,
	Reaction                       = 3,
	Ultimate                       = 4,
	MAX                            = 5
};


// Enum AIModule.EPawnActionEventType
enum class EPawnActionEventType : uint8_t
{
	Invalid                        = 0,
	FailedToStart                  = 1,
	InstantAbort                   = 2,
	FinishedAborting               = 3,
	FinishedExecution              = 4,
	Push                           = 5,
	EPawnActionEventType_MAX       = 6
};


// Enum AIModule.EPawnActionResult
enum class EPawnActionResult : uint8_t
{
	NotStarted                     = 0,
	InProgress                     = 1,
	Success                        = 2,
	Failed                         = 3,
	Aborted                        = 4,
	EPawnActionResult_MAX          = 5
};


// Enum AIModule.EPawnActionAbortState
enum class EPawnActionAbortState : uint8_t
{
	NeverStarted                   = 0,
	NotBeingAborted                = 1,
	MarkPendingAbort               = 2,
	LatentAbortInProgress          = 3,
	AbortDone                      = 4,
	MAX                            = 5
};


// Enum AIModule.FAIDistanceType
enum class EFAIDistanceType : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	MAX                            = 3
};


// Enum AIModule.EAIOptionFlag
enum class EAIOptionFlag : uint8_t
{
	Default                        = 0,
	Enable                         = 1,
	Disable                        = 2,
	MAX                            = 3
};


// Enum AIModule.EBTFlowAbortMode
enum class EBTFlowAbortMode : uint8_t
{
	None                           = 0,
	LowerPriority                  = 1,
	Self                           = 2,
	Both                           = 3,
	EBTFlowAbortMode_MAX           = 4
};


// Enum AIModule.EBTNodeResult
enum class EBTNodeResult : uint8_t
{
	Succeeded                      = 0,
	Failed                         = 1,
	Aborted                        = 2,
	InProgress                     = 3,
	EBTNodeResult_MAX              = 4
};


// Enum AIModule.ETextKeyOperation
enum class ETextKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Contain                        = 2,
	NotContain                     = 3,
	ETextKeyOperation_MAX          = 4
};


// Enum AIModule.EArithmeticKeyOperation
enum class EArithmeticKeyOperation : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	Less                           = 2,
	LessOrEqual                    = 3,
	Greater                        = 4,
	GreaterOrEqual                 = 5,
	EArithmeticKeyOperation_MAX    = 6
};


// Enum AIModule.EBasicKeyOperation
enum class EBasicKeyOperation : uint8_t
{
	Set                            = 0,
	NotSet                         = 1,
	EBasicKeyOperation_MAX         = 2
};


// Enum AIModule.EBTParallelMode
enum class EBTParallelMode : uint8_t
{
	AbortBackground                = 0,
	WaitForBackground              = 1,
	EBTParallelMode_MAX            = 2
};


// Enum AIModule.EBTDecoratorLogic
enum class EBTDecoratorLogic : uint8_t
{
	Invalid                        = 0,
	Test                           = 1,
	And                            = 2,
	Or                             = 3,
	Not                            = 4,
	EBTDecoratorLogic_MAX          = 5
};


// Enum AIModule.EBTChildIndex
enum class EBTChildIndex : uint8_t
{
	FirstNode                      = 0,
	TaskNode                       = 1,
	EBTChildIndex_MAX              = 2
};


// Enum AIModule.EBTBlackboardRestart
enum class EBTBlackboardRestart : uint8_t
{
	ValueChange                    = 0,
	ResultChange                   = 1,
	EBTBlackboardRestart_MAX       = 2
};


// Enum AIModule.EBlackBoardEntryComparison
enum class EBlackBoardEntryComparison : uint8_t
{
	Equal                          = 0,
	NotEqual                       = 1,
	EBlackBoardEntryComparison_MAX = 2
};


// Enum AIModule.EPathExistanceQueryType
enum class EPathExistanceQueryType : uint8_t
{
	NavmeshRaycast2D               = 0,
	HierarchicalQuery              = 1,
	RegularPathFinding             = 2,
	EPathExistanceQueryType_MAX    = 3
};


// Enum AIModule.EPointOnCircleSpacingMethod
enum class EPointOnCircleSpacingMethod : uint8_t
{
	BySpaceBetween                 = 0,
	ByNumberOfPoints               = 1,
	EPointOnCircleSpacingMethod_MAX = 2
};


// Enum AIModule.EEQSNormalizationType
enum class EEQSNormalizationType : uint8_t
{
	Absolute                       = 0,
	RelativeToScores               = 1,
	EEQSNormalizationType_MAX      = 2
};


// Enum AIModule.EEnvTestDistance
enum class EEnvTestDistance : uint8_t
{
	Distance3D                     = 0,
	Distance2D                     = 1,
	DistanceZ                      = 2,
	DistanceAbsoluteZ              = 3,
	EEnvTestDistance_MAX           = 4
};


// Enum AIModule.EEnvTestDot
enum class EEnvTestDot : uint8_t
{
	Dot3D                          = 0,
	Dot2D                          = 1,
	EEnvTestDot_MAX                = 2
};


// Enum AIModule.EEnvTestPathfinding
enum class EEnvTestPathfinding : uint8_t
{
	PathExist                      = 0,
	PathCost                       = 1,
	PathLength                     = 2,
	EEnvTestPathfinding_MAX        = 3
};


// Enum AIModule.EEnvQueryTestClamping
enum class EEnvQueryTestClamping : uint8_t
{
	None                           = 0,
	SpecifiedValue                 = 1,
	FilterThreshold                = 2,
	EEnvQueryTestClamping_MAX      = 3
};


// Enum AIModule.EEnvDirection
enum class EEnvDirection : uint8_t
{
	TwoPoints                      = 0,
	Rotation                       = 1,
	EEnvDirection_MAX              = 2
};


// Enum AIModule.EEnvOverlapShape
enum class EEnvOverlapShape : uint8_t
{
	Box                            = 0,
	Sphere                         = 1,
	Capsule                        = 2,
	EEnvOverlapShape_MAX           = 3
};


// Enum AIModule.EEnvTraceShape
enum class EEnvTraceShape : uint8_t
{
	Line                           = 0,
	Box                            = 1,
	Sphere                         = 2,
	Capsule                        = 3,
	EEnvTraceShape_MAX             = 4
};


// Enum AIModule.EEnvQueryTrace
enum class EEnvQueryTrace : uint8_t
{
	None                           = 0,
	Navigation                     = 1,
	Geometry                       = 2,
	NavigationOverLedges           = 3,
	EEnvQueryTrace_MAX             = 4
};


// Enum AIModule.EAIParamType
enum class EAIParamType : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	MAX                            = 3
};


// Enum AIModule.EEnvQueryParam
enum class EEnvQueryParam : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	EEnvQueryParam_MAX             = 3
};


// Enum AIModule.EEnvQueryRunMode
enum class EEnvQueryRunMode : uint8_t
{
	SingleResult                   = 0,
	RandomBest5Pct                 = 1,
	RandomBest25Pct                = 2,
	AllMatching                    = 3,
	EEnvQueryRunMode_MAX           = 4
};


// Enum AIModule.EEnvTestScoreOperator
enum class EEnvTestScoreOperator : uint8_t
{
	AverageScore                   = 0,
	MinScore                       = 1,
	MaxScore                       = 2,
	Multiply                       = 3,
	EEnvTestScoreOperator_MAX      = 4
};


// Enum AIModule.EEnvTestFilterOperator
enum class EEnvTestFilterOperator : uint8_t
{
	AllPass                        = 0,
	AnyPass                        = 1,
	EEnvTestFilterOperator_MAX     = 2
};


// Enum AIModule.EEnvTestCost
enum class EEnvTestCost : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EEnvTestCost_MAX               = 3
};


// Enum AIModule.EEnvTestWeight
enum class EEnvTestWeight : uint8_t
{
	None                           = 0,
	Square                         = 1,
	Inverse                        = 2,
	Unused                         = 3,
	Constant                       = 4,
	Skip                           = 5,
	EEnvTestWeight_MAX             = 6
};


// Enum AIModule.EEnvTestScoreEquation
enum class EEnvTestScoreEquation : uint8_t
{
	Linear                         = 0,
	Square                         = 1,
	InverseLinear                  = 2,
	SquareRoot                     = 3,
	Constant                       = 4,
	EEnvTestScoreEquation_MAX      = 5
};


// Enum AIModule.EEnvTestFilterType
enum class EEnvTestFilterType : uint8_t
{
	Minimum                        = 0,
	Maximum                        = 1,
	Range                          = 2,
	Match                          = 3,
	EEnvTestFilterType_MAX         = 4
};


// Enum AIModule.EEnvTestPurpose
enum class EEnvTestPurpose : uint8_t
{
	Filter                         = 0,
	Score                          = 1,
	FilterAndScore                 = 2,
	EEnvTestPurpose_MAX            = 3
};


// Enum AIModule.EEnvQueryHightlightMode
enum class EEnvQueryHightlightMode : uint8_t
{
	All                            = 0,
	Best5Pct                       = 1,
	Best25Pct                      = 2,
	EEnvQueryHightlightMode_MAX    = 3
};


// Enum AIModule.ETeamAttitude
enum class ETeamAttitude : uint8_t
{
	Friendly                       = 0,
	Neutral                        = 1,
	Hostile                        = 2,
	ETeamAttitude_MAX              = 3
};


// Enum AIModule.EPathFollowingRequestResult
enum class EPathFollowingRequestResult : uint8_t
{
	Failed                         = 0,
	AlreadyAtGoal                  = 1,
	RequestSuccessful              = 2,
	EPathFollowingRequestResult_MAX = 3
};


// Enum AIModule.EPathFollowingAction
enum class EPathFollowingAction : uint8_t
{
	Error                          = 0,
	NoMove                         = 1,
	DirectMove                     = 2,
	PartialPath                    = 3,
	PathToGoal                     = 4,
	EPathFollowingAction_MAX       = 5
};


// Enum AIModule.EPathFollowingStatus
enum class EPathFollowingStatus : uint8_t
{
	Idle                           = 0,
	Waiting                        = 1,
	Paused                         = 2,
	Moving                         = 3,
	EPathFollowingStatus_MAX       = 4
};


// Enum AIModule.EPawnActionFailHandling
enum class EPawnActionFailHandling : uint8_t
{
	RequireSuccess                 = 0,
	IgnoreFailure                  = 1,
	EPawnActionFailHandling_MAX    = 2
};


// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class EPawnSubActionTriggeringPolicy : uint8_t
{
	CopyBeforeTriggering           = 0,
	ReuseInstances                 = 1,
	EPawnSubActionTriggeringPolicy_MAX = 2
};


// Enum AIModule.EPawnActionMoveMode
enum class EPawnActionMoveMode : uint8_t
{
	UsePathfinding                 = 0,
	StraightLine                   = 1,
	EPawnActionMoveMode_MAX        = 2
};



// Enum ReplicationOptimizer.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	NotRouted                      = 0,
	RelevantAllConnections         = 1,
	Spatialize_Static_Conditional  = 2,
	Spatialize_Static_Always       = 3,
	Spatialize_Dynamic             = 4,
	Spatialize_Dormancy            = 5,
	EClassRepNodeMapping_MAX       = 6
};



// Enum PrefabAsset.EPrefabVariantRuleType
enum class EPrefabVariantRuleType : uint8_t
{
	SkipProp                       = 0,
	EPrefabVariantRuleType_MAX     = 1
};


// Enum PrefabAsset.EPTUITheme
enum class EPTUITheme : uint8_t
{
	Default                        = 0,
	Dark                           = 1,
	EPTUITheme_MAX                 = 2
};


// Enum PrefabAsset.EPrefabVisualizerType
enum class EPrefabVisualizerType : uint8_t
{
	WireBox                        = 0,
	WireSphere                     = 1,
	EPrefabVisualizerType_MAX      = 2
};



// Enum XlntLib.ExcelUnderlineType
enum class ExcelUnderlineType : uint8_t
{
	None                           = 0,
	Double                         = 1,
	DoubleAccounting               = 2,
	Single                         = 3,
	SingleAccounting               = 4,
	ExcelUnderlineType_MAX         = 5
};


// Enum XlntLib.ExcelFillType
enum class ExcelFillType : uint8_t
{
	Pattern                        = 0,
	Gradient                       = 1,
	ExcelFillType_MAX              = 2
};


// Enum XlntLib.ExcelGradientFillType
enum class ExcelGradientFillType : uint8_t
{
	Linear                         = 0,
	Path                           = 1,
	ExcelGradientFillType_MAX      = 2
};


// Enum XlntLib.ExcelPatternFillType
enum class ExcelPatternFillType : uint8_t
{
	None                           = 0,
	Solid                          = 1,
	Mediumgray                     = 2,
	Darkgray                       = 3,
	LightGray                      = 4,
	DarkHorizontal                 = 5,
	DarkVertical                   = 6,
	DarkDown                       = 7,
	DarkUp                         = 8,
	DarkGrid                       = 9,
	DarkTrellis                    = 10,
	LightHorizontal                = 11,
	LightVertical                  = 12,
	LightDown                      = 13,
	LightUp                        = 14,
	LightGrid                      = 15,
	LightTrellis                   = 16,
	Gray125                        = 17,
	Gray0625                       = 18,
	ExcelPatternFillType_MAX       = 19
};


// Enum XlntLib.ExcelColorType
enum class ExcelColorType : uint8_t
{
	Indexed                        = 0,
	Theme                          = 1,
	RGB                            = 2,
	ExcelColorType_MAX             = 3
};


// Enum XlntLib.ExcelBorderStyle
enum class ExcelBorderStyle : uint8_t
{
	None                           = 0,
	DashDot                        = 1,
	DashDotDot                     = 2,
	Dashed                         = 3,
	Dotted                         = 4,
	Double                         = 5,
	Hair                           = 6,
	Medium                         = 7,
	MediumDashDot                  = 8,
	MediumDashDotDot               = 9,
	MediumDashed                   = 10,
	SlantDashDot                   = 11,
	Thick                          = 12,
	Thin                           = 13,
	ExcelBorderStyle_MAX           = 14
};


// Enum XlntLib.ExcelBorderSideType
enum class ExcelBorderSideType : uint8_t
{
	Start                          = 0,
	End                            = 1,
	Top                            = 2,
	Bottom                         = 3,
	Diagonal                       = 4,
	Vertical                       = 5,
	Horizontal                     = 6,
	ExcelBorderSideType_MAX        = 7
};


// Enum XlntLib.ExcelBorderDiagonalDirection
enum class ExcelBorderDiagonalDirection : uint8_t
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Both                           = 3,
	ExcelBorderDiagonalDirection_MAX = 4
};


// Enum XlntLib.ExcelVerticalAlignment
enum class ExcelVerticalAlignment : uint8_t
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	Justify                        = 3,
	Distributed                    = 4,
	ExcelVerticalAlignment_MAX     = 5
};


// Enum XlntLib.ExcelHorizontalAlignment
enum class ExcelHorizontalAlignment : uint8_t
{
	General                        = 0,
	Left                           = 1,
	Center                         = 2,
	Right                          = 3,
	Fill                           = 4,
	Justify                        = 5,
	CenterContinuous               = 6,
	Distributed                    = 7,
	ExcelHorizontalAlignment_MAX   = 8
};


// Enum XlntLib.ExcelExtendedProperty
enum class ExcelExtendedProperty : uint8_t
{
	Application                    = 0,
	AppVersion                     = 1,
	Characters                     = 2,
	CharactersWithWpaces           = 3,
	Company                        = 4,
	Digsig                         = 5,
	DocSecurity                    = 6,
	HeadingPairs                   = 7,
	HiddenSlides                   = 8,
	HLinks                         = 9,
	HyperlinkBase                  = 10,
	HyperlinksChanged              = 11,
	Lines                          = 12,
	LinksUpToDate                  = 13,
	Manager                        = 14,
	MMClips                        = 15,
	Notes                          = 16,
	Pages                          = 17,
	Paragraphs                     = 18,
	PresentationFormat             = 19,
	ScaleCrop                      = 20,
	SharedDoc                      = 21,
	Slides                         = 22,
	Template                       = 23,
	TitlesOfParts                  = 24,
	TotalTime                      = 25,
	Words                          = 26,
	ExcelExtendedProperty_MAX      = 27
};


// Enum XlntLib.ExcelCoreProperty
enum class ExcelCoreProperty : uint8_t
{
	Category                       = 0,
	Content_status                 = 1,
	Created                        = 2,
	Creator                        = 3,
	Description                    = 4,
	Identifier                     = 5,
	Keywords                       = 6,
	Language                       = 7,
	LastModifiedBy                 = 8,
	LastPrinted                    = 9,
	Modified                       = 10,
	Revision                       = 11,
	Subject                        = 12,
	Title                          = 13,
	Version                        = 14,
	ExcelCoreProperty_MAX          = 15
};


// Enum XlntLib.ExcelCellType
enum class ExcelCellType : uint8_t
{
	Empty                          = 0,
	Boolean                        = 1,
	Date                           = 2,
	Error                          = 3,
	InlineString                   = 4,
	Number                         = 5,
	SharedString                   = 6,
	FormulaString                  = 7,
	ExcelCellType_MAX              = 8
};


// Enum XlntLib.ExcelBaseDate
enum class ExcelBaseDate : uint8_t
{
	Windows1900                    = 0,
	Mac1904                        = 1,
	ExcelBaseDate_MAX              = 2
};


// Enum XlntLib.ExcelVariantType
enum class ExcelVariantType : uint8_t
{
	None                           = 0,
	Bool                           = 1,
	Int32                          = 2,
	String                         = 3,
	DateTime                       = 4,
	Array                          = 5,
	ExcelVariantType_MAX           = 6
};


// Enum XlntLib.ExcelSortType
enum class ExcelSortType : uint8_t
{
	None                           = 0,
	Ascending                      = 1,
	Descending                     = 2,
	ExcelSortType_MAX              = 3
};



// Enum RMAFoliageTools.ERMAFoliageToolsIncludeMode
enum class ERMAFoliageToolsIncludeMode : uint8_t
{
	RMAIM_All                      = 0,
	RMAIM_Selection                = 1,
	RMAIM_MAX                      = 2
};



// Enum HoudiniNiagara.EHoudiniAttributes
enum class EHoudiniAttributes : uint8_t
{
	HOUDINI_ATTR_BEGIN             = 0,
	Position                       = 1,
	Normal                         = 2,
	Time                           = 3,
	POINTID                        = 4,
	ALIVE                          = 5,
	LIFE                           = 6,
	Color                          = 7,
	ALPHA                          = 8,
	Velocity                       = 9,
	Type                           = 10,
	Impulse                        = 11,
	HOUDINI_ATTR_SIZE              = 12,
	HOUDINI_ATTR_END               = 13,
	EHoudiniAttributes_MAX         = 14
};



// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3
};


// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2
};


// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1
};


// Enum Niagara.ENiagaraCollisionMode
enum class ENiagaraCollisionMode : uint8_t
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4
};


// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class ENiagaraLegacyTrailWidthMode : uint8_t
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3
};


// Enum Niagara.ENiagaraIterationSource
enum class ENiagaraIterationSource : uint8_t
{
	Particles                      = 0,
	DataInterface                  = 1,
	ENiagaraIterationSource_MAX    = 2
};


// Enum Niagara.ENiagaraScriptGroup
enum class ENiagaraScriptGroup : uint8_t
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3
};


// Enum Niagara.ENiagaraScriptUsage
enum class ENiagaraScriptUsage : uint8_t
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13
};


// Enum Niagara.ENiagaraScriptCompileStatus
enum class ENiagaraScriptCompileStatus : uint8_t
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7
};


// Enum Niagara.ENiagaraInputNodeUsage
enum class ENiagaraInputNodeUsage : uint8_t
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6
};


// Enum Niagara.ENiagaraDataSetType
enum class ENiagaraDataSetType : uint8_t
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3
};


// Enum Niagara.ENiagaraAgeUpdateMode
enum class ENiagaraAgeUpdateMode : uint8_t
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3
};


// Enum Niagara.ENiagaraSimTarget
enum class ENiagaraSimTarget : uint8_t
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2
};


// Enum Niagara.ENiagaraDefaultMode
enum class ENiagaraDefaultMode : uint8_t
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	ENiagaraDefaultMode_MAX        = 3
};


// Enum Niagara.ENiagaraTickBehavior
enum class ENiagaraTickBehavior : uint8_t
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4
};


// Enum Niagara.ENCPoolMethod
enum class ENCPoolMethod : uint8_t
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5
};


// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class ENDISkeletalMesh_SkinningMode : uint8_t
{
	Invalid                        = 0,
	None                           = 1,
	SkinOnTheFly                   = 2,
	PreSkin                        = 3,
	ENDISkeletalMesh_MAX           = 4
};


// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class ENiagaraScalabilityUpdateFrequency : uint8_t
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5
};


// Enum Niagara.ENiagaraCullReaction
enum class ENiagaraCullReaction : uint8_t
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	ENiagaraCullReaction_MAX       = 4
};


// Enum Niagara.EParticleAllocationMode
enum class EParticleAllocationMode : uint8_t
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	EParticleAllocationMode_MAX    = 2
};


// Enum Niagara.EScriptExecutionMode
enum class EScriptExecutionMode : uint8_t
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3
};


// Enum Niagara.ENiagaraSortMode
enum class ENiagaraSortMode : uint8_t
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5
};


// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class ENiagaraMeshLockedAxisSpace : uint8_t
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3
};


// Enum Niagara.ENiagaraMeshFacingMode
enum class ENiagaraMeshFacingMode : uint8_t
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4
};


// Enum Niagara.ENiagaraPlatformSetState
enum class ENiagaraPlatformSetState : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4
};


// Enum Niagara.ENiagaraPlatformSelectionState
enum class ENiagaraPlatformSelectionState : uint8_t
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3
};


// Enum Niagara.ENiagaraPreviewGridResetMode
enum class ENiagaraPreviewGridResetMode : uint8_t
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonTessellationMode
enum class ENiagaraRibbonTessellationMode : uint8_t
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3
};


// Enum Niagara.ENiagaraRibbonDrawDirection
enum class ENiagaraRibbonDrawDirection : uint8_t
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2
};


// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class ENiagaraRibbonAgeOffsetMode : uint8_t
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2
};


// Enum Niagara.ENiagaraRibbonFacingMode
enum class ENiagaraRibbonFacingMode : uint8_t
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3
};


// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2
};


// Enum Niagara.ENiagaraModuleDependencyType
enum class ENiagaraModuleDependencyType : uint8_t
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2
};


// Enum Niagara.EUnusedAttributeBehaviour
enum class EUnusedAttributeBehaviour : uint8_t
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5
};


// Enum Niagara.ENiagaraSpriteFacingMode
enum class ENiagaraSpriteFacingMode : uint8_t
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	ENiagaraSpriteFacingMode_MAX   = 5
};


// Enum Niagara.ENiagaraSpriteAlignment
enum class ENiagaraSpriteAlignment : uint8_t
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	ENiagaraSpriteAlignment_MAX    = 3
};


// Enum Niagara.ENiagaraParameterPanelCategory
enum class ENiagaraParameterPanelCategory : uint8_t
{
	Input                          = 0,
	Attributes                     = 1,
	Output                         = 2,
	Local                          = 3,
	User                           = 4,
	Engine                         = 5,
	Owner                          = 6,
	System                         = 7,
	Emitter                        = 8,
	Particles                      = 9,
	ScriptTransient                = 10,
	StaticSwitch                   = 11,
	None                           = 12,
	Num                            = 13,
	ENiagaraParameterPanelCategory_MAX = 14
};


// Enum Niagara.ENiagaraScriptParameterUsage
enum class ENiagaraScriptParameterUsage : uint8_t
{
	Input                          = 0,
	Output                         = 1,
	Local                          = 2,
	InputOutput                    = 3,
	InitialValueInput              = 4,
	None                           = 5,
	Num                            = 6,
	ENiagaraScriptParameterUsage_MAX = 7
};


// Enum Niagara.ENiagaraParameterScope
enum class ENiagaraParameterScope : uint8_t
{
	Input                          = 0,
	User                           = 1,
	Engine                         = 2,
	Owner                          = 3,
	System                         = 4,
	Emitter                        = 5,
	Particles                      = 6,
	ScriptPersistent               = 7,
	ScriptTransient                = 8,
	Local                          = 9,
	Custom                         = 10,
	DISPLAY_ONLY_StaticSwitch      = 11,
	Output                         = 12,
	None                           = 13,
	Num                            = 14,
	ENiagaraParameterScope_MAX     = 15
};


// Enum Niagara.ENiagaraExecutionState
enum class ENiagaraExecutionState : uint8_t
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6
};


// Enum Niagara.ENiagaraExecutionStateSource
enum class ENiagaraExecutionStateSource : uint8_t
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4
};


// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 4
};


// Enum Niagara.ENiagaraVariantMode
enum class ENiagaraVariantMode : uint8_t
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4
};



// Enum MovieScene.EMovieSceneKeyInterpolation
enum class EMovieSceneKeyInterpolation : uint8_t
{
	Auto                           = 0,
	User                           = 1,
	Break                          = 2,
	Linear                         = 3,
	Constant                       = 4,
	EMovieSceneKeyInterpolation_MAX = 5
};


// Enum MovieScene.EMovieSceneBlendType
enum class EMovieSceneBlendType : uint8_t
{
	Invalid                        = 0,
	Absolute                       = 1,
	Additive                       = 2,
	Relative                       = 3,
	EMovieSceneBlendType_MAX       = 4
};


// Enum MovieScene.EMovieSceneBuiltInEasing
enum class EMovieSceneBuiltInEasing : uint8_t
{
	Linear                         = 0,
	SinIn                          = 1,
	SinOut                         = 2,
	SinInOut                       = 3,
	QuadIn                         = 4,
	QuadOut                        = 5,
	QuadInOut                      = 6,
	CubicIn                        = 7,
	CubicOut                       = 8,
	CubicInOut                     = 9,
	QuartIn                        = 10,
	QuartOut                       = 11,
	QuartInOut                     = 12,
	QuintIn                        = 13,
	QuintOut                       = 14,
	QuintInOut                     = 15,
	ExpoIn                         = 16,
	ExpoOut                        = 17,
	ExpoInOut                      = 18,
	CircIn                         = 19,
	CircOut                        = 20,
	CircInOut                      = 21,
	EMovieSceneBuiltInEasing_MAX   = 22
};


// Enum MovieScene.EEvaluationMethod
enum class EEvaluationMethod : uint8_t
{
	Static                         = 0,
	Swept                          = 1,
	EEvaluationMethod_MAX          = 2
};


// Enum MovieScene.EUpdateClockSource
enum class EUpdateClockSource : uint8_t
{
	Tick                           = 0,
	Platform                       = 1,
	Audio                          = 2,
	RelativeTimecode               = 3,
	Timecode                       = 4,
	Custom                         = 5,
	EUpdateClockSource_MAX         = 6
};


// Enum MovieScene.EMovieSceneEvaluationType
enum class EMovieSceneEvaluationType : uint8_t
{
	FrameLocked                    = 0,
	WithSubFrames                  = 1,
	EMovieSceneEvaluationType_MAX  = 2
};


// Enum MovieScene.EMovieScenePlayerStatus
enum class EMovieScenePlayerStatus : uint8_t
{
	Stopped                        = 0,
	Playing                        = 1,
	Recording                      = 2,
	Scrubbing                      = 3,
	Jumping                        = 4,
	Stepping                       = 5,
	Paused                         = 6,
	MAX                            = 7
};


// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class EMovieSceneObjectBindingSpace : uint8_t
{
	Local                          = 0,
	Root                           = 1,
	EMovieSceneObjectBindingSpace_MAX = 2
};


// Enum MovieScene.EMovieSceneCompletionMode
enum class EMovieSceneCompletionMode : uint8_t
{
	KeepState                      = 0,
	RestoreState                   = 1,
	ProjectDefault                 = 2,
	EMovieSceneCompletionMode_MAX  = 3
};


// Enum MovieScene.ESectionEvaluationFlags
enum class ESectionEvaluationFlags : uint8_t
{
	None                           = 0,
	PreRoll                        = 1,
	PostRoll                       = 2,
	ESectionEvaluationFlags_MAX    = 3
};


// Enum MovieScene.EUpdatePositionMethod
enum class EUpdatePositionMethod : uint8_t
{
	Play                           = 0,
	Jump                           = 1,
	Scrub                          = 2,
	EUpdatePositionMethod_MAX      = 3
};


// Enum MovieScene.ESpawnOwnership
enum class ESpawnOwnership : uint8_t
{
	InnerSequence                  = 0,
	MasterSequence                 = 1,
	External                       = 2,
	ESpawnOwnership_MAX            = 3
};



// Enum AkAudio.EAkCallbackType
enum class EAkCallbackType : uint8_t
{
	EndOfEvent                     = 0,
	Marker                         = 1,
	Duration                       = 2,
	Starvation                     = 3,
	MusicPlayStarted               = 4,
	MusicSyncBeat                  = 5,
	MusicSyncBar                   = 6,
	MusicSyncEntry                 = 7,
	MusicSyncExit                  = 8,
	MusicSyncGrid                  = 9,
	MusicSyncUserCue               = 10,
	MusicSyncPoint                 = 11,
	MIDIEvent                      = 12,
	EAkCallbackType_MAX            = 13
};


// Enum AkAudio.EAkResult
enum class EAkResult : uint8_t
{
	NotImplemented                 = 0,
	Success                        = 1,
	Fail                           = 2,
	PartialSuccess                 = 3,
	NotCompatible                  = 4,
	AlreadyConnected               = 5,
	InvalidFile                    = 6,
	AudioFileHeaderTooLarge        = 7,
	MaxReached                     = 8,
	InvalidID                      = 9,
	IDNotFound                     = 10,
	InvalidInstanceID              = 11,
	NoMoreData                     = 12,
	InvalidStateGroup              = 13,
	ChildAlreadyHasAParent         = 14,
	InvalidLanguage                = 15,
	CannotAddItseflAsAChild        = 16,
	InvalidParameter               = 17,
	ElementAlreadyInList           = 18,
	PathNotFound                   = 19,
	PathNoVertices                 = 20,
	PathNotRunning                 = 21,
	PathNotPaused                  = 22,
	PathNodeAlreadyInList          = 23,
	PathNodeNotInList              = 24,
	DataNeeded                     = 25,
	NoDataNeeded                   = 26,
	DataReady                      = 27,
	NoDataReady                    = 28,
	InsufficientMemory             = 29,
	Cancelled                      = 30,
	UnknownBankID                  = 31,
	BankReadError                  = 32,
	InvalidSwitchType              = 33,
	FormatNotReady                 = 34,
	WrongBankVersion               = 35,
	FileNotFound                   = 36,
	DeviceNotReady                 = 37,
	BankAlreadyLoaded              = 38,
	RenderedFX                     = 39,
	ProcessNeeded                  = 40,
	ProcessDone                    = 41,
	MemManagerNotInitialized       = 42,
	StreamMgrNotInitialized        = 43,
	SSEInstructionsNotSupported    = 44,
	Busy                           = 45,
	UnsupportedChannelConfig       = 46,
	PluginMediaNotAvailable        = 47,
	MustBeVirtualized              = 48,
	CommandTooLarge                = 49,
	RejectedByFilter               = 50,
	InvalidCustomPlatformName      = 51,
	DLLCannotLoad                  = 52,
	DLLPathNotFound                = 53,
	NoJavaVM                       = 54,
	OpenSLError                    = 55,
	PluginNotRegistered            = 56,
	DataAlignmentError             = 57,
	EAkResult_MAX                  = 58
};


// Enum AkAudio.EAkAndroidAudioAPI
enum class EAkAndroidAudioAPI : uint8_t
{
	AAudio                         = 0,
	OpenSL_ES                      = 1,
	EAkAndroidAudioAPI_MAX         = 2
};


// Enum AkAudio.EAkAudioSessionMode
enum class EAkAudioSessionMode : uint8_t
{
	Default                        = 0,
	VoiceChat                      = 1,
	GameChat                       = 2,
	VideoRecording                 = 3,
	Measurement                    = 4,
	MoviePlayback                  = 5,
	VideoChat                      = 6,
	EAkAudioSessionMode_MAX        = 7
};


// Enum AkAudio.EAkAudioSessionCategoryOptions
enum class EAkAudioSessionCategoryOptions : uint8_t
{
	MixWithOthers                  = 0,
	DuckOthers                     = 1,
	AllowBluetooth                 = 2,
	DefaultToSpeaker               = 3,
	EAkAudioSessionCategoryOptions_MAX = 4
};


// Enum AkAudio.EAkAudioSessionCategory
enum class EAkAudioSessionCategory : uint8_t
{
	Ambient                        = 0,
	SoloAmbient                    = 1,
	PlayAndRecord                  = 2,
	EAkAudioSessionCategory_MAX    = 3
};


// Enum AkAudio.EReflectionFilterBits
enum class EReflectionFilterBits : uint8_t
{
	Wall                           = 0,
	Ceiling                        = 1,
	Floor                          = 2,
	EReflectionFilterBits_MAX      = 3
};


// Enum AkAudio.AkCodecId
enum class EAkCodecId : uint8_t
{
	None                           = 0,
	PCM                            = 1,
	ADPCM                          = 2,
	XMA                            = 3,
	Vorbis                         = 4,
	AAC                            = 5,
	ATRAC9                         = 6,
	OpusNX                         = 7,
	AkOpus                         = 8,
	AkOpusWEM                      = 9,
	AkCodecId_MAX                  = 10
};


// Enum AkAudio.EAkMidiCcValues
enum class EAkMidiCcValues : uint8_t
{
	AkMidiCcBankSelectCoarse       = 0,
	AkMidiCcModWheelCoarse         = 1,
	AkMidiCcBreathCtrlCoarse       = 2,
	AkMidiCcCtrl3Coarse            = 3,
	AkMidiCcFootPedalCoarse        = 4,
	AkMidiCcPortamentoCoarse       = 5,
	AkMidiCcDataEntryCoarse        = 6,
	AkMidiCcVolumeCoarse           = 7,
	AkMidiCcBalanceCoarse          = 8,
	AkMidiCcCtrl9Coarse            = 9,
	AkMidiCcPanPositionCoarse      = 10,
	AkMidiCcExpressionCoarse       = 11,
	AkMidiCcEffectCtrl1Coarse      = 12,
	AkMidiCcEffectCtrl2Coarse      = 13,
	AkMidiCcCtrl14Coarse           = 14,
	AkMidiCcCtrl15Coarse           = 15,
	AkMidiCcGenSlider1             = 16,
	AkMidiCcGenSlider2             = 17,
	AkMidiCcGenSlider3             = 18,
	AkMidiCcGenSlider4             = 19,
	AkMidiCcCtrl20Coarse           = 20,
	AkMidiCcCtrl21Coarse           = 21,
	AkMidiCcCtrl22Coarse           = 22,
	AkMidiCcCtrl23Coarse           = 23,
	AkMidiCcCtrl24Coarse           = 24,
	AkMidiCcCtrl25Coarse           = 25,
	AkMidiCcCtrl26Coarse           = 26,
	AkMidiCcCtrl27Coarse           = 27,
	AkMidiCcCtrl28Coarse           = 28,
	AkMidiCcCtrl29Coarse           = 29,
	AkMidiCcCtrl30Coarse           = 30,
	AkMidiCcCtrl31Coarse           = 31,
	AkMidiCcBankSelectFine         = 32,
	AkMidiCcModWheelFine           = 33,
	AkMidiCcBreathCtrlFine         = 34,
	AkMidiCcCtrl3Fine              = 35,
	AkMidiCcFootPedalFine          = 36,
	AkMidiCcPortamentoFine         = 37,
	AkMidiCcDataEntryFine          = 38,
	AkMidiCcVolumeFine             = 39,
	AkMidiCcBalanceFine            = 40,
	AkMidiCcCtrl9Fine              = 41,
	AkMidiCcPanPositionFine        = 42,
	AkMidiCcExpressionFine         = 43,
	AkMidiCcEffectCtrl1Fine        = 44,
	AkMidiCcEffectCtrl2Fine        = 45,
	AkMidiCcCtrl14Fine             = 46,
	AkMidiCcCtrl15Fine             = 47,
	AkMidiCcCtrl20Fine             = 48,
	AkMidiCcCtrl21Fine             = 49,
	AkMidiCcCtrl22Fine             = 50,
	AkMidiCcCtrl23Fine             = 51,
	AkMidiCcCtrl24Fine             = 52,
	AkMidiCcCtrl25Fine             = 53,
	AkMidiCcCtrl26Fine             = 54,
	AkMidiCcCtrl27Fine             = 55,
	AkMidiCcCtrl28Fine             = 56,
	AkMidiCcCtrl29Fine             = 57,
	AkMidiCcCtrl30Fine             = 58,
	AkMidiCcCtrl31Fine             = 59,
	AkMidiCcHoldPedal              = 60,
	AkMidiCcPortamentoOnOff        = 61,
	AkMidiCcSustenutoPedal         = 62,
	AkMidiCcSoftPedal              = 63,
	AkMidiCcLegatoPedal            = 64,
	AkMidiCcHoldPedal2             = 65,
	AkMidiCcSoundVariation         = 66,
	AkMidiCcSoundTimbre            = 67,
	AkMidiCcSoundReleaseTime       = 68,
	AkMidiCcSoundAttackTime        = 69,
	AkMidiCcSoundBrightness        = 70,
	AkMidiCcSoundCtrl6             = 71,
	AkMidiCcSoundCtrl7             = 72,
	AkMidiCcSoundCtrl8             = 73,
	AkMidiCcSoundCtrl9             = 74,
	AkMidiCcSoundCtrl10            = 75,
	AkMidiCcGeneralButton1         = 76,
	AkMidiCcGeneralButton2         = 77,
	AkMidiCcGeneralButton3         = 78,
	AkMidiCcGeneralButton4         = 79,
	AkMidiCcReverbLevel            = 80,
	AkMidiCcTremoloLevel           = 81,
	AkMidiCcChorusLevel            = 82,
	AkMidiCcCelesteLevel           = 83,
	AkMidiCcPhaserLevel            = 84,
	AkMidiCcDataButtonP1           = 85,
	AkMidiCcDataButtonM1           = 86,
	AkMidiCcNonRegisterCoarse      = 87,
	AkMidiCcNonRegisterFine        = 88,
	AkMidiCcAllSoundOff            = 89,
	AkMidiCcAllControllersOff      = 90,
	AkMidiCcLocalKeyboard          = 91,
	AkMidiCcAllNotesOff            = 92,
	AkMidiCcOmniModeOff            = 93,
	AkMidiCcOmniModeOn             = 94,
	AkMidiCcOmniMonophonicOn       = 95,
	AkMidiCcOmniPolyphonicOn       = 96,
	EAkMidiCcValues_MAX            = 97
};


// Enum AkAudio.EAkMidiEventType
enum class EAkMidiEventType : uint8_t
{
	AkMidiEventTypeInvalid         = 0,
	AkMidiEventTypeNoteOff         = 1,
	AkMidiEventTypeNoteOn          = 2,
	AkMidiEventTypeNoteAftertouch  = 3,
	AkMidiEventTypeController      = 4,
	AkMidiEventTypeProgramChange   = 5,
	AkMidiEventTypeChannelAftertouch = 6,
	AkMidiEventTypePitchBend       = 7,
	AkMidiEventTypeSysex           = 8,
	AkMidiEventTypeEscape          = 9,
	AkMidiEventTypeMeta            = 10,
	EAkMidiEventType_MAX           = 11
};


// Enum AkAudio.ERTPCValueType
enum class ERTPCValueType : uint8_t
{
	Default                        = 0,
	Global                         = 1,
	GameObject                     = 2,
	PlayingID                      = 3,
	Unavailable                    = 4,
	ERTPCValueType_MAX             = 5
};


// Enum AkAudio.EAkCurveInterpolation
enum class EAkCurveInterpolation : uint8_t
{
	Log3                           = 0,
	Sine                           = 1,
	Log1                           = 2,
	InvSCurve                      = 3,
	Linear                         = 4,
	SCurve                         = 5,
	Exp1                           = 6,
	SineRecip                      = 7,
	Exp3                           = 8,
	LastFadeCurve                  = 9,
	Constant                       = 10,
	EAkCurveInterpolation_MAX      = 11
};


// Enum AkAudio.AkActionOnEventType
enum class EAkActionOnEventType : uint8_t
{
	Stop                           = 0,
	Pause                          = 1,
	Resume                         = 2,
	Break                          = 3,
	ReleaseEnvelope                = 4,
	AkActionOnEventType_MAX        = 5
};


// Enum AkAudio.AkMultiPositionType
enum class EAkMultiPositionType : uint8_t
{
	SingleSource                   = 0,
	MultiSources                   = 1,
	MultiDirections                = 2,
	AkMultiPositionType_MAX        = 3
};


// Enum AkAudio.AkSpeakerConfiguration
enum class EAkSpeakerConfiguration : uint8_t
{
	Ak_Speaker_Front_Left          = 0,
	Ak_Speaker_Front_Right         = 1,
	Ak_Speaker_Front_Center        = 2,
	Ak_Speaker_Low_Frequency       = 3,
	Ak_Speaker_Back_Left           = 4,
	Ak_Speaker_Back_Right          = 5,
	Ak_Speaker_Back_Center         = 6,
	Ak_Speaker_Side_Left           = 7,
	Ak_Speaker_Side_Right          = 8,
	Ak_Speaker_Top                 = 9,
	Ak_Speaker_Height_Front_Left   = 10,
	Ak_Speaker_Height_Front_Center = 11,
	Ak_Speaker_Height_Front_Right  = 12,
	Ak_Speaker_Height_Back_Left    = 13,
	Ak_Speaker_Height_Back_Center  = 14,
	Ak_Speaker_Height_Back_Right   = 15,
	Ak_Speaker_MAX                 = 16
};


// Enum AkAudio.AkChannelConfiguration
enum class EAkChannelConfiguration : uint8_t
{
	Ak_Parent                      = 0,
	Ak_LFE                         = 1,
	Ak_1                           = 2,
	Ak_2                           = 3,
	Ak_201                         = 4,
	Ak_3                           = 5,
	Ak_301                         = 6,
	Ak_4                           = 7,
	Ak_401                         = 8,
	Ak_5                           = 9,
	Ak_501                         = 10,
	Ak_7                           = 11,
	Ak_5_1                         = 12,
	Ak_7_1                         = 13,
	Ak_7_101                       = 14,
	Ak_Auro_9                      = 15,
	Ak_Auro_10                     = 16,
	Ak_Auro_11                     = 17,
	Ak_Auro_13                     = 18,
	Ak_Ambisonics_1st_order        = 19,
	Ak_Ambisonics_2nd_order        = 20,
	Ak_Ambisonics_3rd_order        = 21,
	Ak_MAX                         = 22
};


// Enum AkAudio.AkAcousticPortalState
enum class EAkAcousticPortalState : uint8_t
{
	Closed                         = 0,
	Open                           = 1,
	AkAcousticPortalState_MAX      = 2
};


// Enum AkAudio.PanningRule
enum class EPanningRule : uint8_t
{
	PanningRule_Speakers           = 0,
	PanningRule_Headphones         = 1,
	PanningRule_MAX                = 2
};


// Enum AkAudio.AkMeshType
enum class EAkMeshType : uint8_t
{
	StaticMesh                     = 0,
	CollisionMesh                  = 1,
	AkMeshType_MAX                 = 2
};


// Enum AkAudio.EAkHololensAudioAPI
enum class EAkHololensAudioAPI : uint8_t
{
	Wasapi                         = 0,
	XAudio2                        = 1,
	DirectSound                    = 2,
	EAkHololensAudioAPI_MAX        = 3
};


// Enum AkAudio.EAkCommSystem
enum class EAkCommSystem : uint8_t
{
	Socket                         = 0,
	HTCS                           = 1,
	EAkCommSystem_MAX              = 2
};


// Enum AkAudio.EAkChannelMask
enum class EAkChannelMask : uint8_t
{
	FrontLeft                      = 0,
	FrontRight                     = 1,
	FrontCenter                    = 2,
	LowFrequency                   = 3,
	BackLeft                       = 4,
	BackRight                      = 5,
	BackCenter                     = 6,
	SideLeft                       = 7,
	SideRight                      = 8,
	Top                            = 9,
	HeightFrontLeft                = 10,
	HeightFrontCenter              = 11,
	HeightFrontRight               = 12,
	HeightBackLeft                 = 13,
	HeightBackCenter               = 14,
	HeightBackRight                = 15,
	EAkChannelMask_MAX             = 16
};


// Enum AkAudio.EAkChannelConfigType
enum class EAkChannelConfigType : uint8_t
{
	Anonymous                      = 0,
	Standard                       = 1,
	Ambisonic                      = 2,
	EAkChannelConfigType_MAX       = 3
};


// Enum AkAudio.EAkDiffractionFlags
enum class EAkDiffractionFlags : uint8_t
{
	UseBuiltInParam                = 0,
	UseObstruction                 = 1,
	CalcEmitterVirtualPosition     = 2,
	EAkDiffractionFlags_MAX        = 3
};


// Enum AkAudio.EAkPanningRule
enum class EAkPanningRule : uint8_t
{
	Speakers                       = 0,
	Headphones                     = 1,
	EAkPanningRule_MAX             = 2
};


// Enum AkAudio.EAkWindowsAudioAPI
enum class EAkWindowsAudioAPI : uint8_t
{
	Wasapi                         = 0,
	XAudio2                        = 1,
	DirectSound                    = 2,
	EAkWindowsAudioAPI_MAX         = 3
};



// Enum SimplygonUObjects.EGeometryDataFieldType
enum class EGeometryDataFieldType : uint8_t
{
	Coords                         = 0,
	TexCoords                      = 1,
	Normals                        = 2,
	Tangents                       = 3,
	Bitangents                     = 4,
	Colors                         = 5,
	TriangleIds                    = 6,
	MaterialIds                    = 7,
	EGeometryDataFieldType_MAX     = 8
};


// Enum SimplygonUObjects.EOutputPixelFormat
enum class EOutputPixelFormat : uint8_t
{
	R8G8B8A8                       = 0,
	R8G8B8                         = 1,
	R8                             = 2,
	R16G16B16A16                   = 3,
	R16G16B16                      = 4,
	R16                            = 5,
	EOutputPixelFormat_MAX         = 6
};


// Enum SimplygonUObjects.EOutputOpacityType
enum class EOutputOpacityType : uint8_t
{
	Opacity                        = 0,
	Transparency                   = 1,
	EOutputOpacityType_MAX         = 2
};


// Enum SimplygonUObjects.EOutputDDSCompressionType
enum class EOutputDDSCompressionType : uint8_t
{
	NoCompression                  = 0,
	BC1                            = 1,
	BC2                            = 2,
	BC3                            = 3,
	BC4                            = 4,
	BC5                            = 5,
	EOutputDDSCompressionType_MAX  = 6
};


// Enum SimplygonUObjects.EOutputImageFileFormat
enum class EOutputImageFileFormat : uint8_t
{
	BMP                            = 0,
	DDS                            = 1,
	JPEG                           = 2,
	PNG                            = 3,
	TGA                            = 4,
	TIFF                           = 5,
	EOutputImageFileFormat_MAX     = 6
};


// Enum SimplygonUObjects.EFillMode
enum class EFillMode : uint8_t
{
	Interpolate                    = 0,
	NearestNeighbor                = 1,
	NoFill                         = 2,
	EFillMode_MAX                  = 3
};


// Enum SimplygonUObjects.EDitherType
enum class EDitherType : uint8_t
{
	NoDither                       = 0,
	FloydSteinberg                 = 1,
	JarvisJudiceNinke              = 2,
	Sierra                         = 3,
	EDitherType_MAX                = 4
};


// Enum SimplygonUObjects.EOpacityChannelComponent
enum class EOpacityChannelComponent : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EOpacityChannelComponent_MAX   = 4
};


// Enum SimplygonUObjects.ESurfaceTransferMode
enum class ESurfaceTransferMode : uint8_t
{
	Fast                           = 0,
	Accurate                       = 1,
	ESurfaceTransferMode_MAX       = 2
};


// Enum SimplygonUObjects.ERemeshingMode
enum class ERemeshingMode : uint8_t
{
	Outside                        = 0,
	Inside                         = 1,
	Manual                         = 2,
	ERemeshingMode_MAX             = 3
};


// Enum SimplygonUObjects.EHoleFilling
enum class EHoleFilling : uint8_t
{
	Disabled                       = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	EHoleFilling_MAX               = 4
};


// Enum SimplygonUObjects.ESurfaceAreaScale
enum class ESurfaceAreaScale : uint8_t
{
	LargestInstance                = 0,
	SmallestInstance               = 1,
	Average                        = 2,
	ESurfaceAreaScale_MAX          = 3
};


// Enum SimplygonUObjects.EChartAggregatorMode
enum class EChartAggregatorMode : uint8_t
{
	TextureSizeProportions         = 0,
	SurfaceArea                    = 1,
	OriginalPixelDensity           = 2,
	UVSizeProportions              = 3,
	EChartAggregatorMode_MAX       = 4
};


// Enum SimplygonUObjects.ETexCoordGeneratorType
enum class ETexCoordGeneratorType : uint8_t
{
	Parameterizer                  = 0,
	ChartAggregator                = 1,
	ETexCoordGeneratorType_MAX     = 2
};


// Enum SimplygonUObjects.EWeightsFromColorMode
enum class EWeightsFromColorMode : uint8_t
{
	Standard                       = 0,
	High                           = 1,
	Low                            = 2,
	EWeightsFromColorMode_MAX      = 3
};


// Enum SimplygonUObjects.EWeightsFromColorComponent
enum class EWeightsFromColorComponent : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	EWeightsFromColorComponent_MAX = 4
};


// Enum SimplygonUObjects.EBoneReductionTargetStopCondition
enum class EBoneReductionTargetStopCondition : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EBoneReductionTargetStopCondition_MAX = 2
};


// Enum SimplygonUObjects.EComputeVisibilityMode
enum class EComputeVisibilityMode : uint8_t
{
	DirectX                        = 0,
	Software                       = 1,
	EComputeVisibilityMode_MAX     = 2
};


// Enum SimplygonUObjects.EDataCreationPreferences
enum class EDataCreationPreferences : uint8_t
{
	OnlyUseOriginalData            = 0,
	PreferOriginalData             = 1,
	PreferOptimizedResult          = 2,
	EDataCreationPreferences_MAX   = 3
};


// Enum SimplygonUObjects.ESymmetryAxis
enum class ESymmetryAxis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	ESymmetryAxis_MAX              = 3
};


// Enum SimplygonUObjects.EReductionHeuristics
enum class EReductionHeuristics : uint8_t
{
	Fast                           = 0,
	Consistent                     = 1,
	EReductionHeuristics_MAX       = 2
};


// Enum SimplygonUObjects.EReductionTargetStopCondition
enum class EReductionTargetStopCondition : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EReductionTargetStopCondition_MAX = 2
};



// Enum Reflex.EReflexMode
enum class EReflexMode : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledPlusBoost               = 2,
	EReflexMode_MAX                = 3
};



// Enum DLSS.EDLSSSettingOverride
enum class EDLSSSettingOverride : uint8_t
{
	Enabled                        = 0,
	Disabled                       = 1,
	UseProjectSettings             = 2,
	EDLSSSettingOverride_MAX       = 3
};



// Enum DLSSBlueprint.UDLSSMode
enum class EUDLSSMode : uint8_t
{
	Off                            = 0,
	Auto                           = 1,
	UltraQuality                   = 2,
	Quality                        = 3,
	Balanced                       = 4,
	Performance                    = 5,
	UltraPerformance               = 6,
	UDLSSMode_MAX                  = 7
};


// Enum DLSSBlueprint.UDLSSSupport
enum class EUDLSSSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UDLSSSupport_MAX               = 7
};



// Enum RTXGI.EDDGIRaysPerProbe
enum class EDDGIRaysPerProbe : uint8_t
{
	n144                           = 0,
	n288                           = 1,
	n432                           = 2,
	n576                           = 3,
	n720                           = 4,
	n864                           = 5,
	n1008                          = 6,
	Count                          = 7,
	EDDGIRaysPerProbe_MAX          = 8
};


// Enum RTXGI.EDDGIDistanceBits
enum class EDDGIDistanceBits : uint8_t
{
	n16                            = 0,
	n32                            = 1,
	EDDGIDistanceBits_MAX          = 2
};


// Enum RTXGI.EDDGIIrradianceBits
enum class EDDGIIrradianceBits : uint8_t
{
	n10                            = 0,
	n32                            = 1,
	EDDGIIrradianceBits_MAX        = 2
};



// Enum XeSSBlueprint.EXeSSQualityMode
enum class EXeSSQualityMode : uint8_t
{
	Performance                    = 0,
	Balanced                       = 1,
	Quality                        = 2,
	UltraQuality                   = 3,
	Off                            = 4,
	EXeSSQualityMode_MAX           = 5
};



// Enum MK3DReplayEditor.EMK3DKeyframeEditingFlags
enum class EMK3DKeyframeEditingFlags : uint8_t
{
	Clear                          = 0,
	Atomic                         = 1,
	AddListOnly                    = 2,
	AutoJump                       = 3,
	FixedJump                      = 4,
	AutoPause                      = 5,
	SaveThumbnail                  = 6,
	EMK3DKeyframeEditingFlags_MAX  = 7
};


// Enum MK3DReplayEditor.EMK3DTimelineWidgetDirtyFlags
enum class EMK3DTimelineWidgetDirtyFlags : uint8_t
{
	Clear                          = 0,
	TimeSliderValidation           = 1,
	EMK3DTimelineWidgetDirtyFlags_MAX = 2
};



// Enum MK3DPublisher.ERenderPass
enum class ERenderPass : uint8_t
{
	OnePass                        = 0,
	TwoPass                        = 1,
	ERenderPass_MAX                = 2
};



// Enum MK3DReplayBasic.EMK3DReplayCameraFlags
enum class EMK3DReplayCameraFlags : uint8_t
{
	Free                           = 0,
	Player                         = 1,
	Free_CurrentPOV                = 2,
	Free_OverrideZeroRoll          = 3,
	EMK3DReplayCameraFlags_MAX     = 4
};


// Enum MK3DReplayBasic.EMK3DReplayJumpFlags
enum class EMK3DReplayJumpFlags : uint8_t
{
	TimeInSec                      = 0,
	TimeInMS                       = 1,
	TimeInRatio                    = 2,
	Fixed                          = 3,
	FixedIfPaused                  = 4,
	AutoPause                      = 5,
	ViewTarget                     = 6,
	EMK3DReplayJumpFlags_MAX       = 7
};


// Enum MK3DReplayBasic.EMK3DReplayCameraMode
enum class EMK3DReplayCameraMode : uint8_t
{
	NotPlay                        = 0,
	Free                           = 1,
	Player                         = 2,
	EMK3DReplayCameraMode_MAX      = 3
};


// Enum MK3DReplayBasic.EMK3DReplayMode
enum class EMK3DReplayMode : uint8_t
{
	NotPlay                        = 0,
	View                           = 1,
	Edit                           = 2,
	Export                         = 3,
	EMK3DReplayMode_MAX            = 4
};



// Enum StreamlineBlueprint.UStreamlineDLSSGMode
enum class EUStreamlineDLSSGMode : uint8_t
{
	Off                            = 0,
	On                             = 1,
	UStreamlineDLSSGMode_MAX       = 2
};


// Enum StreamlineBlueprint.UStreamlineDLSSGSupport
enum class EUStreamlineDLSSGSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	NotSupportedIncompatibleHardware = 2,
	NotSupportedDriverOutOfDate    = 3,
	NotSupportedOperatingSystemOutOfDate = 4,
	NotSupportedByPlatformAtBuildTime = 5,
	NotSupportedIncompatibleAPICaptureToolActive = 6,
	UStreamlineDLSSGSupport_MAX    = 7
};


// Enum StreamlineBlueprint.UStreamlineReflexSupport
enum class EUStreamlineReflexSupport : uint8_t
{
	Supported                      = 0,
	NotSupported                   = 1,
	UStreamlineReflexSupport_MAX   = 2
};


// Enum StreamlineBlueprint.UStreamlineReflexMode
enum class EUStreamlineReflexMode : uint8_t
{
	Disabled                       = 0,
	Enabled                        = 1,
	EnabledPlusBoost               = 2,
	UStreamlineReflexMode_MAX      = 3
};



// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8_t
{
	None                           = 0,
	Spherical                      = 1,
	Capsule                        = 2,
	Planar                         = 3,
	ECollisionLimitType_MAX        = 4
};


// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8_t
{
	X_Positive                     = 0,
	X_Negative                     = 1,
	Y_Positive                     = 2,
	Y_Negative                     = 3,
	Z_Positive                     = 4,
	Z_Negative                     = 5,
	EBoneForwardAxis_MAX           = 6
};


// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	EPlanarConstraint_MAX          = 4
};



// Enum ZipUtility.ZipUtilityCompressionLevel
enum class EZipUtilityCompressionLevel : uint8_t
{
	COMPRESSION_LEVEL_NONE         = 0,
	COMPRESSION_LEVEL_FAST         = 1,
	COMPRESSION_LEVEL_NORMAL       = 2,
	COMPRESSION_LEVEL_MAX          = 3
};


// Enum ZipUtility.EZipUtilityCompressionFormat
enum class EZipUtilityCompressionFormat : uint8_t
{
	COMPRESSION_FORMAT_UNKNOWN     = 0,
	COMPRESSION_FORMAT_SEVEN_ZIP   = 1,
	COMPRESSION_FORMAT_ZIP         = 2,
	COMPRESSION_FORMAT_GZIP        = 3,
	COMPRESSION_FORMAT_BZIP2       = 4,
	COMPRESSION_FORMAT_RAR         = 5,
	COMPRESSION_FORMAT_TAR         = 6,
	COMPRESSION_FORMAT_ISO         = 7,
	COMPRESSION_FORMAT_CAB         = 8,
	COMPRESSION_FORMAT_LZMA        = 9,
	COMPRESSION_FORMAT_LZMA86      = 10,
	COMPRESSION_FORMAT_MAX         = 11
};


// Enum ZipUtility.EZipUtilityCompletionState
enum class EZipUtilityCompletionState : uint8_t
{
	SUCCESS                        = 0,
	FAILURE_NOT_FOUND              = 1,
	FAILURE_UNKNOWN                = 2,
	EZipUtilityCompletionState_MAX = 3
};



// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision                    = 0,
	FirstFrameCollision            = 1,
	EachFrameCollision             = 2,
	EFlipbookCollisionMode_MAX     = 3
};


// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	DilateBorder                   = 0,
	PadWithZero                    = 1,
	EPaperSpriteAtlasPadding_MAX   = 2
};


// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal                     = 0,
	IsometricDiamond               = 1,
	IsometricStaggered             = 2,
	HexagonalStaggered             = 3,
	ETileMapProjectionMode_MAX     = 4
};


// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	Top_Left                       = 0,
	Top_Center                     = 1,
	Top_Right                      = 2,
	Center_Left                    = 3,
	Center_Center                  = 4,
	Center_Right                   = 5,
	Bottom_Left                    = 6,
	Bottom_Center                  = 7,
	Bottom_Right                   = 8,
	Custom                         = 9,
	ESpritePivotMode_MAX           = 10
};


// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox              = 0,
	TightBoundingBox               = 1,
	ShrinkWrapped                  = 2,
	FullyCustom                    = 3,
	Diced                          = 4,
	ESpritePolygonMode_MAX         = 5
};


// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box                            = 0,
	Circle                         = 1,
	Polygon                        = 2,
	ESpriteShapeType_MAX           = 3
};


// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None                           = 0,
	Use2DPhysics                   = 1,
	Use3DPhysics                   = 2,
	ESpriteCollisionMode_MAX       = 3
};



// Enum OodleNetworkHandlerComponent.EOodleEnableMode
enum class EOodleEnableMode : uint8_t
{
	AlwaysEnabled                  = 0,
	WhenCompressedPacketReceived   = 1,
	EOodleEnableMode_MAX           = 2
};



// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
	Point                          = 0,
	Spot                           = 1,
	Rect                           = 2,
	EDatasmithAreaLightActorType_MAX = 3
};


// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	Rectangle                      = 0,
	Disc                           = 1,
	Sphere                         = 2,
	Cylinder                       = 3,
	None                           = 4,
	EDatasmithAreaLightActorShape_MAX = 5
};


// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	StitchingNone                  = 0,
	StitchingHeal                  = 1,
	StitchingSew                   = 2,
	EDatasmithCADStitchingTechnique_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t
{
	UseMultipleActors              = 0,
	UseSingleActor                 = 1,
	UseOneBlueprint                = 2,
	EDatasmithImportHierarchy_MAX  = 3
};


// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
	NewLevel                       = 0,
	CurrentLevel                   = 1,
	AssetsOnly                     = 2,
	EDatasmithImportScene_MAX      = 3
};


// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
	LIGHTMAP                       = 0,
	LIGHTMAP01                     = 1,
	LIGHTMAP02                     = 2,
	LIGHTMAP03                     = 3,
	LIGHTMAP04                     = 4,
	LIGHTMAP05                     = 5,
	LIGHTMAP06                     = 6,
	LIGHTMAP_MAX                   = 7
};


// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
	LIGHTMAP                       = 0,
	LIGHTMAP01                     = 1,
	LIGHTMAP02                     = 2,
	LIGHTMAP03                     = 3,
	LIGHTMAP04                     = 4,
	LIGHTMAP05                     = 5,
	LIGHTMAP_MAX                   = 6
};


// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
	UseNoFresnelCurves             = 0,
	UseSimplifierFresnelCurves     = 1,
	UseRealFresnelCurves           = 2,
	EDatasmithImportMaterialQuality_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
	Update                         = 0,
	Full                           = 1,
	Ignore                         = 2,
	EDatasmithImportActorPolicy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	Replace                        = 0,
	Update                         = 1,
	Use                            = 2,
	Ignore                         = 3,
	EDatasmithImportAssetConflictPolicy_MAX = 4
};


// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	Current                        = 0,
	All                            = 1,
	EDatasmithImportSearchPackagePolicy_MAX = 2
};



// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	Undefined                      = 0,
	Generic                        = 1,
	RelativeLocation               = 2,
	RelativeRotation               = 3,
	RelativeScale3D                = 4,
	Visibility                     = 5,
	Material                       = 6,
	Color                          = 7,
	Option                         = 8,
	EPropertyValueCategory_MAX     = 9
};



// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethod_MAX        = 2
};


// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveMultiplier            = 4,
	EWeightMapTargetCommon_MAX     = 5
};



// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t
{
	None                           = 0,
	MaxDistance                    = 1,
	BackstopDistance               = 2,
	BackstopRadius                 = 3,
	AnimDriveMultiplier            = 4,
	EChaosWeightMapTarget_MAX      = 5
};



// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ThreeTriangles                 = 0,
	FourTriangles                  = 1,
	ETriangleTessellationMode_MAX  = 2
};


// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	All                            = 0,
	CenterPolygonOnly              = 1,
	SidePolygonsOnly               = 2,
	EInsetPolygonsMode_MAX         = 3
};


// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	NewEdgesSoft                   = 0,
	NewEdgesHard                   = 1,
	AllEdgesSoft                   = 2,
	AllEdgesHard                   = 3,
	EPolygonEdgeHardness_MAX       = 4
};


// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	None                           = 0,
	FVector4                       = 1,
	FVector                        = 2,
	FVector2D                      = 3,
	Float                          = 4,
	Int                            = 5,
	Bool                           = 6,
	FName                          = 7,
	EMeshElementAttributeType_MAX  = 8
};


// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	NoTopologyChange               = 0,
	TopologyChange                 = 1,
	EMeshTopologyChange_MAX        = 2
};


// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	FirstInterim                   = 0,
	Interim                        = 1,
	Final                          = 2,
	EMeshModificationType_MAX      = 3
};



// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	NoCap                          = 0,
	CreateNewSectionForCap         = 1,
	UseLastSectionForCap           = 2,
	EProcMeshSliceCapOption_MAX    = 3
};



// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class ELocationZToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationZToSpawn_None = 0,
	ChaosNiagara_LocationZToSpawn_Min = 1,
	ChaosNiagara_LocationZToSpawn_Max = 2,
	ChaosNiagara_LocationZToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class ELocationYToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationYToSpawn_None = 0,
	ChaosNiagara_LocationYToSpawn_Min = 1,
	ChaosNiagara_LocationYToSpawn_Max = 2,
	ChaosNiagara_LocationYToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class ELocationXToSpawnEnum : uint8_t
{
	ChaosNiagara_LocationXToSpawn_None = 0,
	ChaosNiagara_LocationXToSpawn_Min = 1,
	ChaosNiagara_LocationXToSpawn_Max = 2,
	ChaosNiagara_LocationXToSpawn_MinMax = 3,
	ChaosNiagara_Max               = 4
};


// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class ELocationFilteringModeEnum : uint8_t
{
	ChaosNiagara_LocationFilteringMode_Inclusive = 0,
	ChaosNiagara_LocationFilteringMode_Exclusive = 1,
	ChaosNiagara_Max               = 2
};


// Enum ChaosNiagara.EDataSourceTypeEnum
enum class EDataSourceTypeEnum : uint8_t
{
	ChaosNiagara_DataSourceType_Collision = 0,
	ChaosNiagara_DataSourceType_Breaking = 1,
	ChaosNiagara_DataSourceType_Trailing = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.EDebugTypeEnum
enum class EDebugTypeEnum : uint8_t
{
	ChaosNiagara_DebugType_NoDebug = 0,
	ChaosNiagara_DebugType_ColorBySolver = 1,
	ChaosNiagara_DebugType_ColorByParticleIndex = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class ERandomVelocityGenerationTypeEnum : uint8_t
{
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution = 0,
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers = 1,
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased = 2,
	ChaosNiagara_Max               = 3
};


// Enum ChaosNiagara.EDataSortTypeEnum
enum class EDataSortTypeEnum : uint8_t
{
	ChaosNiagara_DataSortType_NoSorting = 0,
	ChaosNiagara_DataSortType_RandomShuffle = 1,
	ChaosNiagara_DataSortType_SortByMassMaxToMin = 2,
	ChaosNiagara_DataSortType_SortByMassMinToMax = 3,
	ChaosNiagara_Max               = 4
};



// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8_t
{
	OnlyOnDataRestoration          = 0,
	Always                         = 1,
	Never                          = 2,
	EMagicLeapAutoPinType_MAX      = 3
};


// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8_t
{
	None                           = 0,
	LowMapQuality                  = 1,
	UnableToLocalize               = 2,
	Unavailable                    = 3,
	PrivilegeDenied                = 4,
	InvalidParam                   = 5,
	UnspecifiedFailure             = 6,
	PrivilegeRequestPending        = 7,
	StartupPending                 = 8,
	NotImplemented                 = 9,
	PinNotFound                    = 10,
	EMagicLeapPassableWorldError_MAX = 11
};



// Enum MagicLeap.PurchaseType
enum class EPurchaseType : uint8_t
{
	Consumable                     = 0,
	Nonconsumable                  = 1,
	Undefined                      = 2,
	PurchaseType_MAX               = 3
};


// Enum MagicLeap.EFocusLostReason
enum class EFocusLostReason : uint8_t
{
	EFocusLostReason_Invalid       = 0,
	EFocusLostReason_System        = 1,
	EFocusLostReason_MAX           = 2
};


// Enum MagicLeap.EMagicLeapMeshLOD
enum class EMagicLeapMeshLOD : uint8_t
{
	Minimum                        = 0,
	Medium                         = 1,
	Maximum                        = 2,
	EMagicLeapMeshLOD_MAX          = 3
};


// Enum MagicLeap.EMagicLeapMeshState
enum class EMagicLeapMeshState : uint8_t
{
	New                            = 0,
	Updated                        = 1,
	Deleted                        = 2,
	Unchanged                      = 3,
	EMagicLeapMeshState_MAX        = 4
};


// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class EMagicLeapMeshVertexColorMode : uint8_t
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	LOD                            = 3,
	EMagicLeapMeshVertexColorMode_MAX = 4
};


// Enum MagicLeap.EMagicLeapMeshType
enum class EMagicLeapMeshType : uint8_t
{
	Triangles                      = 0,
	PointCloud                     = 1,
	EMagicLeapMeshType_MAX         = 2
};


// Enum MagicLeap.EMagicLeapRaycastResultState
enum class EMagicLeapRaycastResultState : uint8_t
{
	RequestFailed                  = 0,
	NoCollision                    = 1,
	HitUnobserved                  = 2,
	HitObserved                    = 3,
	EMagicLeapRaycastResultState_MAX = 4
};


// Enum MagicLeap.CloudStatus
enum class ECloudStatus : uint8_t
{
	CloudStatus_NotDone            = 0,
	CloudStatus_Done               = 1,
	CloudStatus_MAX                = 2
};


// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class EMagicLeapHeadTrackingMapEvent : uint8_t
{
	Lost                           = 0,
	Recovered                      = 1,
	RecoveryFailed                 = 2,
	NewSession                     = 3,
	EMagicLeapHeadTrackingMapEvent_MAX = 4
};


// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class EMagicLeapHeadTrackingMode : uint8_t
{
	PositionAndOrientation         = 0,
	Unavailable                    = 1,
	Unknown                        = 2,
	EMagicLeapHeadTrackingMode_MAX = 3
};


// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class EMagicLeapHeadTrackingError : uint8_t
{
	None                           = 0,
	NotEnoughFeatures              = 1,
	LowLight                       = 2,
	Unknown                        = 3,
	EMagicLeapHeadTrackingError_MAX = 4
};



// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t
{
	HeadMountedDisplay             = 0,
	Controller                     = 1,
	TrackingReference              = 2,
	Other                          = 3,
	Invalid                        = 4,
	Any                            = 5,
	EXRTrackedDeviceType_MAX       = 6
};


// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t
{
	Disabled                       = 0,
	SingleEyeLetterboxed           = 1,
	Undistorted                    = 2,
	Distorted                      = 3,
	SingleEye                      = 4,
	SingleEyeCroppedToFill         = 5,
	Texture                        = 6,
	TexturePlusEye                 = 7,
	ESpectatorScreenMode_MAX       = 8
};


// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t
{
	Unknown                        = 0,
	Worn                           = 1,
	NotWorn                        = 2,
	EHMDWornState_MAX              = 3
};


// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t
{
	Floor                          = 0,
	Eye                            = 1,
	Stage                          = 2,
	EHMDTrackingOrigin_MAX         = 3
};


// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t
{
	Orientation                    = 0,
	Position                       = 1,
	OrientationAndPosition         = 2,
	EOrientPositionSelector_MAX    = 3
};


// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t
{
	NotTracked                     = 0,
	InertialOnly                   = 1,
	Tracked                        = 2,
	ETrackingStatus_MAX            = 3
};



// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	InfinitePlane                  = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	FeaturePointWithSurfaceNormal  = 5,
	ELuminARLineTraceChannel_MAX   = 6
};


// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t
{
	Tracking                       = 0,
	NotTracking                    = 1,
	StoppedTracking                = 2,
	ELuminARTrackingState_MAX      = 3
};



// Enum AugmentedReality.EARTrackingState
enum class EARTrackingState : uint8_t
{
	Unknown                        = 0,
	Tracking                       = 1,
	NotTracking                    = 2,
	StoppedTracking                = 3,
	EARTrackingState_MAX           = 4
};


// Enum AugmentedReality.EARSessionTrackingFeature
enum class EARSessionTrackingFeature : uint8_t
{
	None                           = 0,
	PoseDetection2D                = 1,
	PersonSegmentation             = 2,
	PersonSegmentationWithDepth    = 3,
	EARSessionTrackingFeature_MAX  = 4
};


// Enum AugmentedReality.EARFaceTrackingUpdate
enum class EARFaceTrackingUpdate : uint8_t
{
	CurvesAndGeo                   = 0,
	CurvesOnly                     = 1,
	EARFaceTrackingUpdate_MAX      = 2
};


// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class EAREnvironmentCaptureProbeType : uint8_t
{
	None                           = 0,
	Manual                         = 1,
	Automatic                      = 2,
	EAREnvironmentCaptureProbeType_MAX = 3
};


// Enum AugmentedReality.EARFrameSyncMode
enum class EARFrameSyncMode : uint8_t
{
	SyncTickWithCameraImage        = 0,
	SyncTickWithoutCameraImage     = 1,
	EARFrameSyncMode_MAX           = 2
};


// Enum AugmentedReality.EARLightEstimationMode
enum class EARLightEstimationMode : uint8_t
{
	None                           = 0,
	AmbientLightEstimate           = 1,
	DirectionalLightEstimate       = 2,
	EARLightEstimationMode_MAX     = 3
};


// Enum AugmentedReality.EARPlaneDetectionMode
enum class EARPlaneDetectionMode : uint8_t
{
	None                           = 0,
	HorizontalPlaneDetection       = 1,
	VerticalPlaneDetection         = 2,
	EARPlaneDetectionMode_MAX      = 3
};


// Enum AugmentedReality.EARSessionType
enum class EARSessionType : uint8_t
{
	None                           = 0,
	Orientation                    = 1,
	World                          = 2,
	Face                           = 3,
	Image                          = 4,
	ObjectScanning                 = 5,
	PoseTracking                   = 6,
	EARSessionType_MAX             = 7
};


// Enum AugmentedReality.EARWorldAlignment
enum class EARWorldAlignment : uint8_t
{
	Gravity                        = 0,
	GravityAndHeading              = 1,
	Camera                         = 2,
	EARWorldAlignment_MAX          = 3
};


// Enum AugmentedReality.EARDepthAccuracy
enum class EARDepthAccuracy : uint8_t
{
	Unkown                         = 0,
	Approximate                    = 1,
	Accurate                       = 2,
	EARDepthAccuracy_MAX           = 3
};


// Enum AugmentedReality.EARDepthQuality
enum class EARDepthQuality : uint8_t
{
	Unkown                         = 0,
	Low                            = 1,
	High                           = 2,
	EARDepthQuality_MAX            = 3
};


// Enum AugmentedReality.EARTextureType
enum class EARTextureType : uint8_t
{
	CameraImage                    = 0,
	CameraDepth                    = 1,
	EnvironmentCapture             = 2,
	EARTextureType_MAX             = 3
};


// Enum AugmentedReality.EAREye
enum class EAREye : uint8_t
{
	LeftEye                        = 0,
	RightEye                       = 1,
	EAREye_MAX                     = 2
};


// Enum AugmentedReality.EARFaceBlendShape
enum class EARFaceBlendShape : uint8_t
{
	EyeBlinkLeft                   = 0,
	EyeLookDownLeft                = 1,
	EyeLookInLeft                  = 2,
	EyeLookOutLeft                 = 3,
	EyeLookUpLeft                  = 4,
	EyeSquintLeft                  = 5,
	EyeWideLeft                    = 6,
	EyeBlinkRight                  = 7,
	EyeLookDownRight               = 8,
	EyeLookInRight                 = 9,
	EyeLookOutRight                = 10,
	EyeLookUpRight                 = 11,
	EyeSquintRight                 = 12,
	EyeWideRight                   = 13,
	JawForward                     = 14,
	JawLeft                        = 15,
	JawRight                       = 16,
	JawOpen                        = 17,
	MouthClose                     = 18,
	MouthFunnel                    = 19,
	MouthPucker                    = 20,
	MouthLeft                      = 21,
	MouthRight                     = 22,
	MouthSmileLeft                 = 23,
	MouthSmileRight                = 24,
	MouthFrownLeft                 = 25,
	MouthFrownRight                = 26,
	MouthDimpleLeft                = 27,
	MouthDimpleRight               = 28,
	MouthStretchLeft               = 29,
	MouthStretchRight              = 30,
	MouthRollLower                 = 31,
	MouthRollUpper                 = 32,
	MouthShrugLower                = 33,
	MouthShrugUpper                = 34,
	MouthPressLeft                 = 35,
	MouthPressRight                = 36,
	MouthLowerDownLeft             = 37,
	MouthLowerDownRight            = 38,
	MouthUpperUpLeft               = 39,
	MouthUpperUpRight              = 40,
	BrowDownLeft                   = 41,
	BrowDownRight                  = 42,
	BrowInnerUp                    = 43,
	BrowOuterUpLeft                = 44,
	BrowOuterUpRight               = 45,
	CheekPuff                      = 46,
	CheekSquintLeft                = 47,
	CheekSquintRight               = 48,
	NoseSneerLeft                  = 49,
	NoseSneerRight                 = 50,
	TongueOut                      = 51,
	HeadYaw                        = 52,
	HeadPitch                      = 53,
	HeadRoll                       = 54,
	LeftEyeYaw                     = 55,
	LeftEyePitch                   = 56,
	LeftEyeRoll                    = 57,
	RightEyeYaw                    = 58,
	RightEyePitch                  = 59,
	RightEyeRoll                   = 60,
	MAX                            = 61
};


// Enum AugmentedReality.EARFaceTrackingDirection
enum class EARFaceTrackingDirection : uint8_t
{
	FaceRelative                   = 0,
	FaceMirrored                   = 1,
	EARFaceTrackingDirection_MAX   = 2
};


// Enum AugmentedReality.EARCandidateImageOrientation
enum class EARCandidateImageOrientation : uint8_t
{
	Landscape                      = 0,
	Portrait                       = 1,
	EARCandidateImageOrientation_MAX = 2
};


// Enum AugmentedReality.EARJointTransformSpace
enum class EARJointTransformSpace : uint8_t
{
	Model                          = 0,
	ParentJoint                    = 1,
	EARJointTransformSpace_MAX     = 2
};


// Enum AugmentedReality.EARObjectClassification
enum class EARObjectClassification : uint8_t
{
	NotApplicable                  = 0,
	Unknown                        = 1,
	Wall                           = 2,
	Ceiling                        = 3,
	Floor                          = 4,
	Table                          = 5,
	Seat                           = 6,
	Face                           = 7,
	Image                          = 8,
	World                          = 9,
	SceneObject                    = 10,
	HandMesh                       = 11,
	EARObjectClassification_MAX    = 12
};


// Enum AugmentedReality.EARPlaneOrientation
enum class EARPlaneOrientation : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	Diagonal                       = 2,
	EARPlaneOrientation_MAX        = 3
};


// Enum AugmentedReality.EARWorldMappingState
enum class EARWorldMappingState : uint8_t
{
	NotAvailable                   = 0,
	StillMappingNotRelocalizable   = 1,
	StillMappingRelocalizable      = 2,
	Mapped                         = 3,
	EARWorldMappingState_MAX       = 4
};


// Enum AugmentedReality.EARSessionStatus
enum class EARSessionStatus : uint8_t
{
	NotStarted                     = 0,
	Running                        = 1,
	NotSupported                   = 2,
	FatalError                     = 3,
	PermissionNotGranted           = 4,
	UnsupportedConfiguration       = 5,
	Other                          = 6,
	EARSessionStatus_MAX           = 7
};


// Enum AugmentedReality.EARTrackingQualityReason
enum class EARTrackingQualityReason : uint8_t
{
	None                           = 0,
	Initializing                   = 1,
	Relocalizing                   = 2,
	ExcessiveMotion                = 3,
	InsufficientFeatures           = 4,
	EARTrackingQualityReason_MAX   = 5
};


// Enum AugmentedReality.EARTrackingQuality
enum class EARTrackingQuality : uint8_t
{
	NotTracking                    = 0,
	OrientationOnly                = 1,
	OrientationAndPosition         = 2,
	EARTrackingQuality_MAX         = 3
};


// Enum AugmentedReality.EARLineTraceChannels
enum class EARLineTraceChannels : uint8_t
{
	None                           = 0,
	FeaturePoint                   = 1,
	GroundPlane                    = 2,
	PlaneUsingExtent               = 3,
	PlaneUsingBoundaryPolygon      = 4,
	EARLineTraceChannels_MAX       = 5
};



// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class EMagicLeapTouchpadGestureDirection : uint8_t
{
	None                           = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	In                             = 5,
	Out                            = 6,
	Clockwise                      = 7,
	CounterClockwise               = 8,
	EMagicLeapTouchpadGestureDirection_MAX = 9
};


// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class EMagicLeapTouchpadGestureType : uint8_t
{
	None                           = 0,
	Tap                            = 1,
	ForceTapDown                   = 2,
	ForceTapUp                     = 3,
	ForceDwell                     = 4,
	SecondForceDown                = 5,
	LongHold                       = 6,
	RadialScroll                   = 7,
	Swipe                          = 8,
	Scroll                         = 9,
	Pinch                          = 10,
	EMagicLeapTouchpadGestureType_MAX = 11
};


// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class EMagicLeapControllerTrackingMode : uint8_t
{
	InputService                   = 0,
	CoordinateFrameUID             = 1,
	EMagicLeapControllerTrackingMode_MAX = 2
};


// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class EMagicLeapControllerHapticIntensity : uint8_t
{
	Low                            = 0,
	Medium                         = 1,
	High                           = 2,
	EMagicLeapControllerHapticIntensity_MAX = 3
};


// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class EMagicLeapControllerHapticPattern : uint8_t
{
	None                           = 0,
	Click                          = 1,
	Bump                           = 2,
	DoubleClick                    = 3,
	Buzz                           = 4,
	Tick                           = 5,
	ForceDown                      = 6,
	ForceUp                        = 7,
	ForceDwell                     = 8,
	SecondForceDown                = 9,
	EMagicLeapControllerHapticPattern_MAX = 10
};


// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class EMagicLeapControllerLEDSpeed : uint8_t
{
	Slow                           = 0,
	Medium                         = 1,
	Fast                           = 2,
	EMagicLeapControllerLEDSpeed_MAX = 3
};


// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class EMagicLeapControllerLEDColor : uint8_t
{
	BrightMissionRed               = 0,
	PastelMissionRed               = 1,
	BrightFloridaOrange            = 2,
	PastelFloridaOrange            = 3,
	BrightLunaYellow               = 4,
	PastelLunaYellow               = 5,
	BrightNebulaPink               = 6,
	PastelNebulaPink               = 7,
	BrightCosmicPurple             = 8,
	PastelCosmicPurple             = 9,
	BrightMysticBlue               = 10,
	PastelMysticBlue               = 11,
	BrightCelestialBlue            = 12,
	PastelCelestialBlue            = 13,
	BrightShaggleGreen             = 14,
	PastelShaggleGreen             = 15,
	EMagicLeapControllerLEDColor_MAX = 16
};


// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class EMagicLeapControllerLEDEffect : uint8_t
{
	RotateCW                       = 0,
	RotateCCW                      = 1,
	Pulse                          = 2,
	PaintCW                        = 3,
	PaintCCW                       = 4,
	Blink                          = 5,
	EMagicLeapControllerLEDEffect_MAX = 6
};


// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class EMagicLeapControllerLEDPattern : uint8_t
{
	None                           = 0,
	Clock01                        = 1,
	Clock02                        = 2,
	Clock03                        = 3,
	Clock04                        = 4,
	Clock05                        = 5,
	Clock06                        = 6,
	Clock07                        = 7,
	Clock08                        = 8,
	Clock09                        = 9,
	Clock10                        = 10,
	Clock11                        = 11,
	Clock12                        = 12,
	Clock01_07                     = 13,
	Clock02_08                     = 14,
	Clock03_09                     = 15,
	Clock0401                      = 16,
	Clock0501                      = 17,
	Clock0601                      = 18,
	EMagicLeapControllerLEDPattern_MAX = 19
};


// Enum MagicLeapController.EMagicLeapControllerType
enum class EMagicLeapControllerType : uint8_t
{
	None                           = 0,
	Device                         = 1,
	MobileApp                      = 2,
	EMagicLeapControllerType_MAX   = 3
};



// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingCalibrationStatus
enum class EMagicLeapEyeTrackingCalibrationStatus : uint8_t
{
	None                           = 0,
	Bad                            = 1,
	Good                           = 2,
	EMagicLeapEyeTrackingCalibrationStatus_MAX = 3
};


// Enum MagicLeapEyeTracker.EMagicLeapEyeTrackingStatus
enum class EMagicLeapEyeTrackingStatus : uint8_t
{
	NotConnected                   = 0,
	Disabled                       = 1,
	UserNotPresent                 = 2,
	UserPresent                    = 3,
	UserPresentAndWatchingWindow   = 4,
	EMagicLeapEyeTrackingStatus_MAX = 5
};



// Enum LiveLinkInterface.ELiveLinkCameraProjectionMode
enum class ELiveLinkCameraProjectionMode : uint8_t
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ELiveLinkCameraProjectionMode_MAX = 2
};


// Enum LiveLinkInterface.ELiveLinkSourceMode
enum class ELiveLinkSourceMode : uint8_t
{
	Latest                         = 0,
	EngineTime                     = 1,
	Timecode                       = 2,
	ELiveLinkSourceMode_MAX        = 3
};



// Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
enum class EMagicLeapGestureTransformSpace : uint8_t
{
	World                          = 0,
	Hand                           = 1,
	Tracking                       = 2,
	EMagicLeapGestureTransformSpace_MAX = 3
};


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
enum class EMagicLeapHandTrackingGestureFilterLevel : uint8_t
{
	NoFilter                       = 0,
	SlightRobustnessToFlicker      = 1,
	MoreRobustnessToFlicker        = 2,
	EMagicLeapHandTrackingGestureFilterLevel_MAX = 3
};


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
enum class EMagicLeapHandTrackingKeypointFilterLevel : uint8_t
{
	NoFilter                       = 0,
	SimpleSmoothing                = 1,
	PredictiveSmoothing            = 2,
	EMagicLeapHandTrackingKeypointFilterLevel_MAX = 3
};


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
enum class EMagicLeapHandTrackingGesture : uint8_t
{
	Finger                         = 0,
	Fist                           = 1,
	Pinch                          = 2,
	Thumb                          = 3,
	L                              = 4,
	OpenHand                       = 5,
	OpenHandBack                   = 6,
	Ok                             = 7,
	C                              = 8,
	NoPose                         = 9,
	NoHand                         = 10,
	EMagicLeapHandTrackingGesture_MAX = 11
};


// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
enum class EMagicLeapHandTrackingKeypoint : uint8_t
{
	Thumb_Tip                      = 0,
	Thumb_IP                       = 1,
	Thumb_MCP                      = 2,
	Thumb_CMC                      = 3,
	Index_Tip                      = 4,
	Index_DIP                      = 5,
	Index_PIP                      = 6,
	Index_MCP                      = 7,
	Middle_Tip                     = 8,
	Middle_DIP                     = 9,
	Middle_PIP                     = 10,
	Middle_MCP                     = 11,
	Ring_Tip                       = 12,
	Ring_DIP                       = 13,
	Ring_PIP                       = 14,
	Ring_MCP                       = 15,
	Pinky_Tip                      = 16,
	Pinky_DIP                      = 17,
	Pinky_PIP                      = 18,
	Pinky_MCP                      = 19,
	Wrist_Center                   = 20,
	Wrist_Ulnar                    = 21,
	Wrist_Radial                   = 22,
	Hand_Center                    = 23,
	EMagicLeapHandTrackingKeypoint_MAX = 24
};



// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class EMagicLeapIdentityKey : uint8_t
{
	GivenName                      = 0,
	FamilyName                     = 1,
	Email                          = 2,
	Bio                            = 3,
	PhoneNumber                    = 4,
	Avatar2D                       = 5,
	Avatar3D                       = 6,
	Unknown                        = 7,
	EMagicLeapIdentityKey_MAX      = 8
};


// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class EMagicLeapIdentityError : uint8_t
{
	Ok                             = 0,
	InvalidParam                   = 1,
	AllocFailed                    = 2,
	PrivilegeDenied                = 3,
	FailedToConnectToLocalService  = 4,
	FailedToConnectToCloudService  = 5,
	CloudAuthentication            = 6,
	InvalidInformationFromCloud    = 7,
	NotLoggedIn                    = 8,
	ExpiredCredentials             = 9,
	FailedToGetUserProfile         = 10,
	Unauthorized                   = 11,
	CertificateError               = 12,
	RejectedByCloud                = 13,
	AlreadyLoggedIn                = 14,
	ModifyIsNotSupported           = 15,
	NetworkError                   = 16,
	UnspecifiedFailure             = 17,
	EMagicLeapIdentityError_MAX    = 18
};



// Enum MagicLeapPlanes.EMagicLeapPlaneQueryFlags
enum class EMagicLeapPlaneQueryFlags : uint8_t
{
	Vertical                       = 0,
	Horizontal                     = 1,
	Arbitrary                      = 2,
	OrientToGravity                = 3,
	PreferInner                    = 4,
	Ceiling                        = 5,
	Floor                          = 6,
	Wall                           = 7,
	Polygons                       = 8,
	EMagicLeapPlaneQueryFlags_MAX  = 9
};


// Enum MagicLeapPlanes.EMagicLeapPlaneQueryType
enum class EMagicLeapPlaneQueryType : uint8_t
{
	Bulk                           = 0,
	Delta                          = 1,
	EMagicLeapPlaneQueryType_MAX   = 2
};



// Enum MagicLeapPrivileges.EMagicLeapPrivilege
enum class EMagicLeapPrivilege : uint8_t
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	ComputerVision                 = 3,
	WorldReconstruction            = 4,
	InAppPurchase                  = 5,
	AudioCaptureMic                = 6,
	DrmCertificates                = 7,
	Occlusion                      = 8,
	LowLatencyLightwear            = 9,
	Internet                       = 10,
	IdentityRead                   = 11,
	BackgroundDownload             = 12,
	BackgroundUpload               = 13,
	MediaDrm                       = 14,
	Media                          = 15,
	MediaMetadata                  = 16,
	PowerInfo                      = 17,
	LocalAreaNetwork               = 18,
	VoiceInput                     = 19,
	Documents                      = 20,
	ConnectBackgroundMusicService  = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead                        = 23,
	PwFoundObjRead                 = 24,
	NormalNotificationsUsage       = 25,
	MusicService                   = 26,
	ControllerPose                 = 27,
	GesturesSubscribe              = 28,
	GesturesConfig                 = 29,
	AddressBookRead                = 30,
	AddressBookWrite               = 31,
	AddressBookBasicAccess         = 32,
	CoarseLocation                 = 33,
	FineLocation                   = 34,
	HandMesh                       = 35,
	WifiStatusRead                 = 36,
	SocialConnectionsInvitesAccess = 37,
	EMagicLeapPrivilege_MAX        = 38
};



// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	FarLeft                        = 2,
	FarRight                       = 3,
	EMagicLeapLightEstimationCamera_MAX = 4
};



// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class EMovieScene3DPathSection_Axis : uint8_t
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	NEG_X                          = 3,
	NEG_Y                          = 4,
	NEG_Z                          = 5,
	MovieScene3DPathSection_MAX    = 6
};


// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8_t
{
	AtStartOfEvaluation            = 0,
	AtEndOfEvaluation              = 1,
	AfterSpawn                     = 2,
	EFireEventsAtPosition_MAX      = 3
};


// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8_t
{
	Visible                        = 0,
	Hidden                         = 1,
	ELevelVisibility_MAX           = 2
};


// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8_t
{
	Activate                       = 0,
	Deactivate                     = 1,
	Trigger                        = 2,
	EParticleKey_MAX               = 3
};



// Enum UdpMessaging.EUdpMessageFormat
enum class EUdpMessageFormat : uint8_t
{
	None                           = 0,
	Json                           = 1,
	TaggedProperty                 = 2,
	CborPlatformEndianness         = 3,
	CborStandardEndianness         = 4,
	EUdpMessageFormat_MAX          = 5
};



// Enum ActorSequence.EActorSequenceObjectReferenceType
enum class EActorSequenceObjectReferenceType : uint8_t
{
	ContextActor                   = 0,
	ExternalActor                  = 1,
	Component                      = 2,
	EActorSequenceObjectReferenceType_MAX = 3
};



// Enum AppleImageUtils.EAppleTextureType
enum class EAppleTextureType : uint8_t
{
	Unknown                        = 0,
	Image                          = 1,
	PixelBuffer                    = 2,
	Surface                        = 3,
	MetalTexture                   = 4,
	EAppleTextureType_MAX          = 5
};


// Enum AppleImageUtils.ETextureRotationDirection
enum class ETextureRotationDirection : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Down                           = 3,
	ETextureRotationDirection_MAX  = 4
};



// Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local                          = 0,
	Private                        = 1,
	Shared                         = 2,
	ECollectionScriptingShareType_MAX = 3
};



// Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class EGooglePADCellularDataConfirmStatus : uint8_t
{
	AssetPack_CONFIRM_UNKNOWN      = 0,
	AssetPack_CONFIRM_PENDING      = 1,
	AssetPack_CONFIRM_USER_APPROVED = 2,
	AssetPack_CONFIRM_USER_CANCELED = 3,
	AssetPack_CONFIRM_MAX          = 4
};


// Enum GooglePAD.EGooglePADStorageMethod
enum class EGooglePADStorageMethod : uint8_t
{
	AssetPack_STORAGE_FILES        = 0,
	AssetPack_STORAGE_APK          = 1,
	AssetPack_STORAGE_UNKNOWN      = 2,
	AssetPack_STORAGE_NOT_INSTALLED = 3,
	AssetPack_STORAGE_MAX          = 4
};


// Enum GooglePAD.EGooglePADDownloadStatus
enum class EGooglePADDownloadStatus : uint8_t
{
	AssetPack_UNKNOWN              = 0,
	AssetPack_DOWNLOAD_PENDING     = 1,
	AssetPack_DOWNLOADING          = 2,
	AssetPack_TRANSFERRING         = 3,
	AssetPack_DOWNLOAD_COMPLETED   = 4,
	AssetPack_DOWNLOAD_FAILED      = 5,
	AssetPack_DOWNLOAD_CANCELED    = 6,
	AssetPack_WAITING_FOR_WIFI     = 7,
	AssetPack_NOT_INSTALLED        = 8,
	AssetPack_INFO_PENDING         = 9,
	AssetPack_INFO_FAILED          = 10,
	AssetPack_REMOVAL_PENDING      = 11,
	AssetPack_REMOVAL_FAILED       = 12,
	AssetPack_MAX                  = 13
};


// Enum GooglePAD.EGooglePADErrorCode
enum class EGooglePADErrorCode : uint8_t
{
	AssetPack_NO_ERROR             = 0,
	AssetPack_APP_UNAVAILABLE      = 1,
	AssetPack_UNAVAILABLE          = 2,
	AssetPack_INVALID_REQUEST      = 3,
	AssetPack_DOWNLOAD_NOT_FOUND   = 4,
	AssetPack_API_NOT_AVAILABLE    = 5,
	AssetPack_NETWORK_ERROR        = 6,
	AssetPack_ACCESS_DENIED        = 7,
	AssetPack_INSUFFICIENT_STORAGE = 8,
	AssetPack_PLAY_STORE_NOT_FOUND = 9,
	AssetPack_NETWORK_UNRESTRICTED = 10,
	AssetPack_INTERNAL_ERROR       = 11,
	AssetPack_INITIALIZATION_NEEDED = 12,
	AssetPack_INITIALIZATION_FAILED = 13,
	AssetPack_MAX                  = 14
};



// Enum LocationServicesBPLibrary.ELocationAccuracy
enum class ELocationAccuracy : uint8_t
{
	LA_ThreeKilometers             = 0,
	LA_OneKilometer                = 1,
	LA_HundredMeters               = 2,
	LA_TenMeters                   = 3,
	LA_Best                        = 4,
	LA_Navigation                  = 5,
	LA_MAX                         = 6
};



// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t
{
	LimitedSlip_4W                 = 0,
	LimitedSlip_FrontDrive         = 1,
	LimitedSlip_RearDrive          = 2,
	Open_4W                        = 3,
	Open_FrontDrive                = 4,
	Open_RearDrive                 = 5,
	EVehicleDifferential4W_MAX     = 6
};


// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t
{
	SimpleAndComplex               = 0,
	Simple                         = 1,
	Complex                        = 2,
	EWheelSweepType_MAX            = 3
};



// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
	Osc1Gain                       = 0,
	Osc1Frequency                  = 1,
	Osc1Pulsewidth                 = 2,
	Osc2Gain                       = 3,
	Osc2Frequency                  = 4,
	Osc2Pulsewidth                 = 5,
	FilterFrequency                = 6,
	FilterQ                        = 7,
	Gain                           = 8,
	Pan                            = 9,
	LFO1Frequency                  = 10,
	LFO1Gain                       = 11,
	LFO2Frequency                  = 12,
	LFO2Gain                       = 13,
	Count                          = 14,
	ESynth1PatchDestination_MAX    = 15
};


// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
	LFO1                           = 0,
	LFO2                           = 1,
	Envelope                       = 2,
	BiasEnvelope                   = 3,
	Count                          = 4,
	ESynth1PatchSource_MAX         = 5
};


// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	ESynthStereoDelayMode_MAX      = 4
};


// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESynthFilterAlgorithm_MAX      = 4
};


// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESynthFilterType_MAX           = 5
};


// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvBiasPatch_MAX      = 9
};


// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
	PatchToNone                    = 0,
	PatchToOscFreq                 = 1,
	PatchToFilterFreq              = 2,
	PatchToFilterQ                 = 3,
	PatchToLFO1Gain                = 4,
	PatchToLFO2Gain                = 5,
	PatchToLFO1Freq                = 6,
	PatchToLFO2Freq                = 7,
	Count                          = 8,
	ESynthModEnvPatch_MAX          = 9
};


// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
	PatchToNone                    = 0,
	PatchToGain                    = 1,
	PatchToOscFreq                 = 2,
	PatchToFilterFreq              = 3,
	PatchToFilterQ                 = 4,
	PatchToOscPulseWidth           = 5,
	PatchToOscPan                  = 6,
	PatchLFO1ToLFO2Frequency       = 7,
	PatchLFO1ToLFO2Gain            = 8,
	Count                          = 9,
	ESynthLFOPatchType_MAX         = 10
};


// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
	Sync                           = 0,
	OneShot                        = 1,
	Free                           = 2,
	Count                          = 3,
	ESynthLFOMode_MAX              = 4
};


// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	ESynthLFOType_MAX              = 8
};


// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Noise                          = 4,
	Count                          = 5,
	ESynth1OscType_MAX             = 6
};


// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	ESourceEffectDynamicsPeakMode_MAX = 4
};


// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	Compressor                     = 0,
	Limiter                        = 1,
	Expander                       = 2,
	Gate                           = 3,
	Count                          = 4,
	ESourceEffectDynamicsProcessorType_MAX = 5
};


// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	MeanSquared                    = 0,
	RootMeanSquared                = 1,
	Peak                           = 2,
	Count                          = 3,
	EEnvelopeFollowerPeakMode_MAX  = 4
};


// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESourceEffectFilterType_MAX    = 5
};


// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESourceEffectFilterCircuit_MAX = 4
};


// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
	MidSide                        = 0,
	LeftRight                      = 1,
	count                          = 2,
	EStereoChannelMode_MAX         = 3
};


// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
	Sine                           = 0,
	UpSaw                          = 1,
	DownSaw                        = 2,
	Square                         = 3,
	Triangle                       = 4,
	Exponential                    = 5,
	RandomSampleHold               = 6,
	Count                          = 7,
	EPhaserLFOType_MAX             = 8
};


// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	Sine                           = 0,
	Saw                            = 1,
	Triangle                       = 2,
	Square                         = 3,
	Count                          = 4,
	ERingModulatorTypeSourceEffect_MAX = 5
};


// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
	Normal                         = 0,
	Cross                          = 1,
	PingPong                       = 2,
	Count                          = 3,
	EStereoDelaySourceEffect_MAX   = 4
};


// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	BlockSize256                   = 0,
	BlockSize512                   = 1,
	BlockSize1024                  = 2,
	ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};


// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
	OnePole                        = 0,
	StateVariable                  = 1,
	Ladder                         = 2,
	Count                          = 3,
	ESubmixFilterAlgorithm_MAX     = 4
};


// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
	LowPass                        = 0,
	HighPass                       = 1,
	BandPass                       = 2,
	BandStop                       = 3,
	Count                          = 4,
	ESubmixFilterType_MAX          = 5
};


// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
	SendToChannel                  = 0,
	Panning                        = 1,
	Disabled                       = 2,
	ETapLineMode_MAX               = 3
};


// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	Count                          = 2,
	EGranularSynthSeekType_MAX     = 3
};


// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
	Rectangular                    = 0,
	Triangle                       = 1,
	DownwardTriangle               = 2,
	UpwardTriangle                 = 3,
	ExponentialDecay               = 4,
	ExponentialIncrease            = 5,
	Gaussian                       = 6,
	Hanning                        = 7,
	Lanczos                        = 8,
	Cosine                         = 9,
	CosineSquared                  = 10,
	Welch                          = 11,
	Blackman                       = 12,
	BlackmanHarris                 = 13,
	Count                          = 14,
	EGranularSynthEnvelopeType_MAX = 15
};


// Enum Synthesis.CurveInterpolationType
enum class ECurveInterpolationType : uint8_t
{
	AUTOINTERP                     = 0,
	LINEAR                         = 1,
	CONSTANT                       = 2,
	CurveInterpolationType_MAX     = 3
};


// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
	FromBeginning                  = 0,
	FromCurrentPosition            = 1,
	FromEnd                        = 2,
	Count                          = 3,
	ESamplePlayerSeekType_MAX      = 4
};


// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
	Medium                         = 0,
	Large                          = 1,
	Count                          = 2,
	ESynthKnobSize_MAX             = 3
};


// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
	Light                          = 0,
	Dark                           = 1,
	Count                          = 2,
	ESynthSlateColorStyle_MAX      = 3
};


// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
	Small                          = 0,
	Medium                         = 1,
	Large                          = 2,
	Count                          = 3,
	ESynthSlateSizeType_MAX        = 4
};



// Enum BravoHotelGame.EBuffEventType
enum class EBuffEventType : uint8_t
{
	None                           = 0,
	ActiveSkill00                  = 1,
	ActiveSkill01                  = 2,
	ActiveSkill02                  = 3,
	ActiveSkill03                  = 4,
	ActiveSkillRelease00           = 5,
	ActiveSkillRelease01           = 6,
	ActiveSkillRelease02           = 7,
	ActiveSkillRelease03           = 8,
	CancleActiveSkill00            = 9,
	CancleActiveSkill01            = 10,
	CancleActiveSkill02            = 11,
	CancleActiveSkill03            = 12,
	AIActiveSkill00                = 13,
	TT_Wood                        = 14,
	TT_Rock                        = 15,
	TT_Indoor                      = 16,
	TT_Fence                       = 17,
	TT_Grass                       = 18,
	TT_Cliff                       = 19,
	TT_Water                       = 20,
	TT_Air                         = 21,
	TT_Vehicle                     = 22,
	TT_Steel                       = 23,
	TT_Shield                      = 24,
	Hited                          = 25,
	Damaged                        = 26,
	ZeroHP                         = 27,
	Death                          = 28,
	ArmorBreak                     = 29,
	TeamKnockDown                  = 30,
	AfterLanding                   = 31,
	Prone3Second                   = 32,
	Health25Percent                = 33,
	FillFuel                       = 34,
	Landed                         = 35,
	CarLanded                      = 36,
	ExitVehicle                    = 37,
	KickDoor                       = 38,
	RevivingTeam                   = 39,
	ResuscitatingTeam              = 40,
	UsingMedicine                  = 41,
	UsingItem                      = 42,
	Jump                           = 43,
	Retreat                        = 44,
	Nuclear                        = 45,
	IntoSmoke                      = 46,
	OutofSmoke                     = 47,
	FireAxShot                     = 48,
	StartParkour                   = 49,
	OnTakeHeadShot                 = 50,
	ChangeWeapon                   = 51,
	Fire                           = 52,
	OnEnterADS                     = 53,
	WindowBreaching                = 54,
	IntoWaterPhysicsVolume         = 55,
	OutofWaterPhysicsVolume        = 56,
	IntoWetFog                     = 57,
	OutofWetFog                    = 58,
	Reloading                      = 59,
	MAX                            = 60,
	NoIndex                        = 61
};


// Enum BravoHotelGame.EWeaponType
enum class EWeaponType : uint8_t
{
	WT_None                        = 0,
	WT_Assault                     = 1,
	WT_DMR                         = 2,
	WT_SMG                         = 3,
	WT_SniperRifle                 = 4,
	WT_Shotgun                     = 5,
	WT_Pistol                      = 6,
	WT_ThrowingWeapon              = 7,
	WT_Melee                       = 8,
	WT_SecondaryWeapon             = 9,
	WT_PerkWeapon                  = 10,
	WT_MainWeapon                  = 11,
	WT_SubWeapon                   = 12,
	WT_FlareGun                    = 13,
	WT_LMG                         = 14,
	WT_All                         = 15,
	WT_MAX                         = 16
};


// Enum BravoHotelGame.EWeaponBuffEventType
enum class EWeaponBuffEventType : uint8_t
{
	None                           = 0,
	HeadShotZeroHPEnemy            = 1,
	LastShot                       = 2,
	ZeroHPEnemy                    = 3,
	ThrowingZeroHP                 = 4,
	TargetHit                      = 5,
	MyHited                        = 6,
	SRShot                         = 7,
	DMRShot                        = 8,
	Shot                           = 9,
	ActiveGrenade                  = 10,
	NoAmmoReload                   = 11,
	BarrierSpawn                   = 12,
	MAX                            = 13,
	NoIndex                        = 14
};


// Enum BravoHotelGame.EMediaPlayerState
enum class EMediaPlayerState : uint8_t
{
	MPS_Play                       = 0,
	MPS_End                        = 1,
	MPS_MAX                        = 2
};


// Enum BravoHotelGame.EAircraftFlightState
enum class EAircraftFlightState : uint8_t
{
	AFS_None                       = 0,
	AFS_Distributing               = 1,
	AFS_ReadyToScramble            = 2,
	AFS_Scrambling                 = 3,
	AFS_End                        = 4,
	AFS_MAX                        = 5
};


// Enum BravoHotelGame.EAircraftMovementMethod
enum class EAircraftMovementMethod : uint8_t
{
	AMT_USING_SPEED                = 0,
	AMT_USING_MAX                  = 1
};


// Enum BravoHotelGame.ESupplyType
enum class ESupplyType : uint8_t
{
	ST_NoneSupply                  = 0,
	ST_NotWeaponItem               = 1,
	ST_DefaultWeapon               = 2,
	ST_OwnedWeapon                 = 3,
	ST_MAX                         = 4
};


// Enum BravoHotelGame.EPickupRoot
enum class EPickupRoot : uint8_t
{
	PR_World                       = 0,
	PR_DeadBody                    = 1,
	PR_TransportSupply             = 2,
	PR_PersonalSupply              = 3,
	PR_Skill                       = 4,
	PR_None                        = 5,
	PR_MAX                         = 6
};


// Enum BravoHotelGame.EItemBindType
enum class EItemBindType : uint8_t
{
	None                           = 0,
	Supply                         = 1,
	Bindable                       = 2,
	Binded                         = 3,
	EItemBindType_MAX              = 4
};


// Enum BravoHotelGame.EInventoryItemState
enum class EInventoryItemState : uint8_t
{
	IIS_None                       = 0,
	IIS_World                      = 1,
	IIS_Inventory                  = 2,
	IIS_Wearing                    = 3,
	IIS_Equipped                   = 4,
	IIS_AttachWeapon               = 5,
	IIS_Dropped                    = 6,
	IIS_MaterialSlot               = 7,
	IIS_MAX                        = 8
};


// Enum BravoHotelGame.EReplicationItemListType
enum class EReplicationItemListType : uint8_t
{
	None                           = 0,
	BackPackItem                   = 1,
	MaterialItem                   = 2,
	EReplicationItemListType_MAX   = 3
};


// Enum BravoHotelGame.EAbilityCase
enum class EAbilityCase : uint8_t
{
	AC_None                        = 0,
	AC_Base                        = 1,
	AC_Booster                     = 2,
	AC_Wearable                    = 3,
	AC_OutOfSteady                 = 4,
	AC_NoDamage                    = 5,
	AC_KnockOut                    = 6,
	AC_Death                       = 7,
	AC_UseLadder                   = 8,
	AC_ClimbUp                     = 9,
	AC_Cheat                       = 10,
	AC_Damaged                     = 11,
	AC_UnderWater                  = 12,
	AC_CastingItem                 = 13,
	AC_IceLand                     = 14,
	AC_Reviving                    = 15,
	AC_KickDoor                    = 16,
	AC_Sliding                     = 17,
	AC_Rolling                     = 18,
	AC_Knockback                   = 19,
	AC_Ultimate                    = 20,
	AC_DriverBuff                  = 21,
	AC_ActiveSkillBuff             = 22,
	AC_AutoAim                     = 23,
	AC_Max                         = 24
};


// Enum BravoHotelGame.ECharacterConditionType
enum class ECharacterConditionType : uint8_t
{
	CCT_None                       = 0,
	CCT_NoDamage                   = 1,
	CCT_NoSprint                   = 2,
	CCT_NoSteadyAim                = 3,
	CCT_NoOxygen                   = 4,
	CCT_KnockOut                   = 5,
	CCT_CantAttack                 = 6,
	CCT_CantAction                 = 7,
	CCT_CantMove                   = 8,
	CCT_CantRotation               = 9,
	CCT_CantJump                   = 10,
	CCT_CantGainItem               = 11,
	CCT_CantChangeGroundState      = 12,
	CCT_CantInteraction            = 13,
	CCT_CantKnockback              = 14,
	CCT_PerfectShot                = 15,
	CCT_Cold                       = 16,
	CCT_Heat                       = 17,
	CCT_Burn                       = 18,
	CCT_Wet                        = 19,
	CCT_Hurt                       = 20,
	CCT_Stun                       = 21,
	CCT_SpatialSense               = 22,
	CCT_Deafen                     = 23,
	CCT_Teleport                   = 24,
	CCT_InWetFog                   = 25,
	CCT_BlackOut                   = 26,
	CCT_ForceFieldEnemy            = 27,
	CCT_ForceFieldFriendly         = 28,
	CCT_Amplifier                  = 29,
	CCT_HeartBeatSensor            = 30,
	CCT_Resurrection               = 31,
	CCT_CanSliding                 = 32,
	CCT_CanChangeGroundStateOnWater = 33,
	CCT_CanBreaching               = 34,
	CCT_NoFallingDamage            = 35,
	CCT_NoLandingAnim              = 36,
	CCT_WalkSilently               = 37,
	CCT_MoveSilently               = 38,
	CCT_AllSilently                = 39,
	CCT_WaterSilently              = 40,
	CCT_UseFlashbangBoobyTrap      = 41,
	CCT_RocketJump                 = 42,
	CCT_SuperThrowingTrail         = 43,
	CCT_GoodMoveOnWater            = 44,
	CCT_BreakSilentlyPakour        = 45,
	CCT_AvoidHeadShot              = 46,
	CCT_HeadBanging                = 47,
	CCT_HandSpeed                  = 48,
	CCT_HandSpeedADS               = 49,
	CCT_SkipBoltAction             = 50,
	CCT_Stuntman                   = 51,
	CCT_SeeThroughSmoke            = 52,
	CCT_JetpackBooster             = 53,
	CCT_JetpackAimBooster          = 54,
	CCT_MeteorJump                 = 55,
	CCT_KeepHealthOne              = 56,
	CCT_CantDropItem               = 57,
	CCT_LockCurrentWeapon          = 58,
	CCT_NoCarLandingDamageToTeam   = 59,
	CCT_HoldingShield              = 60,
	CCT_CantFreeLook               = 61,
	CCT_KeepCrouch                 = 62,
	CCT_Max                        = 63
};


// Enum BravoHotelGame.EPerkLevelUpType
enum class EPerkLevelUpType : uint8_t
{
	Default                        = 0,
	ByBuff                         = 1,
	ByKill                         = 2,
	ByPhase                        = 3,
	ByGameStart                    = 4,
	ByUlimateNecessary             = 5,
	EPerkLevelUpType_MAX           = 6
};


// Enum BravoHotelGame.EPerkSlotFlag
enum class EPerkSlotFlag : uint8_t
{
	PSF_None                       = 0,
	PSF_Red                        = 1,
	PSF_Green                      = 2,
	PSF_Blue                       = 3,
	PSF_All                        = 4,
	PSF_MAX                        = 5
};


// Enum BravoHotelGame.ECastingUIType
enum class ECastingUIType : uint8_t
{
	CUT_Item                       = 0,
	CUT_Revive                     = 1,
	CUT_Resuscitation              = 2,
	CUT_PersonalSupplyBox          = 3,
	CUT_Reload                     = 4,
	CUT_Combine                    = 5,
	CUT_Repair                     = 6,
	CUT_MAX                        = 7
};


// Enum BravoHotelGame.ESettingType
enum class ESettingType : uint8_t
{
	Begin                          = 0,
	Graphic_Begin                  = 1,
	Graphic_Language               = 2,
	Graphic_Resolution             = 3,
	Graphic_ResolutionX            = 4,
	Graphic_ResolutionY            = 5,
	Graphic_DisplayMod             = 6,
	Graphic_Gamma                  = 7,
	Graphic_Sharpen                = 8,
	Graphic_FieldOfView            = 9,
	Graphic_ResolutionScale        = 10,
	Graphic_TotalGraphic           = 11,
	Graphic_FoliageDensity         = 12,
	Graphic_AntiAliasing           = 13,
	Graphic_PostProcessing         = 14,
	Graphic_ShdowQuality           = 15,
	Graphic_ShadingQuality         = 16,
	Graphic_ViewDistanceQuality    = 17,
	Graphic_TextureQuality         = 18,
	Graphic_EffectQuality          = 19,
	Graphic_VSync                  = 20,
	Graphic_SmoothFrameRate        = 21,
	Graphic_ConfirmTime            = 22,
	Graphic_Reflex                 = 23,
	Graphic_DLSS                   = 24,
	Graphic_DLSSQuality            = 25,
	Graphic_DLSSSharpen            = 26,
	Graphic_FrameGeneration        = 27,
	Graphic_MaxFrameRate           = 28,
	Graphic_MaxLobbyFrameRate      = 29,
	Graphic_DepthOfField           = 30,
	Graphic_GlobalIllumination     = 31,
	Graphic_RenderingStyle         = 32,
	Graphic_GraphicsRHI            = 33,
	Graphic_FSR                    = 34,
	Graphic_XeSS                   = 35,
	Graphic_TAAU                   = 36,
	Graphic_End                    = 37,
	Audio_Begin                    = 38,
	Audio_MasterVolumeOnOff        = 39,
	Audio_Master                   = 40,
	Audio_Music                    = 41,
	Audio_Effect                   = 42,
	Audio_UI                       = 43,
	Audio_Announcer                = 44,
	Audio_VoiceInputMode           = 45,
	Audio_VoiceChanel              = 46,
	Audio_VoiceInput               = 47,
	Audio_VoiceOutput              = 48,
	Audio_End                      = 49,
	ClassKey                       = 50,
	Key                            = 51,
	Control_Begin                  = 52,
	Control_VerticalModifier       = 53,
	Control_GeneralSensitivity     = 54,
	Control_VehicleDriverSensitivity = 55,
	Control_TargetingSensitivity   = 56,
	Control_TotalSensitivity       = 57,
	Control_UsingDetailSensitivity = 58,
	Control_ADSSensitivity         = 59,
	Control_2XSensitivity          = 60,
	Control_4XSensitivity          = 61,
	Control_6XSensitivity          = 62,
	Control_8XSensitivity          = 63,
	Control_15XSensitivity         = 64,
	Control_ToggleCrouch           = 65,
	Control_ToggleWalk             = 66,
	Control_ToggleSprint           = 67,
	Control_HoldSliding            = 68,
	Control_HoldTimeSliding        = 69,
	Control_ToggleFreeLook         = 70,
	Control_ToggleSteadyAim        = 71,
	Control_ToggleExLean           = 72,
	Control_ToggleAOS              = 73,
	Control_ToggleADS              = 74,
	Control_ReverseLeftAndRight    = 75,
	Control_ReverseUpAndDown       = 76,
	Control_End                    = 77,
	GamePlay_Begin                 = 78,
	GamePlay_ARFireMode            = 79,
	GamePlay_SMGFireMode           = 80,
	GamePlay_SRFireMode            = 81,
	GamePlay_DMRFireMode           = 82,
	GamePlay_PistolFireMode        = 83,
	GamePlay_AutoReload            = 84,
	GamePlay_ImmediateAttachment   = 85,
	GamePlay_InheritAttachment     = 86,
	GamePlay_ShowPerkSlot          = 87,
	GamePlay_ShowSmartPing         = 88,
	GamePlay_ShowSmartPingSupplyBox = 89,
	GamePlay_ShowSmartPingLightPole = 90,
	GamePlay_NetworkDebugStatistics = 91,
	GamePlay_EnableShowClassUI     = 92,
	GamePlay_ShowUseaableItemEffect = 93,
	GamePlay_AmmoEffect            = 94,
	GamePlay_MedicalLv3Effect      = 95,
	GamePlay_MedicalLv2Effect      = 96,
	GamePlay_MedicalLv1Effect      = 97,
	GamePlay_RedBoostEffect        = 98,
	GamePlay_GreenBoostEffect      = 99,
	GamePlay_BlueBoostEffect       = 100,
	GamePlay_AutoUse_MedicalLv1    = 101,
	GamePlay_AutoUse_MedicalLv2    = 102,
	GamePlay_AutoUse_MedicalLv3    = 103,
	GamePlay_AutoLadder            = 104,
	GamePlay_ShowGuideWidget       = 105,
	GamePlay_SearchMaterialItem    = 106,
	GamePlay_SearchExpertWeaponItem = 107,
	GamePlay_ShowAttackUserDefenceBuff = 108,
	GamePlay_ShowDamageLog         = 109,
	GamePlay_DamageLogBgOpacity    = 110,
	GamePlay_InventoryOrder        = 111,
	GamePlay_InventoryScrollSpeed  = 112,
	GamePlay_HideMutableHelmet     = 113,
	GamePlay_HideMutableArmor      = 114,
	GamePlay_PlayTutorial          = 115,
	GamePlay_RePlayTutorial        = 116,
	GamePlay_CombineTutorial       = 117,
	GamePlay_CrossHair             = 118,
	GamePlay_CrossHairThicknessScale = 119,
	GamePlay_CustomCrossHair       = 120,
	GamePlay_CustomCrossHair_R     = 121,
	GamePlay_CustomCrossHair_G     = 122,
	GamePlay_CustomCrossHair_B     = 123,
	GamePlay_CrossHair_A           = 124,
	GamePlay_CustomUseItem1        = 125,
	GamePlay_CustomUseItem2        = 126,
	GamePlay_CustomUseItem3        = 127,
	GamePlay_CustomUseItem4        = 128,
	GamePlay_CustomUseItem5        = 129,
	GamePlay_CustomUseItem6        = 130,
	GamePlay_CustomUseItem7        = 131,
	GamePlay_CustomUseItem8        = 132,
	GamePlay_ShowCountryMark       = 133,
	GamePlay_ShowFirePing          = 134,
	GamePlay_HidePlayerNickName    = 135,
	GamePlay_End                   = 136,
	Dev_Begin                      = 137,
	Dev_AAFilterSize               = 138,
	Dev_AACurrentFrameWeight       = 139,
	Dev_AASamples                  = 140,
	Dev_TonemapperSharpen          = 141,
	Dev_TemporalAAcatmullRom       = 142,
	Dev_TemppralAApauseCorrect     = 143,
	Dev_End                        = 144,
	ShowInventoryCharacter         = 145,
	PlayAssist                     = 146,
	Version                        = 147,
	All                            = 148,
	End                            = 149,
	ESettingType_MAX               = 150
};


// Enum BravoHotelGame.EKeySettingType
enum class EKeySettingType : uint8_t
{
	Key_Begin                      = 0,
	Key_MoveForward                = 1,
	Key_MoveBack                   = 2,
	Key_MoveLeft                   = 3,
	Key_MoveRight                  = 4,
	Key_Walk                       = 5,
	Key_Sprint                     = 6,
	Key_Crouch                     = 7,
	Key_Sliding                    = 8,
	Key_Prone                      = 9,
	Key_LeanRight                  = 10,
	Key_LeanLeft                   = 11,
	Key_Interaction                = 12,
	Key_FPSOnly                    = 13,
	Key_ToggleAutoSprint           = 14,
	Key_FreeLook                   = 15,
	Key_JumpParkour                = 16,
	Key_Jump                       = 17,
	Key_Parkour                    = 18,
	Key_MoveUp                     = 19,
	Key_MoveDown                   = 20,
	Key_Fire                       = 21,
	Key_AltFire                    = 22,
	Key_AOS                        = 23,
	Key_ADS                        = 24,
	Key_Reload                     = 25,
	Key_ChangeWeaponUpside         = 26,
	Key_ChangeWeaponDownside       = 27,
	Key_WeapSlot_01                = 28,
	Key_WeapSlot_02                = 29,
	Key_WeapSlot_03                = 30,
	Key_WeapSlot_04                = 31,
	Key_WeapSlot_05                = 32,
	Key_ThrowWeapon                = 33,
	Key_Fragment                   = 34,
	Key_Flashbang                  = 35,
	Key_Smoke                      = 36,
	Key_Molotove                   = 37,
	Key_ActiveSkill00              = 38,
	Key_CancleActiveSkill00        = 39,
	Key_ActiveSkill01              = 40,
	Key_ActiveSkill02              = 41,
	Key_DisArm                     = 42,
	Key_FireMode                   = 43,
	Key_ChangeThrowingMotion       = 44,
	Key_CookThrowingWeapon         = 45,
	Key_ZoomIn                     = 46,
	Key_ZoomOut                    = 47,
	Key_ZeroingDistanceUp          = 48,
	Key_ZeroingDistanceDown        = 49,
	Key_SteadyAim                  = 50,
	Key_UseTopRecoverItem          = 51,
	Key_UseMediPack_Lv3            = 52,
	Key_UseMediPack_Lv2            = 53,
	Key_UseMediPack_Lv1            = 54,
	Key_BoostItemMenu              = 55,
	Key_UseBoostItem               = 56,
	Key_CustomUseItem              = 57,
	Key_UseStrongPainkiller        = 58,
	Key_UsePowerDrink              = 59,
	Key_UseEnergyBar               = 60,
	Key_UseTopSkillBook            = 61,
	Key_UseRedBook                 = 62,
	Key_UseGreenBook               = 63,
	Key_UseBlueBook                = 64,
	Key_UseWhiteBook               = 65,
	Key_UseBalckBook               = 66,
	Key_VehicleMoveForward         = 67,
	Key_VehicleMoveBack            = 68,
	Key_VehicleMoveLeft            = 69,
	Key_VehicleMoveRight           = 70,
	Key_Handbrake                  = 71,
	Key_Nitro                      = 72,
	Key_VehicleHorn                = 73,
	Key_VehicleSeat0               = 74,
	Key_VehicleSeat1               = 75,
	Key_VehicleSeat2               = 76,
	Key_VehicleSeat3               = 77,
	Key_VehicleSeat4               = 78,
	Key_WorldMap                   = 79,
	Key_MiniMap                    = 80,
	Key_Inventory                  = 81,
	Key_OptionMenu                 = 82,
	Key_SmartPing                  = 83,
	Key_OnlySmartPing              = 84,
	Key_SmartPingMenu              = 85,
	Key_SmartPingAgree             = 86,
	Key_InsertMarker               = 87,
	Key_DeleteMarker               = 88,
	Key_ToggleSmartMessage         = 89,
	Key_AddMarker                  = 90,
	Key_SmartPingWorldMap          = 91,
	Key_SmartPingMenuWorldMap      = 92,
	Key_OnlySmartPingWorldMap      = 93,
	Key_SmartPingAgreeWorldMap     = 94,
	Key_RoutePing                  = 95,
	Key_DeleteRoutePing            = 96,
	Key_InsertMarkerWorldMap       = 97,
	Key_DeleteMarkerWorldMap       = 98,
	Key_ToggleInGameHUD            = 99,
	Key_ToggleGuideWidget          = 100,
	Key_WorldMapMoveToPlayer       = 101,
	Key_PushToTalk                 = 102,
	Key_MasterVolumeToggle         = 103,
	Key_MasterVolumeUp             = 104,
	Key_MasterVolumeDown           = 105,
	Key_ShowNextPlayer             = 106,
	Key_ShowPrePlayer              = 107,
	Key_Combine01                  = 108,
	Key_Combine02                  = 109,
	Key_Combine03                  = 110,
	Key_Combine04                  = 111,
	Key_Combine05                  = 112,
	Key_Combine06                  = 113,
	Key_Combine07                  = 114,
	Key_Combine08                  = 115,
	Key_Combine09                  = 116,
	Key_Combine10                  = 117,
	Key_MK3DSpectatorPawn_SpeedUp  = 118,
	Key_MK3DSpectatorPawn_SpeedDown = 119,
	Key_MK3DSpectatorPawn_ResetSpeed = 120,
	Key_MK3DReplayController_ReplayPause = 121,
	Key_MK3DReplayController_FreeCamera = 122,
	Key_MK3DReplayController_SetPlayerCameraForTargetInRecording = 123,
	Key_MK3DReplayController_IncreaseSpeedByIndex = 124,
	Key_MK3DReplayController_DecreaseSpeedByIndex = 125,
	Key_MK3DReplayController_GoToBeginTime = 126,
	Key_MK3DReplayController_GoToEndTime = 127,
	Key_MK3DReplayController_FindActorsByCursor = 128,
	Key_PlayerCamera               = 129,
	Key_FollowCamera               = 130,
	Key_TimeLineWidget             = 131,
	Key_PlayerListWidget           = 132,
	Key_PerkDeckWidget             = 133,
	Key_ItemListWidget             = 134,
	Key_MK3DSpectatorPawn_MoveForward = 135,
	Key_MK3DSpectatorPawn_MoveBack = 136,
	Key_MK3DSpectatorPawn_MoveLeft = 137,
	Key_MK3DSpectatorPawn_MoveRight = 138,
	Key_MK3DSpectatorPawn_MoveUp   = 139,
	Key_MK3DSpectatorPawn_MoveDown = 140,
	Key_MK3DSpectatorPawn_Turn     = 141,
	Key_MK3DSpectatorPawn_LookUp   = 142,
	Key_MouseLeftBtnDrag           = 143,
	Key_MouseWheelUpDown           = 144,
	Key_End                        = 145,
	Key_MAX                        = 146
};


// Enum BravoHotelGame.EArmedStateActionType
enum class EArmedStateActionType : uint8_t
{
	EASAT_Casting                  = 0,
	EASAT_Driver                   = 1,
	EASAT_Passenger                = 2,
	EASAT_Parkour                  = 3,
	EASAT_Ladder                   = 4,
	EASAT_Swimming                 = 5,
	EASAT_Parachute                = 6,
	EASAT_Died                     = 7,
	EASAT_MAX                      = 8
};


// Enum BravoHotelGame.EPlosiveSoundDetectionType
enum class EPlosiveSoundDetectionType : uint8_t
{
	EPSDT_None                     = 0,
	EPSDT_Craft                    = 1,
	EPSDT_Capsule                  = 2,
	EPSDT_Skill                    = 3,
	EPSDT_MAX                      = 4
};


// Enum BravoHotelGame.ELandingReason
enum class ELandingReason : uint8_t
{
	LR_None                        = 0,
	LR_Jump                        = 1,
	LR_Descent                     = 2,
	LR_VehicleEscape               = 3,
	LR_VehicleExit                 = 4,
	LR_VehicleCrash                = 5,
	LR_VehicleAutoEscape           = 6,
	LR_Parkour                     = 7,
	LR_RocketJump                  = 8,
	LR_Knockback                   = 9,
	LR_Stuntman                    = 10,
	LR_QuickLanding                = 11,
	LR_Jetpack                     = 12,
	LR_MeteorJump                  = 13,
	LR_UltimateSprint              = 14,
	LR_MAX                         = 15
};


// Enum BravoHotelGame.ELeanState
enum class ELeanState : uint8_t
{
	LS_Left                        = 0,
	LS_Middle                      = 1,
	LS_Right                       = 2,
	LS_MAX                         = 3
};


// Enum BravoHotelGame.ItemWidgetDragType
enum class EItemWidgetDragType : uint8_t
{
	SupplyWeaponSlot               = 0,
	ProximitySlot                  = 1,
	TransportSlot                  = 2,
	EquipSlot                      = 3,
	WeaponSlot                     = 4,
	AttachmentSlot                 = 5,
	RecipeSlot                     = 6,
	MaterialSlot                   = 7,
	ItemWidgetDragType_MAX         = 8
};


// Enum BravoHotelGame.EWearableItemType
enum class EWearableItemType : uint8_t
{
	WIT_Hair                       = 0,
	WIT_Face                       = 1,
	WIT_Helmet                     = 2,
	WIT_Bag                        = 3,
	WIT_Armor                      = 4,
	WIT_GhillieSuit                = 5,
	WIT_Hat                        = 6,
	WIT_Eyewear                    = 7,
	WIT_Mask                       = 8,
	WIT_Top                        = 9,
	WIT_Outer                      = 10,
	WIT_Gloves                     = 11,
	WIT_Bottom                     = 12,
	WIT_Shoes                      = 13,
	WIT_Parachute                  = 14,
	WIT_ParachuteBag               = 15,
	WIT_Clipping                   = 16,
	WIT_Body                       = 17,
	WIT_None                       = 18,
	WIT_MAX                        = 19
};


// Enum BravoHotelGame.ECharacterAbilityType
enum class ECharacterAbilityType : uint8_t
{
	CAT_None                       = 0,
	CAT_MaxHP                      = 1,
	CAT_BoostHP                    = 2,
	CAT_MaxOxygen                  = 3,
	CAT_UseBreath                  = 4,
	CAT_MoveSpeed                  = 5,
	CAT_HealOfTime                 = 6,
	CAT_MaxCapacity                = 7,
	CAT_ReloadSpeed                = 8,
	CAT_BoltActionSpeed            = 9,
	CAT_BoosterTime                = 10,
	CAT_ExpBoost                   = 11,
	CAT_MaxSteady                  = 12,
	CAT_KnockOutHealth             = 13,
	CAT_ADSSpeed                   = 14,
	CAT_ChangeWeaponSpeed          = 15,
	CAT_RevivedHealth              = 16,
	CAT_RevivingHealth             = 17,
	CAT_ReviveSpeed                = 18,
	CAT_ResuscitateSpeed           = 19,
	CAT_ListeningRange             = 20,
	CAT_ActSilently                = 21,
	CAT_MoveWhileUsing             = 22,
	CAT_BoostHealAmount            = 23,
	CAT_HealTeamOne                = 24,
	CAT_VehicleArmor               = 25,
	CAT_ParkourSpeed               = 26,
	CAT_VehicleEfficiency          = 27,
	CAT_DamageReduceOwnBomb        = 28,
	CAT_ProtectFlashBang           = 29,
	CAT_IncressStun                = 30,
	CAT_IncressFlameTime           = 31,
	CAT_IncressFrameDamage         = 32,
	CAT_ParachuteFallingSpeed      = 33,
	CAT_IncressGrenadeBurstRange   = 34,
	CAT_IncressHealLimit           = 35,
	CAT_IncressAmplifierRange      = 36,
	CAT_IncressHeartBeatSensorRange = 37,
	CAT_RocketJumpModifier         = 38,
	CAT_GravityModifier            = 39,
	CAT_LeftLeanAngleModifier      = 40,
	CAT_RightLeanAngleModifier     = 41,
	CAT_LeftLeanSpeedModifier      = 42,
	CAT_RightLeanSpeedModifier     = 43,
	CAT_SuperThrowingTrailViewDistance = 44,
	CAT_ShiningThrowProjectileViewDistance = 45,
	CAT_FindParachutesDistance     = 46,
	CAT_HeatScanRange              = 47,
	CAT_ReduceBuffCooltime         = 48,
	CAT_MeteorJumpModifier         = 49,
	CAT_IncressAirControl          = 50,
	CAT_AccelerationModifier       = 51,
	CAT_DecressSafeLockTime        = 52,
	CAT_IncressCriticalTime        = 53,
	CAT_SearchMaterialCount        = 54,
	CAT_IncressSearchMaterialRange = 55,
	CAT_MaterialInventoryCount     = 56,
	CAT_GoldLimit                  = 57,
	CAT_MouseSensitivityModifier   = 58,
	CAT_MAX                        = 59
};


// Enum BravoHotelGame.EConditionType
enum class EConditionType : uint8_t
{
	CT_None                        = 0,
	CT_Switch                      = 1,
	CT_RTPC                        = 2,
	CT_State                       = 3,
	CT_MAX                         = 4
};


// Enum BravoHotelGame.EThrowingWeaponState
enum class EThrowingWeaponState : uint8_t
{
	ETWS_Idle                      = 0,
	ETWS_TakeOut                   = 1,
	ETWS_Ready                     = 2,
	ETWS_Cook                      = 3,
	ETWS_Throw                     = 4,
	ETWS_Drop                      = 5,
	ETWS_Fire                      = 6,
	ETWS_MAX                       = 7
};


// Enum BravoHotelGame.EFireType
enum class EFireType : uint8_t
{
	FT_None                        = 0,
	FT_HipShot                     = 1,
	FT_AOS                         = 2,
	FT_ADS                         = 3,
	FT_AMP                         = 4,
	FT_HBS                         = 5,
	FT_HUS                         = 6,
	FT_MAX                         = 7
};


// Enum BravoHotelGame.ESuperPeopleClass_DEPRECATED
enum class ESuperPeopleClass_DEPRECATED : uint8_t
{
	ESPC_None                      = 0,
	ESPC_Gatling                   = 1,
	ESPC_SGMaster                  = 2,
	ESPC_StrikingForces            = 3,
	ESPC_Sniper                    = 4,
	ESPC_Recon                     = 5,
	ESPC_Gas                       = 6,
	ESPC_Marine                    = 7,
	ESPC_Teleporter                = 8,
	ESPC_SWAT                      = 9,
	ESPC_WeaponMaster              = 10,
	ESPC_Nuclear                   = 11,
	ESPC_Driver                    = 12,
	ESPC_MAX                       = 13
};


// Enum BravoHotelGame.ECharacterState
enum class ECharacterState : uint8_t
{
	CS_None                        = 0,
	CS_Battle                      = 1,
	CS_InAircraft                  = 2,
	CS_Descent                     = 3,
	CS_Parachuting                 = 4,
	CS_Knockout                    = 5,
	CS_Death                       = 6,
	CS_Driver                      = 7,
	CS_DriverPossessedPawn         = 8,
	CS_Passenger1                  = 9,
	CS_Passenger2                  = 10,
	CS_Passenger3                  = 11,
	CS_Passenger4                  = 12,
	CS_Passenger5                  = 13,
	CS_RemotingVehicle             = 14,
	CS_Ladder                      = 15,
	CS_CriticalTime                = 16,
	CS_InAircraftCinematic         = 17,
	CS_StartReady                  = 18,
	CS_EndReady                    = 19,
	CS_Max                         = 20
};


// Enum BravoHotelGame.EGrenadeThrowingType
enum class EGrenadeThrowingType : uint8_t
{
	EGTT_None                      = 0,
	EGTT_OverThrow                 = 1,
	EGTT_UnderThrow                = 2,
	EGTT_MAX                       = 3
};


// Enum BravoHotelGame.EWaterDepthType
enum class EWaterDepthType : uint8_t
{
	WDT_NoWater                    = 0,
	WDT_Shallow                    = 1,
	WDT_NoProne                    = 2,
	WDT_NoCrouch                   = 3,
	WDT_SurfaceWater               = 4,
	WDT_UnderWater                 = 5,
	WDT_MAX                        = 6
};


// Enum BravoHotelGame.EDamageCauserType
enum class EDamageCauserType : uint8_t
{
	None                           = 0,
	Character                      = 1,
	Weapon                         = 2,
	BlueZone                       = 3,
	Vehicle                        = 4,
	EDamageCauserType_MAX          = 5
};


// Enum BravoHotelGame.EGuideWidgetType
enum class EGuideWidgetType : uint8_t
{
	GWT_Parachuting                = 0,
	GWT_Ladder                     = 1,
	GWT_Descent                    = 2,
	GWT_Swim                       = 3,
	GWT_Drive                      = 4,
	GWT_ADS                        = 5,
	GWT_ADSZoom                    = 6,
	GWT_WorldMap                   = 7,
	GWT_Spectate                   = 8,
	GWT_SmartPing                  = 9,
	GWT_UseItem                    = 10,
	GWT_TrainingTeleport           = 11,
	GWT_TrainingParachute          = 12,
	GWT_MAX                        = 13
};


// Enum BravoHotelGame.ECharacterBuffType
enum class ECharacterBuffType : uint8_t
{
	CBT_None                       = 0,
	CBT_Booster                    = 1,
	CBT_Bandage                    = 2,
	CBT_OutOfSteady                = 3,
	CBT_Reviving                   = 4,
	CBT_NoDamage                   = 5,
	CBT_Stun                       = 6,
	CBT_Deafen                     = 7,
	CBT_MAX                        = 8
};


// Enum BravoHotelGame.ECharacterAudioEventType
enum class ECharacterAudioEventType : uint8_t
{
	EquipWearable                  = 0,
	EquipAttachment                = 1,
	EquipWeapon                    = 2,
	PickupBackpack                 = 3,
	PickupStartEvent               = 4,
	PickupConsumables              = 5,
	ECharacterAudioEventType_MAX   = 6
};


// Enum BravoHotelGame.EBattleRoyaleState
enum class EBattleRoyaleState : uint8_t
{
	EBRS_None                      = 0,
	EBRS_Waiting                   = 1,
	EBRS_Ready                     = 2,
	EBRS_CheckStartPlay            = 3,
	EBRS_Play                      = 4,
	EBRS_MatchEnd                  = 5,
	EBRS_MAX                       = 6
};


// Enum BravoHotelGame.ECharacterGroundState
enum class ECharacterGroundState : uint8_t
{
	CGS_None                       = 0,
	CGS_Stand                      = 1,
	CGS_Crouch                     = 2,
	CGS_Prone                      = 3,
	CGS_SiegeMode                  = 4,
	CGS_MAX                        = 5
};


// Enum BravoHotelGame.EToggleWidgetModeType
enum class EToggleWidgetModeType : uint8_t
{
	TWMT_None                      = 0,
	TWMT_Inventory                 = 1,
	TWMT_WorldMap                  = 2,
	TWMT_BlackMarket               = 3,
	TWMT_SkillMap                  = 4,
	TWMT_MAX                       = 5
};


// Enum BravoHotelGame.ETargetHealthType
enum class ETargetHealthType : uint8_t
{
	ETHT_Casting                   = 0,
	ETHT_Inventory                 = 1,
	ETHT_Bandage                   = 2,
	ETHT_MAX                       = 3
};


// Enum BravoHotelGame.ETerrainType
enum class ETerrainType : uint8_t
{
	TT_None                        = 0,
	TT_Wood                        = 1,
	TT_Rock                        = 2,
	TT_Indoor                      = 3,
	TT_Fence                       = 4,
	TT_Grass                       = 5,
	TT_Cliff                       = 6,
	TT_Water                       = 7,
	TT_Air                         = 8,
	TT_Vehicle                     = 9,
	TT_Steel                       = 10,
	TT_Shield                      = 11,
	TT_MAX                         = 12
};


// Enum BravoHotelGame.EProjectileGrenadeState
enum class EProjectileGrenadeState : uint8_t
{
	EPGS_Idle                      = 0,
	EPGS_Active                    = 1,
	EPGS_ActiveMoveStop            = 2,
	EPGS_ActiveBoobyTrap           = 3,
	EPGS_DestroyWithoutActive      = 4,
	EPGS_ActiveByDamage            = 5,
	EPGS_Deactive                  = 6,
	EPGS_MAX                       = 7
};


// Enum BravoHotelGame.EInteractionType
enum class EInteractionType : uint8_t
{
	IT_None                        = 0,
	IT_Item                        = 1,
	IT_Door                        = 2,
	IT_Revive                      = 3,
	IT_Vehicle                     = 4,
	IT_DropBox                     = 5,
	IT_PersonalSupplyBox           = 6,
	IT_PersonalSupplyBoxFailed     = 7,
	IT_Elevator                    = 8,
	IT_Ladder                      = 9,
	IT_OnLadder                    = 10,
	IT_Resuscitation               = 11,
	IT_Parachute                   = 12,
	IT_MeteorStrike                = 13,
	IT_MAX                         = 14
};


// Enum BravoHotelGame.EInDoorAdjustmentTarget
enum class EInDoorAdjustmentTarget : uint8_t
{
	IAT_None                       = 0,
	IAT_ThirdPersonCamera          = 1,
	IAT_Audio_DEPRECATED           = 2,
	IAT_PostProcess                = 3,
	IAT_MAX                        = 4
};


// Enum BravoHotelGame.EWeaponAttachmentItem
enum class EWeaponAttachmentItem : uint8_t
{
	WA_None                        = 0,
	WA_Sight_Basic                 = 1,
	WA_Sight_Reddot                = 2,
	WA_Sight_Holo                  = 3,
	WA_Sight_2X                    = 4,
	WA_Sight_4X                    = 5,
	WA_Sight_8X                    = 6,
	WA_Sight_15X                   = 7,
	WA_Sight_Digital               = 8,
	WA_Muzzle_AR_Silencer          = 9,
	WA_Muzzle_AR_Compensator       = 10,
	WA_Muzzle_AR_Suppressor        = 11,
	WA_Muzzle_SMG_Silencer         = 12,
	WA_Muzzle_SMG_Compensator      = 13,
	WA_Muzzle_SMG_Suppressor       = 14,
	WA_Muzzle_SR_Silencer          = 15,
	WA_Muzzle_SR_Compensator       = 16,
	WA_Muzzle_SR_Suppressor        = 17,
	WA_Muzzle_Shotgun_Choke        = 18,
	WA_Muzzle_Pistol_Silencer      = 19,
	WA_Barrel_Basic                = 20,
	WA_Barrel_Short                = 21,
	WA_Barrel_Long                 = 22,
	WA_Mag_Basic                   = 23,
	WA_Mag_AR_QuickDraw            = 24,
	WA_Mag_AR_Extended             = 25,
	WA_Mag_AR_ExtendedQuickDraw    = 26,
	WA_Mag_SMG_QuickDraw           = 27,
	WA_Mag_SMG_Extended            = 28,
	WA_Mag_SMG_ExtendedQuickDraw   = 29,
	WA_Mag_SR_QuickDraw            = 30,
	WA_Mag_SR_Extended             = 31,
	WA_Mag_SR_ExtendedQuickDraw    = 32,
	WA_Mag_Pistol_QuickDraw        = 33,
	WA_Mag_Pistol_Extended         = 34,
	WA_Mag_Pistol_ExtendedQuickDraw = 35,
	WA_Grip_Angled                 = 36,
	WA_Grip_Vertical               = 37,
	WA_Stock_Shotgun_BulletLoops   = 38,
	WA_Stock_SR_BulletLoops        = 39,
	WA_Stock_SR_CheekPad           = 40,
	WA_Stock_Tactical              = 41,
	WA_Stock_MP                    = 42,
	WA_Perk01_Basic                = 43,
	WA_Perk02_Basic                = 44,
	WA_Perk03_Basic                = 45,
	WA_Perk04_Basic                = 46,
	WA_MAX                         = 47
};


// Enum BravoHotelGame.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	CMOVE_None                     = 0,
	CMOVE_Ragdoll                  = 1,
	CMOVE_Descent                  = 2,
	CMOVE_Drive                    = 3,
	CMOVE_Ladder                   = 4,
	CMOVE_Jetpack                  = 5,
	CMOVE_MAX                      = 6
};


// Enum BravoHotelGame.EMouseSensitivityState
enum class EMouseSensitivityState : uint8_t
{
	EMSS_None                      = 0,
	EMSS_Default                   = 1,
	EMSS_VehicleDriver             = 2,
	EMSS_Targeting                 = 3,
	EMSS_Total                     = 4,
	EMSS_UsingDetail               = 5,
	EMSS_ADS                       = 6,
	EMSS_2X                        = 7,
	EMSS_4X                        = 8,
	EMSS_6X                        = 9,
	EMSS_8X                        = 10,
	EMSS_15X                       = 11,
	EMSS_Vertical                  = 12,
	EMSS_MAX                       = 13
};


// Enum BravoHotelGame.ECharacterConditionedAbilityType
enum class ECharacterConditionedAbilityType : uint8_t
{
	CCAT_None                      = 0,
	CCAT_Searchable                = 1,
	CCAT_DamageReduce              = 2,
	CCAT_Armor                     = 3,
	CCAT_Durability                = 4,
	CCAT_HorizontalRecoil          = 5,
	CCAT_VerticalRecoil            = 6,
	CCAT_MoveSpeed                 = 7,
	CCAT_Sway                      = 8,
	CCAT_DamageIncress             = 9,
	CCAT_Post_DamageIncress        = 10,
	CCAT_Accuracy                  = 11,
	CCAT_MovePenalty               = 12,
	CCAT_ArmorDamage               = 13,
	CCAT_HealAmount                = 14,
	CCAT_UseSpeed                  = 15,
	CCAT_CombineSpeed              = 16,
	CCAT_UseSpeedOnDamage          = 17,
	CCAT_AdditionalItem            = 18,
	CCAT_IncressRange              = 19,
	CCAT_ReloadSpeed               = 20,
	CCAT_ADSSpeed                  = 21,
	CCAT_RateOfFire                = 22,
	CCAT_JumpHeight                = 23,
	CCAT_DecressRampSpeedPenalty   = 24,
	CCAT_LadderSpeed               = 25,
	CCAT_LandedSpeed               = 26,
	CCAT_DamageReduceOnBack        = 27,
	CCAT_DamageReduceOnFront       = 28,
	CCAT_IncressMazineCapacity     = 29,
	CCAT_IncressBullet             = 30,
	CCAT_DamageReduceOver200m      = 31,
	CCAT_DamageReduceIn25m         = 32,
	CCAT_DamageIncressBySpeed      = 33,
	CCAT_Post_DamageIncressBySpeed = 34,
	CCAT_DamageReduceBySpeed       = 35,
	CCAT_DamageIncressReverseSpeed = 36,
	CCAT_DamageReduceReverseSpeed  = 37,
	CCAT_AirWalkDistance           = 38,
	CCAT_DamageIncressBySnipeReady = 39,
	CCAT_DamageIncressByAntiAirFire = 40,
	CCAT_AutoAimWeight             = 41,
	CCAT_AutoAimDistance           = 42,
	CCAT_AutoAimWeightByAntiAirFire = 43,
	CCAT_AutoAimRadius             = 44,
	CCAT_GlobalAutoAimWeight       = 45,
	CCAT_GlobalAutoAimRadiusCorrectValue = 46,
	CCAT_IncressThrowingWeaponDamage = 47,
	CCAT_IncressThrowingWeaponFireCount = 48,
	CCAT_IncressMaxCountFlashbangBoobyTrap = 49,
	CCAT_IncressRangeFlashbangBoobyTrap = 50,
	CCAT_IncressBurstCount         = 51,
	CCAT_DamageIncressOnBlueZoneBorder = 52,
	CCAT_DamageReduceOnBlueZoneBorder = 53,
	CCAT_AdditionalConsumeAmmo     = 54,
	CCAT_BoosterItemEffective      = 55,
	CCAT_IncressThrowingWeaponHitDamage = 56,
	CCAT_IncressRangeMolotovCocktailBoobyTrap = 57,
	CCAT_IncressThrownRange        = 58,
	CCAT_IncressThrownAnimSpeed    = 59,
	CCAT_IncressFirePropagationLevel = 60,
	CCAT_IncressDeafenRange        = 61,
	CCAT_BulletproofGlass          = 62,
	CCAT_DamageIncressToHigherLevel = 63,
	CCAT_DamageIncressToLowerLevel = 64,
	CCAT_DamageIncressWhenNoKill   = 65,
	CCAT_DamageIncressWhenTwoTeam  = 66,
	CCAT_DamageIncressByPhase      = 67,
	CCAT_DamageIncressByDiedMember = 68,
	CCAT_DamageIncressOutCircle    = 69,
	CCAT_DamageIncressOnHighLevel  = 70,
	CCAT_DamageIncressOnLowLevel   = 71,
	CCAT_SideMoveSpeed             = 72,
	CCAT_BackMoveSpeed             = 73,
	CCAT_DecressExplosionSpeedTime = 74,
	CCAT_DecressDeafenTime         = 75,
	CCAT_InvisibleDamageIncress    = 76,
	CCAT_InvisibleDamageReduce     = 77,
	CCAT_MAX                       = 78
};


// Enum BravoHotelGame.EPingType
enum class EPingType : uint8_t
{
	PT_NoneTarget                  = 0,
	PT_Attack                      = 1,
	PT_Move                        = 2,
	PT_Item                        = 3,
	PT_Location                    = 4,
	PT_Vehicle                     = 5,
	PT_Support                     = 6,
	PT_SupplyBoxNoti               = 7,
	PT_Caution                     = 8,
	PT_MenuEnd                     = 9,
	PT_Enemy                       = 10,
	PT_SkillEnemy                  = 11,
	PT_Ok                          = 12,
	PT_PersonalSupplyBox           = 13,
	PT_Book                        = 14,
	PT_RequestResurrection         = 15,
	PT_Material                    = 16,
	PT_Custom                      = 17,
	PT_MAX                         = 18
};


// Enum BravoHotelGame.ELogTag
enum class ELogTag : uint8_t
{
	LT_None                        = 0,
	LT_SmartPing                   = 1,
	LT_MAX                         = 2
};


// Enum BravoHotelGame.ELoadingScreenType
enum class ELoadingScreenType : uint8_t
{
	LST_None                       = 0,
	LST_First                      = 1,
	LST_Default                    = 2,
	LST_World                      = 3,
	LST_Lobby                      = 4,
	LST_RePlay                     = 5,
	LST_Move                       = 6,
	LST_Tutorial                   = 7,
	LST_TutorialOut                = 8,
	LST_CombineTutorial            = 9,
	LST_CombineTutorialOut         = 10,
	LST_TrainingIsland             = 11,
	LST_TrainingIslandOut          = 12,
	LST_Tournament                 = 13,
	LST_MAX                        = 14
};


// Enum BravoHotelGame.EHUDMessageType
enum class EHUDMessageType : uint8_t
{
	HMT_BlueZoneDesc               = 0,
	HMT_BlueZoneName               = 1,
	HMT_GameCountDown              = 2,
	HMT_GameCountDownNum           = 3,
	HMT_GameStartMessage           = 4,
	HMT_ChangeClassInfo            = 5,
	HMT_KillMessage                = 6,
	HMT_KillCount                  = 7,
	HMT_LevelUpMessage             = 8,
	HMT_WarningMessage             = 9,
	HMT_SupplyMessage              = 10,
	HMT_BroadcastMessage           = 11,
	HMT_TeamKillWarning            = 12,
	HMT_ActionDescription          = 13,
	HMT_Action                     = 14,
	HMT_CastingMessage             = 15,
	HMT_CastingCount               = 16,
	HMT_CastingCancelInfo          = 17,
	HMT_ActionMessage              = 18,
	HMT_CoreInfo                   = 19,
	HMT_ZeroingDistance            = 20,
	HMT_PlayerReportInfo           = 21,
	HMT_SpectatorCount             = 22,
	HMT_PlayerInfo                 = 23,
	HMT_RoundOverInfo              = 24,
	HMT_RoundOver                  = 25,
	HMT_GuideWidget                = 26,
	HMT_Resuscitating              = 27,
	HMT_RequestMessage             = 28,
	HMT_EndResuscitated            = 29,
	HMT_ItemCancelMessage          = 30,
	HMT_TrainingTimeMessage        = 31,
	HMT_CoreInfoRichText           = 32,
	HMT_End                        = 33,
	HMT_MAX                        = 34
};


// Enum BravoHotelGame.EHUDMessageTableType
enum class EHUDMessageTableType : uint8_t
{
	HMTT_Waiting                   = 0,
	HMTT_Playing                   = 1,
	HMTT_Spectating                = 2,
	HMTT_MatchEnd                  = 3,
	HMTT_MAX                       = 4
};


// Enum BravoHotelGame.EPresenceState
enum class EPresenceState : uint8_t
{
	PS_Offline                     = 0,
	PS_Online                      = 1,
	PS_Ingame                      = 2,
	PS_MAX                         = 3
};


// Enum BravoHotelGame.ERandomType
enum class ERandomType : uint8_t
{
	RT_None                        = 0,
	RT_Package                     = 1,
	RT_PickOne                     = 2,
	RT_MAX                         = 3
};


// Enum BravoHotelGame.EKeySettingSubType
enum class EKeySettingSubType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	Battle                         = 2,
	ScopeMode                      = 3,
	Throw                          = 4,
	Item                           = 5,
	Vehicle                        = 6,
	VehicleSeat                    = 7,
	UI                             = 8,
	Swimming                       = 9,
	SmartPing                      = 10,
	SmartPingWorldMap              = 11,
	SmartPingMenu                  = 12,
	Voice                          = 13,
	Spectate                       = 14,
	Replay                         = 15,
	SkillKey                       = 16,
	EKeySettingSubType_MAX         = 17
};


// Enum BravoHotelGame.ESlotType
enum class ESlotType : uint8_t
{
	Slider                         = 0,
	ComboBox                       = 1,
	Select                         = 2,
	KeyInput                       = 3,
	Button                         = 4,
	ESlotType_MAX                  = 5
};


// Enum BravoHotelGame.ESettingBigType
enum class ESettingBigType : uint8_t
{
	Graphic                        = 0,
	Audio                          = 1,
	Key                            = 2,
	Control                        = 3,
	GamePlay                       = 4,
	Dev                            = 5,
	Management                     = 6,
	ESettingBigType_MAX            = 7
};


// Enum BravoHotelGame.EPersonalSupplyBoxPingType
enum class EPersonalSupplyBoxPingType : uint8_t
{
	PPT_None                       = 0,
	PPT_Opened                     = 1,
	PPT_NotOpen                    = 2,
	PPT_Disable                    = 3,
	PPT_MAX                        = 4
};


// Enum BravoHotelGame.ESupplyPriceType
enum class ESupplyPriceType : uint8_t
{
	SPT_Normal                     = 0,
	SPT_Tournament                 = 1,
	SPT_MAX                        = 2
};


// Enum BravoHotelGame.CheatParamType
enum class ECheatParamType : uint8_t
{
	CPT_Intger                     = 0,
	CPT_Float                      = 1,
	CPT_String                     = 2,
	CPT_Bool                       = 3,
	CPT_MAX                        = 4
};


// Enum BravoHotelGame.EItemPingIconType
enum class EItemPingIconType : uint8_t
{
	IPIT_None                      = 0,
	IPIT_GUN                       = 1,
	IPIT_Melee                     = 2,
	IPIT_Grenade                   = 3,
	IPIT_Equipment                 = 4,
	IPIT_WearItem                  = 5,
	IPIT_Attachment                = 6,
	IPIT_Recover                   = 7,
	IPIT_Armor                     = 8,
	IPIT_MAX                       = 9
};


// Enum BravoHotelGame.ETicketType
enum class ETicketType : uint8_t
{
	TT_SupplyBox                   = 0,
	TT_ChangeDeck                  = 1,
	TT_SelectDeck                  = 2,
	TT_Resurrection                = 3,
	TT_MAX                         = 4
};


// Enum BravoHotelGame.EWeaponFireMode
enum class EWeaponFireMode : uint8_t
{
	EFM_Single                     = 0,
	EFM_Burst                      = 1,
	EFM_Auto                       = 2,
	EFM_MAX                        = 3
};


// Enum BravoHotelGame.ELoadingType
enum class ELoadingType : uint8_t
{
	ELT_Magazine                   = 0,
	ELT_OneByOne                   = 1,
	ELT_OneByOne_StripperClip      = 2,
	ELT_MAX                        = 3
};


// Enum BravoHotelGame.EWeaponAttachmentBarrel
enum class EWeaponAttachmentBarrel : uint8_t
{
	WA_Barrel_Basic                = 0,
	WA_Barrel_Short                = 1,
	WA_Barrel_Long                 = 2,
	WA_Barrel_MAX                  = 3
};


// Enum BravoHotelGame.EWeaponAttachmentMuzzleDevice
enum class EWeaponAttachmentMuzzleDevice : uint8_t
{
	WA_Muzzle_Basic                = 0,
	WA_Muzzle_AR_Silencer          = 1,
	WA_Muzzle_AR_Compensator       = 2,
	WA_Muzzle_AR_Suppressor        = 3,
	WA_Muzzle_SMG_Silencer         = 4,
	WA_Muzzle_SMG_Compensator      = 5,
	WA_Muzzle_SMG_Suppressor       = 6,
	WA_Muzzle_SR_Silencer          = 7,
	WA_Muzzle_SR_Compensator       = 8,
	WA_Muzzle_SR_Suppressor        = 9,
	WA_Muzzle_Shotgun_Choke        = 10,
	WA_Muzzle_Pistol_Silencer      = 11,
	WA_Muzzle_MAX                  = 12
};


// Enum BravoHotelGame.EWeaponAttachmentStock
enum class EWeaponAttachmentStock : uint8_t
{
	WA_Stock_Basic                 = 0,
	WA_Stock_Shotgun_BulletLoops   = 1,
	WA_Stock_SR_BulletLoops        = 2,
	WA_Stock_SR_CheekPad           = 3,
	WA_Stock_Tactical              = 4,
	WA_Stock_MP                    = 5,
	WA_Stock_MAX                   = 6
};


// Enum BravoHotelGame.EWeaponAttachmentMagazine
enum class EWeaponAttachmentMagazine : uint8_t
{
	WA_Mag_None                    = 0,
	WA_Mag_Basic                   = 1,
	WA_Mag_AR_QuickDraw            = 2,
	WA_Mag_AR_Extended             = 3,
	WA_Mag_AR_ExtendedQuickDraw    = 4,
	WA_Mag_SMG_QuickDraw           = 5,
	WA_Mag_SMG_Extended            = 6,
	WA_Mag_SMG_ExtendedQuickDraw   = 7,
	WA_Mag_SR_QuickDraw            = 8,
	WA_Mag_SR_Extended             = 9,
	WA_Mag_SR_ExtendedQuickDraw    = 10,
	WA_Mag_Pistol_QuickDraw        = 11,
	WA_Mag_Pistol_Extended         = 12,
	WA_Mag_Pistol_ExtendedQuickDraw = 13,
	WA_Mag_MAX                     = 14
};


// Enum BravoHotelGame.EWeaponAttachmentGrip
enum class EWeaponAttachmentGrip : uint8_t
{
	WA_Grip_Basic                  = 0,
	WA_Grip_Angled                 = 1,
	WA_Grip_Vertical               = 2,
	WA_Grip_MAX                    = 3
};


// Enum BravoHotelGame.EWeaponAttachmentType
enum class EWeaponAttachmentType : uint8_t
{
	WAT_None                       = 0,
	WAT_Sight                      = 1,
	WAT_MuzzleDevice               = 2,
	WAT_Stock                      = 3,
	WAT_Grip                       = 4,
	WAT_Magazine                   = 5,
	WAT_Barrel                     = 6,
	WAT_TacticalAttachment         = 7,
	WAT_Body                       = 8,
	WAT_Perk01                     = 9,
	WAT_Perk02                     = 10,
	WAT_Perk03                     = 11,
	WAT_Perk04                     = 12,
	WAT_Max                        = 13
};


// Enum BravoHotelGame.EWeaponAttachmentUseType
enum class EWeaponAttachmentUseType : uint8_t
{
	WAU_NotUse                     = 0,
	WAU_Use                        = 1,
	WAU_UseFixed                   = 2,
	WAU_MAX                        = 3
};


// Enum BravoHotelGame.EThrowingWeaponType
enum class EThrowingWeaponType : uint8_t
{
	ETWT_None                      = 0,
	ETWT_Grenade_Frag              = 1,
	ETWT_Grenade_Smoke             = 2,
	ETWT_Grenade_Flash             = 3,
	ETWT_Grenade_Molotov           = 4,
	ETWT_Greande_Max               = 5,
	ETWT_MAX                       = 6
};


// Enum BravoHotelGame.EDevelopmentStatus
enum class EDevelopmentStatus : uint8_t
{
	DP_InProgress                  = 0,
	DP_Done                        = 1,
	DP_Release                     = 2,
	DP_MAX                         = 3
};


// Enum BravoHotelGame.ERewardChangeType
enum class ERewardChangeType : uint8_t
{
	RT_DoNotReward                 = 0,
	RT_Reward                      = 1,
	RT_MAX                         = 2
};


// Enum BravoHotelGame.EItemRarity
enum class EItemRarity : uint8_t
{
	Level_None                     = 0,
	Level                          = 1,
	Level01                        = 2,
	Level02                        = 3,
	Level03                        = 4,
	Level04                        = 5,
	Level05                        = 6,
	Level06                        = 7,
	Level07                        = 8,
	Level08                        = 9,
	Level09                        = 10,
	Level10                        = 11,
	Level_MAX                      = 12
};


// Enum BravoHotelGame.EGenderType
enum class EGenderType : uint8_t
{
	GT_None                        = 0,
	GT_Male                        = 1,
	GT_Female                      = 2,
	GT_Bot                         = 3,
	GT_ALL                         = 4,
	GT_MAX                         = 5
};


// Enum BravoHotelGame.EItemLifeTimeType
enum class EItemLifeTimeType : uint8_t
{
	ILTT_None                      = 0,
	ILTT_Etheral                   = 1,
	ILTT_LimitTime                 = 2,
	ILTT_LimitCount                = 3,
	ILTT_LimitTimeCount            = 4,
	ILTT_MAX                       = 5
};


// Enum BravoHotelGame.EConsumablesItemType
enum class EConsumablesItemType : uint8_t
{
	CON_Kitmid                     = 0,
	CON_Kitbig                     = 1,
	CON_Energybar                  = 2,
	CON_Powerdrink                 = 3,
	CON_Painkiller                 = 4,
	CON_Perk                       = 5,
	CON_Safety                     = 6,
	CON_Package                    = 7,
	CON_Plastic                    = 8,
	CON_Aluminium                  = 9,
	CON_Wood                       = 10,
	CON_Bolt                       = 11,
	CON_Coin                       = 12,
	CON_None                       = 13,
	CON_MAX                        = 14
};


// Enum BravoHotelGame.EItemType
enum class EItemType : uint8_t
{
	IT_None                        = 0,
	IT_Medical                     = 1,
	IT_Weapon                      = 2,
	IT_WeaponAttachment            = 3,
	IT_Wearable                    = 4,
	IT_Ammo                        = 5,
	IT_Vehicle                     = 6,
	IT_Chest                       = 7,
	IT_Usable                      = 8,
	IT_Material                    = 9,
	IT_Recipe                      = 10,
	IT_Skin                        = 11,
	IT_Ticket                      = 12,
	IT_Unknown                     = 13,
	IT_MAX                         = 14
};


// Enum BravoHotelGame.ETournamentStep
enum class ETournamentStep : uint8_t
{
	TS_NoneTournament              = 0,
	TS_Qualifiers                  = 1,
	TS_SemiFinals                  = 2,
	TS_GrandFinals                 = 3,
	TS_PreQualifiers               = 4,
	TS_MAX                         = 5
};


// Enum BravoHotelGame.EBravoHotel_ZipUtilityCompressionFormat
enum class EBravoHotel_ZipUtilityCompressionFormat : uint8_t
{
	BP_COMPRESSION_FORMAT_UNKNOWN  = 0,
	BP_COMPRESSION_FORMAT_SEVEN_ZIP = 1,
	BP_COMPRESSION_FORMAT_ZIP      = 2,
	BP_COMPRESSION_FORMAT_GZIP     = 3,
	BP_COMPRESSION_FORMAT_BZIP2    = 4,
	BP_COMPRESSION_FORMAT_RAR      = 5,
	BP_COMPRESSION_FORMAT_TAR      = 6,
	BP_COMPRESSION_FORMAT_ISO      = 7,
	BP_COMPRESSION_FORMAT_CAB      = 8,
	BP_COMPRESSION_FORMAT_LZMA     = 9,
	BP_COMPRESSION_FORMAT_LZMA86   = 10,
	BP_COMPRESSION_FORMAT_MAX      = 11
};


// Enum BravoHotelGame.EBattleMode
enum class EBattleMode : uint8_t
{
	BATTLE_MODE_solo               = 0,
	BATTLE_MODE_duo                = 1,
	BATTLE_MODE_trio               = 2,
	BATTLE_MODE_squad              = 3,
	BATTLE_MODE_MAX                = 4
};


// Enum BravoHotelGame.EMatchingType
enum class EMatchingType : uint8_t
{
	MT_Unknown                     = 0,
	MT_Solo                        = 1,
	MT_Duo                         = 2,
	MT_Trio                        = 3,
	MT_Squad                       = 4,
	MT_MAX                         = 5
};


// Enum BravoHotelGame.EAudioSettingType
enum class EAudioSettingType : uint8_t
{
	Master                         = 0,
	Music                          = 1,
	VoiceInput                     = 2,
	VoiceOutput                    = 3,
	Effect                         = 4,
	Embient                        = 5,
	UI                             = 6,
	Announcer                      = 7,
	EAudioSettingType_MAX          = 8
};


// Enum BravoHotelGame.EGameExitType
enum class EGameExitType : uint8_t
{
	EGET_None                      = 0,
	EGET_Lobby                     = 1,
	EGET_Exit                      = 2,
	EGET_MAX                       = 3
};


// Enum BravoHotelGame.ELobbyExitType
enum class ELobbyExitType : uint8_t
{
	ELET_None                      = 0,
	ELET_Game                      = 1,
	ELET_Replay                    = 2,
	ELET_TutorialPlay              = 3,
	ELET_Exit                      = 4,
	ELET_MAX                       = 5
};


// Enum BravoHotelGame.EReportType
enum class EReportType : uint8_t
{
	RT_None                        = 0,
	RT_Report                      = 1,
	RT_Replay                      = 2,
	RT_DeathCam                    = 3,
	RT_Spectator                   = 4,
	RT_MAX                         = 5
};


// Enum BravoHotelGame.ENormalType
enum class ENormalType : uint8_t
{
	None                           = 0,
	RankPoint                      = 1,
	KillPoint                      = 2,
	DMGPoint                       = 3,
	SurvivalPoint                  = 4,
	SupplyBoxOpen                  = 5,
	DropCoin                       = 6,
	AcquireCoin                    = 7,
	DropRecipe                     = 8,
	AcquireRecipe                  = 9,
	ChangeDeck                     = 10,
	Resuscitation                  = 11,
	RequestResuscitation           = 12,
	RandomGold                     = 13,
	RandomRankGold                 = 14,
	SelectDeckMode                 = 15,
	ChangeDeckList                 = 16,
	ENormalType_MAX                = 17
};


// Enum BravoHotelGame.EWeaponAnimationType
enum class EWeaponAnimationType : uint8_t
{
	EWAT_Unarmed                   = 0,
	EWAT_AssaultRifle              = 1,
	EWAT_SMG                       = 2,
	EWAT_SniperRifle               = 3,
	EWAT_Shotgun                   = 4,
	EWAT_Pistol                    = 5,
	EWAT_ThrowingWeapon            = 6,
	EWAT_Amplifier                 = 7,
	EWAT_MeleeWeapon               = 8,
	EWAT_HeartBeatSensor           = 9,
	EWAT_MAX                       = 10
};


// Enum BravoHotelGame.EWeaponState
enum class EWeaponState : uint8_t
{
	EWS_Idle                       = 0,
	EWS_Firing                     = 1,
	EWS_Reloading                  = 2,
	EWS_BoltAction                 = 3,
	EWS_Equipping                  = 4,
	EWS_MAX                        = 5
};


// Enum BravoHotelGame.EWeaponAttachmentMagazineType
enum class EWeaponAttachmentMagazineType : uint8_t
{
	WA_Mag_None                    = 0,
	WA_Mag_QuickDraw               = 1,
	WA_Mag_Extended                = 2,
	WA_Mag_ExtendedQuickDraw       = 3,
	WA_Mag_MAX                     = 4
};


// Enum BravoHotelGame.EWeaponRecoilType
enum class EWeaponRecoilType : uint8_t
{
	EWRT                           = 0,
	EWRT01                         = 1,
	EWRT_MAX                       = 2
};


// Enum BravoHotelGame.EPlayZoneCircleType
enum class EPlayZoneCircleType : uint8_t
{
	PCT_Current                    = 0,
	PCT_Target                     = 1,
	PCT_Outer                      = 2,
	PCT_MAX                        = 3
};


// Enum BravoHotelGame.EResultUIType
enum class EResultUIType : uint8_t
{
	Simple                         = 0,
	Team                           = 1,
	Match                          = 2,
	EResultUIType_MAX              = 3
};


// Enum BravoHotelGame.EPlayerState
enum class EPlayerState : uint8_t
{
	PS_None                        = 0,
	PS_Spawn                       = 1,
	PS_Waiting                     = 2,
	PS_InAircraft_Waiting          = 3,
	PS_InAircraft_Ready            = 4,
	PS_Descent                     = 5,
	PS_Parachuting                 = 6,
	PS_Playing                     = 7,
	PS_Death                       = 8,
	PS_Spectating                  = 9,
	PS_MatchEnd                    = 10,
	PS_TeamEnd                     = 11,
	PS_Respawn                     = 12,
	PS_MAX                         = 13
};


// Enum BravoHotelGame.EDiedDamageInfoType
enum class EDiedDamageInfoType : uint8_t
{
	DDIT_None                      = 0,
	DDIT_Killer                    = 1,
	DDIT_Me                        = 2,
	DDIT_MAX                       = 3
};


// Enum BravoHotelGame.EItemSpawnPriorityType
enum class EItemSpawnPriorityType : uint8_t
{
	ISPT_Important                 = 0,
	ISPT_UnImportant               = 1,
	ISPT_Force                     = 2,
	ISPT_MAX                       = 3
};


// Enum BravoHotelGame.ESpectatingMode
enum class ESpectatingMode : uint8_t
{
	SM_None                        = 0,
	SM_Solo                        = 1,
	SM_Team                        = 2,
	SM_OtherTeam                   = 3,
	SM_Free                        = 4,
	SM_MAX                         = 5
};


// Enum BravoHotelGame.EPlayerBehavior
enum class EPlayerBehavior : uint8_t
{
	PB_KnockDown                   = 0,
	PB_Alive                       = 1,
	PB_Death                       = 2,
	PB_Vehicle                     = 3,
	PB_AirCraft                    = 4,
	PB_Parachute                   = 5,
	PB_Disconnect                  = 6,
	PB_CriticalTime                = 7,
	PB_MAX                         = 8
};


// Enum BravoHotelGame.EPromotionCondition
enum class EPromotionCondition : uint8_t
{
	PC_RankRate                    = 0,
	PC_MAX                         = 1
};


// Enum BravoHotelGame.EProjectileBehavior
enum class EProjectileBehavior : uint8_t
{
	PB_Bounce_Only                 = 0,
	PB_Penetrate_Only              = 1,
	PB_Bounce_And_Penetrate        = 2,
	PB_MAX                         = 3
};


// Enum BravoHotelGame.EQuestTaskType
enum class EQuestTaskType : uint8_t
{
	None                           = 0,
	Dummy                          = 1,
	Kill                           = 2,
	PickUp                         = 3,
	UseItem                        = 4,
	Combine                        = 5,
	ActiveSkill                    = 6,
	Weapon                         = 7,
	Map                            = 8,
	Inventory                      = 9,
	PersonalSupplyOpen             = 10,
	PersonalSupplyChange           = 11,
	PersonalSupplySpawn            = 12,
	GainPerk                       = 13,
	GainBuff                       = 14,
	LevelUp                        = 15,
	ButtonClick                    = 16,
	EQuestTaskType_MAX             = 17
};


// Enum BravoHotelGame.EVehicleState
enum class EVehicleState : uint8_t
{
	Spawned                        = 0,
	Standby                        = 1,
	Idle                           = 2,
	Driving                        = 3,
	Holding                        = 4,
	Flooded                        = 5,
	Exploded                       = 6,
	Disabled                       = 7,
	EVehicleState_MAX              = 8
};


// Enum BravoHotelGame.EQuestState
enum class EQuestState : uint8_t
{
	QS_None                        = 0,
	QS_Ready                       = 1,
	QS_Progress                    = 2,
	QS_Complete                    = 3,
	QS_MAX                         = 4
};


// Enum BravoHotelGame.EDediGameCheatType
enum class EDediGameCheatType : uint8_t
{
	EGCT_None                      = 0,
	EGCT_UnlockRoomLimit           = 1,
	EGCT_MAX                       = 2
};


// Enum BravoHotelGame.EGameViewType
enum class EGameViewType : uint8_t
{
	GVT_Unknown                    = 0,
	GVT_TPP                        = 1,
	GVT_FPP                        = 2,
	GVT_MAX                        = 3
};


// Enum BravoHotelGame.ELoginType
enum class ELoginType : uint8_t
{
	LT_Name                        = 0,
	LT_Account                     = 1,
	LT_Geegee                      = 2,
	LT_Steam                       = 3,
	LT_GeegeeWithSteam             = 4,
	LT_MAX                         = 5
};


// Enum BravoHotelGame.EMatchModeType
enum class EMatchModeType : uint8_t
{
	MMT_Unknown                    = 0,
	MMT_Normal                     = 1,
	MMT_AI                         = 2,
	MMT_Custom                     = 3,
	MMT_Tournament                 = 4,
	MMT_MAX                        = 5
};


// Enum BravoHotelGame.EGameMode
enum class EGameMode : uint8_t
{
	GM_BattleRoyale                = 0,
	GM_DeathMatch                  = 1,
	GM_BattleRoyale_DEV            = 2,
	GM_BattleRoyale_QA             = 3,
	GM_BattleRoyale_STAGING        = 4,
	GM_MAX                         = 5
};


// Enum BravoHotelGame.EBluseZoneState
enum class EBluseZoneState : uint8_t
{
	EBRS_None                      = 0,
	EBZS_SurvivalCircleLulled      = 1,
	EBRS_SurvivalCircleShrinking   = 2,
	EBRS_Delay                     = 3,
	EBluseZoneState_MAX            = 4
};


// Enum BravoHotelGame.EWorldMapAreaWidgetType
enum class EWorldMapAreaWidgetType : uint8_t
{
	WAWT_RedZone                   = 0,
	WAWT_Nuclear                   = 1,
	WAWT_FindLandingPosition       = 2,
	WAWT_FindLandingPositionTry    = 3,
	WAWT_SearchInstinct            = 4,
	WAWT_VehicleSearch             = 5,
	WAWT_SpatialSense              = 6,
	WAWT_CarScan                   = 7,
	WAWT_CarScanTry                = 8,
	WAWT_UltimateVehicle           = 9,
	WAWT_NitroBoom                 = 10,
	WAWT_TransportAircraft         = 11,
	WAWT_TransportDropBox          = 12,
	WAWT_MaterialItem              = 13,
	WAWT_LocalPing                 = 14,
	WAWT_ExpertWeaponItem          = 15,
	WAWT_Amplifier                 = 16,
	WAWT_HeartBeatSensor           = 17,
	WAWT_Trap                      = 18,
	WAWT_DeadBody                  = 19,
	WAWT_Craft                     = 20,
	WAWT_Capsule                   = 21,
	WAWT_Skill                     = 22,
	WAWT_SkillRadarRadius          = 23,
	WAWT_MAX                       = 24
};


// Enum BravoHotelGame.EBroadCastTeamType
enum class EBroadCastTeamType : uint8_t
{
	None                           = 0,
	Enemy                          = 1,
	Friendly                       = 2,
	Me                             = 3,
	EBroadCastTeamType_MAX         = 4
};


// Enum BravoHotelGame.EBroadCastKillMessageType
enum class EBroadCastKillMessageType : uint8_t
{
	None                           = 0,
	Kill                           = 1,
	Knockout                       = 2,
	Resuscitated                   = 3,
	Kicked                         = 4,
	EBroadCastKillMessageType_MAX  = 5
};


// Enum BravoHotelGame.EStatupAnimType
enum class EStatupAnimType : uint8_t
{
	SAT_None                       = 0,
	SAT_Weapon1                    = 1,
	SAT_Weapon2                    = 2,
	SAT_Helmet                     = 3,
	SAT_Armor                      = 4,
	SAT_Bag                        = 5,
	SAT_MAX                        = 6
};


// Enum BravoHotelGame.ESceneType
enum class ESceneType : uint8_t
{
	Scene_Begin                    = 0,
	Scene_GammaSettings            = 1,
	Scene_CompanyLogo              = 2,
	Scene_SupportProgram           = 3,
	Scene_OpeningMovie             = 4,
	Scene_Login                    = 5,
	Scene_TermsConditions          = 6,
	Scene_CreateCharacter          = 7,
	Scene_StartScenarioMode        = 8,
	Scene_TutorialMovie            = 9,
	Scene_PlayTutorial             = 10,
	Scene_Lobby                    = 11,
	Scene_End                      = 12,
	Scene_MAX                      = 13
};


// Enum BravoHotelGame.ELoginFlow
enum class ELoginFlow : uint8_t
{
	Flow_Begin                     = 0,
	Flow_Catalogue                 = 1,
	Flow_WaitingTicket             = 2,
	Flow_ServicePlatform           = 3,
	Flow_End                       = 4,
	Flow_MAX                       = 5
};


// Enum BravoHotelGame.ESteamPresenceState
enum class ESteamPresenceState : uint8_t
{
	Online                         = 0,
	Offline                        = 1,
	Away                           = 2,
	ExtendedAway                   = 3,
	DoNotDisturb                   = 4,
	Chat                           = 5,
	ESteamPresenceState_MAX        = 6
};


// Enum BravoHotelGame.EVehicleWheelType
enum class EVehicleWheelType : uint8_t
{
	VWT_Ground                     = 0,
	VWT_Water                      = 1,
	VWT_Wrecked                    = 2,
	_COUNT_                        = 3,
	EVehicleWheelType_MAX          = 4
};


// Enum BravoHotelGame.EOcclusionMethod
enum class EOcclusionMethod : uint8_t
{
	Adaptive                       = 0,
	Absolute                       = 1,
	Legacy                         = 2,
	EOcclusionMethod_MAX           = 3
};


// Enum BravoHotelGame.EBoxStateType
enum class EBoxStateType : uint8_t
{
	None                           = 0,
	Show                           = 1,
	Opened                         = 2,
	Closed                         = 3,
	Hide                           = 4,
	EBoxStateType_MAX              = 5
};


// Enum BravoHotelGame.EAssignReason
enum class EAssignReason : uint8_t
{
	None                           = 0,
	WithTeam                       = 1,
	MinMax                         = 2,
	InMax                          = 3,
	All                            = 4,
	EAssignReason_MAX              = 5
};


// Enum BravoHotelGame.EPersonalSupplyBoxState
enum class EPersonalSupplyBoxState : uint8_t
{
	None                           = 0,
	Unassigned                     = 1,
	Assigned                       = 2,
	Opened                         = 3,
	TakeSome                       = 4,
	TakeItAll                      = 5,
	EPersonalSupplyBoxState_MAX    = 6
};


// Enum BravoHotelGame.EBuffSourceType
enum class EBuffSourceType : uint8_t
{
	None                           = 0,
	Ultimate                       = 1,
	Perk                           = 2,
	ClassBuff                      = 3,
	PerkLevelUp                    = 4,
	EquipmentOption                = 5,
	ItemEquipBuff                  = 6,
	ItemUseBuff                    = 7,
	NewbieBuff                     = 8,
	EBuffSourceType_MAX            = 9
};


// Enum BravoHotelGame.ECharacterClassFlag
enum class ECharacterClassFlag : uint8_t
{
	CCF_None                       = 0,
	CCF_Novice                     = 1,
	CCF_Shooter                    = 2,
	CCF_Survivor                   = 3,
	CCF_Assault                    = 4,
	CCF_Medic                      = 5,
	CCF_Scout                      = 6,
	CCF_Demolition                 = 7,
	CCF_SuperRookie                = 8,
	CCF_All                        = 9,
	CCF_MAX                        = 10
};


// Enum BravoHotelGame.ECharacterMovmentStateType
enum class ECharacterMovmentStateType : uint8_t
{
	CMST_None                      = 0,
	CMST_ProneWalk                 = 1,
	CMST_ProneRun                  = 2,
	CMST_ProneSprint               = 3,
	CMST_CrouchWalk                = 4,
	CMST_CrouchRun                 = 5,
	CMST_CrouchSprint              = 6,
	CMST_StandWalk                 = 7,
	CMST_StandRun                  = 8,
	CMST_StandSprint               = 9,
	CMST_Moving                    = 10,
	CMST_Jump                      = 11,
	CMST_Swim                      = 12,
	CMST_Using                     = 13,
	CMST_Reviving                  = 14,
	CMST_Resuscitating             = 15,
	CMST_Vehicle                   = 16,
	CMST_Reload                    = 17,
	CMST_FullAttachment            = 18,
	CMST_Firing                    = 19,
	CMST_LeftLean                  = 20,
	CMST_RightLean                 = 21,
	CMST_KnockOut                  = 22,
	CMST_HeadBanging               = 23,
	CMST_Burning                   = 24,
	CMST_SiegeMode                 = 25,
	CMST_MAX                       = 26
};


// Enum BravoHotelGame.EBuffTargetType
enum class EBuffTargetType : uint8_t
{
	BTT_Character                  = 0,
	BTT_Vehicle                    = 1,
	BTT_Weapon                     = 2,
	BTT_MAX                        = 3
};


// Enum BravoHotelGame.EAbilityCombineType
enum class EAbilityCombineType : uint8_t
{
	ACT_None                       = 0,
	ACT_Plus                       = 1,
	ACT_Multiply                   = 2,
	ACT_PercentPluse               = 3,
	ACT_PercentMultiply            = 4,
	ACT_PercentMinusMultiply       = 5,
	ACT_Max                        = 6
};


// Enum BravoHotelGame.ESoundCondition
enum class ESoundCondition : uint8_t
{
	SC_Local                       = 0,
	SC_WeaponModel                 = 1,
	SC_Water                       = 2,
	SC_WeaponADS                   = 3,
	SC_FoleyType                   = 4,
	SC_BulletType                  = 5,
	SC_VehicleImpactType           = 6,
	SC_VehicleImpulse              = 7,
	SC_DamageType                  = 8,
	SC_DamageAmount                = 9,
	SC_AmbienceType                = 10,
	SC_AmbienceSpace               = 11,
	SC_Surface                     = 12,
	SC_WeaponSilencer              = 13,
	SC_CharacterState              = 14,
	SC_WeaponFireRate              = 15,
	SC_FootstepType                = 16,
	SC_BushLoudness                = 17,
	SC_CharacterType               = 18,
	SC_ActSilently                 = 19,
	SC_MysterySlate                = 20,
	SC_EnergyBar                   = 21,
	SC_MAX                         = 22
};


// Enum BravoHotelGame.EAppAudioState
enum class EAppAudioState : uint8_t
{
	Normal                         = 0,
	Cinematic                      = 1,
	Loading                        = 2,
	Menu                           = 3,
	Background                     = 4,
	Tutorial                       = 5,
	EAppAudioState_MAX             = 6
};


// Enum BravoHotelGame.EAudioEventLoadingState
enum class EAudioEventLoadingState : uint8_t
{
	Unloaded                       = 0,
	LoadingAsset                   = 1,
	AssetLoaded                    = 2,
	LoadingData                    = 3,
	FullyLoaded                    = 4,
	EAudioEventLoadingState_MAX    = 5
};


// Enum BravoHotelGame.EIndoorConditionTargets
enum class EIndoorConditionTargets : uint8_t
{
	Character                      = 0,
	Weapon                         = 1,
	All                            = 2,
	EIndoorConditionTargets_MAX    = 3
};


// Enum BravoHotelGame.EAISituation
enum class EAISituation : uint8_t
{
	AS_NONE                        = 0,
	AS_COVER                       = 1,
	AS_RETREAT                     = 2,
	AS_COMBAT                      = 3,
	AS_CHASE                       = 4,
	AS_MAX                         = 5
};


// Enum BravoHotelGame.ESkillConditionFlag
enum class ESkillConditionFlag : uint8_t
{
	Equal                          = 0,
	Less                           = 1,
	Greater                        = 2,
	ESkillConditionFlag_MAX        = 3
};


// Enum BravoHotelGame.EAISkillConditionType
enum class EAISkillConditionType : uint8_t
{
	ASC_None                       = 0,
	ASC_MyHealth                   = 1,
	ASC_TargetHealth               = 2,
	ASC_Difficulty                 = 3,
	ASC_Distance                   = 4,
	ASC_NumOfHitted                = 5,
	ASC_MAX                        = 6
};


// Enum BravoHotelGame.ECrosshairPosition
enum class ECrosshairPosition : uint8_t
{
	CP_Left                        = 0,
	CP_Top                         = 1,
	CP_Right                       = 2,
	CP_Bottom                      = 3,
	CP_Center                      = 4,
	__COUNT__                      = 5,
	ECrosshairPosition_MAX         = 6
};


// Enum BravoHotelGame.EContentsType
enum class EContentsType : uint8_t
{
	ECT_None                       = 0,
	ECT_GameInfo                   = 1,
	ECT_CharacterInfo              = 2,
	ECT_CharacterWeaponInfo        = 3,
	ECT_Matching_RP_Info           = 4,
	ECT_TakeDamaged_Info           = 5,
	ECT_Disconnected_Info          = 6,
	ECT_KnockDowned_Info           = 7,
	ECT_Died_Info                  = 8,
	ECT_SupplyBox_Spawn            = 9,
	ECT_BlueZone_Info              = 10,
	ECT_Transport_Info             = 11,
	ECT_Redzone_Info               = 12,
	ECT_Vehicle_Spawn_Info         = 13,
	ECT_Item_Spawn_Info            = 14,
	ECT_LogAbusing                 = 15,
	ECT_LogKickedUsers             = 16,
	ECT_LogPlayerBehavior          = 17,
	ECT_MAX                        = 18
};


// Enum BravoHotelGame.EReportIndex
enum class EReportIndex : uint8_t
{
	RI_None                        = 0,
	RI_ImproperName                = 1,
	RI_CheatProgram                = 2,
	RI_DisruptionGame              = 3,
	RI_AbnormalBehavior            = 4,
	RI_MAX                         = 5
};


// Enum BravoHotelGame.ERecipeSearchType
enum class ERecipeSearchType : uint8_t
{
	RST_None                       = 0,
	RST_Auto                       = 1,
	RST_Select                     = 2,
	RST_MAX                        = 3
};


// Enum BravoHotelGame.EItemLogType
enum class EItemLogType : uint8_t
{
	None                           = 0,
	Division                       = 1,
	TrySpawn                       = 2,
	Spawned                        = 3,
	Gain                           = 4,
	RateDivision                   = 5,
	RateDelete                     = 6,
	Max                            = 7
};


// Enum BravoHotelGame.EDataItemType
enum class EDataItemType : uint8_t
{
	DIT_None                       = 0,
	DIT_Book                       = 1,
	DIT_Booster                    = 2,
	DIT_Medical                    = 3,
	DIT_MAX                        = 4
};


// Enum BravoHotelGame.EClientGameContentsType
enum class EClientGameContentsType : uint8_t
{
	CGCT_None                      = 0,
	CGCT_Change_Class              = 1,
	CGCT_Weapon_Equip              = 2,
	CGCT_Item_Pickup               = 3,
	CGCT_Exchange_Parts            = 4,
	CGCT_Weapon_UnEquip            = 5,
	CGCT_Item_Drop                 = 6,
	CGCT_Recovery_Item_Use         = 7,
	CGCT_EnergyBar_Item_Use        = 8,
	CGCT_Recipe_Item_Search        = 9,
	CGCT_Recipe_Item_Combine       = 10,
	CGCT_Player_LevelUp            = 11,
	CGCT_SupplyBox_Open            = 12,
	CGCT_SupplyBox_Change          = 13,
	CGCT_Hited_Player              = 14,
	CGCT_Hit_Player                = 15,
	CGCT_KnockDowned_Player        = 16,
	CGCT_KnockDown_Player          = 17,
	CGCT_Death_Player              = 18,
	CGCT_Kill_Player               = 19,
	CGCT_Revival_Player            = 20,
	CGCT_GoldenTime_Start_Player   = 21,
	CGCT_GoldenTime_Revival_Player = 22,
	CGCT_Active_Skill              = 23,
	CGCT_Vehicle_Board_Info        = 24,
	CGCT_Vehicle_Alight_Info       = 25,
	CGCT_Vehicle_Hit_Player        = 26,
	CGCT_Vehicle_Destroy_Player    = 27,
	CGCT_CharacterControl_Info     = 28,
	CGCT_Throwable_Use             = 29,
	CGCT_Report_Illegal_Users      = 30,
	CGCT_Game_Start                = 31,
	CGCT_Game_Exit                 = 32,
	CGCT_Game_Escape               = 33,
	CGCT_Game_LiveTime             = 34,
	CGCT_Game_Network              = 35,
	CGCT_Player_GameStarted        = 36,
	CGCT_ExitProcess_InGame        = 37,
	CGCT_Game_EarlyTechReport      = 38,
	CGCT_Game_TechReport           = 39,
	CGCT_Game_PhaseTechReport      = 40,
	CGCT_Game_PackageLoadingFailure = 41,
	CGCT_Game_AimPattern           = 42,
	CGCT_Game_PredictiveAim        = 43,
	CGCT_MAX                       = 44
};


// Enum BravoHotelGame.EEventTypeClientGameStateData
enum class EEventTypeClientGameStateData : uint8_t
{
	None                           = 0,
	Game_Start                     = 1,
	Game_Exit                      = 2,
	Game_Escape                    = 3,
	Game_LiveTime                  = 4,
	Max                            = 5
};


// Enum BravoHotelGame.EEventTypeClientGameClickData
enum class EEventTypeClientGameClickData : uint8_t
{
	None                           = 0,
	ButtonClick                    = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientGameWeaponData
enum class EEventTypeClientGameWeaponData : uint8_t
{
	None                           = 0,
	Armed                          = 1,
	Unarmed                        = 2,
	Reload                         = 3,
	Max                            = 4
};


// Enum BravoHotelGame.EEventTypeClientGameInventoryData
enum class EEventTypeClientGameInventoryData : uint8_t
{
	None                           = 0,
	Open                           = 1,
	Close                          = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameVehicleData
enum class EEventTypeClientGameVehicleData : uint8_t
{
	None                           = 0,
	Vehicle_Board_Info             = 1,
	Vehicle_Alight_Info            = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameRevivalData
enum class EEventTypeClientGameRevivalData : uint8_t
{
	None                           = 0,
	Revival_Player                 = 1,
	GoldenTime_Revival_Player      = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameDiedData
enum class EEventTypeClientGameDiedData : uint8_t
{
	None                           = 0,
	Death_Player                   = 1,
	Kill_Player                    = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameKnockDownedData
enum class EEventTypeClientGameKnockDownedData : uint8_t
{
	None                           = 0,
	KnockDowned_Player             = 1,
	KnockDown_Player               = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameBattleData
enum class EEventTypeClientGameBattleData : uint8_t
{
	None                           = 0,
	Hited_Player                   = 1,
	Hit_Player                     = 2,
	Vehicle_Hit_Player             = 3,
	Vehicle_Destroy_Player         = 4,
	GoldenTime_Start_Player        = 5,
	Max                            = 6
};


// Enum BravoHotelGame.EEventTypeClientGameThrowableData
enum class EEventTypeClientGameThrowableData : uint8_t
{
	None                           = 0,
	Throwable_Use                  = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientGameItemSearchData
enum class EEventTypeClientGameItemSearchData : uint8_t
{
	None                           = 0,
	Recipe_Item_Search             = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientGameItemData
enum class EEventTypeClientGameItemData : uint8_t
{
	None                           = 0,
	Weapon_Equip                   = 1,
	Item_Pickup                    = 2,
	Exchange_Parts                 = 3,
	Weapon_UnEquip                 = 4,
	Item_Drop                      = 5,
	Recovery_Item_Use              = 6,
	EnergyBar_Item_Use             = 7,
	Recipe_Item_Combine            = 8,
	Item_Use                       = 9,
	Max                            = 10
};


// Enum BravoHotelGame.EEventTypeClientGameSkillData
enum class EEventTypeClientGameSkillData : uint8_t
{
	None                           = 0,
	Active_Skill                   = 1,
	Gain_Buff                      = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientGameSupplyBoxData
enum class EEventTypeClientGameSupplyBoxData : uint8_t
{
	None                           = 0,
	SupplyBox_Open                 = 1,
	SupplyBox_Change               = 2,
	SupplyBox_Spawn                = 3,
	Max                            = 4
};


// Enum BravoHotelGame.EEventTypeWorldItemData
enum class EEventTypeWorldItemData : uint8_t
{
	None                           = 0,
	Spawned                        = 1,
	Picked                         = 2,
	VehicleSpawned                 = 3,
	Max                            = 4
};


// Enum BravoHotelGame.EEventTypeUseItemData
enum class EEventTypeUseItemData : uint8_t
{
	None                           = 0,
	Heal                           = 1,
	Boost                          = 2,
	SkillBook                      = 3,
	Max                            = 4
};


// Enum BravoHotelGame.EEventTypeSupplyData
enum class EEventTypeSupplyData : uint8_t
{
	None                           = 0,
	Created                        = 1,
	Opend                          = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeTransportData
enum class EEventTypeTransportData : uint8_t
{
	None                           = 0,
	Created                        = 1,
	SpawnFirst                     = 2,
	SpawnSecond                    = 3,
	Destroyed                      = 4,
	Max                            = 5
};


// Enum BravoHotelGame.EEventTypeRedZoneData
enum class EEventTypeRedZoneData : uint8_t
{
	None                           = 0,
	Created                        = 1,
	Destroyed                      = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeBlueZoneData
enum class EEventTypeBlueZoneData : uint8_t
{
	None                           = 0,
	Created                        = 1,
	SurvivalCircleLulled           = 2,
	SurvivalCircleShrinking        = 3,
	Delay                          = 4,
	Max                            = 5
};


// Enum BravoHotelGame.EEventTypeBattleRoyalData
enum class EEventTypeBattleRoyalData : uint8_t
{
	None                           = 0,
	Ready                          = 1,
	GameStart                      = 2,
	AircraftStart                  = 3,
	AircraftEnableDescent          = 4,
	AircraftEnd                    = 5,
	MatchEnd                       = 6,
	Max                            = 7
};


// Enum BravoHotelGame.EEventTypeCharacterFlyingData
enum class EEventTypeCharacterFlyingData : uint8_t
{
	None                           = 0,
	Diving                         = 1,
	Parachute                      = 2,
	Landing                        = 3,
	Max                            = 4
};


// Enum BravoHotelGame.EEventTypeCharacterData
enum class EEventTypeCharacterData : uint8_t
{
	None                           = 0,
	Created                        = 1,
	SelfKill                       = 2,
	TeamKill                       = 3,
	Kill                           = 4,
	KillDistance                   = 5,
	KillNotByWeapon                = 6,
	AIKillNotByWeapon              = 7,
	HeadShotKill                   = 8,
	Death                          = 9,
	KnockedOut                     = 10,
	BeKnockedOut                   = 11,
	KnockedOutHeadShot             = 12,
	BeKnockedOutHeadShot           = 13,
	HeadShotCount                  = 14,
	BeHeadShoted                   = 15,
	BeRecoveryed                   = 16,
	Recovery                       = 17,
	BeResuscitated                 = 18,
	Resuscitate                    = 19,
	Damaged                        = 20,
	BeDamaged                      = 21,
	DamagedByWeapon                = 22,
	DamagedNotByWeapon             = 23,
	ShotCount                      = 24,
	HitShotCount                   = 25,
	UsingBook                      = 26,
	UsingBooster                   = 27,
	UsingMedical                   = 28,
	HealAmount                     = 29,
	GainRP                         = 30,
	TeamAlive                      = 31,
	FinalRank                      = 32,
	LoserScore                     = 33,
	CleanScore                     = 34,
	AssistCount                    = 35,
	LevelUp                        = 36,
	ClassChanged                   = 37,
	GetUltimate                    = 38,
	LastState                      = 39,
	VehicleIExplosion              = 40,
	DestroyTire                    = 41,
	VehicleDamage                  = 42,
	LoadKill                       = 43,
	OpenPersonalSupplyBox          = 44,
	WeaponDurability               = 45,
	OpenAirDropBox                 = 46,
	DestroyHelicopter              = 47,
	TotalAirWalkDistance           = 48,
	MaxAirWalkDistance             = 49,
	Reconnected                    = 50,
	Retired                        = 51,
	AccountGoldGameStart           = 52,
	AccountGoldGameEnd             = 53,
	FarmingGold                    = 54,
	RandomBonusGold                = 55,
	RemainCoinGold                 = 56,
	PaidCoinGold                   = 57,
	PaidAccountGold                = 58,
	ClassChangedGold               = 59,
	SupplyboxOpenedGold            = 60,
	RequestResuscitatedGold        = 61,
	ResuscitatedGold               = 62,
	ClassChangedRandomTicket       = 63,
	ClassChangedTicket             = 64,
	SupplyboxOpenedTicket          = 65,
	RequestResuscitatedTicket      = 66,
	ResuscitatedTicket             = 67,
	WeaponCombine                  = 68,
	WearableCombine                = 69,
	MaterialCombine                = 70,
	TeamSeedPoint_Kill             = 71,
	TeamSeedPoint_Survival         = 72,
	TeamSeedPoint_Bonus            = 73,
	TeamSeedPoint_FirstWin         = 74,
	Max                            = 75
};


// Enum BravoHotelGame.EEventTypeGameData
enum class EEventTypeGameData : uint8_t
{
	None                           = 0,
	GameStart                      = 1,
	Ready                          = 2,
	MatchEnd                       = 3,
	Max                            = 4
};


// Enum BravoHotelGame.ECharacterCantReason
enum class ECharacterCantReason : uint8_t
{
	ECCR_None                      = 0,
	ECCR_FreeLook                  = 1,
	ECCR_Kicking                   = 2,
	ECCR_LockedInventory           = 3,
	ECCR_MeleeAttack               = 4,
	ECCR_VehicleDriver             = 5,
	ECCR_VehiclePassengerAndHipShot = 6,
	ECCR_ConditionCantAttack       = 7,
	ECCR_Swimming                  = 8,
	ECCR_PlayingEquipAnim          = 9,
	ECCR_WantsToFire               = 10,
	ECCR_NoMutableUpdate           = 11,
	ECCR_InvalidWeapon             = 12,
	ECCR_WeaponCantAOS             = 13,
	ECCR_InvalidRangedWeapon       = 14,
	ECCR_RangedWeaponCantADS       = 15,
	ECCR_PlayingLandingAnim        = 16,
	ECCR_ShowPlayerHUD             = 17,
	ECCR_MAX                       = 18
};


// Enum BravoHotelGame.ECharacterCantType
enum class ECharacterCantType : uint8_t
{
	ECCT_CantFire                  = 0,
	ECCT_CantReload                = 1,
	ECCT_CantBoltAction            = 2,
	ECCT_CantADS                   = 3,
	ECCT_CantAOS                   = 4,
	ECCT_MAX                       = 5
};


// Enum BravoHotelGame.EBlackmarketGearSortType
enum class EBlackmarketGearSortType : uint8_t
{
	EGEARSORT_ITEM_NAME            = 0,
	EGEARSORT_TYPE                 = 1,
	EGEARSORT_ARMOR                = 2,
	EGEARSORT_CAPACITY             = 3,
	EGEARSORT_DECREASE_RELOAD_TIME = 4,
	EGEARSORT_MAX                  = 5
};


// Enum BravoHotelGame.EBlackmarketCustomSortType
enum class EBlackmarketCustomSortType : uint8_t
{
	ECUSTOMSORT_ITEM_NAME          = 0,
	ECUSTOMSORT_ITEM_MAX           = 1
};


// Enum BravoHotelGame.EBlackmarketConsumableSortType
enum class EBlackmarketConsumableSortType : uint8_t
{
	ECONSUMABLESORT_ITEM_NAME      = 0,
	ECONSUMABLESORT_WEIGHT         = 1,
	ECONSUMABLESORT_HEALTH         = 2,
	ECONSUMABLESORT_ADRENALINE     = 3,
	ECONSUMABLESORT_FUEL           = 4,
	ECONSUMABLESORT_MAX            = 5
};


// Enum BravoHotelGame.EBlackmarketWearableSortType
enum class EBlackmarketWearableSortType : uint8_t
{
	EWEARABLESORT_ITEM_NAME        = 0,
	EWEARABLESORT_TYPE             = 1,
	EWEARABLESORT_ARMOR            = 2,
	EWEARABLESORT_CAPACITY         = 3,
	EWEARABLESORT_DECREASE_RELOAD_TIME = 4,
	EWEARABLESORT_MAX              = 5
};


// Enum BravoHotelGame.EBlackmarketAttachmentSortType
enum class EBlackmarketAttachmentSortType : uint8_t
{
	EATTACHMENTSORT_ITEM_NAME      = 0,
	EATTACHMENTSORT_TYPE           = 1,
	EATTACHMENTSORT_WEIGHT         = 2,
	EATTACHMENTSORT_DECREASE_RELOAD_TIME = 3,
	EATTACHMENTSORT_VERTICAL_REDUCE = 4,
	EATTACHMENTSORT_HORIZENTAL_REDUCE = 5,
	EATTACHMENTSORT_INCREASE_RATE_OF_FIRE = 6,
	EATTACHMENTSORT_BURST_SPEED    = 7,
	EATTACHMENTSORT_MAX            = 8
};


// Enum BravoHotelGame.EBlackmarketAmmoSortType
enum class EBlackmarketAmmoSortType : uint8_t
{
	EAMMOSORT_ITEM_NAME            = 0,
	EAMMOSORT_WEIGHT               = 1,
	EAMMOSORT_COUNT                = 2,
	EAMMOSORT_TOTALWEIGHT          = 3,
	EAMMOSORT_MAX                  = 4
};


// Enum BravoHotelGame.EBlackmarketWeaponSortType
enum class EBlackmarketWeaponSortType : uint8_t
{
	EWEAPONSORT_ITEM_NAME          = 0,
	EWEAPONSORT_AMMO               = 1,
	EWEAPONSORT_DAMAGE             = 2,
	EWEAPONSORT_FIRERATE           = 3,
	EWEAPONSORT_MAGSIZE            = 4,
	EWEAPONSORT_FIREMODE           = 5,
	EWEAPONSORT_RELOADTIME         = 6,
	EWEAPONSORT_PROJECTILEVELOCITY = 7,
	EWEAPONSORT_MOVESPEED          = 8,
	EWEAPONSORT_WEIGHT             = 9,
	EWEAPONSORT_MAX                = 10
};


// Enum BravoHotelGame.EBlackmarketTabType
enum class EBlackmarketTabType : uint8_t
{
	ETAB_WEAPON                    = 0,
	ETAB_AMMO                      = 1,
	ETAB_ATTACHMENT                = 2,
	ETAB_WEARABLE                  = 3,
	ETAB_CONSUMABLE                = 4,
	ETAB_CUSTOM                    = 5,
	ETAB_VEHICLE                   = 6,
	ETAB_GEAR                      = 7,
	ETAB_PERK                      = 8,
	ETAB_PRESET                    = 9,
	ETAB_MAX                       = 10
};


// Enum BravoHotelGame.EDoorSoundType
enum class EDoorSoundType : uint8_t
{
	DST_HingedWood                 = 0,
	DST_HingedWoodBig              = 1,
	DST_HingedGlass                = 2,
	DST_HingedMetal                = 3,
	DST_SlideWood                  = 4,
	DST_SlideGlass                 = 5,
	DST_SlideMetal                 = 6,
	DST_MAX                        = 7
};


// Enum BravoHotelGame.EElevatorStateType
enum class EElevatorStateType : uint8_t
{
	Moved                          = 0,
	Moving                         = 1,
	EElevatorStateType_MAX         = 2
};


// Enum BravoHotelGame.EElevatorDoorStateType
enum class EElevatorDoorStateType : uint8_t
{
	None                           = 0,
	OpeningDoor                    = 1,
	OpenDoorCompleted              = 2,
	ClosingDoor                    = 3,
	CloseDoorCompleted             = 4,
	EElevatorDoorStateType_MAX     = 5
};


// Enum BravoHotelGame.EBHErrorCode
enum class EBHErrorCode : uint8_t
{
	None                           = 0,
	Anticheat_Block_Catalogue      = 1,
	Anticheat_Kick_Catalogue       = 2,
	Anticheat_Kick_Admin           = 3,
	Anticheat_Kick_Maintenance     = 4,
	Anticheat_Kick_Admin_Last      = 5,
	Anticheat_Kick_DS              = 6,
	Anticheat_Kick_NetVoilation    = 7,
	Anticheat_Kick_Frequent_Packets = 8,
	Anticheat_Kick_Invalid_Pkt_Sequence = 9,
	Anticheat_Kick_Malformed_Packet = 10,
	Anticheat_Kick_Invalid_Data    = 11,
	Anticheat_BE_Restart_NotProperlyRuns = 12,
	Anticheat_BE_Restart_NeedsUpdate = 13,
	Anticheat_BE_Restart_Begin     = 14,
	Anticheat_BE_Kick_Unknown      = 15,
	Anticheat_BE_Kick_ClientNotResponding = 16,
	Anticheat_BE_Kick_QueryTimeout = 17,
	Anticheat_BE_Kick_GameRestartRequired = 18,
	Anticheat_BE_Kick_BadServiceVersion = 19,
	Anticheat_BE_Kick_DisallowedProgram = 20,
	Anticheat_BE_Kick_CorruptedMemory = 21,
	Anticheat_BE_Kick_CorruptedData = 22,
	Anticheat_BE_Kick_WinAPIFailure = 23,
	Anticheat_BE_Kick_GlobalBan    = 24,
	Anticheat_BE_Kick_Begin        = 25,
	Anticheat_BE_Kick_End          = 26,
	Anticheat_BE_Kick_Admin        = 27,
	Anticheat_Integrated_Kick_OP   = 28,
	Anticheat_Integrated_Kick_CV   = 29,
	Anticheat_Integrated_Kick_AW   = 30,
	Anticheat_Integrated_Kick_BE   = 31,
	Anticheat_Integrated_Kick_FP   = 32,
	Anticheat_Integrated_Block_CV  = 33,
	Anticheat_Integrated_Block_BE  = 34,
	Anticheat_Integrated_Block_OP_AB = 35,
	Anticheat_Integrated_Block_OP_HB = 36,
	Anticheat_Integrated_Block_OP_IB = 37,
	Anticheat_Integrated_Block_OP_BB = 38,
	InvalidName                    = 39,
	ConnectionFailed               = 40,
	NetDriverAlreadyExists         = 41,
	NetDriverCreateFailure         = 42,
	NetDriverListenFailure         = 43,
	ConnectionLost                 = 44,
	ConnectionTimeout              = 45,
	FailureReceived                = 46,
	OutdatedClient                 = 47,
	OutdatedServer                 = 48,
	PendingConnectionFailure       = 49,
	InvalidMatchID                 = 50,
	NetGuidMismatch                = 51,
	NetChecksumMismatch            = 52,
	ServerConnectionLost           = 53,
	SecuritySeedMismatch           = 54,
	PreLoginFailure                = 55,
	JoinFailure                    = 56,
	NetworkFailure_Begin           = 57,
	TournamentQualifyingEnd        = 58,
	INTERNAL                       = 59,
	UNKNOWN                        = 60,
	SERVER_IS_NOT_ON_SERVICE       = 61,
	ERROR_THROWN                   = 62,
	INVALID_JSON_PARAM             = 63,
	NOT_AUTHORIZED                 = 64,
	GAME_SERVER_IS_CURRENTLY_UNDER_MAINTENANCE = 65,
	SERVER_INSPECT_INFO_SETTING_FAIL = 66,
	YOUR_IP_IS_BLACK               = 67,
	JSON_BODY_MISSING_OR_FORMAT_INVALID = 68,
	JSON_BODY_VALUE_INVALID        = 69,
	HTTP_PATH_PARAM_TYPE_INVALID   = 70,
	HTTP_QUERY_PARAM_TYPE_INVALID  = 71,
	MYSQL_UNEXPECTED_EMPTY_RESULT  = 72,
	SYLLA_UNEXPECTED_EMPTY_RESULT  = 73,
	CLIENT_VERSION_HEADER_MISSING  = 74,
	CLIENT_VERSION_NUMBER_INVALID  = 75,
	CLIENT_VERSION_EXPIRED         = 76,
	SERVER_IS_BEGING_CHECKED       = 77,
	WAIT_GETTING_WAITINGNO_IS_FAILED = 78,
	WAIT_UPDATING_LOGININFLOW_IS_FAILED = 79,
	WAIT_SAVING_ENTRY_CODE_IS_FAILED = 80,
	WAIT_INVALID_WAITING_TICKET    = 81,
	AUTH_LOGIN_FAILED              = 82,
	AUTH_LOGIN_REQUIRED            = 83,
	AUTH_ADMIN_ONLY                = 84,
	AUTH_BLOCKED                   = 85,
	AUTH_ALREADY_LOGGED_IN         = 86,
	AUTH_ALREADY_REGISTERED        = 87,
	AUTH_COGNITO_CONFIRM_CODE_INVALID = 88,
	AUTH_COGNITO_USER_DELETE_FAIL  = 89,
	AUTH_ONLY_ALLOWED_IF_EXISTS    = 90,
	AUTH_FAILED_TO_CREATE          = 91,
	AUTH_NOT_FOUND                 = 92,
	AUTH_TOKEN_NOT_FOUND_IN_THE_REQUEST = 93,
	AUTH_SUSPICIOUS_CLIENT_IP      = 94,
	AUTH_ACCOUNT_INVALID           = 95,
	AUTH_ACCOUNT_ALREADY_EXISTS    = 96,
	AUTH_LOGINTYPE_IS_NOT_ALLOWED  = 97,
	AUTH_AUTHTYPE_IS_INVALID       = 98,
	AUTH_GAME_CENTER_PUBLIC_KEY_URL_MISSING = 99,
	AUTH_GAME_CENTER_TIMESTAMP_MISSING = 100,
	AUTH_GAME_CENTER_SIGNATURE_MISSING = 101,
	AUTH_GAME_CENTER_SALT_MISSING  = 102,
	AUTH_GAME_CENTER_PLAYER_ID_MISSING = 103,
	AUTH_GAME_CENTER_BUNDLE_ID_MISSING = 104,
	AUTH_INVALID_ENTRY_CODE        = 105,
	AUTH_GUEST_ID_MISSING          = 106,
	AUTH_GUEST_ID_TOO_LONG         = 107,
	AUTH_GUEST_ID_INVALID          = 108,
	AUTH_LOGIN_FAILED_BY_USING_VPN = 109,
	AUTH_LOGIN_FAILED_BY_INVALID_GEEGEE_PROJECT_ID = 110,
	AUTH_LOGIN_FAILED_BY_GEEGEE_OTT_EXPIRED = 111,
	AUTH_LOGIN_FAILED_BY_STEAM_INVALID_TICKET = 112,
	GEEGEE_INVALID_TWITCH_TOKEN    = 113,
	GEEGEE_RPOJECT_ID_NOT_FOUND    = 114,
	GEEGEE_ID_IS_INVALID_OR_EMPTY  = 115,
	GEEGEE_TWITCH_TOKEN_FAILED     = 116,
	TWITCH_SET_ENABLE_FAILED       = 117,
	TWITCH_SET_EVENTSUB_FAILED     = 118,
	TWITCH_SET_VERIFYSUB_FAILED    = 119,
	TWITCH_CREATE_SUBSCRIPTIONS_FAILED = 120,
	TWITCH_DELETE_SUBSCRIPTIONS_FAILED = 121,
	BLOCKED_WITH_OPTION_BY_GUSS    = 122,
	BLOCKED_WITH_POLICY_BY_GUSS    = 123,
	USER_NOT_HAVE_GUSS_AUTH        = 124,
	GUSS_SESSION_NOT_MATCH         = 125,
	VERSION_LIST_JSON_INVALID      = 126,
	VERSION_LIST_REDIS_DATA_MISSING = 127,
	PLAYER_ALREADY_CREATED         = 128,
	PLAYER_NAME_ALREADY_EXISTS     = 129,
	PLAYER_NAME_NOT_FOUND          = 130,
	PLAYER_NAME_INVALID            = 131,
	PLAYER_NOT_FOUND               = 132,
	PLAYER_NOT_ENOUGH_ENERGY       = 133,
	PLAYER_INTRO_FINISH_FAILED     = 134,
	PLAYER_NOT_ENOUGH_CEL          = 135,
	PLAYER_CREATING_IS_INCOMPLETE  = 136,
	PLAYER_NAME_INVALID_CHARACTER  = 137,
	PLAYER_NAME_INVALID_LENGTH     = 138,
	PLAYER_NAME_FORBIDDEN_OR_RESERVED = 139,
	PLAYER_NAME_FILTERING_NOT_READY = 140,
	PLAYER_NOT_STEAM_USER          = 141,
	PLAYER_NOT_ONLINE              = 142,
	SUSPECTER_NAME_NOT_FOUND       = 143,
	DS_NOT_FOUND                   = 144,
	DS_PING_FAILED                 = 145,
	DS_PING_INVALID_PARAMS         = 146,
	DS_IS_END_STATE                = 147,
	DS_REGISTER_INVALID_CQR        = 148,
	DS_CALLED_API_WITH_INVALID_PARAMS = 149,
	LOGIN_AUTH_TOKEN_PARAM_NOT_FOUND = 150,
	LOGIN_AUTH_TOKEN_VERIFY_FAILED = 151,
	LOGIN_REGISTER_WEBSOCKET_FAIL  = 152,
	LOGIN_SESSION_ID_NOT_FOUND     = 153,
	LOGIN_DUPLICATED_LOGIN         = 154,
	LOGIN_ALREADY_LOGINED          = 155,
	PARTY_INVALID_PARAM_UID        = 156,
	PARTY_YOU_CANNOT_INVITE_YOURSELF = 157,
	PARTY_IS_FULL                  = 158,
	PARTY_YOU_ARE_NOT_BOSS         = 159,
	PARTY_TARGET_USER_NOT_FOUND    = 160,
	PARTY_INVITE_INTERNAL_ERROR    = 161,
	PARTY_INVITE_TICKET_IS_INVALID_OR_EXPIRED = 162,
	PARTY_INVITER_NOT_FOUND        = 163,
	PARTY_ACCEPT_INTERNAL_ERROR    = 164,
	PARTY_INVITER_LEAVED_THE_PARTY = 165,
	PARTY_INVITER_IS_NOT_BOSS      = 166,
	PARTY_DUPLICATE_JOIN           = 167,
	PARTY_NOT_JOINED_ANY_PARTY     = 168,
	PARTY_CANNOT_LEAVE_SINGLE_PARTY = 169,
	PARTY_LEAVE_OPERATION_FAILED   = 170,
	PARTY_INVITE_ALREADY_PARTY_MEMBER = 171,
	PARTY_INVITE_ALREADY_IS_PLAYING = 172,
	PARTY_INVITE_YOU_ARE_NOT_IN_LOBBY = 173,
	PARTY_INVITE_ALREADY_JOINED_ANOTHER_PARTY = 174,
	PARTY_INVITE_CLIENT_STATUS_OFFLINE = 175,
	PARTY_INVITE_USER_DENY_SETTING = 176,
	PARTY_INVITE_USER_ONLY_FOLLOWING_SETTING = 177,
	PARTY_KICK_YOU_ARE_NOT_BOSS    = 178,
	PARTY_KICK_YOU_CANNOT_KICK_YOURSELF = 179,
	PARTY_KICK_TARGET_USER_NOT_FOUND_ON_KICKER = 180,
	PARTY_KICK_TARGET_USER_NOT_FOUND = 181,
	PARTY_KICK_INTERNAL_ERROR      = 182,
	PARTY_ENTRUST_YOU_CANNOT_ENTRUST_YOURSELF = 183,
	PARTY_ENTRUST_YOU_ARE_NOT_BOSS = 184,
	PARTY_ENTRUST_TARGET_USER_NOT_FOUND_ON_ENTRUSTER = 185,
	PARTY_ENTRUST_TARGET_USER_IS_NOT_ONLINE = 186,
	PARTY_CLIENT_STATUS_IS_INVALID = 187,
	MATCH_PARTY_BOSS_LEAVED        = 188,
	MATCH_PARTY_MEMBER_LEAVED      = 189,
	MATCH_REQUEST_INVALID_PARTY_MEMBER_COUNT = 190,
	MATCH_REQUEST_YOU_ARE_NOT_PARTY_BOSS = 191,
	MATCH_INVALID_GAME_MODE        = 192,
	MATCH_REQUEST_ALREADY_BEING_MATCHING = 193,
	MATCH_REGISTER_INTERNAL_ERROR  = 194,
	MATCH_CANCEL_YOU_ARE_NOT_PARTY_BOSS = 195,
	MATCH_CANCEL_THIS_PARTY_IS_NOT_MATCHING_NOW = 196,
	MATCH_UNREGISTER_INTERNAL_ERROR = 197,
	MATCH_REQUEST_INVALID_MODE_VALUE = 198,
	MATCH_REQUEST_ALL_MEMBERS_ARE_NOT_READY = 199,
	MATCH_REQUEST_ALL_MEMBERS_ARE_NOT_ONLINE = 200,
	MATCH_REQUEST_INVALID_HOW      = 201,
	MATCH_REQUEST_INVALID_PERSON   = 202,
	MATCH_REQUEST_INVALID_CQR_GROUP = 203,
	MATCH_CANCEL_IS_TOO_LATE       = 204,
	MATCH_IS_OFF                   = 205,
	MATCH_REQUEST_YOU_ARE_NOT_IN_LOBBY = 206,
	MATCH_MAKING_TAG_NOT_FOUND     = 207,
	MATCH_AUTO_SCALING_METHOD_NOT_FOUND = 208,
	MATCH_MAKING_TAG_NOT_MATCH     = 209,
	MATCH_REQUEST_INVALID_MODE_HIDE = 210,
	MATCH_REQUEST_INVALID_MATCH_MODE = 211,
	MATCH_REQUEST_INVALID_CQR      = 212,
	MATCH_REQUEST_INVALID_PARAM_ROOM_ID = 213,
	MATCH_REQUEST_INVALID_PARAM_TEAMS = 214,
	MATCH_REQUEST_DS_READY_POOL_IS_EMPTY = 215,
	MATCH_REQUEST_THE_ROOM_IS_FULL = 216,
	MATCH_REQUEST_THE_ROOM_IS_PLAYING = 217,
	ROOM_IS_BUSY                   = 218,
	ROOM_IS_FULL                   = 219,
	ROOM_IS_ALREADY_CUSTOMIZING    = 220,
	ROOM_YOU_ARE_NOT_BOSS          = 221,
	ROOM_TARGET_USER_CANNOT_FOUND  = 222,
	ROOM_CREATE_ALREADY_CREATED    = 223,
	ROOM_CREATE_INVALID_PARTY_MEMBER_COUNT = 224,
	ROOM_CREATE_YOU_ARE_NOT_IN_LOBBY = 225,
	ROOM_CREATE_INVALID_PERSON     = 226,
	ROOM_CREATE_INVALID_MODE       = 227,
	ROOM_CREATE_INTERNAL_ERROR     = 228,
	ROOM_JOIN_ALREADY_JOINED       = 229,
	ROOM_JOIN_YOU_ARE_NOT_IN_LOBBY = 230,
	ROOM_JOIN_BROKER_NOT_FOUND     = 231,
	ROOM_JOIN_INTERNAL_ERROR       = 232,
	ROOM_JOIN_PASSWORD_INVALID     = 233,
	ROOM_JOIN_DUPLICATE_JOIN       = 234,
	ROOM_LEAVE_BOSS_CANNOT_LEAVE   = 235,
	ROOM_MOVE_INTERNAL_ERROR       = 236,
	ROOM_MOVE_SLOT_NOT_MEMBER      = 237,
	ROOM_MOVE_SLOT_NOT_SAME_SLOT   = 238,
	ROOM_MOVE_SLOT_NOT_EMPTY_SLOT  = 239,
	ROOM_FORCED_LEAVE_CANNOT_KICK_YOURSELF = 240,
	ROOM_FORCED_LEAVE_INTERNAL_ERROR = 241,
	ROOM_SETTING_BASE_INVALID_PERSON = 242,
	ROOM_SETTING_BASE_INVALID_MODE_VALUE = 243,
	CUSTOM_REQUEST_YOU_ARE_NOT_ROOM_BOSS = 244,
	SHOP_STEAM_MICROTXN_UNEXPECTED_ERROR = 245,
	SHOP_STEAM_MICROTXN_INVALID_ORDERID = 246,
	SHOP_STEAM_MICROTXN_INVALID_STATUS_FOR_REFUND = 247,
	SHOP_STEAM_MICROTXN_NO_PENDING_TXN_FOUND = 248,
	SHOP_STEAM_MICROTXN_INIT_FAILED = 249,
	SHOP_STEAM_MICROTXN_FINALIZE_FAILED = 250,
	SHOP_STEAM_MICROTXN_REFUND_FAILED = 251,
	GACHA_TABLE_NOT_FOUND          = 252,
	GACHA_YOU_ARE_ALREADY_IN_A_ROOM = 253,
	GACHA_YOU_ARE_NOT_IN_A_ROOM    = 254,
	GACHA_ZONE_NOT_EXIST           = 255,
	GACHA_ZONE_IS_CLOSED           = 256,
	GACHA_ROOM_IS_RESET            = 257,
	GACHA_CELLS_IS_EMPTY           = 258,
	GACHA_CELLS_INCLUDES_INVALID_NUMBER = 259,
	GACHA_UNAVAILABLE_PERMANENT_ITEM = 260,
	GACHA_NO_MILEAGE               = 261,
	GACHA_MILEAGE_NOT_ENOUGH       = 262,
	TOURNAMENT_INVALID_PARAMS      = 263,
	TOURNAMENT_NOT_FOUND           = 264,
	TOURNAMENT_USER_ALREADY_REGISTERED = 265,
	TOURNAMENT_INVALID_TEAM_MEMBERS = 266,
	TOURNAMENT_INVALID_TOURNAMENT_ID = 267,
	TOURNAMENT_INVALID_ROUND       = 268,
	TOURNAMENT_ROUND_IS_NOT_OPEN_NOW = 269,
	TOURNAMENT_ROUND_SEED_NOT_FOUND = 270,
	TOURNAMENT_USER_NOT_REGISTERED = 271,
	TOURNAMENT_INVALID_TEAM_ID     = 272,
	TOURNAMENT_PAYMENT_TYPE_NOT_FOUND = 273,
	TOURNAMENT_INVALID_CURRENCY_TYPE = 274,
	TOURNAMENT_LEAGUE_ID_ALREADY_EXISTS = 275,
	TOURNAMENT_LEAGUE_ID_NOT_MATCH = 276,
	TOURNAMENT_LEAGUE_ID_NOT_FOUND = 277,
	TOURNAMENT_YOU_ARE_NOT_LEADER  = 278,
	TOURNAMENT_LEAGUE_INFO_NOT_FOUND = 279,
	TOURNAMENT_INVALID_TARGET_LOCATION = 280,
	TOURNAMENT_WINNER_TEAM_NOT_FOUND = 281,
	TOURNAMENT_INVALID_TEAM_COUNT  = 282,
	TOURNAMENT_PLAYER_NAME_NOT_FOUND = 283,
	TOURNAMENT_INVALID_LEAGUE_INFO = 284,
	TOURNAMENT_ID_MUST_BE_NUMERIC_STRING = 285,
	TOURNAMENT_ID_MUST_BE_GREATER_THAN_DEFAULT_ID = 286,
	TOURNAMENT_CANNOT_DELETE_ALREADY_STARTED = 287,
	TOURNAMENT_CANNOT_CANCEL_ALREADY_STARTED = 288,
	TOURNAMENT_LEAGUE_ALREADY_CANCELED = 289,
	TOURNAMENT_BANNED_USER         = 290,
	PARTY_TOURNAMENT_INVITE_YOU_ARE_NOT_IN_LOBBY = 291,
	PARTY_TOURNAMENT_INVITE_INTERNAL_ERROR = 292,
	PARTY_TOURNAMENT_INVITE_INVALID_ID = 293,
	PARTY_TOURNAMENT_INVITE_INVALID_MODE = 294,
	PARTY_TOURNAMENT_INVITE_INVALID_MEMBER_COUNT = 295,
	PARTY_TOURNAMENT_INVITE_NOT_ENOUGH_RP = 296,
	PARTY_TOURNAMENT_INVITE_ALREADY_IS_PLAYING = 297,
	PARTY_TOURNAMENT_INVITE_INVALID_MEMBER = 298,
	PARTY_TOURNAMENT_INVITE_TICKET_IS_INVALID_OR_EXPIRED = 299,
	PARTY_TOURNAMENT_INVITE_BAN_PLAYER = 300,
	PARTY_TOURNAMENT_INVITE_NOT_MATCH_MATCH_MAKING_TAG = 301,
	PARTY_TOURNAMENT_INVITE_NOT_OPEN_TO_PUBLIC = 302,
	PARTY_TOURNAMENT_INVITE_ALL_MEMBERS_ARE_NOT_READY = 303,
	PARTY_TOURNAMENT_REGISTER_YOU_ARE_NOT_IN_LOBBY = 304,
	PARTY_TOURNAMENT_REGISTER_ALL_MEMBERS_ARE_NOT_ACCEPT = 305,
	PARTY_TOURNAMENT_REGISTER_IS_NOT_OPEN = 306,
	PARTY_TOURNAMENT_REGISTER_INTERNAL_ERROR = 307,
	PARTY_TOURNAMENT_UNREGISTER_USER_NOT_REGISTERED = 308,
	PARTY_TOURNAMENT_UNREGISTER_ALREADY_STARTED = 309,
	PARTY_TOURNAMENT_UNREGISTER_INTERNAL_ERROR = 310,
	INVALID_NUMBER                 = 311,
	INVENTORY_ITEM_NOT_FOUND       = 312,
	INVENTORY_ITEM_USE_SLOT        = 313,
	INVENTORY_NOT_EMPTY_SLOT       = 314,
	EQUIPMENT_NOT_WEARABLE_ITEM    = 315,
	EQUIPMENT_ITEM_NOT_FOUND       = 316,
	EQUIPMENT_SLOT_NOT_FOUND       = 317,
	INVENTORY_NOT_ENOUGH_ITEM      = 318,
	INVENTORY_NOT_ENOUGH_GOLD      = 319,
	INVENTORY_NOT_ENOUGH_CASHPOINT = 320,
	INVENTORY_NOT_FOR_SALE         = 321,
	INVENTORY_NOT_ENOUGH_CURRENCY  = 322,
	INVENTORY_EXCEED_THE_NUMBER_OF_ITEMS = 323,
	INVENTORY_INVALID_CASHPOINT_TYPE = 324,
	CAMPAIGN_ALREADY_CLEAN_CAMPAIGN_JOINED = 325,
	INVALID_EARNED_GOLD            = 326,
	INVALID_CURRENCY_TYPE          = 327,
	INVALID_CURRENCY_COUNT         = 328,
	LOCK_TIMEOUT                   = 329,
	LOCK_NOT_AVAILABLE             = 330,
	LOCK_RELEASE_FAILED            = 331,
	NOT_EXIST_PEDNING_INVITE       = 332,
	FROM_USER_FRIEND_MAX_COUNT     = 333,
	ALREADY_EXIST_FRIEND           = 334,
	TO_USER_FRIEND_MAX_COUNT       = 335,
	TO_USER_PENDING_INVITE_MAX_COUNT = 336,
	FOLLOWING_MAX_COUNT            = 337,
	ALREADY_FOLLOWING              = 338,
	NOT_EXIST_FOLLOWING            = 339,
	FOLLOWING_TARGET_USERID_NULL   = 340,
	FOLLOWING_TARGET_USERID_INVALID = 341,
	UNFOLLOWING_TARGET_USERID_NULL = 342,
	UNFOLLOWING_TARGET_USERID_INVALID = 343,
	FOLLOWING_TARGET_NOT_CREATE_ACCOUNT = 344,
	FOLLOWING_TARGET_NOT_SAME_REGION = 345,
	ALREADY_EXIST_PC               = 346,
	PC_INVALID_CLASS_TYPE          = 347,
	PC_NOT_FOUND                   = 348,
	PC_TABLE_NOT_FOUND             = 349,
	PC_CLASS_TYPE_TABLE_NOT_FOUND  = 350,
	PC_INVALID_APPEARANCE          = 351,
	PC_PRESET_TABLE_NOT_FOUND      = 352,
	PERK_TABLE_NOT_FOUND           = 353,
	PERK_NOT_FOUND                 = 354,
	PERK_CAN_NOT_EQUIP_INVALID_CLASS_TYPE = 355,
	PERK_INVALID_SLOT_TYPE         = 356,
	PERK_NOT_EXIST_IN_SLOT         = 357,
	PERK_EXIST_IN_SLOT             = 358,
	PERK_ALREADY_EXIST_PERK        = 359,
	PERK_NOT_HAVE                  = 360,
	PERK_INVALID_SLOT              = 361,
	PERK_CAN_NOT_EQUIP_INVALID_SLOT = 362,
	PERK_ALREADY_EQUIPPED          = 363,
	PERK_ALREADY_MAX_GRADE         = 364,
	PERK_NOT_EXIST_NEXT_GRADE      = 365,
	PERK_CAN_NOT_UPGRADE_SINCE_EQUIPPED = 366,
	RANDOMPACKAGE_TABLE_NOT_FOUND  = 367,
	RANDOMPACKAGE_NOT_FOUND        = 368,
	WEARITEM_TABLE_NOT_FOUND       = 369,
	WEARITEM_NOT_FOUND             = 370,
	WEARITEM_ALREADY_EQUIPPED      = 371,
	WEARITEM_INVALID_WEARABLE_TYPE = 372,
	WEARITEM_NOT_EXIST_IN_SLOT     = 373,
	WEARITEM_THERE_IS_NOTHING      = 374,
	MATERIAL_TABLE_NOT_FOUND       = 375,
	MATERIAL_NOT_FOUND             = 376,
	MATERIAL_NO_PRICE              = 377,
	MATERIAL_CONSUME_REQUEST_IS_ZERO_UNDER = 378,
	ITEMCRAFTING_TABLE_NOT_FOUND   = 379,
	GROUPITEM_TABLE_NOT_FOUND      = 380,
	GROUPREWARD_TABLE_NOT_FOUND    = 381,
	CRAFTEDITEM_TABLE_NOT_FOUND    = 382,
	ITEMCRAFTING_NO_BASEITEM       = 383,
	WEAPON_NOT_FOUND               = 384,
	REMODELING_INVALID_SLOTTYPE    = 385,
	REMODELING_NO_AVAILABLE_SLOTTYPE = 386,
	REMODELING_IS_NOT_SELECTED_REMODELING_SLOT = 387,
	REMODELING_WEAPON_HAS_NOT_THIS_SLOT = 388,
	DISASSEMBLING_WEAPON_IS_SUPPLIED = 389,
	WEAPON_TABLE_NOT_FOUND         = 390,
	WEAPON_IS_ALREADY_IDENTIFIED   = 391,
	WEAPON_IS_ALREADY_MAXLEVEL     = 392,
	WEAPON_IS_ALREADY_MAXDURABILITY = 393,
	WEAPON_IS_UNIDENTIFIED         = 394,
	WEAPON_IS_NOT_UPGRADABLE       = 395,
	ITEMCRAFTING_ITEMS_ARE_INSUFFICIENT = 396,
	SEASON_TABLE_NOT_FOUND         = 397,
	SEASON_ALREADY_JOINED          = 398,
	SEASON_TIER_UP_TABLE_NOT_FOUND = 399,
	SEASON_PLAYER_NOT_JOINED       = 400,
	SEASON_PLAYER_NOT_BOUGHT_TICKET = 401,
	SEASON_PLAYER_ALREADY_BOUGHT_TICKET = 402,
	SEASON_NOT_ENABLE              = 403,
	SEASON_NOT_EXIST_REWARD        = 404,
	SUPPLYBOX_NOT_FOUND            = 405,
	SUPPLYBOX_TABLE_NOT_FOUND      = 406,
	SUPPLYBOX_INVALID_SETTINGS     = 407,
	SUPPLYBOX_ALREADY_EXPANDED     = 408,
	SUPPLYBOX_ALREADY_CHECKED      = 409,
	SUPPLYBOX_THERE_IS_NO_CHECKED_BOX = 410,
	SUPPLYBOX_RECHECK_DELAY        = 411,
	SUPPLYBOX_ALREADY_AVAILABLE_NOW = 412,
	SUPPLYBOX_IS_NOT_CHECKED       = 413,
	SUPPLYBOX_CAN_NOT_SET_AFTER_CHECKED = 414,
	SUPPLYITEM_TABLE_NOT_FOUND     = 415,
	COUPON_SEIAL_INFO_DB_NOT_FOUND = 416,
	COUPON_IS_NOT_SEIAL_TYPE       = 417,
	COUPON_IS_INACTIVE             = 418,
	COUPON_IS_NOT_AVAILABLE_PERIOD = 419,
	COUPON_ISSUED_INFO_DB_NOT_FOUND = 420,
	COUPON_ISSUED_EXCEEDED_USE_COUNT_ZERO = 421,
	COUPON_USED                    = 422,
	COUPON_ISSUED_EXCEEDED_USE_COUNT_BIGGER_THAN_ZERO = 423,
	COUPON_ISSUED_EXCEEDED_USE_COUNT_SMALLER_THAN_ZERO = 424,
	COUPON_KEYWORD_INFO_DB_NOT_FOUND = 425,
	COUPON_IS_NOT_KEYWORD_TYPE     = 426,
	TRADE_REG_REGISTER_COUNT_EXCEED = 427,
	TRADE_CONFIG_CHANGED           = 428,
	TRADE_REG_ITEM_ALREADY_REGISTED = 429,
	TRADE_REG_ITEM_EQUIPPED        = 430,
	TRADE_ITEM_NOT_FOUND           = 431,
	TRADE_INVALID_PLAYER           = 432,
	TRADE_ITEM_CURRENT_STACK_COUNT_NOT_ENOUGH = 433,
	TRADE_ITEM_EXPIRE_TIME         = 434,
	TRADE_REG_WEAPON_INVALID_DURABILITY = 435,
	TRADE_REG_WEAPON_INVALID_FATIGUE = 436,
	TRADE_REG_CAN_NOT_REGISTER_ITEM = 437,
	TRADE_BUY_CAN_NOT_SELF_TRADE   = 438,
	TRADE_REG_MATERIAL_MAX_STACK_COUNT = 439,
	TRADE_FAVORITE_ALREADY_REGISTED = 440,
	TRADE_SEARCH_INVALID_CATEGORY  = 441,
	TRADE_SEARCH_INVALID_SORT_INFO = 442,
	TRADE_SEARCH_EMPTY_LIST        = 443,
	TRADE_FAVORITE_EMPTY_TRADE_ID  = 444,
	TRADE_REG_RENEW_INVALID_TRADE_ID = 445,
	TRADE_ITEM_NOT_EXPIRE_TIME     = 446,
	TRADE_FAVORITE_MAX_ID          = 447,
	TRADE_SEARCH_TOO_MANY_REQUEST  = 448,
	TRADE_REG_INVALID_PRICE        = 449,
	TRADE_NOT_ACTIVE               = 450,
	TRADE_REG_INVALID_DAYS         = 451,
	APPEARANCE_NOT_FOUND           = 452,
	APPEARANCE_EXPIRED             = 453,
	MAIL_TABLE_NOT_FOUND           = 454,
	INALID_COUNTRY_CODE            = 455,
	ADMIN_TOOL_IS_NOT_USER_RETRIEVE_READY_BLOCK = 456,
	ADMIN_TOOL_IS_NOT_USER_RETRIEVE_READY_STATUS = 457,
	ADMIN_TOOL_HAS_ALREADY_SET_BENEFIT_ID = 458,
	ADMIN_TOOL_NOT_FOUND_USER_ID   = 459,
	ADMIN_TOOL_SEASON_BACKUP_ERROR = 460,
	ADMIN_TOOL_SEASON_RESTORY_ERROR = 461,
	ADMIN_TOOL_TOURNAMENT_INVALID_LEAGUE_ID = 462,
	CHEAT_NOT_FOUND                = 463,
	ERR_NO_AUTHORIZATION           = 464,
	ERR_INVALID_AUTHORIZATION      = 465,
	ERR_FAILED_TO_VERIFY_KEY       = 466,
	ERR_FAILED_TO_VERIFY_TOKEN     = 467,
	ERR_IS_NOT_THE_SAME_API_KEY    = 468,
	ERR_FAILED_TO_CHECK_CLOSE_ACCOUNT = 469,
	ERR_PLAYER_NOT_FOUND           = 470,
	ERR_SQL_INTERNAL               = 471,
	EncryptBufferEmpty             = 472,
	LobbyPageNotFound              = 473,
	LobbyWebError                  = 474,
	FG2C_MatchSuccess_JsonObjectisInvalid = 475,
	FG2C_MatchSuccessEncryptFailure = 476,
	FG2C_MatchSuccessEncryptBufferEmpty = 477,
	ReplayFailure                  = 478,
	ConnectToClientWebSocket       = 479,
	EmptyUID                       = 480,
	WebSocket_ConnectionError      = 481,
	WebSocket_Closed               = 482,
	GameReconnectionAttempts       = 483,
	DuplicatedReconnectTimeout     = 484,
	WebSocket_AbNormalClose        = 485,
	NoResponseWaitingTicket_Error  = 486,
	InvalidResponse                = 487,
	NoResponseWaitingTicket_InValid = 488,
	NoResponseWaitingTicket_Failed = 489,
	UnknownPlatformFailed_ModuleLoad = 490,
	UnknownPlatformFailed_Connection = 491,
	GeeGeeFailed_ModuleLoad        = 492,
	GeeGeeFailed_Connection        = 493,
	GeeGeeFailed_EmptyToken        = 494,
	GeeGeeFailed_LoginTokenResponse = 495,
	SteamFailed_ModuleLoad         = 496,
	SteamFailed_Connection         = 497,
	SteamFailed_EmptyToken         = 498,
	SteamFailed_LoginTokenResponse = 499,
	SteamFailed_GameOverlay        = 500,
	AWS_Spot_Terminating           = 501,
	AWS_Draining                   = 502,
	WebSocket_NormalClose          = 503,
	WebSocket_ForceClose           = 504,
	WebSocket_Ping_TimeOut         = 505,
	WebSocket_Duplicated           = 506,
	WebSocket_Kick_Admin           = 507,
	WebSocket_ServerIsMaintenance  = 508,
	WebSocket_BlackIP              = 509,
	WebSocket_AfterLoginGussBlocked = 510,
	WebSocket_BeforeLoginGussBlocked = 511,
	EBHErrorCode_MAX               = 512
};


// Enum BravoHotelGame.ENetworkLoginFlowFlags
enum class ENetworkLoginFlowFlags : uint8_t
{
	NLFF_None                      = 0,
	NLFF_HttpLogin                 = 1,
	NLFF_UserInfo                  = 2,
	NLFF_WebSocketLogin            = 3,
	NLFF_Completed_PIE             = 4,
	NLFF_Completed                 = 5,
	NLFF_MAX                       = 6
};


// Enum BravoHotelGame.EGameResultWidgetMode
enum class EGameResultWidgetMode : uint8_t
{
	GRWM_None                      = 0,
	GRWM_Died                      = 1,
	GRWM_TeamEnd                   = 2,
	GRWM_WinStart                  = 3,
	GRWM_LooseResult               = 4,
	GRWM_MatchEnd                  = 5,
	GRWM_MAX                       = 6
};


// Enum BravoHotelGame.EGoogleCloudType
enum class EGoogleCloudType : uint8_t
{
	None                           = 0,
	PubSub                         = 1,
	FileUpload                     = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EHTTPResponseType
enum class EHTTPResponseType : uint8_t
{
	HTTP_OK                        = 0,
	HTTP_ResponseInValid           = 1,
	HTTP_Requestfailed             = 2,
	HTTP_Error                     = 3,
	HTTP_MAX                       = 4
};


// Enum BravoHotelGame.EItemEquipType
enum class EItemEquipType : uint8_t
{
	ITEM_Equip                     = 0,
	ITEM_UnEquip                   = 1,
	ITEM_MAX                       = 2
};


// Enum BravoHotelGame.EItemLocation
enum class EItemLocation : uint8_t
{
	LOC_Inven                      = 0,
	LOC_Equip                      = 1,
	LOC_Weapon                     = 2,
	LOC_MAX                        = 3
};


// Enum BravoHotelGame.EWebGameServerMode
enum class EWebGameServerMode : uint8_t
{
	WEB_Login                      = 0,
	WEB_Game                       = 1,
	WEB_Game_For_DS                = 2,
	WEB_Wait                       = 3,
	WEB_MAX                        = 4
};


// Enum BravoHotelGame.ECompareItemType
enum class ECompareItemType : uint8_t
{
	CIT_SAME                       = 0,
	CIT_UP                         = 1,
	CIT_DOWN                       = 2,
	CIT_MAX                        = 3
};


// Enum BravoHotelGame.EItemEffectSubParticleSpawnState
enum class EItemEffectSubParticleSpawnState : uint8_t
{
	IESP_SpawnPassive              = 0,
	IESP_SpawnActive               = 1,
	IESP_MAX                       = 2
};


// Enum BravoHotelGame.EItemEventType
enum class EItemEventType : uint8_t
{
	None                           = 0,
	Class                          = 1,
	Season                         = 2,
	New                            = 3,
	Event                          = 4,
	EItemEventType_MAX             = 5
};


// Enum BravoHotelGame.EPatrolDirection
enum class EPatrolDirection : uint8_t
{
	Forward                        = 0,
	Reverse                        = 1,
	EPatrolDirection_MAX           = 2
};


// Enum BravoHotelGame.EEventLogType
enum class EEventLogType : uint8_t
{
	None                           = 0,
	PcInfo                         = 1,
	GameOption                     = 2,
	Fps                            = 3,
	Exit                           = 4,
	AccountCreate                  = 5,
	AccountLogIn                   = 6,
	AccountLogOut                  = 7,
	CreateCharacter                = 8,
	PartyInfo                      = 9,
	MatchJoin                      = 10,
	MatchJoinFail                  = 11,
	JoinGame                       = 12,
	JoinGameFail                   = 13,
	SkyDive                        = 14,
	GainItem                       = 15,
	UsingItem                      = 16,
	EquipItemState                 = 17,
	AttachItemState                = 18,
	CharacterMove                  = 19,
	CharacterBehavior              = 20,
	CharacterAttack                = 21,
	CharacterHit                   = 22,
	CharacterKnockDown             = 23,
	CharacterRecorver              = 24,
	CharacterDeath                 = 25,
	CharacterCycleInfo             = 26,
	VechicleInfo                   = 27,
	DestructObject                 = 28,
	GameEnd                        = 29,
	GameCycleInfo                  = 30,
	BlueZoneInfo                   = 31,
	RedZoneInfo                    = 32,
	SupplyInfo                     = 33,
	Max                            = 34
};


// Enum BravoHotelGame.EMoveElevatorStateType
enum class EMoveElevatorStateType : uint8_t
{
	LowerMoving                    = 0,
	UpperMoving                    = 1,
	LowerMoved                     = 2,
	UpperMoved                     = 3,
	EMoveElevatorStateType_MAX     = 4
};


// Enum BravoHotelGame.ECloudPlatformType
enum class ECloudPlatformType : uint8_t
{
	CloudPlatform_Google           = 0,
	CloudPlatform_Aws              = 1,
	CloudPlatform_MAX              = 2
};


// Enum BravoHotelGame.EClientOutGameContentsType
enum class EClientOutGameContentsType : uint8_t
{
	COGCT_None                     = 0,
	COGCT_First_Client_Run         = 1,
	COGCT_Tutorial_Play_Exit       = 2,
	COGCT_Tutorial_Play_Complete   = 3,
	COGCT_Tutorial_Movie_Skip      = 4,
	COGCT_Tutorial_Movie_Watch     = 5,
	COGCT_CombineTutorial_Play_Exit = 6,
	COGCT_CombineTutorial_Play_Complete = 7,
	COGCT_Enter_Lobby              = 8,
	COGCT_Matching_Success         = 9,
	COGCT_Matching_Cancel          = 10,
	COGCT_Start_Training           = 11,
	COGCT_Login_Forbid             = 12,
	COGCT_Login_Success            = 13,
	COGCT_UserInfo_Failure         = 14,
	COGCT_Lobby_UI_Action          = 15,
	COGCT_Lobby_Game_Exit          = 16,
	COGCT_Connecting_Success       = 17,
	COGCT_Connecting_Fail          = 18,
	COGCT_Disconnected_FromDS      = 19,
	COGCT_Lobby_After_GameEnds     = 20,
	COGCT_Common_Error             = 21,
	COGCT_DediServer_Connected     = 22,
	COGCT_Process_Start            = 23,
	COGCT_Process_Exit             = 24,
	COGCT_Vivox_Disconnect         = 25,
	COGCT_Process_Exit_Force       = 26,
	COGCT_MAX                      = 27
};


// Enum BravoHotelGame.EEventTypeClientOutGameFirstClientRunData
enum class EEventTypeClientOutGameFirstClientRunData : uint8_t
{
	None                           = 0,
	FirstClient_Start              = 1,
	FirstClient_Character_Look     = 2,
	FirstClient_Character_Clothes  = 3,
	FirstClient_Character_NickName = 4,
	FirstClient_Character_NickNameCheck = 5,
	FirstClient_Character_NickNameConfirm = 6,
	FirstClient_Character_Created  = 7,
	FirstClient_Training_Mode_Off  = 8,
	FirstClient_Tutorial_Movie_Start = 9,
	FirstClient_Tutorial_Movie_Skip = 10,
	FirstClient_Tutorial_Movie_Watch = 11,
	FirstClient_Tutorial_Play_Start = 12,
	FirstClient_Tutorial_Play_Exit = 13,
	FirstClient_Tutorial_Play_Complete = 14,
	FirstClient_Lobby_Enter        = 15,
	FirstClient_Clean_Campaign_Complete = 16,
	FirstClient_Matching_Start     = 17,
	FirstClient_Matching_Success   = 18,
	Max                            = 19
};


// Enum BravoHotelGame.EEventTypeClientOutGameTutorialData
enum class EEventTypeClientOutGameTutorialData : uint8_t
{
	None                           = 0,
	Tutorial_Play_Exit             = 1,
	Tutorial_Play_Complete         = 2,
	CombineTutorial_Play_Exit      = 3,
	CombineTutorial_Play_Complete  = 4,
	Tutorial_Movie_Skip            = 5,
	Tutorial_Movie_Watch           = 6,
	Max                            = 7
};


// Enum BravoHotelGame.EEventTypeClientOutGameExitData
enum class EEventTypeClientOutGameExitData : uint8_t
{
	None                           = 0,
	Game_Exit                      = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientOutGameActionData
enum class EEventTypeClientOutGameActionData : uint8_t
{
	None                           = 0,
	UI_Action                      = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientOutGameUserInfoData
enum class EEventTypeClientOutGameUserInfoData : uint8_t
{
	None                           = 0,
	UserInfo_Failure               = 1,
	Max                            = 2
};


// Enum BravoHotelGame.EEventTypeClientOutGameLoginData
enum class EEventTypeClientOutGameLoginData : uint8_t
{
	None                           = 0,
	Login_Forbid                   = 1,
	Login_Success                  = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EEventTypeClientOutGameMatchingData
enum class EEventTypeClientOutGameMatchingData : uint8_t
{
	None                           = 0,
	Matching_Start                 = 1,
	Matching_Success               = 2,
	Matching_Cancel                = 3,
	Start_Training                 = 4,
	Max                            = 5
};


// Enum BravoHotelGame.EItemSortType
enum class EItemSortType : uint8_t
{
	IST_All                        = 0,
	IST_Attachment                 = 1,
	IST_Booster                    = 2,
	IST_Capsule                    = 3,
	IST_Equipment                  = 4,
	IST_Remedy                     = 5,
	IST_MAX                        = 6
};


// Enum BravoHotelGame.EPickUpItemEffectType
enum class EPickUpItemEffectType : uint8_t
{
	IE_None                        = 0,
	IE_Origin                      = 1,
	IE_Weak                        = 2,
	IE_MAX                         = 3
};


// Enum BravoHotelGame.EHealthProgressSlotType
enum class EHealthProgressSlotType : uint8_t
{
	HPST_MainHealth                = 0,
	HPST_ShortTimeHealth           = 1,
	HPST_BeforeHealth              = 2,
	HPST_TargetHealth              = 3,
	HPST_CureLimit                 = 4,
	HPST_MAX                       = 5
};


// Enum BravoHotelGame.EPopupMsgType
enum class EPopupMsgType : uint8_t
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	EPopupMsgType_MAX              = 3
};


// Enum BravoHotelGame.EMsgPopupFlags
enum class EMsgPopupFlags : uint8_t
{
	BT_None                        = 0,
	BT_Ok                          = 1,
	BT_Cancel                      = 2,
	BT_Waiting                     = 3,
	BT_MAX                         = 4
};


// Enum BravoHotelGame.EAchievementState
enum class EAchievementState : uint8_t
{
	AS_None                        = 0,
	AS_Progress                    = 1,
	AS_Complete                    = 2,
	AS_MAX                         = 3
};


// Enum BravoHotelGame.EAchievementType
enum class EAchievementType : uint8_t
{
	AT_None                        = 0,
	AT_GamePlay                    = 1,
	AT_Social                      = 2,
	AT_Event                       = 3,
	AT_MAX                         = 4
};


// Enum BravoHotelGame.ERemoteControlState
enum class ERemoteControlState : uint8_t
{
	ERCS_None                      = 0,
	ERCS_SwitchON                  = 1,
	ERCS_Deactive                  = 2,
	ERCS_MAX                       = 3
};


// Enum BravoHotelGame.EDropBoxState
enum class EDropBoxState : uint8_t
{
	None                           = 0,
	CutoffParachute                = 1,
	Landing                        = 2,
	OldBox                         = 3,
	Open                           = 4,
	EDropBoxState_MAX              = 5
};


// Enum BravoHotelGame.ETournamentLeagueType
enum class ETournamentLeagueType : uint8_t
{
	TLT_Junior                     = 0,
	TLT_Senior                     = 1,
	TLT_Master                     = 2,
	TLT_MAX                        = 3
};


// Enum BravoHotelGame.ETradeItemCategory
enum class ETradeItemCategory : uint8_t
{
	TI_None                        = 0,
	TI_Weapon                      = 1,
	TI_Recipe                      = 2,
	TI_Wearable                    = 3,
	TI_MAX                         = 4
};


// Enum BravoHotelGame.EPlayFeatures
enum class EPlayFeatures : uint8_t
{
	None                           = 0,
	AirdropSupply                  = 1,
	BattleRoyale                   = 2,
	All                            = 3,
	EPlayFeatures_MAX              = 4
};


// Enum BravoHotelGame.EShopGoodsPaymentCurrencyType
enum class EShopGoodsPaymentCurrencyType : uint8_t
{
	SG_None                        = 0,
	SG_Gold                        = 1,
	SG_Cash                        = 2,
	SG_CashPoint                   = 3,
	SG_SPCoin                      = 4,
	SG_MAX                         = 5
};


// Enum BravoHotelGame.EShopGoodsTopCategory
enum class EShopGoodsTopCategory : uint8_t
{
	SG_None                        = 0,
	SG_Clothes                     = 1,
	SG_Character                   = 2,
	SG_Skin                        = 3,
	SG_Weapon                      = 4,
	SG_Package                     = 5,
	SG_Dia                         = 6,
	SG_MAX                         = 7
};


// Enum BravoHotelGame.EShopGoodsStore
enum class EShopGoodsStore : uint8_t
{
	SG_Normal                      = 0,
	SG_Package                     = 1,
	SG_Gacha                       = 2,
	SG_Dia                         = 3,
	SG_Event                       = 4,
	SG_MAX                         = 5
};


// Enum BravoHotelGame.EShopGoodsStatus
enum class EShopGoodsStatus : uint8_t
{
	SG_Close                       = 0,
	SG_Open                        = 1,
	SG_MAX                         = 2
};


// Enum BravoHotelGame.EShopGoodsPaymentsType
enum class EShopGoodsPaymentsType : uint8_t
{
	SG_LumpSum                     = 0,
	SG_Random                      = 1,
	SG_MAX                         = 2
};


// Enum BravoHotelGame.EMapWidgetType
enum class EMapWidgetType : uint8_t
{
	MWT_None                       = 0,
	MWT_WorldMap                   = 1,
	MWT_MiniMap                    = 2,
	MWT_SkillMap                   = 3,
	MWT_MAX                        = 4
};


// Enum BravoHotelGame.ESelectionMenuType
enum class ESelectionMenuType : uint8_t
{
	SMT_None                       = 0,
	SMT_Custom                     = 1,
	SMT_Boost                      = 2,
	SMT_ThrowWeapon                = 3,
	SMT_MAX                        = 4
};


// Enum BravoHotelGame.EGameLoadingStep
enum class EGameLoadingStep : uint8_t
{
	EGLS_None                      = 0,
	EGLS_LoadingStart              = 1,
	EGLS_LoadingEnd                = 2,
	EGLS_MAX                       = 3
};


// Enum BravoHotelGame.ELanguageType
enum class ELanguageType : uint8_t
{
	LT_Korean                      = 0,
	LT_English                     = 1,
	LT_Chinese                     = 2,
	LT_French                      = 3,
	LT_Deutsch                     = 4,
	LT_Espanol                     = 5,
	LT_Portugues                   = 6,
	LT_Russian                     = 7,
	LT_Japanese                    = 8,
	LT_MAX                         = 9
};


// Enum BravoHotelGame.EMailMsgTag
enum class EMailMsgTag : uint8_t
{
	None                           = 0,
	Mail_TAG_Payment               = 1,
	Mail_TAG_Report                = 2,
	Mail_TAG_System                = 3,
	EMailMsgTag_MAX                = 4
};


// Enum BravoHotelGame.EMailMsgSaveOption
enum class EMailMsgSaveOption : uint8_t
{
	received                       = 0,
	sent                           = 1,
	all                            = 2,
	EMailMsgSaveOption_MAX         = 3
};


// Enum BravoHotelGame.EMailMsgType
enum class EMailMsgType : uint8_t
{
	Receive                        = 0,
	Send                           = 1,
	EMailMsgType_MAX               = 2
};


// Enum BravoHotelGame.ECommunicatorType
enum class ECommunicatorType : uint8_t
{
	Player                         = 0,
	Custom                         = 1,
	GM_QnA                         = 2,
	Master_Shop                    = 3,
	ECommunicatorType_MAX          = 4
};


// Enum BravoHotelGame.EBlockType
enum class EBlockType : uint8_t
{
	BT_Account                     = 0,
	BT_IP                          = 1,
	BT_Hardware                    = 2,
	BT_MAX                         = 3
};


// Enum BravoHotelGame.EBroadCastKillerType
enum class EBroadCastKillerType : uint8_t
{
	None                           = 0,
	Killer                         = 1,
	SubKiller                      = 2,
	Assist                         = 3,
	EBroadCastKillerType_MAX       = 4
};


// Enum BravoHotelGame.EAutoMoveSnapshotActionType
enum class EAutoMoveSnapshotActionType : uint8_t
{
	None                           = 0,
	StartRun                       = 1,
	StopRun                        = 2,
	StartParkour                   = 3,
	StartJump                      = 4,
	StopJump                       = 5,
	StartInteraction               = 6,
	StopInteraction                = 7,
	EAutoMoveSnapshotActionType_MAX = 8
};


// Enum BravoHotelGame.EMatchRateCaseType
enum class EMatchRateCaseType : uint8_t
{
	None                           = 0,
	Rank                           = 1,
	LifeTime                       = 2,
	Damage                         = 3,
	Assist                         = 4,
	Kill                           = 5,
	HeadKill                       = 6,
	Max                            = 7
};


// Enum BravoHotelGame.EDeafenDistanceLevel
enum class EDeafenDistanceLevel : uint8_t
{
	EDDL_Close                     = 0,
	EDDL_Mid                       = 1,
	EDDL_Far                       = 2,
	EDDL_MAX                       = 3
};


// Enum BravoHotelGame.EMouseCursorType
enum class EMouseCursorType : uint8_t
{
	EMCT_Default                   = 0,
	EMCT_Nuclear                   = 1,
	EMCT_MAX                       = 2
};


// Enum BravoHotelGame.EStatusType
enum class EStatusType : uint8_t
{
	ST_Power                       = 0,
	ST_Speed                       = 1,
	ST_Health                      = 2,
	ST_MAX                         = 3
};


// Enum BravoHotelGame.EPlayerListSortType
enum class EPlayerListSortType : uint8_t
{
	ByAlive                        = 0,
	ByDistance                     = 1,
	ByKillCount                    = 2,
	ByDamage                       = 3,
	ByHitRate                      = 4,
	ByConsecutiveKill              = 5,
	E_Last                         = 6,
	EPlayerListSortType_MAX        = 7
};


// Enum BravoHotelGame.ETimerWidgetType
enum class ETimerWidgetType : uint8_t
{
	TWT_RemoteVehicle              = 0,
	TWT_TitanDashSkill             = 1,
	TWT_MAX                        = 2
};


// Enum BravoHotelGame.CheatSubType
enum class ECheatSubType : uint8_t
{
	CST_None                       = 0,
	CST_Replay                     = 1,
	CST_Coherent                   = 2,
	CST_RedZone                    = 3,
	CST_BlueZone                   = 4,
	CST_Character                  = 5,
	CST_Inventory                  = 6,
	CST_Weapon                     = 7,
	CST_Vehicle                    = 8,
	CST_PersonalSupply             = 9,
	CST_MAX                        = 10
};


// Enum BravoHotelGame.CheatMainType
enum class ECheatMainType : uint8_t
{
	CMT_GamePlay                   = 0,
	CMT_Contents                   = 1,
	CMT_Optimization               = 2,
	CMT_Etc                        = 3,
	CMT_MAX                        = 4
};


// Enum BravoHotelGame.EVehicleTransmissionType
enum class EVehicleTransmissionType : uint8_t
{
	Auto_PhysX                     = 0,
	Auto_Movement                  = 1,
	Manual                         = 2,
	EVehicleTransmissionType_MAX   = 3
};


// Enum BravoHotelGame.EDoorState
enum class EDoorState : uint8_t
{
	DS_Destructed                  = 0,
	DS_Closed                      = 1,
	DS_Opened                      = 2,
	DS_Closing                     = 3,
	DS_Opening                     = 4,
	DS_Kicking                     = 5,
	DS_MAX                         = 6
};


// Enum BravoHotelGame.EPingActorType
enum class EPingActorType : uint8_t
{
	PAT_None                       = 0,
	PAT_Pawn                       = 1,
	PAT_Item                       = 2,
	PAT_Vehicle                    = 3,
	PAT_MAX                        = 4
};


// Enum BravoHotelGame.EPingIconAnimationStateType
enum class EPingIconAnimationStateType : uint8_t
{
	Enter                          = 0,
	Hold                           = 1,
	Exit                           = 2,
	EPingIconAnimationStateType_MAX = 3
};


// Enum BravoHotelGame.EPingIconLoopAnimationType
enum class EPingIconLoopAnimationType : uint8_t
{
	None                           = 0,
	PulseSlow                      = 1,
	PulseFast                      = 2,
	Spin                           = 3,
	Bounce                         = 4,
	EPingIconLoopAnimationType_MAX = 5
};


// Enum BravoHotelGame.EPingIconTransitionAnimationType
enum class EPingIconTransitionAnimationType : uint8_t
{
	None                           = 0,
	Slide                          = 1,
	Bounce                         = 2,
	Scale                          = 3,
	EPingIconTransitionAnimationType_MAX = 4
};


// Enum BravoHotelGame.ETimeOfDayType
enum class ETimeOfDayType : uint8_t
{
	ETOD_MidDay                    = 0,
	ETOD_Dusk                      = 1,
	ETOD_Dawn                      = 2,
	ETOD_MAX                       = 3
};


// Enum BravoHotelGame.EDamagedWeaponDamageType
enum class EDamagedWeaponDamageType : uint8_t
{
	DWDT_None                      = 0,
	DWDT_NormalWeapon              = 1,
	DWDT_SpecialWeapon             = 2,
	DWDT_SpecialWeaponExplosion    = 3,
	DWDT_MAX                       = 4
};


// Enum BravoHotelGame.EWaterViewCameraType
enum class EWaterViewCameraType : uint8_t
{
	WVCT_None                      = 0,
	WVCT_InWater                   = 1,
	WVCT_OutWater                  = 2,
	WVCT_MAX                       = 3
};


// Enum BravoHotelGame.ECharacterVoicePriorityType
enum class ECharacterVoicePriorityType : uint8_t
{
	CVoice_DoNotRun                = 0,
	CVoice_PreStop_DoRun           = 1,
	CVoice_MAX                     = 2
};


// Enum BravoHotelGame.ECharacterVoiceRPCType
enum class ECharacterVoiceRPCType : uint8_t
{
	CVoice_RPC_Local               = 0,
	CVoice_RPC_Team                = 1,
	CVoice_RPC_All                 = 2,
	CVoice_RPC_MAX                 = 3
};


// Enum BravoHotelGame.ESteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	None                           = 0,
	AvatarSmall                    = 1,
	AvatarMedium                   = 2,
	AvatarLarge                    = 3,
	ESteamAvatarSize_MAX           = 4
};


// Enum BravoHotelGame.EUpLoadDataType
enum class EUpLoadDataType : uint8_t
{
	None                           = 0,
	Normal                         = 1,
	ItemSpawn                      = 2,
	Max                            = 3
};


// Enum BravoHotelGame.EMovementDirection
enum class EMovementDirection : uint8_t
{
	MD_Forwards                    = 0,
	MD_Backwards                   = 1,
	MD_MAX                         = 2
};


// Enum BravoHotelGame.ECardinalDirection
enum class ECardinalDirection : uint8_t
{
	CD_North                       = 0,
	CD_East                        = 1,
	CD_West                        = 2,
	CD_South                       = 3,
	CD_MAX                         = 4
};


// Enum BravoHotelGame.EVehicleExitSide
enum class EVehicleExitSide : uint8_t
{
	VDS_Left                       = 0,
	VDS_Right                      = 1,
	VDS_Virtual                    = 2,
	VDS_MAX                        = 3
};


// Enum BravoHotelGame.EVehicleEffect
enum class EVehicleEffect : uint8_t
{
	EVE_None                       = 0,
	EVE_GunShot                    = 1,
	EVE_Explosion                  = 2,
	EVE_Drive_Concrete             = 3,
	EVE_MAX                        = 4
};


// Enum BravoHotelGame.ERedZoneSelectType
enum class ERedZoneSelectType : uint8_t
{
	All                            = 0,
	WithinBlueZone                 = 1,
	WithinWhiteZone                = 2,
	BetweenBlueZoneAndWhiteZone    = 3,
	ERedZoneSelectType_MAX         = 4
};


// Enum BravoHotelGame.EPerkSpawnType
enum class EPerkSpawnType : uint8_t
{
	PST_Near                       = 0,
	PST_Random                     = 1,
	PST_MAX                        = 2
};


// Enum BravoHotelGame.ESurviveType
enum class ESurviveType : uint8_t
{
	EST_None                       = 0,
	EST_Survive                    = 1,
	EST_Knockout                   = 2,
	EST_CriticalTime               = 3,
	EST_Death                      = 4,
	EST_MAX                        = 5
};


// Enum BravoHotelGame.ESimpleWeaponAnimationType
enum class ESimpleWeaponAnimationType : uint8_t
{
	EWAT_Default                   = 0,
	EWAT_Rifle                     = 1,
	EWAT_MAX                       = 2
};


// Enum BravoHotelGame.ECharacterCantActionType
enum class ECharacterCantActionType : uint8_t
{
	None                           = 0,
	Crouch                         = 1,
	Prone                          = 2,
	CantProneWater                 = 3,
	CantCrouchWater                = 4,
	SurfaceWater                   = 5,
	UnderWater                     = 6,
	Swim                           = 7,
	Fall                           = 8,
	Aircraft                       = 9,
	Descent                        = 10,
	Parachute                      = 11,
	Drive                          = 12,
	Walk                           = 13,
	Sprint                         = 14,
	Cast                           = 15,
	CantAction                     = 16,
	FreeLook                       = 17,
	ECharacterCantActionType_MAX   = 18
};


// Enum BravoHotelGame.EAnimationPoseType
enum class EAnimationPoseType : uint8_t
{
	APT_None                       = 0,
	APT_Common                     = 1,
	APT_RightArmedStand            = 2,
	APT_RightArmedCrouch           = 3,
	APT_RightArmedProne            = 4,
	APT_LeftArmedStand             = 5,
	APT_UnArmedStand               = 6,
	APT_UnArmedCrouch              = 7,
	APT_UnArmedProne               = 8,
	APT_MAX                        = 9
};


// Enum BravoHotelGame.ELadderState
enum class ELadderState : uint8_t
{
	LS_NotLadder                   = 0,
	LS_UseLadder                   = 1,
	LS_SnapToLadder                = 2,
	LS_ClimbLadder                 = 3,
	LS_OnLadder                    = 4,
	LS_Sliding                     = 5,
	LS_DownLadder                  = 6,
	LS_MAX                         = 7
};


// Enum BravoHotelGame.ELadderInteractionType
enum class ELadderInteractionType : uint8_t
{
	LIT_DirectSnap                 = 0,
	LIT_DownIn                     = 1,
	LIT_UpIn                       = 2,
	LIT_DownOut                    = 3,
	LIT_UpOut                      = 4,
	LIT_MAX                        = 5
};


// Enum BravoHotelGame.EWeaponAttachmentSight
enum class EWeaponAttachmentSight : uint8_t
{
	WA_Sight_Basic                 = 0,
	WA_Sight_Reddot                = 1,
	WA_Sight_Holo                  = 2,
	WA_Sight_2X                    = 3,
	WA_Sight_4X                    = 4,
	WA_Sight_8X                    = 5,
	WA_Sight_15X                   = 6,
	WA_Sight_Digital               = 7,
	WA_Sight_MAX                   = 8
};


// Enum BravoHotelGame.EProjectileType
enum class EProjectileType : uint8_t
{
	PT_5_56mm                      = 0,
	PT_7_62mm                      = 1,
	PT_9mm                         = 2,
	PT_45ACP                       = 3,
	PT_12Gauge                     = 4,
	PT_300Magnum                   = 5,
	PT_44Magnum                    = 6,
	PT_MAX                         = 7
};


// Enum BravoHotelGame.EHumanWeaponHitArea
enum class EHumanWeaponHitArea : uint8_t
{
	HWHA_None                      = 0,
	HWHA_Head                      = 1,
	HWHA_Neck                      = 2,
	HWHA_Shoudler                  = 3,
	HWHA_Chest                     = 4,
	HWHA_Stomach                   = 5,
	HWHA_UpperWaist                = 6,
	HWHA_LowerWaist                = 7,
	HWHA_Thigh                     = 8,
	HWHA_Shank                     = 9,
	HWHA_Foot                      = 10,
	HWHA_UpperArm                  = 11,
	HWHA_LowerArm                  = 12,
	HWHA_Hand                      = 13,
	HWHA_MAX                       = 14
};


// Enum BravoHotelGame.EWeaponHitArea
enum class EWeaponHitArea : uint8_t
{
	HHA_None                       = 0,
	HHA_Head                       = 1,
	HHA_UpperBody                  = 2,
	HHA_LowerBody                  = 3,
	HHA_MAX                        = 4
};


// Enum BravoHotelGame.EUltimateShieldState
enum class EUltimateShieldState : uint8_t
{
	ESS_None                       = 0,
	ESS_PendingDash                = 1,
	ESS_Dash                       = 2,
	ESS_DashEnd                    = 3,
	ESS_DashStop                   = 4,
	ESS_DashEndedByBlock           = 5,
	ESS_LaunchForBarrierSpawn      = 6,
	ESS_PendingBarrierSpawn        = 7,
	ESS_StartBarrierSpawn          = 8,
	ESS_StartBarrierSpawnInFalling = 9,
	ESS_SpawendBarrier             = 10,
	ESS_Destroy                    = 11,
	ESS_MAX                        = 12
};


// Enum BravoHotelGame.EVehicleSoundFlag
enum class EVehicleSoundFlag : uint8_t
{
	None                           = 0,
	Engine                         = 1,
	Horn                           = 2,
	Handbrake                      = 3,
	EVehicleSoundFlag_MAX          = 4
};


// Enum BravoHotelGame.EVehicleNetProperty
enum class EVehicleNetProperty : uint8_t
{
	VNP_None                       = 0,
	VNP_HealthPoint                = 1,
	VNP_TireHealthPoint            = 2,
	VNP_IsBoosting                 = 3,
	VNP_FuelAmount                 = 4,
	VNP_ReplicatedMovement         = 5,
	VNP_MAX                        = 6
};


// Enum BravoHotelGame.VoiceChannelType
enum class EVoiceChannelType : uint8_t
{
	NonPositional                  = 0,
	Positional                     = 1,
	Echo                           = 2,
	VoiceChannelType_MAX           = 3
};


// Enum BravoHotelGame.PTTKey
enum class EPTTKey : uint8_t
{
	PTTNoChannel                   = 0,
	PTTTeamChannel                 = 1,
	PTTLobbyTeamChannel            = 2,
	PTTKey_MAX                     = 3
};


// Enum BravoHotelGame.EWeightMapBitCheck
enum class EWeightMapBitCheck : uint8_t
{
	None                           = 0,
	CheckLand                      = 1,
	CheckDescent                   = 2,
	CheckPersonalSupplyBox         = 3,
	EWeightMapBitCheck_MAX         = 4
};


// Enum BravoHotelGame.EWeightMapLandType
enum class EWeightMapLandType : uint8_t
{
	WLT_Error                      = 0,
	WLT_Land                       = 1,
	WLT_Water                      = 2,
	WLT_MAX                        = 3
};


// Enum BravoHotelGame.EWeightMapDescentType
enum class EWeightMapDescentType : uint8_t
{
	WDT_Error                      = 0,
	WDT_Enable                     = 1,
	WDT_Disable                    = 2,
	WDT_MAX                        = 3
};


// Enum BravoHotelGame.EParkourDebugType
enum class EParkourDebugType : uint8_t
{
	PDT_None                       = 0,
	PDT_First                      = 1,
	PDT_Hole                       = 2,
	PDT_Position                   = 3,
	PDT_Hand                       = 4,
	PDT_Tickness                   = 5,
	PDT_Falling                    = 6,
	PDT_Hit                        = 7,
	PDT_LedgeGrab                  = 8,
	PDT_All                        = 9,
	PDT_MAX                        = 10
};



// Enum CinematicCamera.ECameraFocusMethod
enum class ECameraFocusMethod : uint8_t
{
	DoNotOverride                  = 0,
	Manual                         = 1,
	Tracking                       = 2,
	Disable                        = 3,
	MAX                            = 4
};



// Enum BravoHotelApp.EDSConnectionType
enum class EDSConnectionType : uint8_t
{
	Unknown                        = 0,
	NewMatching                    = 1,
	Reconnecting                   = 2,
	Manually                       = 3,
	EDSConnectionType_MAX          = 4
};



// Enum BravoHotelPatch.EPatchServiceError
enum class EPatchServiceError : uint8_t
{
	NoError                        = 0,
	FailedToDownloadManifestNoResponse = 1,
	FailedToDownloadManifest       = 2,
	FailedToReadManifest           = 3,
	FailedToInstall                = 4,
	EPatchServiceError_MAX         = 5
};



// Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	Touch1                         = 0,
	Touch2                         = 1,
	Touch3                         = 2,
	Touch4                         = 3,
	Touch5                         = 4,
	Touch6                         = 5,
	Touch7                         = 6,
	Touch8                         = 7,
	Touch9                         = 8,
	Touch10                        = 9,
	CursorPointerIndex             = 10,
	MAX_TOUCHES                    = 11,
	ETouchIndex_MAX                = 12
};


// Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	AnyHand                        = 2,
	Pad                            = 3,
	ExternalCamera                 = 4,
	Gun                            = 5,
	Special                        = 6,
	Special01                      = 7,
	Special02                      = 8,
	Special03                      = 9,
	Special04                      = 10,
	Special05                      = 11,
	Special06                      = 12,
	Special07                      = 13,
	Special08                      = 14,
	Special09                      = 15,
	Special10                      = 16,
	ControllerHand_Count           = 17,
	EControllerHand_MAX            = 18
};


// Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began                          = 0,
	Moved                          = 1,
	Stationary                     = 2,
	ForceChanged                   = 3,
	FirstMove                      = 4,
	Ended                          = 5,
	NumTypes                       = 6,
	ETouchType_MAX                 = 7
};


// Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None                           = 0,
	XBoxOne                        = 1,
	PS4                            = 2,
	EConsoleForGamepadLabels_MAX   = 3
};



// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	Left                           = 0,
	Right                          = 1,
	Up                             = 2,
	Down                           = 3,
	Next                           = 4,
	Previous                       = 5,
	Num                            = 6,
	Invalid                        = 7,
	EUINavigation_MAX              = 8
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	Unchecked                      = 0,
	Checked                        = 1,
	Undetermined                   = 2,
	ECheckBoxState_MAX             = 3
};


// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	Inherit                        = 0,
	ClipToBounds                   = 1,
	ClipToBoundsWithoutIntersecting = 2,
	ClipToBoundsAlways             = 3,
	OnDemand                       = 4,
	EWidgetClipping_MAX            = 5
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	NoImage                        = 0,
	FullColor                      = 1,
	Linear                         = 2,
	ESlateBrushImageType_MAX       = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	NoMirror                       = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushMirrorType_MAX      = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	NoTile                         = 0,
	Horizontal                     = 1,
	Vertical                       = 2,
	Both                           = 3,
	ESlateBrushTileType_MAX        = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	NoDrawType                     = 0,
	Box                            = 1,
	Border                         = 2,
	Image                          = 3,
	ESlateBrushDrawType_MAX        = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	UseColor_Specified             = 0,
	UseColor_Specified_Link        = 1,
	UseColor_Foreground            = 2,
	UseColor_Foreground_Subdued    = 3,
	UseColor_MAX                   = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	Escape                         = 0,
	Explicit                       = 1,
	Wrap                           = 2,
	Stop                           = 3,
	Custom                         = 4,
	CustomBoundary                 = 5,
	Invalid                        = 6,
	EUINavigationRule_MAX          = 7
};


// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	Inherit                        = 0,
	Culture                        = 1,
	LeftToRight                    = 2,
	RightToLeft                    = 3,
	EFlowDirectionPreference_MAX   = 4
};


// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	NormalVision                   = 0,
	Deuteranope                    = 1,
	Protanope                      = 2,
	Tritanope                      = 3,
	EColorVisionDeficiency_MAX     = 4
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	OnKeyPress                     = 0,
	OnNavigation                   = 1,
	OnMouseClick                   = 2,
	Direct                         = 3,
	ESelectInfo_MAX                = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	Default                        = 0,
	OnEnter                        = 1,
	OnUserMovedFocus               = 2,
	OnCleared                      = 3,
	ETextCommit_MAX                = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	Auto                           = 0,
	KerningOnly                    = 1,
	FullShaping                    = 2,
	ETextShapingMethod_MAX         = 3
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	Metrics                        = 0,
	BoundingBox                    = 1,
	EFontLayoutMethod_MAX          = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	LazyLoad                       = 0,
	Stream                         = 1,
	Inline                         = 2,
	EFontLoadingPolicy_MAX         = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	Default                        = 0,
	Auto                           = 1,
	AutoLight                      = 2,
	Monochrome                     = 3,
	None                           = 4,
	EFontHinting_MAX               = 5
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	Mouse                          = 0,
	Navigation                     = 1,
	SetDirectly                    = 2,
	Cleared                        = 3,
	OtherWidgetLostFocus           = 4,
	WindowActivate                 = 5,
	EFocusCause_MAX                = 6
};


// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	FocusChanging                  = 0,
	FocusLost                      = 1,
	FocusReceived                  = 2,
	ESlateDebuggingFocusEvent_MAX  = 3
};


// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	Unknown                        = 0,
	Explicit                       = 1,
	CustomDelegateBound            = 2,
	CustomDelegateUnbound          = 3,
	NextOrPrevious                 = 4,
	HitTestGrid                    = 5,
	ESlateDebuggingNavigationMethod_MAX = 6
};


// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	MouseCaptureGained             = 0,
	MouseCaptureLost               = 1,
	ESlateDebuggingStateChangeEvent_MAX = 2
};


// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	MouseMove                      = 0,
	MouseEnter                     = 1,
	MouseLeave                     = 2,
	MouseButtonDown                = 3,
	MouseButtonUp                  = 4,
	MouseButtonDoubleClick         = 5,
	MouseWheel                     = 6,
	TouchStart                     = 7,
	TouchEnd                       = 8,
	DragDetected                   = 9,
	DragEnter                      = 10,
	DragLeave                      = 11,
	DragOver                       = 12,
	DragDrop                       = 13,
	DropMessage                    = 14,
	KeyDown                        = 15,
	KeyUp                          = 16,
	KeyChar                        = 17,
	AnalogInput                    = 18,
	TouchGesture                   = 19,
	COUNT                          = 20,
	ESlateDebuggingInputEvent_MAX  = 21
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	Keyboard                       = 0,
	Controller                     = 1,
	User                           = 2,
	ENavigationGenesis_MAX         = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	FocusedWidget                  = 0,
	WidgetUnderCursor              = 1,
	ENavigationSource_MAX          = 2
};


// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	Accept                         = 0,
	Back                           = 1,
	Num                            = 2,
	Invalid                        = 3,
	EUINavigationAction_MAX        = 4
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	DownAndUp                      = 0,
	ButtonPress                    = 1,
	ButtonRelease                  = 2,
	EButtonPressMethod_MAX         = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	DownAndUp                      = 0,
	Down                           = 1,
	PreciseTap                     = 2,
	EButtonTouchMethod_MAX         = 3
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	DownAndUp                      = 0,
	MouseDown                      = 1,
	MouseUp                        = 2,
	PreciseClick                   = 3,
	EButtonClickMethod_MAX         = 4
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	CheckBox                       = 0,
	ToggleButton                   = 1,
	ESlateCheckBoxType_MAX         = 2
};


// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ActiveWindow                   = 0,
	MainWindow                     = 1,
	ESlateParentWindowSearchMethod_MAX = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	WhenScrollingPossible          = 0,
	Always                         = 1,
	Never                          = 2,
	EConsumeMouseWheel_MAX         = 3
};



// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ETextJustify_MAX               = 3
};


// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	Auto                           = 0,
	LeftToRight                    = 1,
	RightToLeft                    = 2,
	ETextFlowDirection_MAX         = 3
};


// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	TextChangeOnDismiss            = 0,
	TextCommitOnAccept             = 1,
	TextCommitOnDismiss            = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};


// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	OnFocusByPointer               = 0,
	OnAllFocusEvents               = 1,
	EVirtualKeyboardTrigger_MAX    = 2
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	DefaultWrapping                = 0,
	AllowPerCharacterWrapping      = 1,
	AllowPerCharacterEllipsis      = 2,
	ETextWrappingPolicy_MAX        = 3
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	List                           = 0,
	Tile                           = 1,
	Tree                           = 2,
	ETableViewMode_MAX             = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	SingleToggle                   = 2,
	Multi                          = 3,
	ESelectionMode_MAX             = 4
};


// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	None                           = 0,
	ButtonRow                      = 1,
	EditableText                   = 2,
	Heading                        = 3,
	MenuEntry                      = 4,
	MenuSeparator                  = 5,
	ToolBarButton                  = 6,
	ToolBarComboButton             = 7,
	ToolBarSeparator               = 8,
	Widget                         = 9,
	EMultiBlockType_MAX            = 10
};


// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	MenuBar                        = 0,
	ToolBar                        = 1,
	VerticalToolBar                = 2,
	UniformToolBar                 = 3,
	Menu                           = 4,
	ButtonRow                      = 5,
	ToolMenuBar                    = 6,
	EMultiBoxType_MAX              = 7
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	LeftToRight                    = 0,
	RightToLeft                    = 1,
	FillFromCenter                 = 2,
	TopToBottom                    = 3,
	BottomToTop                    = 4,
	EProgressBarFillType_MAX       = 5
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	None                           = 0,
	Fill                           = 1,
	ScaleToFit                     = 2,
	ScaleToFitX                    = 3,
	ScaleToFitY                    = 4,
	ScaleToFill                    = 5,
	ScaleBySafeZone                = 6,
	UserSpecified                  = 7,
	EStretch_MAX                   = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	Both                           = 0,
	DownOnly                       = 1,
	UpOnly                         = 2,
	EStretchDirection_MAX          = 3
};


// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	NoScroll                       = 0,
	InstantScroll                  = 1,
	AnimatedScroll                 = 2,
	EScrollWhenFocusChanges_MAX    = 3
};


// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	IntoView                       = 0,
	TopOrLeft                      = 1,
	Center                         = 2,
	EDescendantScrollDestination_MAX = 3
};


// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EvenlyDistributed              = 0,
	EvenlySize                     = 1,
	EvenlyWide                     = 2,
	LeftAligned                    = 3,
	RightAligned                   = 4,
	CenterAligned                  = 5,
	Fill                           = 6,
	EListItemAlignment_MAX         = 7
};


// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	None                           = 0,
	Visible                        = 1,
	Hidden                         = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};


// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	NumChords                      = 2,
	EMultipleKeyBindingIndex_MAX   = 3
};


// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	None                           = 0,
	Button                         = 1,
	ToggleButton                   = 2,
	RadioButton                    = 3,
	Check                          = 4,
	CollapsedButton                = 5,
	EUserInterfaceActionType_MAX   = 6
};



// Enum ImageWriteQueue.EDesiredImageFormat
enum class EDesiredImageFormat : uint8_t
{
	PNG                            = 0,
	JPG                            = 1,
	BMP                            = 2,
	EXR                            = 3,
	EDesiredImageFormat_MAX        = 4
};



// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	NoFiltering                    = 0,
	PCF_1x1                        = 1,
	PCF_2x2                        = 2,
	PCF_3x3                        = 3,
	EMobileCSMQuality_MAX          = 4
};



// Enum EngineSettings.ESubLevelStripMode
enum class ESubLevelStripMode : uint8_t
{
	ExactClass                     = 0,
	IsChildOf                      = 1,
	ESubLevelStripMode_MAX         = 2
};


// Enum EngineSettings.EFourPlayerSplitScreenType
enum class EFourPlayerSplitScreenType : uint8_t
{
	Grid                           = 0,
	Vertical                       = 1,
	Horizontal                     = 2,
	EFourPlayerSplitScreenType_MAX = 3
};


// Enum EngineSettings.EThreePlayerSplitScreenType
enum class EThreePlayerSplitScreenType : uint8_t
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	Vertical                       = 2,
	Horizontal                     = 3,
	EThreePlayerSplitScreenType_MAX = 4
};


// Enum EngineSettings.ETwoPlayerSplitScreenType
enum class ETwoPlayerSplitScreenType : uint8_t
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2
};



// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t
{
	None                           = 0,
	Confidence                     = 1,
	Block                          = 2,
	EMeshTrackerVertexColorMode_MAX = 3
};



// Enum Foliage.ECullDistancePreset
enum class ECullDistancePreset : uint8_t
{
	Custom                         = 0,
	Grass_Deco                     = 1,
	Grass_Gameplay                 = 2,
	Grass_Default                  = 3,
	Tree_Deco                      = 4,
	Tree_Gameplay                  = 5,
	Bush_Deco                      = 6,
	Bush_Gameplay                  = 7,
	Rock_Deco                      = 8,
	Rock_Gameplay                  = 9,
	Meaningless                    = 10,
	FirstArrayIndex                = 11,
	ArrayCount                     = 12,
	ECullDistancePreset_MAX        = 13
};


// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	LockXZ                         = 3,
	LockYZ                         = 4,
	EFoliageScaling_MAX            = 5
};


// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	MAX_None                       = 4,
	EVertexColorMaskChannel_MAX    = 5
};


// Enum Foliage.FoliageVertexColorMask
enum class EFoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red     = 1,
	FOLIAGEVERTEXCOLORMASK_Green   = 2,
	FOLIAGEVERTEXCOLORMASK_Blue    = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha   = 4,
	FOLIAGEVERTEXCOLORMASK_MAX     = 5
};


// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t
{
	None                           = 0,
	CollisionOverlap               = 1,
	ShadeOverlap                   = 2,
	AnyOverlap                     = 3,
	ESimulationQuery_MAX           = 4
};


// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t
{
	CollisionOverlap               = 0,
	ShadeOverlap                   = 1,
	None                           = 2,
	ESimulationOverlap_MAX         = 3
};



// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
};


// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	Uniform                        = 0,
	Free                           = 1,
	LockXY                         = 2,
	EGrassScaling_MAX              = 3
};


// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	ESplineModulationColorMask_MAX = 4
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	Linear                         = 0,
	SquareRoot                     = 1,
	ELandscapeLODFalloff_MAX       = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	Default                        = 0,
	Alphabetical                   = 1,
	UserSpecific                   = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	None                           = 0,
	UseMaxLayers                   = 1,
	ExistingOnly                   = 2,
	UseComponentWhitelist          = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	Additive                       = 0,
	Layered                        = 1,
	ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



// Enum TimeManagement.EFrameNumberDisplayFormats
enum class EFrameNumberDisplayFormats : uint8_t
{
	NonDropFrameTimecode           = 0,
	DropFrameTimecode              = 1,
	Seconds                        = 2,
	Frames                         = 3,
	MAX_Count                      = 4,
	EFrameNumberDisplayFormats_MAX = 5
};


// Enum TimeManagement.ETimedDataInputState
enum class ETimedDataInputState : uint8_t
{
	Connected                      = 0,
	Unresponsive                   = 1,
	Disconnected                   = 2,
	ETimedDataInputState_MAX       = 3
};


// Enum TimeManagement.ETimedDataInputEvaluationType
enum class ETimedDataInputEvaluationType : uint8_t
{
	None                           = 0,
	Timecode                       = 1,
	PlatformTime                   = 2,
	ETimedDataInputEvaluationType_MAX = 3
};



// Enum AnimationCore.ETransformConstraintType
enum class ETransformConstraintType : uint8_t
{
	Translation                    = 0,
	Rotation                       = 1,
	Scale                          = 2,
	Parent                         = 3,
	ETransformConstraintType_MAX   = 4
};


// Enum AnimationCore.EConstraintType
enum class EConstraintType : uint8_t
{
	Transform                      = 0,
	Aim                            = 1,
	MAX                            = 2
};



// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8_t
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2
};


// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class EAnimPhysSimSpaceType : uint8_t
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5
};


// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class EAnimPhysLinearConstraintType : uint8_t
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class EAnimPhysAngularConstraintType : uint8_t
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2
};


// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8_t
{
	StandardBlend                  = 0,
	Inertialization                = 1,
	EBlendListTransitionType_MAX   = 2
};


// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8_t
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3
};


// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8_t
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3
};


// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8_t
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2
};


// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class ECopyBoneDeltaMode : uint8_t
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2
};


// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8_t
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7
};


// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8_t
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3
};


// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8_t
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5
};


// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8_t
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8_t
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2
};


// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8_t
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3
};


// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8_t
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2
};


// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8_t
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2
};


// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8_t
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3
};


// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8_t
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3
};


// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8_t
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3
};


// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8_t
{
	None                           = 0,
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4
};


// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8_t
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6
};


// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8_t
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15
};


// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8_t
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	NoNormalization                = 3,
	ERBFNormalizeMethod_MAX        = 4
};


// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8_t
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	TwistAngle                     = 3,
	DefaultMethod                  = 4,
	ERBFDistanceMethod_MAX         = 5
};


// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8_t
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6
};


// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8_t
{
	Additive                       = 0,
	Interpolative                  = 1,
	ERBFSolverType_MAX             = 2
};



// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	Explicit                       = 0,
	IncludeParentTags              = 1,
	EGameplayTagMatchType_MAX      = 2
};


// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	None                           = 0,
	NonRestrictedOnly              = 1,
	RestrictedOnly                 = 2,
	All                            = 3,
	EGameplayTagSelectionType_MAX  = 4
};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	RestrictedTagList              = 3,
	DataTable                      = 4,
	Invalid                        = 5,
	EGameplayTagSourceType_MAX     = 6
};



// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	None                           = 0,
	Normals                        = 1,
	Tangents                       = 2,
	WeightedNTBs                   = 3,
	EComputeNTBsOptions_MAX        = 4
};



// Enum EyeTracker.EEyeTrackerStatus
enum class EEyeTrackerStatus : uint8_t
{
	NotConnected                   = 0,
	NotTracking                    = 1,
	Tracking                       = 2,
	EEyeTrackerStatus_MAX          = 3
};



// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t
{
	HCGM_Rec709                    = 0,
	HCGM_P3DCI                     = 1,
	HCGM_Rec2020                   = 2,
	HCGM_ACES                      = 3,
	HCGM_ACEScg                    = 4,
	HCGM_Linear                    = 5,
	HCGM_MAX                       = 6
};


// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t
{
	Idle                           = 0,
	Initialized                    = 1,
	Capturing                      = 2,
	Finalizing                     = 3,
	EMovieSceneCaptureProtocolState_MAX = 4
};



// Enum MoviePlayer.EMoviePlaybackType
enum class EMoviePlaybackType : uint8_t
{
	MT_Normal                      = 0,
	MT_Looped                      = 1,
	MT_LoadingLoop                 = 2,
	MT_MAX                         = 3
};



// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	Legacy                         = 0,
	Accurate                       = 1,
	EClothingWindMethodNv_MAX      = 2
};



// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class ETaskResourceOverlapPolicy : uint8_t
{
	StartOnTop                     = 0,
	StartAtEnd                     = 1,
	ETaskResourceOverlapPolicy_MAX = 2
};


// Enum GameplayTasks.EGameplayTaskState
enum class EGameplayTaskState : uint8_t
{
	Uninitialized                  = 0,
	AwaitingActivation             = 1,
	Paused                         = 2,
	Active                         = 3,
	Finished                       = 4,
	EGameplayTaskState_MAX         = 5
};


// Enum GameplayTasks.EGameplayTaskRunResult
enum class EGameplayTaskRunResult : uint8_t
{
	Error                          = 0,
	Failed                         = 1,
	Success_Paused                 = 2,
	Success_Active                 = 3,
	Success_Finished               = 4,
	EGameplayTaskRunResult_MAX     = 5
};



// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static                         = 0,
	DynamicModifiersOnly           = 1,
	Dynamic                        = 2,
	LegacyGeneration               = 3,
	ERuntimeGenerationType_MAX     = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost                      = 0,
	HeuristicOnly                  = 1,
	RealCostOnly                   = 2,
	ENavCostDisplay_MAX            = 3
};


// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	Override                       = 0,
	Append                         = 1,
	Skip                           = 2,
	ENavSystemOverridePolicy_MAX   = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone                       = 0,
	Watershed                      = 1,
	ChunkyMonotone                 = 2,
	ERecastPartitioning_MAX        = 3
};



// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	Chaos_PointImplicit            = 0,
	Chaos_DelaunayTriangulation    = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None                     = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX                      = 6
};



// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosBreakingSortMethod_MAX   = 5
};


// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByHighestImpulse           = 3,
	SortByNearestFirst             = 4,
	Count                          = 5,
	EChaosCollisionSortMethod_MAX  = 6
};


// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	SortNone                       = 0,
	SortByHighestMass              = 1,
	SortByHighestSpeed             = 2,
	SortByNearestFirst             = 3,
	Count                          = 4,
	EChaosTrailingSortMethod_MAX   = 5
};


// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	HideNone                       = 0,
	HideWithCollision              = 1,
	HideSelected                   = 2,
	HideWholeCollection            = 3,
	HideAll                        = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};


// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	Chaos_Traansform               = 0,
	Chaos_Max                      = 1
};


// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	Chaos_Active                   = 0,
	Chaos_DynamicState             = 1,
	Chaos_CollisionGroup           = 2,
	Chaos_Max                      = 3
};



// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t
{
	Begin                          = 0,
	Continue                       = 1,
	End                            = 2,
	Ignore                         = 3,
	EInputCaptureState_MAX         = 4
};


// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t
{
	Begin                          = 0,
	Ignore                         = 1,
	EInputCaptureRequestType_MAX   = 2
};


// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t
{
	None                           = 0,
	Left                           = 1,
	Right                          = 2,
	Both                           = 3,
	Any                            = 4,
	EInputCaptureSide_MAX          = 5
};


// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : uint8_t
{
	None                           = 0,
	Keyboard                       = 1,
	Mouse                          = 2,
	Gamepad                        = 3,
	OculusTouch                    = 4,
	HTCViveWands                   = 5,
	AnySpatialDevice               = 6,
	TabletFingers                  = 7,
	EInputDevices_MAX              = 8
};


// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : uint8_t
{
	None                           = 0,
	TranslateAxisX                 = 1,
	TranslateAxisY                 = 2,
	TranslateAxisZ                 = 3,
	TranslateAllAxes               = 4,
	TranslatePlaneXY               = 5,
	TranslatePlaneXZ               = 6,
	TranslatePlaneYZ               = 7,
	TranslateAllPlanes             = 8,
	RotateAxisX                    = 9,
	RotateAxisY                    = 10,
	RotateAxisZ                    = 11,
	RotateAllAxes                  = 12,
	ScaleAxisX                     = 13,
	ScaleAxisY                     = 14,
	ScaleAxisZ                     = 15,
	ScaleAllAxes                   = 16,
	ScalePlaneYZ                   = 17,
	ScalePlaneXZ                   = 18,
	ScalePlaneXY                   = 19,
	ScaleAllPlanes                 = 20,
	ScaleUniform                   = 21,
	StandardTranslateRotate        = 22,
	TranslateRotateUniformScale    = 23,
	FullTranslateRotateScale       = 24,
	ETransformGizmoSubElements_MAX = 25
};


// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t
{
	NoChangeTracking               = 0,
	UndoToExit                     = 1,
	FullUndoRedo                   = 2,
	EToolChangeTrackingMode_MAX    = 3
};


// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t
{
	Left                           = 0,
	Mouse                          = 1,
	Right                          = 2,
	EToolSide_MAX                  = 3
};


// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t
{
	Replace                        = 0,
	Add                            = 1,
	Remove                         = 2,
	Clear                          = 3,
	ESelectedObjectsModificationType_MAX = 4
};


// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t
{
	Internal                       = 0,
	UserMessage                    = 1,
	UserNotification               = 2,
	UserWarning                    = 3,
	UserError                      = 4,
	EToolMessageLevel_MAX          = 5
};


// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t
{
	World                          = 0,
	Local                          = 1,
	EToolContextCoordinateSystem_MAX = 2
};


// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t
{
	VertexColorMaterial            = 0,
	EStandardToolContextMaterials_MAX = 1
};


// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t
{
	None                           = 0,
	MeshVertex                     = 1,
	MeshEdge                       = 2,
	Grid                           = 3,
	All                            = 4,
	ESceneSnapQueryTargetType_MAX  = 5
};


// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t
{
	Position                       = 0,
	ESceneSnapQueryType_MAX        = 1
};



// Enum LuminRuntimeSettings.ELuminPrivilege
enum class ELuminPrivilege : uint8_t
{
	Invalid                        = 0,
	BatteryInfo                    = 1,
	CameraCapture                  = 2,
	ComputerVision                 = 3,
	WorldReconstruction            = 4,
	InAppPurchase                  = 5,
	AudioCaptureMic                = 6,
	DrmCertificates                = 7,
	Occlusion                      = 8,
	LowLatencyLightwear            = 9,
	Internet                       = 10,
	IdentityRead                   = 11,
	BackgroundDownload             = 12,
	BackgroundUpload               = 13,
	MediaDrm                       = 14,
	Media                          = 15,
	MediaMetadata                  = 16,
	PowerInfo                      = 17,
	LocalAreaNetwork               = 18,
	VoiceInput                     = 19,
	Documents                      = 20,
	ConnectBackgroundMusicService  = 21,
	RegisterBackgroundMusicService = 22,
	PcfRead                        = 23,
	PwFoundObjRead                 = 24,
	NormalNotificationsUsage       = 25,
	MusicService                   = 26,
	ControllerPose                 = 27,
	GesturesSubscribe              = 28,
	GesturesConfig                 = 29,
	AddressBookRead                = 30,
	AddressBookWrite               = 31,
	AddressBookBasicAccess         = 32,
	CoarseLocation                 = 33,
	FineLocation                   = 34,
	HandMesh                       = 35,
	WifiStatusRead                 = 36,
	SocialConnectionsInvitesAccess = 37,
	ELuminPrivilege_MAX            = 38
};


// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class ELuminFrameTimingHint : uint8_t
{
	Unspecified                    = 0,
	Maximum                        = 1,
	FPS                            = 2,
	FPS01                          = 3,
	ELuminFrameTimingHint_MAX      = 4
};


// Enum LuminRuntimeSettings.ELuminComponentType
enum class ELuminComponentType : uint8_t
{
	Universe                       = 0,
	Fullscreen                     = 1,
	SearchProvider                 = 2,
	MusicService                   = 3,
	Screens                        = 4,
	ScreensImmersive               = 5,
	Console                        = 6,
	SystemUI                       = 7,
	ELuminComponentType_MAX        = 8
};


// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class ELuminComponentSubElementType : uint8_t
{
	FileExtension                  = 0,
	MimeType                       = 1,
	Mode                           = 2,
	MusicAttribute                 = 3,
	Schema                         = 4,
	ELuminComponentSubElementType_MAX = 5
};



// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log                            = 0,
	Warning                        = 1,
	Error                          = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};



// Enum VivoxCore.DeviceType
enum class EDeviceType : uint8_t
{
	NullDevice                     = 0,
	SpecificDevice                 = 1,
	DefaultSystemDevice            = 2,
	DefaultCommunicationDevice     = 3,
	DeviceType_MAX                 = 4
};


// Enum VivoxCore.EAudioFadeModel
enum class EAudioFadeModel : uint8_t
{
	InverseByDistance              = 0,
	LinearByDistance               = 1,
	ExponentialByDistance          = 2,
	EAudioFadeModel_MAX            = 3
};


// Enum VivoxCore.ChannelType
enum class EChannelType : uint8_t
{
	NonPositional                  = 0,
	Positional                     = 1,
	Echo                           = 2,
	ChannelType_MAX                = 3
};


// Enum VivoxCore.ConnectionState
enum class EConnectionState : uint8_t
{
	Disconnected                   = 0,
	Connecting                     = 1,
	Connected                      = 2,
	Disconnecting                  = 3,
	ConnectionState_MAX            = 4
};


// Enum VivoxCore.ParticipantSpeakingUpdateRate
enum class EParticipantSpeakingUpdateRate : uint8_t
{
	StateChange                    = 0,
	Never                          = 1,
	Update1Hz                      = 2,
	Update5Hz                      = 3,
	Update10Hz                     = 4,
	ParticipantSpeakingUpdateRate_MAX = 5
};


// Enum VivoxCore.TransmissionMode
enum class ETransmissionMode : uint8_t
{
	None                           = 0,
	Single                         = 1,
	All                            = 2,
	TransmissionMode_MAX           = 3
};


// Enum VivoxCore.SubscriptionReply
enum class ESubscriptionReply : uint8_t
{
	Allow                          = 0,
	Block                          = 1,
	SubscriptionReply_MAX          = 2
};


// Enum VivoxCore.SubscriptionMode
enum class ESubscriptionMode : uint8_t
{
	Accept                         = 0,
	Block                          = 1,
	Defer                          = 2,
	SubscriptionMode_MAX           = 3
};


// Enum VivoxCore.LoginState
enum class ELoginState : uint8_t
{
	LoggedOut                      = 0,
	LoggingIn                      = 1,
	LoggedIn                       = 2,
	LoggingOut                     = 3,
	LoginState_MAX                 = 4
};


// Enum VivoxCore.TTSMessageState
enum class ETTSMessageState : uint8_t
{
	Playing                        = 0,
	Enqueued                       = 1,
	TTSMessageState_MAX            = 2
};


// Enum VivoxCore.TTSDestination
enum class ETTSDestination : uint8_t
{
	Default                        = 0,
	RemoteTransmission             = 1,
	LocalPlayback                  = 2,
	RemoteTransmissionWithLocalPlayback = 3,
	QueuedRemoteTransmission       = 4,
	QueuedLocalPlayback            = 5,
	QueuedRemoteTransmissionWithLocalPlayback = 6,
	ScreenReader                   = 7,
	TTSDestination_MAX             = 8
};


// Enum VivoxCore.PresenceStatus
enum class EPresenceStatus : uint8_t
{
	Unavailable                    = 0,
	Available                      = 1,
	Chat                           = 2,
	DoNotDisturb                   = 3,
	Away                           = 4,
	ExtendedAway                   = 5,
	PresenceStatus_MAX             = 6
};



// Enum BravoHotelCloudPlatform.AwsAuthFlowType
enum class EAwsAuthFlowType : uint8_t
{
	NOT_SET                        = 0,
	USER_SRP_AUTH                  = 1,
	REFRESH_TOKEN_AUTH             = 2,
	REFRESH_TOKEN                  = 3,
	CUSTOM_AUTH                    = 4,
	ADMIN_NO_SRP_AUTH              = 5,
	USER_PASSWORD_AUTH             = 6,
	ADMIN_USER_PASSWORD_AUTH       = 7,
	AwsAuthFlowType_MAX            = 8
};



// Enum ImageWrapper.EBitmapCSType
enum class EBitmapCSType : uint8_t
{
	BCST_BLCS_CALIBRATED_RGB       = 0,
	BCST_LCS_sRGB                  = 1,
	BCST_LCS_WINDOWS_COLOR_SPACE   = 2,
	BCST_PROFILE_LINKED            = 3,
	BCST_PROFILE_EMBEDDED          = 4,
	BCST_MAX                       = 5
};


// Enum ImageWrapper.EBitmapHeaderVersion
enum class EBitmapHeaderVersion : uint8_t
{
	BHV_BITMAPINFOHEADER           = 0,
	BHV_BITMAPV2INFOHEADER         = 1,
	BHV_BITMAPV3INFOHEADER         = 2,
	BHV_BITMAPV4HEADER             = 3,
	BHV_BITMAPV5HEADER             = 4,
	BHV_MAX                        = 5
};



// Enum FieldSystemCore.EFieldPhysicsDefaultFields
enum class EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
	Field_MAX                      = 6
};


// Enum FieldSystemCore.EFieldPhysicsType
enum class EFieldPhysicsType : uint8_t
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_PhysicsType_Max          = 17
};


// Enum FieldSystemCore.EFieldFalloffType
enum class EFieldFalloffType : uint8_t
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5
};


// Enum FieldSystemCore.EFieldResolutionType
enum class EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3
};


// Enum FieldSystemCore.EFieldCullingOperationType
enum class EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3
};


// Enum FieldSystemCore.EFieldOperationType
enum class EFieldOperationType : uint8_t
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4
};


// Enum FieldSystemCore.ESetMaskConditionType
enum class ESetMaskConditionType : uint8_t
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3
};



// Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double                         = 0,
	Triple                         = 1,
	Num                            = 2,
	Invalid                        = 3,
	EChaosBufferMode_MAX           = 4
};


// Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread                = 0,
	TaskGraph                      = 1,
	SingleThread                   = 2,
	Num                            = 3,
	Invalid                        = 4,
	EChaosThreadingMode_MAX        = 5
};


// Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed                          = 0,
	Variable                       = 1,
	VariableCapped                 = 2,
	VariableCappedWithTarget       = 3,
	EChaosSolverTickMode_MAX       = 4
};



// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
enum class ESoundwaveSampleRateSettings : uint8_t
{
	Max                            = 0,
	High                           = 1,
	Medium                         = 2,
	Low                            = 3,
	Min                            = 4,
	MatchDevice                    = 5
};



// Enum GeometryCollectionCore.EGeometryCollectionCacheType
enum class EGeometryCollectionCacheType : uint8_t
{
	None                           = 0,
	Record                         = 1,
	Play                           = 2,
	RecordAndPlay                  = 3,
	EGeometryCollectionCacheType_MAX = 4
};



// Enum GeometryCollectionSimulationCore.EEmissionPatternTypeEnum
enum class EEmissionPatternTypeEnum : uint8_t
{
	Chaos_Emission_Pattern_First_Frame = 0,
	Chaos_Emission_Pattern_On_Demand = 1,
	Chaos_Max                      = 2
};


// Enum GeometryCollectionSimulationCore.EInitialVelocityTypeEnum
enum class EInitialVelocityTypeEnum : uint8_t
{
	Chaos_Initial_Velocity_User_Defined = 0,
	Chaos_Initial_Velocity_None    = 1,
	Chaos_Max                      = 2
};


// Enum GeometryCollectionSimulationCore.EGeometryCollectionPhysicsTypeEnum
enum class EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	Chaos_AngularVelocity          = 0,
	Chaos_DynamicState             = 1,
	Chaos_LinearVelocity           = 2,
	Chaos_InitialAngularVelocity   = 3,
	Chaos_InitialLinearVelocity    = 4,
	Chaos_CollisionGroup           = 5,
	Chaos_LinearForce              = 6,
	Chaos_AngularTorque            = 7,
	Chaos_Max                      = 8
};


// Enum GeometryCollectionSimulationCore.EObjectStateTypeEnum
enum class EObjectStateTypeEnum : uint8_t
{
	Chaos_NONE                     = 0,
	Chaos_Object_Sleeping          = 1,
	Chaos_Object_Kinematic         = 2,
	Chaos_Object_Static            = 3,
	Chaos_Object_Dynamic           = 4,
	Chaos_Object_UserDefined       = 5,
	Chaos_Max                      = 6
};


// Enum GeometryCollectionSimulationCore.EImplicitTypeEnum
enum class EImplicitTypeEnum : uint8_t
{
	Chaos_Implicit_Box             = 0,
	Chaos_Implicit_Sphere          = 1,
	Chaos_Implicit_Capsule         = 2,
	Chaos_Implicit_LevelSet        = 3,
	Chaos_Implicit_None            = 4,
	Chaos_Max                      = 5
};


// Enum GeometryCollectionSimulationCore.ECollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	Chaos_Volumetric               = 0,
	Chaos_Surface_Volumetric       = 1,
	Chaos_Max                      = 2
};



// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
enum class EMediaPlayerOptionBooleanOverride : uint8_t
{
	UseMediaPlayerSetting          = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	EMediaPlayerOptionBooleanOverride_MAX = 3
};



// Enum VectorVM.EVectorVMOp
enum class EVectorVMOp : uint8_t
{
	done                           = 0,
	add                            = 1,
	sub                            = 2,
	mul                            = 3,
	div                            = 4,
	mad                            = 5,
	lerp                           = 6,
	rcp                            = 7,
	rsq                            = 8,
	sqrt                           = 9,
	neg                            = 10,
	abs                            = 11,
	exp                            = 12,
	exp2                           = 13,
	log                            = 14,
	log2                           = 15,
	sin                            = 16,
	cos                            = 17,
	tan                            = 18,
	asin                           = 19,
	acos                           = 20,
	atan                           = 21,
	atan2                          = 22,
	ceil                           = 23,
	floor                          = 24,
	fmod                           = 25,
	frac                           = 26,
	trunc                          = 27,
	clamp                          = 28,
	min                            = 29,
	max                            = 30,
	pow                            = 31,
	round                          = 32,
	sign                           = 33,
	step                           = 34,
	random                         = 35,
	noise                          = 36,
	cmplt                          = 37,
	cmple                          = 38,
	cmpgt                          = 39,
	cmpge                          = 40,
	cmpeq                          = 41,
	cmpneq                         = 42,
	select                         = 43,
	addi                           = 44,
	subi                           = 45,
	muli                           = 46,
	divi                           = 47,
	clampi                         = 48,
	mini                           = 49,
	maxi                           = 50,
	absi                           = 51,
	negi                           = 52,
	signi                          = 53,
	randomi                        = 54,
	cmplti                         = 55,
	cmplei                         = 56,
	cmpgti                         = 57,
	cmpgei                         = 58,
	cmpeqi                         = 59,
	cmpneqi                        = 60,
	bit_and                        = 61,
	bit_or                         = 62,
	bit_xor                        = 63,
	bit_not                        = 64,
	bit_lshift                     = 65,
	bit_rshift                     = 66,
	logic_and                      = 67,
	logic_or                       = 68,
	logic_xor                      = 69,
	logic_not                      = 70,
	f2i                            = 71,
	i2f                            = 72,
	f2b                            = 73,
	b2f                            = 74,
	i2b                            = 75,
	b2i                            = 76,
	inputdata_32bit                = 77,
	inputdata_noadvance_32bit      = 78,
	outputdata_32bit               = 79,
	acquireindex                   = 80,
	external_func_call             = 81,
	exec_index                     = 82,
	noise2D                        = 83,
	noise3D                        = 84,
	enter_stat_scope               = 85,
	exit_stat_scope                = 86,
	update_id                      = 87,
	acquire_id                     = 88,
	NumOpcodes                     = 89
};


// Enum VectorVM.EVectorVMOperandLocation
enum class EVectorVMOperandLocation : uint8_t
{
	Register                       = 0,
	Constant                       = 1,
	Num                            = 2,
	EVectorVMOperandLocation_MAX   = 3
};


// Enum VectorVM.EVectorVMBaseTypes
enum class EVectorVMBaseTypes : uint8_t
{
	Float                          = 0,
	Int                            = 1,
	Bool                           = 2,
	Num                            = 3,
	EVectorVMBaseTypes_MAX         = 4
};



// UserDefinedEnum ENiagaraCoordinateSpace.ENiagaraCoordinateSpace
enum class ENiagaraCoordinateSpace : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	ENiagaraCoordinateSpace_MAX    = 3
};



// UserDefinedEnum ENiagaraOrientationAxis.ENiagaraOrientationAxis
enum class ENiagaraOrientationAxis : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	ENiagaraOrientationAxis_MAX    = 3
};



// UserDefinedEnum ENiagaraBooleanLogicOps.ENiagaraBooleanLogicOps
enum class ENiagaraBooleanLogicOps : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator2                 = 1,
	NewEnumerator4                 = 2,
	NewEnumerator5                 = 3,
	ENiagaraBooleanLogicOps_MAX    = 4
};



// UserDefinedEnum ENiagaraRandomnessMode.ENiagaraRandomnessMode
enum class ENiagaraRandomnessMode : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	ENiagaraRandomnessMode_MAX     = 3
};



// UserDefinedEnum ENiagaraExpansionMode.ENiagaraExpansionMode
enum class ENiagaraExpansionMode : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	ENiagaraExpansionMode_MAX      = 3
};



// UserDefinedEnum EKeyCombinationDisplay.EKeyCombinationDisplay
enum class EKeyCombinationDisplay : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	EKeyCombinationDisplay_MAX     = 3
};



// UserDefinedEnum EKeyConflict.EKeyConflict
enum class EKeyConflict : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator2                 = 1,
	NewEnumerator3                 = 2,
	NewEnumerator1                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	EKeyConflict_MAX               = 6
};



// UserDefinedEnum EModifySetting.EModifySetting
enum class EModifySetting : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	EModifySetting_MAX             = 3
};



// UserDefinedEnum EAudioType.EAudioType
enum class EAudioType : uint8_t
{
	NewEnumerator4                 = 0,
	NewEnumerator0                 = 1,
	NewEnumerator1                 = 2,
	NewEnumerator2                 = 3,
	NewEnumerator3                 = 4,
	NewEnumerator5                 = 5,
	EAudioType_MAX                 = 6
};



// UserDefinedEnum E_SPS_IconTransitionAnimation.E_SPS_IconTransitionAnimation
enum class E_SPS_IconTransitionAnimation : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator4                 = 2,
	NewEnumerator5                 = 3,
	E_SPS_MAX                      = 4
};



// UserDefinedEnum E_SPS_IconLoopAnimation.E_SPS_IconLoopAnimation
enum class E_SPS_IconLoopAnimation : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator6                 = 1,
	NewEnumerator7                 = 2,
	NewEnumerator2                 = 3,
	NewEnumerator3                 = 4,
	E_SPS_MAX                      = 5
};



// UserDefinedEnum E_SPS_TraceMethod.E_SPS_TraceMethod
enum class E_SPS_TraceMethod : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	E_SPS_MAX                      = 3
};



// UserDefinedEnum E_SPS_MenuSelectionType.E_SPS_MenuSelectionType
enum class E_SPS_MenuSelectionType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	E_SPS_MAX                      = 2
};



// UserDefinedEnum ItemDragWidgetType.ItemDragWidgetType
enum class EItemDragWidgetType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	ItemDragWidgetType_MAX         = 5
};



// UserDefinedEnum BP-PerkLevelUpInfoEnum.BP-PerkLevelUpInfoEnum
enum class EBP_PerkLevelUpInfoEnum : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	BP_PerkLevelUpInfoEnum_MAX     = 3
};



// UserDefinedEnum CollisionTypeEnum.CollisionTypeEnum
enum class ECollisionTypeEnum : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	CollisionTypeEnum_MAX          = 4
};



// UserDefinedEnum ConfirmPopupType.ConfirmPopupType
enum class EConfirmPopupType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	ConfirmPopupType_MAX           = 5
};



// UserDefinedEnum LOOKPresetsEnum.LOOKPresetsEnum
enum class ELOOKPresetsEnum : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	NewEnumerator6                 = 6,
	NewEnumerator7                 = 7,
	NewEnumerator8                 = 8,
	NewEnumerator9                 = 9,
	NewEnumerator10                = 10,
	NewEnumerator11                = 11,
	NewEnumerator12                = 12,
	NewEnumerator13                = 13,
	NewEnumerator14                = 14,
	NewEnumerator15                = 15,
	NewEnumerator16                = 16,
	NewEnumerator17                = 17,
	NewEnumerator50                = 18,
	NewEnumerator51                = 19,
	NewEnumerator52                = 20,
	NewEnumerator53                = 21,
	NewEnumerator54                = 22,
	NewEnumerator18                = 23,
	NewEnumerator19                = 24,
	NewEnumerator20                = 25,
	NewEnumerator21                = 26,
	NewEnumerator22                = 27,
	NewEnumerator23                = 28,
	NewEnumerator24                = 29,
	NewEnumerator25                = 30,
	NewEnumerator26                = 31,
	NewEnumerator27                = 32,
	NewEnumerator28                = 33,
	NewEnumerator29                = 34,
	NewEnumerator30                = 35,
	NewEnumerator31                = 36,
	NewEnumerator32                = 37,
	NewEnumerator33                = 38,
	NewEnumerator34                = 39,
	NewEnumerator35                = 40,
	NewEnumerator36                = 41,
	NewEnumerator37                = 42,
	NewEnumerator38                = 43,
	NewEnumerator39                = 44,
	NewEnumerator40                = 45,
	NewEnumerator41                = 46,
	NewEnumerator42                = 47,
	NewEnumerator43                = 48,
	NewEnumerator44                = 49,
	NewEnumerator45                = 50,
	NewEnumerator46                = 51,
	NewEnumerator47                = 52,
	NewEnumerator48                = 53,
	NewEnumerator49                = 54,
	NewEnumerator55                = 55,
	NewEnumerator56                = 56,
	NewEnumerator57                = 57,
	NewEnumerator58                = 58,
	NewEnumerator59                = 59,
	NewEnumerator60                = 60,
	NewEnumerator61                = 61,
	NewEnumerator62                = 62,
	NewEnumerator63                = 63,
	NewEnumerator64                = 64,
	NewEnumerator65                = 65,
	NewEnumerator66                = 66,
	NewEnumerator67                = 67,
	NewEnumerator68                = 68,
	NewEnumerator69                = 69,
	NewEnumerator70                = 70,
	NewEnumerator71                = 71,
	NewEnumerator72                = 72,
	NewEnumerator73                = 73,
	NewEnumerator74                = 74,
	NewEnumerator75                = 75,
	NewEnumerator76                = 76,
	NewEnumerator77                = 77,
	NewEnumerator78                = 78,
	NewEnumerator79                = 79,
	NewEnumerator80                = 80,
	NewEnumerator81                = 81,
	NewEnumerator82                = 82,
	NewEnumerator83                = 83,
	NewEnumerator84                = 84,
	NewEnumerator85                = 85,
	NewEnumerator86                = 86,
	NewEnumerator87                = 87,
	NewEnumerator88                = 88,
	NewEnumerator89                = 89,
	NewEnumerator90                = 90,
	NewEnumerator91                = 91,
	NewEnumerator92                = 92,
	NewEnumerator93                = 93,
	NewEnumerator94                = 94,
	NewEnumerator95                = 95,
	NewEnumerator96                = 96,
	NewEnumerator97                = 97,
	NewEnumerator98                = 98,
	NewEnumerator99                = 99,
	NewEnumerator100               = 100,
	NewEnumerator101               = 101,
	NewEnumerator102               = 102,
	NewEnumerator103               = 103,
	NewEnumerator104               = 104,
	NewEnumerator105               = 105,
	NewEnumerator106               = 106,
	NewEnumerator107               = 107,
	NewEnumerator108               = 108,
	NewEnumerator109               = 109,
	NewEnumerator110               = 110,
	NewEnumerator111               = 111,
	NewEnumerator112               = 112,
	NewEnumerator113               = 113,
	NewEnumerator114               = 114,
	NewEnumerator115               = 115,
	NewEnumerator116               = 116,
	NewEnumerator117               = 117,
	NewEnumerator118               = 118,
	NewEnumerator119               = 119,
	NewEnumerator120               = 120,
	NewEnumerator121               = 121,
	NewEnumerator122               = 122,
	NewEnumerator123               = 123,
	NewEnumerator124               = 124,
	NewEnumerator125               = 125,
	NewEnumerator126               = 126,
	NewEnumerator127               = 127,
	NewEnumerator128               = 128,
	NewEnumerator129               = 129,
	NewEnumerator130               = 130,
	NewEnumerator131               = 131,
	NewEnumerator132               = 132,
	NewEnumerator133               = 133,
	NewEnumerator134               = 134,
	NewEnumerator135               = 135,
	NewEnumerator136               = 136,
	NewEnumerator137               = 137,
	NewEnumerator138               = 138,
	NewEnumerator139               = 139,
	NewEnumerator140               = 140,
	NewEnumerator141               = 141,
	NewEnumerator142               = 142,
	NewEnumerator143               = 143,
	NewEnumerator144               = 144,
	NewEnumerator145               = 145,
	NewEnumerator146               = 146,
	NewEnumerator147               = 147,
	NewEnumerator148               = 148,
	NewEnumerator149               = 149,
	LOOKPresetsEnum_MAX            = 150
};



// UserDefinedEnum DrawingNoiseModes.DrawingNoiseModes
enum class EDrawingNoiseModes : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	DrawingNoiseModes_MAX          = 2
};



// UserDefinedEnum ColorChannels.ColorChannels
enum class EColorChannels : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	ColorChannels_MAX              = 3
};



// UserDefinedEnum BlendModes.BlendModes
enum class EBlendModes : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	NewEnumerator2                 = 2,
	NewEnumerator3                 = 3,
	NewEnumerator4                 = 4,
	NewEnumerator5                 = 5,
	NewEnumerator6                 = 6,
	NewEnumerator7                 = 7,
	NewEnumerator8                 = 8,
	NewEnumerator9                 = 9,
	NewEnumerator10                = 10,
	NewEnumerator11                = 11,
	NewEnumerator12                = 12,
	NewEnumerator13                = 13,
	NewEnumerator14                = 14,
	NewEnumerator15                = 15,
	BlendModes_MAX                 = 16
};



// UserDefinedEnum EIntTypes.EIntTypes
enum class EIntTypes : uint8_t
{
	NewEnumerator4                 = 0,
	NewEnumerator5                 = 1,
	NewEnumerator6                 = 2,
	NewEnumerator7                 = 3,
	EIntTypes_MAX                  = 4
};



// UserDefinedEnum E_DrawingType.E_DrawingType
enum class E_DrawingType : uint8_t
{
	NewEnumerator0                 = 0,
	NewEnumerator1                 = 1,
	E_MAX                          = 2
};



