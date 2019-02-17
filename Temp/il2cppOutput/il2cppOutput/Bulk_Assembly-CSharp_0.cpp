#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// CameraScript
struct CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9;
// System.Action`1<ZXing.Result>
struct Action_1_tA392966B90E070586C1D84A91FEEC2EB92E2C096;
// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Byte[]
struct ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t0379CA60A18AD9845067432515E7A590DCAC6DCF;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t64BA96BFC713F221050385E91C868CE455C245D6;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer>
struct Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787;
// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource>
struct Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5;
// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat,ZXing.LuminanceSource>
struct Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.Object[]
struct ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Event
struct Event_t187FF6A6B357447B83EC2064823EE0AEC5263210;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture
struct Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.AspectRatioFitter
struct AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6;
// UnityEngine.UI.Button
struct Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.InputField
struct InputField_t533609195B110760BCFF00B746C87D81969CB005;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RawImage
struct RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;
// UnityEngine.WebCamTexture
struct WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73;
// ZXing.BarcodeReader
struct BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8;
// ZXing.Common.DecodingOptions
struct DecodingOptions_tF52BDBBA0787AE15CB426267C16182245F9C4AA4;
// ZXing.Reader
struct Reader_t62FD84E497A555A3881BE832D9BEE6DC00E01864;
// ZXing.Result
struct Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t29150A4A79D85EC889AC3141266464E93B8350EF;

extern RuntimeClass* BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IBarcodeReader_t0372201520E008EC141FFF4644C6B7A6B47A64D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
extern RuntimeClass* WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral177068E091A509F447CAE7B4614ABA284ED9FE75;
extern String_t* _stringLiteral53BFE0264CAECF3AF3A1DB825364BB24748B298A;
extern String_t* _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC;
extern const RuntimeMethod* CameraScript_back_m188157FC8C5D13F8F0FDEE3BEF69EA9E81DA5976_RuntimeMethod_var;
extern const RuntimeMethod* CameraScript_comment_mF440EE46DB708F258867CF8BB6BAED2B9ECBA58A_RuntimeMethod_var;
extern const RuntimeMethod* CameraScript_selected_m7057DCBE2184A4DC19FB4A6E152E073C2557D4B5_RuntimeMethod_var;
extern const uint32_t CameraScript_OnGUI_mA63E87F9DCD70FF56C8300CF9C67178903BF9E34_MetadataUsageId;
extern const uint32_t CameraScript_Start_m0B14A9408DDD8CEE45AE814E541B3D79E6AEBEEA_MetadataUsageId;
extern const uint32_t CameraScript_comment_mF440EE46DB708F258867CF8BB6BAED2B9ECBA58A_MetadataUsageId;
struct Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 ;

struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#define UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T6E0F7823762EE94BB8489B5AE41C7802A266D3D5_H
#ifndef BARCODEREADERGENERIC_1_T89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_H
#define BARCODEREADERGENERIC_1_T89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeReaderGeneric`1<UnityEngine.Color32[]>
struct  BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25  : public RuntimeObject
{
public:
	// ZXing.Reader ZXing.BarcodeReaderGeneric`1::reader
	RuntimeObject* ___reader_2;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource_BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createRGBLuminanceSource
	Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * ___createRGBLuminanceSource_3;
	// System.Func`4<T,System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::createLuminanceSource
	Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * ___createLuminanceSource_4;
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::createBinarizer
	Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * ___createBinarizer_5;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::usePreviousState
	bool ___usePreviousState_6;
	// ZXing.Common.DecodingOptions ZXing.BarcodeReaderGeneric`1::options
	DecodingOptions_tF52BDBBA0787AE15CB426267C16182245F9C4AA4 * ___options_7;
	// System.Action`1<ZXing.Result> ZXing.BarcodeReaderGeneric`1::ResultFound
	Action_1_tA392966B90E070586C1D84A91FEEC2EB92E2C096 * ___ResultFound_8;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<AutoRotate>k__BackingField
	bool ___U3CAutoRotateU3Ek__BackingField_9;
	// System.Boolean ZXing.BarcodeReaderGeneric`1::<TryInverted>k__BackingField
	bool ___U3CTryInvertedU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_reader_2() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___reader_2)); }
	inline RuntimeObject* get_reader_2() const { return ___reader_2; }
	inline RuntimeObject** get_address_of_reader_2() { return &___reader_2; }
	inline void set_reader_2(RuntimeObject* value)
	{
		___reader_2 = value;
		Il2CppCodeGenWriteBarrier((&___reader_2), value);
	}

	inline static int32_t get_offset_of_createRGBLuminanceSource_3() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___createRGBLuminanceSource_3)); }
	inline Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * get_createRGBLuminanceSource_3() const { return ___createRGBLuminanceSource_3; }
	inline Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 ** get_address_of_createRGBLuminanceSource_3() { return &___createRGBLuminanceSource_3; }
	inline void set_createRGBLuminanceSource_3(Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * value)
	{
		___createRGBLuminanceSource_3 = value;
		Il2CppCodeGenWriteBarrier((&___createRGBLuminanceSource_3), value);
	}

	inline static int32_t get_offset_of_createLuminanceSource_4() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___createLuminanceSource_4)); }
	inline Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * get_createLuminanceSource_4() const { return ___createLuminanceSource_4; }
	inline Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 ** get_address_of_createLuminanceSource_4() { return &___createLuminanceSource_4; }
	inline void set_createLuminanceSource_4(Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * value)
	{
		___createLuminanceSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___createLuminanceSource_4), value);
	}

	inline static int32_t get_offset_of_createBinarizer_5() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___createBinarizer_5)); }
	inline Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * get_createBinarizer_5() const { return ___createBinarizer_5; }
	inline Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 ** get_address_of_createBinarizer_5() { return &___createBinarizer_5; }
	inline void set_createBinarizer_5(Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * value)
	{
		___createBinarizer_5 = value;
		Il2CppCodeGenWriteBarrier((&___createBinarizer_5), value);
	}

	inline static int32_t get_offset_of_usePreviousState_6() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___usePreviousState_6)); }
	inline bool get_usePreviousState_6() const { return ___usePreviousState_6; }
	inline bool* get_address_of_usePreviousState_6() { return &___usePreviousState_6; }
	inline void set_usePreviousState_6(bool value)
	{
		___usePreviousState_6 = value;
	}

	inline static int32_t get_offset_of_options_7() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___options_7)); }
	inline DecodingOptions_tF52BDBBA0787AE15CB426267C16182245F9C4AA4 * get_options_7() const { return ___options_7; }
	inline DecodingOptions_tF52BDBBA0787AE15CB426267C16182245F9C4AA4 ** get_address_of_options_7() { return &___options_7; }
	inline void set_options_7(DecodingOptions_tF52BDBBA0787AE15CB426267C16182245F9C4AA4 * value)
	{
		___options_7 = value;
		Il2CppCodeGenWriteBarrier((&___options_7), value);
	}

	inline static int32_t get_offset_of_ResultFound_8() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___ResultFound_8)); }
	inline Action_1_tA392966B90E070586C1D84A91FEEC2EB92E2C096 * get_ResultFound_8() const { return ___ResultFound_8; }
	inline Action_1_tA392966B90E070586C1D84A91FEEC2EB92E2C096 ** get_address_of_ResultFound_8() { return &___ResultFound_8; }
	inline void set_ResultFound_8(Action_1_tA392966B90E070586C1D84A91FEEC2EB92E2C096 * value)
	{
		___ResultFound_8 = value;
		Il2CppCodeGenWriteBarrier((&___ResultFound_8), value);
	}

	inline static int32_t get_offset_of_U3CAutoRotateU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___U3CAutoRotateU3Ek__BackingField_9)); }
	inline bool get_U3CAutoRotateU3Ek__BackingField_9() const { return ___U3CAutoRotateU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CAutoRotateU3Ek__BackingField_9() { return &___U3CAutoRotateU3Ek__BackingField_9; }
	inline void set_U3CAutoRotateU3Ek__BackingField_9(bool value)
	{
		___U3CAutoRotateU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CTryInvertedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25, ___U3CTryInvertedU3Ek__BackingField_10)); }
	inline bool get_U3CTryInvertedU3Ek__BackingField_10() const { return ___U3CTryInvertedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CTryInvertedU3Ek__BackingField_10() { return &___U3CTryInvertedU3Ek__BackingField_10; }
	inline void set_U3CTryInvertedU3Ek__BackingField_10(bool value)
	{
		___U3CTryInvertedU3Ek__BackingField_10 = value;
	}
};

struct BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_StaticFields
{
public:
	// System.Func`2<ZXing.LuminanceSource,ZXing.Binarizer> ZXing.BarcodeReaderGeneric`1::defaultCreateBinarizer
	Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * ___defaultCreateBinarizer_0;
	// System.Func`5<System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource_BitmapFormat,ZXing.LuminanceSource> ZXing.BarcodeReaderGeneric`1::defaultCreateRGBLuminanceSource
	Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * ___defaultCreateRGBLuminanceSource_1;

public:
	inline static int32_t get_offset_of_defaultCreateBinarizer_0() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_StaticFields, ___defaultCreateBinarizer_0)); }
	inline Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * get_defaultCreateBinarizer_0() const { return ___defaultCreateBinarizer_0; }
	inline Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 ** get_address_of_defaultCreateBinarizer_0() { return &___defaultCreateBinarizer_0; }
	inline void set_defaultCreateBinarizer_0(Func_2_t9C00831E27DD334C0CC90DE71BF85E6EE4F9F787 * value)
	{
		___defaultCreateBinarizer_0 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateBinarizer_0), value);
	}

	inline static int32_t get_offset_of_defaultCreateRGBLuminanceSource_1() { return static_cast<int32_t>(offsetof(BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_StaticFields, ___defaultCreateRGBLuminanceSource_1)); }
	inline Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * get_defaultCreateRGBLuminanceSource_1() const { return ___defaultCreateRGBLuminanceSource_1; }
	inline Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 ** get_address_of_defaultCreateRGBLuminanceSource_1() { return &___defaultCreateRGBLuminanceSource_1; }
	inline void set_defaultCreateRGBLuminanceSource_1(Func_5_t20A06B817EB09D324F747EAF43D7F3D0EC516D19 * value)
	{
		___defaultCreateRGBLuminanceSource_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateRGBLuminanceSource_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEREADERGENERIC_1_T89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#define COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23_H
#ifndef DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#define DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_TB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03_H
#ifndef UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#define UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t8D571697F3A1B33B696E2F80500C21F1A1748C5D* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#define SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef BARCODEREADER_TD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_H
#define BARCODEREADER_TD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeReader
struct  BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8  : public BarcodeReaderGeneric_1_t89D9F5C1FCA0AF0ECB40B56EA39A87560A7F5F25
{
public:

public:
};

struct BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_StaticFields
{
public:
	// System.Func`4<UnityEngine.Color32[],System.Int32,System.Int32,ZXing.LuminanceSource> ZXing.BarcodeReader::defaultCreateLuminanceSource
	Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * ___defaultCreateLuminanceSource_11;

public:
	inline static int32_t get_offset_of_defaultCreateLuminanceSource_11() { return static_cast<int32_t>(offsetof(BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_StaticFields, ___defaultCreateLuminanceSource_11)); }
	inline Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * get_defaultCreateLuminanceSource_11() const { return ___defaultCreateLuminanceSource_11; }
	inline Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 ** get_address_of_defaultCreateLuminanceSource_11() { return &___defaultCreateLuminanceSource_11; }
	inline void set_defaultCreateLuminanceSource_11(Func_4_t4F99C05DA8EB697BC87B862538A66D2A546713B5 * value)
	{
		___defaultCreateLuminanceSource_11 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCreateLuminanceSource_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEREADER_TD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#define TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_tDD21D45735F3021BF4C6C7C1A660ABF03EBCE602, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_TDD21D45735F3021BF4C6C7C1A660ABF03EBCE602_H
#ifndef ASPECTMODE_T2D8C205891B8E63CA16B6AC3BA1D41320903C65A_H
#define ASPECTMODE_T2D8C205891B8E63CA16B6AC3BA1D41320903C65A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter_AspectMode
struct  AspectMode_t2D8C205891B8E63CA16B6AC3BA1D41320903C65A 
{
public:
	// System.Int32 UnityEngine.UI.AspectRatioFitter_AspectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AspectMode_t2D8C205891B8E63CA16B6AC3BA1D41320903C65A, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASPECTMODE_T2D8C205891B8E63CA16B6AC3BA1D41320903C65A_H
#ifndef BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#define BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button_ButtonClickedEvent
struct  ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB  : public UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTONCLICKEDEVENT_T975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB_H
#ifndef COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#define COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA_H
#ifndef CHARACTERVALIDATION_T2661E1767E01D63D4C8CE8F95C53C617118F206E_H
#define CHARACTERVALIDATION_T2661E1767E01D63D4C8CE8F95C53C617118F206E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField_CharacterValidation
struct  CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E 
{
public:
	// System.Int32 UnityEngine.UI.InputField_CharacterValidation::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharacterValidation_t2661E1767E01D63D4C8CE8F95C53C617118F206E, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERVALIDATION_T2661E1767E01D63D4C8CE8F95C53C617118F206E_H
#ifndef CONTENTTYPE_T8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048_H
#define CONTENTTYPE_T8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField_ContentType
struct  ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048 
{
public:
	// System.Int32 UnityEngine.UI.InputField_ContentType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T8F7DB5382A51BC2D99814DEB6BCD904D5E5B2048_H
#ifndef INPUTTYPE_T1726189312457C509B0693B5ACDB9DA7387EB54A_H
#define INPUTTYPE_T1726189312457C509B0693B5ACDB9DA7387EB54A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField_InputType
struct  InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A 
{
public:
	// System.Int32 UnityEngine.UI.InputField_InputType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InputType_t1726189312457C509B0693B5ACDB9DA7387EB54A, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTYPE_T1726189312457C509B0693B5ACDB9DA7387EB54A_H
#ifndef LINETYPE_T9C34D02DDDA75D3E914ADD9E417258B40D56DED6_H
#define LINETYPE_T9C34D02DDDA75D3E914ADD9E417258B40D56DED6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField_LineType
struct  LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6 
{
public:
	// System.Int32 UnityEngine.UI.InputField_LineType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LineType_t9C34D02DDDA75D3E914ADD9E417258B40D56DED6, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINETYPE_T9C34D02DDDA75D3E914ADD9E417258B40D56DED6_H
#ifndef MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#define MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T93F92BD50B147AE38D82BA33FA77FD247A59FE26_H
#ifndef SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#define SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable_SelectionState
struct  SelectionState_tF089B96B46A592693753CBF23C52A3887632D210 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_tF089B96B46A592693753CBF23C52A3887632D210, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_TF089B96B46A592693753CBF23C52A3887632D210_H
#ifndef TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#define TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_TA9261C608B54C52324084A0B080E7A3E0548A181_H
#ifndef WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#define WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamKind
struct  WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WebCamKind_t658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMKIND_T658D67B14A1B37DCF51FF51D4ACE4CC3ADB7C33E_H
#ifndef BARCODEFORMAT_T590C5FC7F33F6F279F97CF1071AB576A9B1D6734_H
#define BARCODEFORMAT_T590C5FC7F33F6F279F97CF1071AB576A9B1D6734_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.BarcodeFormat
struct  BarcodeFormat_t590C5FC7F33F6F279F97CF1071AB576A9B1D6734 
{
public:
	// System.Int32 ZXing.BarcodeFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BarcodeFormat_t590C5FC7F33F6F279F97CF1071AB576A9B1D6734, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BARCODEFORMAT_T590C5FC7F33F6F279F97CF1071AB576A9B1D6734_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#define TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T387FE83BB848001FD06B14707AEA6D5A0F6A95F4_H
#ifndef NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#define NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T761250C05C09773B75F5E0D52DDCBBFE60288A07_H
#ifndef WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#define WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamDevice
struct  WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_0), value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DepthCameraName_1), value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t7B0EB2421A00B22819A02FE474A7F747845BED9A* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Resolutions_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * ___m_Resolutions_4;
};
#endif // WEBCAMDEVICE_TA545BEDFAFD78866911F4837B8406845541B8F54_H
#ifndef RESULT_TEEA7D9542485B75CE6FCE70E388703E55A4759A7_H
#define RESULT_TEEA7D9542485B75CE6FCE70E388703E55A4759A7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZXing.Result
struct  Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7  : public RuntimeObject
{
public:
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t29150A4A79D85EC889AC3141266464E93B8350EF* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CTextU3Ek__BackingField_0)); }
	inline String_t* get_U3CTextU3Ek__BackingField_0() const { return ___U3CTextU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CTextU3Ek__BackingField_0() { return &___U3CTextU3Ek__BackingField_0; }
	inline void set_U3CTextU3Ek__BackingField_0(String_t* value)
	{
		___U3CTextU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CRawBytesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CRawBytesU3Ek__BackingField_1)); }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* get_U3CRawBytesU3Ek__BackingField_1() const { return ___U3CRawBytesU3Ek__BackingField_1; }
	inline ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8** get_address_of_U3CRawBytesU3Ek__BackingField_1() { return &___U3CRawBytesU3Ek__BackingField_1; }
	inline void set_U3CRawBytesU3Ek__BackingField_1(ByteU5BU5D_t8E14BD25C7BEB727CB1849CF449DE26B113309E8* value)
	{
		___U3CRawBytesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawBytesU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CResultPointsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CResultPointsU3Ek__BackingField_2)); }
	inline ResultPointU5BU5D_t29150A4A79D85EC889AC3141266464E93B8350EF* get_U3CResultPointsU3Ek__BackingField_2() const { return ___U3CResultPointsU3Ek__BackingField_2; }
	inline ResultPointU5BU5D_t29150A4A79D85EC889AC3141266464E93B8350EF** get_address_of_U3CResultPointsU3Ek__BackingField_2() { return &___U3CResultPointsU3Ek__BackingField_2; }
	inline void set_U3CResultPointsU3Ek__BackingField_2(ResultPointU5BU5D_t29150A4A79D85EC889AC3141266464E93B8350EF* value)
	{
		___U3CResultPointsU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultPointsU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBarcodeFormatU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CBarcodeFormatU3Ek__BackingField_3)); }
	inline int32_t get_U3CBarcodeFormatU3Ek__BackingField_3() const { return ___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CBarcodeFormatU3Ek__BackingField_3() { return &___U3CBarcodeFormatU3Ek__BackingField_3; }
	inline void set_U3CBarcodeFormatU3Ek__BackingField_3(int32_t value)
	{
		___U3CBarcodeFormatU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CResultMetadataU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CResultMetadataU3Ek__BackingField_4)); }
	inline RuntimeObject* get_U3CResultMetadataU3Ek__BackingField_4() const { return ___U3CResultMetadataU3Ek__BackingField_4; }
	inline RuntimeObject** get_address_of_U3CResultMetadataU3Ek__BackingField_4() { return &___U3CResultMetadataU3Ek__BackingField_4; }
	inline void set_U3CResultMetadataU3Ek__BackingField_4(RuntimeObject* value)
	{
		___U3CResultMetadataU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CResultMetadataU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CTimestampU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7, ___U3CTimestampU3Ek__BackingField_5)); }
	inline int64_t get_U3CTimestampU3Ek__BackingField_5() const { return ___U3CTimestampU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CTimestampU3Ek__BackingField_5() { return &___U3CTimestampU3Ek__BackingField_5; }
	inline void set_U3CTimestampU3Ek__BackingField_5(int64_t value)
	{
		___U3CTimestampU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULT_TEEA7D9542485B75CE6FCE70E388703E55A4759A7_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#define UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_TD19B26F1B2C048E38FD5801A33573BE01064CAF4_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#define WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WebCamTexture
struct  WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73  : public Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBCAMTEXTURE_TEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef CAMERASCRIPT_TFD993C03E212C26DEDD89B96FD4B851BFDAE41C9_H
#define CAMERASCRIPT_TFD993C03E212C26DEDD89B96FD4B851BFDAE41C9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraScript
struct  CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean CameraScript::camAvailable
	bool ___camAvailable_4;
	// UnityEngine.WebCamTexture CameraScript::backCam
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ___backCam_5;
	// UnityEngine.Texture CameraScript::defaultBackground
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___defaultBackground_6;
	// UnityEngine.UI.Button CameraScript::button
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___button_7;
	// UnityEngine.UI.Text CameraScript::textbox
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___textbox_8;
	// UnityEngine.GameObject CameraScript::panel
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___panel_9;
	// UnityEngine.UI.InputField CameraScript::inHere
	InputField_t533609195B110760BCFF00B746C87D81969CB005 * ___inHere_10;
	// UnityEngine.UI.Button CameraScript::backButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___backButton_11;
	// UnityEngine.UI.Button CameraScript::commentButton
	Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * ___commentButton_12;
	// UnityEngine.UI.Text CameraScript::commentBox
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___commentBox_13;
	// UnityEngine.UI.RawImage CameraScript::background
	RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * ___background_14;
	// UnityEngine.UI.AspectRatioFitter CameraScript::fit
	AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * ___fit_15;
	// UnityEngine.WebCamTexture CameraScript::camTexture
	WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * ___camTexture_16;
	// UnityEngine.Rect CameraScript::screenRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___screenRect_17;

public:
	inline static int32_t get_offset_of_camAvailable_4() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___camAvailable_4)); }
	inline bool get_camAvailable_4() const { return ___camAvailable_4; }
	inline bool* get_address_of_camAvailable_4() { return &___camAvailable_4; }
	inline void set_camAvailable_4(bool value)
	{
		___camAvailable_4 = value;
	}

	inline static int32_t get_offset_of_backCam_5() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___backCam_5)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get_backCam_5() const { return ___backCam_5; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of_backCam_5() { return &___backCam_5; }
	inline void set_backCam_5(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		___backCam_5 = value;
		Il2CppCodeGenWriteBarrier((&___backCam_5), value);
	}

	inline static int32_t get_offset_of_defaultBackground_6() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___defaultBackground_6)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_defaultBackground_6() const { return ___defaultBackground_6; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_defaultBackground_6() { return &___defaultBackground_6; }
	inline void set_defaultBackground_6(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___defaultBackground_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBackground_6), value);
	}

	inline static int32_t get_offset_of_button_7() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___button_7)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_button_7() const { return ___button_7; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_button_7() { return &___button_7; }
	inline void set_button_7(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___button_7 = value;
		Il2CppCodeGenWriteBarrier((&___button_7), value);
	}

	inline static int32_t get_offset_of_textbox_8() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___textbox_8)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_textbox_8() const { return ___textbox_8; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_textbox_8() { return &___textbox_8; }
	inline void set_textbox_8(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___textbox_8 = value;
		Il2CppCodeGenWriteBarrier((&___textbox_8), value);
	}

	inline static int32_t get_offset_of_panel_9() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___panel_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_panel_9() const { return ___panel_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_panel_9() { return &___panel_9; }
	inline void set_panel_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___panel_9 = value;
		Il2CppCodeGenWriteBarrier((&___panel_9), value);
	}

	inline static int32_t get_offset_of_inHere_10() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___inHere_10)); }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 * get_inHere_10() const { return ___inHere_10; }
	inline InputField_t533609195B110760BCFF00B746C87D81969CB005 ** get_address_of_inHere_10() { return &___inHere_10; }
	inline void set_inHere_10(InputField_t533609195B110760BCFF00B746C87D81969CB005 * value)
	{
		___inHere_10 = value;
		Il2CppCodeGenWriteBarrier((&___inHere_10), value);
	}

	inline static int32_t get_offset_of_backButton_11() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___backButton_11)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_backButton_11() const { return ___backButton_11; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_backButton_11() { return &___backButton_11; }
	inline void set_backButton_11(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___backButton_11 = value;
		Il2CppCodeGenWriteBarrier((&___backButton_11), value);
	}

	inline static int32_t get_offset_of_commentButton_12() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___commentButton_12)); }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * get_commentButton_12() const { return ___commentButton_12; }
	inline Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B ** get_address_of_commentButton_12() { return &___commentButton_12; }
	inline void set_commentButton_12(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * value)
	{
		___commentButton_12 = value;
		Il2CppCodeGenWriteBarrier((&___commentButton_12), value);
	}

	inline static int32_t get_offset_of_commentBox_13() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___commentBox_13)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_commentBox_13() const { return ___commentBox_13; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_commentBox_13() { return &___commentBox_13; }
	inline void set_commentBox_13(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___commentBox_13 = value;
		Il2CppCodeGenWriteBarrier((&___commentBox_13), value);
	}

	inline static int32_t get_offset_of_background_14() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___background_14)); }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * get_background_14() const { return ___background_14; }
	inline RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 ** get_address_of_background_14() { return &___background_14; }
	inline void set_background_14(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * value)
	{
		___background_14 = value;
		Il2CppCodeGenWriteBarrier((&___background_14), value);
	}

	inline static int32_t get_offset_of_fit_15() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___fit_15)); }
	inline AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * get_fit_15() const { return ___fit_15; }
	inline AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 ** get_address_of_fit_15() { return &___fit_15; }
	inline void set_fit_15(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * value)
	{
		___fit_15 = value;
		Il2CppCodeGenWriteBarrier((&___fit_15), value);
	}

	inline static int32_t get_offset_of_camTexture_16() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___camTexture_16)); }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * get_camTexture_16() const { return ___camTexture_16; }
	inline WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 ** get_address_of_camTexture_16() { return &___camTexture_16; }
	inline void set_camTexture_16(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * value)
	{
		___camTexture_16 = value;
		Il2CppCodeGenWriteBarrier((&___camTexture_16), value);
	}

	inline static int32_t get_offset_of_screenRect_17() { return static_cast<int32_t>(offsetof(CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9, ___screenRect_17)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_screenRect_17() const { return ___screenRect_17; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_screenRect_17() { return &___screenRect_17; }
	inline void set_screenRect_17(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___screenRect_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERASCRIPT_TFD993C03E212C26DEDD89B96FD4B851BFDAE41C9_H
#ifndef UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#define UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3C3C339CD5677BA7FC27C352FED8B78052A3FE70_H
#ifndef ASPECTRATIOFITTER_T3CA8A085831067C09B872C67F6E7F6F4EBB967B6_H
#define ASPECTRATIOFITTER_T3CA8A085831067C09B872C67F6E7F6F4EBB967B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.AspectRatioFitter
struct  AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.AspectRatioFitter_AspectMode UnityEngine.UI.AspectRatioFitter::m_AspectMode
	int32_t ___m_AspectMode_4;
	// System.Single UnityEngine.UI.AspectRatioFitter::m_AspectRatio
	float ___m_AspectRatio_5;
	// UnityEngine.RectTransform UnityEngine.UI.AspectRatioFitter::m_Rect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_Rect_6;
	// System.Boolean UnityEngine.UI.AspectRatioFitter::m_DelayedSetDirty
	bool ___m_DelayedSetDirty_7;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.AspectRatioFitter::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_8;

public:
	inline static int32_t get_offset_of_m_AspectMode_4() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6, ___m_AspectMode_4)); }
	inline int32_t get_m_AspectMode_4() const { return ___m_AspectMode_4; }
	inline int32_t* get_address_of_m_AspectMode_4() { return &___m_AspectMode_4; }
	inline void set_m_AspectMode_4(int32_t value)
	{
		___m_AspectMode_4 = value;
	}

	inline static int32_t get_offset_of_m_AspectRatio_5() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6, ___m_AspectRatio_5)); }
	inline float get_m_AspectRatio_5() const { return ___m_AspectRatio_5; }
	inline float* get_address_of_m_AspectRatio_5() { return &___m_AspectRatio_5; }
	inline void set_m_AspectRatio_5(float value)
	{
		___m_AspectRatio_5 = value;
	}

	inline static int32_t get_offset_of_m_Rect_6() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6, ___m_Rect_6)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_Rect_6() const { return ___m_Rect_6; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_Rect_6() { return &___m_Rect_6; }
	inline void set_m_Rect_6(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_Rect_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_6), value);
	}

	inline static int32_t get_offset_of_m_DelayedSetDirty_7() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6, ___m_DelayedSetDirty_7)); }
	inline bool get_m_DelayedSetDirty_7() const { return ___m_DelayedSetDirty_7; }
	inline bool* get_address_of_m_DelayedSetDirty_7() { return &___m_DelayedSetDirty_7; }
	inline void set_m_DelayedSetDirty_7(bool value)
	{
		___m_DelayedSetDirty_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_8() { return static_cast<int32_t>(offsetof(AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6, ___m_Tracker_8)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_8() const { return ___m_Tracker_8; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_8() { return &___m_Tracker_8; }
	inline void set_m_Tracker_8(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASPECTRATIOFITTER_T3CA8A085831067C09B872C67F6E7F6F4EBB967B6_H
#ifndef GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#define GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_9)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_11)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_TBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_H
#ifndef SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#define SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_5;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable_SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_5)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_7)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_8)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_11)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_17)); }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t64BA96BFC713F221050385E91C868CE455C245D6 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t64BA96BFC713F221050385E91C868CE455C245D6 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_List_4)); }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_tC6550F4D86CF67D987B6B46F46941B36D02A9680 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_TAA9065030FE0468018DEC880302F95FEA9C0133A_H
#ifndef BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#define BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Button
struct  Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Button_ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * ___m_OnClick_18;

public:
	inline static int32_t get_offset_of_m_OnClick_18() { return static_cast<int32_t>(offsetof(Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B, ___m_OnClick_18)); }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * get_m_OnClick_18() const { return ___m_OnClick_18; }
	inline ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB ** get_address_of_m_OnClick_18() { return &___m_OnClick_18; }
	inline void set_m_OnClick_18(ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * value)
	{
		___m_OnClick_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnClick_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUTTON_T1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B_H
#ifndef INPUTFIELD_T533609195B110760BCFF00B746C87D81969CB005_H
#define INPUTFIELD_T533609195B110760BCFF00B746C87D81969CB005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t533609195B110760BCFF00B746C87D81969CB005  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * ___m_Keyboard_18;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___m_TextComponent_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_Placeholder_21;
	// UnityEngine.UI.InputField_ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_22;
	// UnityEngine.UI.InputField_InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_23;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_24;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_25;
	// UnityEngine.UI.InputField_LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_26;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_27;
	// UnityEngine.UI.InputField_CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_28;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_29;
	// UnityEngine.UI.InputField_SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * ___m_OnEndEdit_30;
	// UnityEngine.UI.InputField_OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * ___m_OnValueChanged_31;
	// UnityEngine.UI.InputField_OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * ___m_OnValidateInput_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_CaretColor_33;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_34;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectionColor_35;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_36;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_38;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_39;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_41;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___caretRectTrans_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_CursorVerts_43;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_InputTextCache_44;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CachedInputRenderer_45;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_46;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_Mesh_47;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_48;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_49;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_50;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_51;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_54;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_BlinkCoroutine_55;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_56;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_57;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___m_DragCoroutine_59;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_60;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_61;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_62;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * ___m_WaitForSecondsRealtime_63;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * ___m_ProcessingEvent_65;

public:
	inline static int32_t get_offset_of_m_Keyboard_18() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Keyboard_18)); }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * get_m_Keyboard_18() const { return ___m_Keyboard_18; }
	inline TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 ** get_address_of_m_Keyboard_18() { return &___m_Keyboard_18; }
	inline void set_m_Keyboard_18(TouchScreenKeyboard_t2A69F85698E9780470181532D3F2BC903623FD90 * value)
	{
		___m_Keyboard_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Keyboard_18), value);
	}

	inline static int32_t get_offset_of_m_TextComponent_20() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_TextComponent_20)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_m_TextComponent_20() const { return ___m_TextComponent_20; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_m_TextComponent_20() { return &___m_TextComponent_20; }
	inline void set_m_TextComponent_20(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___m_TextComponent_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextComponent_20), value);
	}

	inline static int32_t get_offset_of_m_Placeholder_21() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Placeholder_21)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_Placeholder_21() const { return ___m_Placeholder_21; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_Placeholder_21() { return &___m_Placeholder_21; }
	inline void set_m_Placeholder_21(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_Placeholder_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Placeholder_21), value);
	}

	inline static int32_t get_offset_of_m_ContentType_22() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ContentType_22)); }
	inline int32_t get_m_ContentType_22() const { return ___m_ContentType_22; }
	inline int32_t* get_address_of_m_ContentType_22() { return &___m_ContentType_22; }
	inline void set_m_ContentType_22(int32_t value)
	{
		___m_ContentType_22 = value;
	}

	inline static int32_t get_offset_of_m_InputType_23() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputType_23)); }
	inline int32_t get_m_InputType_23() const { return ___m_InputType_23; }
	inline int32_t* get_address_of_m_InputType_23() { return &___m_InputType_23; }
	inline void set_m_InputType_23(int32_t value)
	{
		___m_InputType_23 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_24() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AsteriskChar_24)); }
	inline Il2CppChar get_m_AsteriskChar_24() const { return ___m_AsteriskChar_24; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_24() { return &___m_AsteriskChar_24; }
	inline void set_m_AsteriskChar_24(Il2CppChar value)
	{
		___m_AsteriskChar_24 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_25() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_KeyboardType_25)); }
	inline int32_t get_m_KeyboardType_25() const { return ___m_KeyboardType_25; }
	inline int32_t* get_address_of_m_KeyboardType_25() { return &___m_KeyboardType_25; }
	inline void set_m_KeyboardType_25(int32_t value)
	{
		___m_KeyboardType_25 = value;
	}

	inline static int32_t get_offset_of_m_LineType_26() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_LineType_26)); }
	inline int32_t get_m_LineType_26() const { return ___m_LineType_26; }
	inline int32_t* get_address_of_m_LineType_26() { return &___m_LineType_26; }
	inline void set_m_LineType_26(int32_t value)
	{
		___m_LineType_26 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_27() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HideMobileInput_27)); }
	inline bool get_m_HideMobileInput_27() const { return ___m_HideMobileInput_27; }
	inline bool* get_address_of_m_HideMobileInput_27() { return &___m_HideMobileInput_27; }
	inline void set_m_HideMobileInput_27(bool value)
	{
		___m_HideMobileInput_27 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_28() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterValidation_28)); }
	inline int32_t get_m_CharacterValidation_28() const { return ___m_CharacterValidation_28; }
	inline int32_t* get_address_of_m_CharacterValidation_28() { return &___m_CharacterValidation_28; }
	inline void set_m_CharacterValidation_28(int32_t value)
	{
		___m_CharacterValidation_28 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_29() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CharacterLimit_29)); }
	inline int32_t get_m_CharacterLimit_29() const { return ___m_CharacterLimit_29; }
	inline int32_t* get_address_of_m_CharacterLimit_29() { return &___m_CharacterLimit_29; }
	inline void set_m_CharacterLimit_29(int32_t value)
	{
		___m_CharacterLimit_29 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_30() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnEndEdit_30)); }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * get_m_OnEndEdit_30() const { return ___m_OnEndEdit_30; }
	inline SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A ** get_address_of_m_OnEndEdit_30() { return &___m_OnEndEdit_30; }
	inline void set_m_OnEndEdit_30(SubmitEvent_tE1EC12ACD7DE7D57B9ECBBACA05493E226E53E4A * value)
	{
		___m_OnEndEdit_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnEndEdit_30), value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_31() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValueChanged_31)); }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * get_m_OnValueChanged_31() const { return ___m_OnValueChanged_31; }
	inline OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A ** get_address_of_m_OnValueChanged_31() { return &___m_OnValueChanged_31; }
	inline void set_m_OnValueChanged_31(OnChangeEvent_t6C3C7DD6AEA262BB97AD53B0E669EC7EC19BCC1A * value)
	{
		___m_OnValueChanged_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_31), value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_32() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OnValidateInput_32)); }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * get_m_OnValidateInput_32() const { return ___m_OnValidateInput_32; }
	inline OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 ** get_address_of_m_OnValidateInput_32() { return &___m_OnValidateInput_32; }
	inline void set_m_OnValidateInput_32(OnValidateInput_t3E857B491A319A5B22F6AD3D02CFD22C1BBFD8D0 * value)
	{
		___m_OnValidateInput_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValidateInput_32), value);
	}

	inline static int32_t get_offset_of_m_CaretColor_33() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretColor_33)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_CaretColor_33() const { return ___m_CaretColor_33; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_CaretColor_33() { return &___m_CaretColor_33; }
	inline void set_m_CaretColor_33(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_CaretColor_33 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_34() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CustomCaretColor_34)); }
	inline bool get_m_CustomCaretColor_34() const { return ___m_CustomCaretColor_34; }
	inline bool* get_address_of_m_CustomCaretColor_34() { return &___m_CustomCaretColor_34; }
	inline void set_m_CustomCaretColor_34(bool value)
	{
		___m_CustomCaretColor_34 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_35() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_SelectionColor_35)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectionColor_35() const { return ___m_SelectionColor_35; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectionColor_35() { return &___m_SelectionColor_35; }
	inline void set_m_SelectionColor_35(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectionColor_35 = value;
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_36), value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_37() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretBlinkRate_37)); }
	inline float get_m_CaretBlinkRate_37() const { return ___m_CaretBlinkRate_37; }
	inline float* get_address_of_m_CaretBlinkRate_37() { return &___m_CaretBlinkRate_37; }
	inline void set_m_CaretBlinkRate_37(float value)
	{
		___m_CaretBlinkRate_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_38() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretWidth_38)); }
	inline int32_t get_m_CaretWidth_38() const { return ___m_CaretWidth_38; }
	inline int32_t* get_address_of_m_CaretWidth_38() { return &___m_CaretWidth_38; }
	inline void set_m_CaretWidth_38(int32_t value)
	{
		___m_CaretWidth_38 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_39() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ReadOnly_39)); }
	inline bool get_m_ReadOnly_39() const { return ___m_ReadOnly_39; }
	inline bool* get_address_of_m_ReadOnly_39() { return &___m_ReadOnly_39; }
	inline void set_m_ReadOnly_39(bool value)
	{
		___m_ReadOnly_39 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_40() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretPosition_40)); }
	inline int32_t get_m_CaretPosition_40() const { return ___m_CaretPosition_40; }
	inline int32_t* get_address_of_m_CaretPosition_40() { return &___m_CaretPosition_40; }
	inline void set_m_CaretPosition_40(int32_t value)
	{
		___m_CaretPosition_40 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_41() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretSelectPosition_41)); }
	inline int32_t get_m_CaretSelectPosition_41() const { return ___m_CaretSelectPosition_41; }
	inline int32_t* get_address_of_m_CaretSelectPosition_41() { return &___m_CaretSelectPosition_41; }
	inline void set_m_CaretSelectPosition_41(int32_t value)
	{
		___m_CaretSelectPosition_41 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_42() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___caretRectTrans_42)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_caretRectTrans_42() const { return ___caretRectTrans_42; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_caretRectTrans_42() { return &___caretRectTrans_42; }
	inline void set_caretRectTrans_42(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___caretRectTrans_42 = value;
		Il2CppCodeGenWriteBarrier((&___caretRectTrans_42), value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_43() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CursorVerts_43)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_CursorVerts_43() const { return ___m_CursorVerts_43; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_CursorVerts_43() { return &___m_CursorVerts_43; }
	inline void set_m_CursorVerts_43(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_CursorVerts_43 = value;
		Il2CppCodeGenWriteBarrier((&___m_CursorVerts_43), value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_44() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_InputTextCache_44)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_InputTextCache_44() const { return ___m_InputTextCache_44; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_InputTextCache_44() { return &___m_InputTextCache_44; }
	inline void set_m_InputTextCache_44(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_InputTextCache_44 = value;
		Il2CppCodeGenWriteBarrier((&___m_InputTextCache_44), value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_45() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CachedInputRenderer_45)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CachedInputRenderer_45() const { return ___m_CachedInputRenderer_45; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CachedInputRenderer_45() { return &___m_CachedInputRenderer_45; }
	inline void set_m_CachedInputRenderer_45(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CachedInputRenderer_45 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedInputRenderer_45), value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_46() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_PreventFontCallback_46)); }
	inline bool get_m_PreventFontCallback_46() const { return ___m_PreventFontCallback_46; }
	inline bool* get_address_of_m_PreventFontCallback_46() { return &___m_PreventFontCallback_46; }
	inline void set_m_PreventFontCallback_46(bool value)
	{
		___m_PreventFontCallback_46 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_47() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_Mesh_47)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_Mesh_47() const { return ___m_Mesh_47; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_Mesh_47() { return &___m_Mesh_47; }
	inline void set_m_Mesh_47(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_Mesh_47 = value;
		Il2CppCodeGenWriteBarrier((&___m_Mesh_47), value);
	}

	inline static int32_t get_offset_of_m_AllowInput_48() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_AllowInput_48)); }
	inline bool get_m_AllowInput_48() const { return ___m_AllowInput_48; }
	inline bool* get_address_of_m_AllowInput_48() { return &___m_AllowInput_48; }
	inline void set_m_AllowInput_48(bool value)
	{
		___m_AllowInput_48 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_49() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ShouldActivateNextUpdate_49)); }
	inline bool get_m_ShouldActivateNextUpdate_49() const { return ___m_ShouldActivateNextUpdate_49; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_49() { return &___m_ShouldActivateNextUpdate_49; }
	inline void set_m_ShouldActivateNextUpdate_49(bool value)
	{
		___m_ShouldActivateNextUpdate_49 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_50() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_UpdateDrag_50)); }
	inline bool get_m_UpdateDrag_50() const { return ___m_UpdateDrag_50; }
	inline bool* get_address_of_m_UpdateDrag_50() { return &___m_UpdateDrag_50; }
	inline void set_m_UpdateDrag_50(bool value)
	{
		___m_UpdateDrag_50 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_51() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragPositionOutOfBounds_51)); }
	inline bool get_m_DragPositionOutOfBounds_51() const { return ___m_DragPositionOutOfBounds_51; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_51() { return &___m_DragPositionOutOfBounds_51; }
	inline void set_m_DragPositionOutOfBounds_51(bool value)
	{
		___m_DragPositionOutOfBounds_51 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_54() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_CaretVisible_54)); }
	inline bool get_m_CaretVisible_54() const { return ___m_CaretVisible_54; }
	inline bool* get_address_of_m_CaretVisible_54() { return &___m_CaretVisible_54; }
	inline void set_m_CaretVisible_54(bool value)
	{
		___m_CaretVisible_54 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_55() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkCoroutine_55)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_BlinkCoroutine_55() const { return ___m_BlinkCoroutine_55; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_BlinkCoroutine_55() { return &___m_BlinkCoroutine_55; }
	inline void set_m_BlinkCoroutine_55(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_BlinkCoroutine_55 = value;
		Il2CppCodeGenWriteBarrier((&___m_BlinkCoroutine_55), value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_56() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_BlinkStartTime_56)); }
	inline float get_m_BlinkStartTime_56() const { return ___m_BlinkStartTime_56; }
	inline float* get_address_of_m_BlinkStartTime_56() { return &___m_BlinkStartTime_56; }
	inline void set_m_BlinkStartTime_56(float value)
	{
		___m_BlinkStartTime_56 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_57() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawStart_57)); }
	inline int32_t get_m_DrawStart_57() const { return ___m_DrawStart_57; }
	inline int32_t* get_address_of_m_DrawStart_57() { return &___m_DrawStart_57; }
	inline void set_m_DrawStart_57(int32_t value)
	{
		___m_DrawStart_57 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_58() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DrawEnd_58)); }
	inline int32_t get_m_DrawEnd_58() const { return ___m_DrawEnd_58; }
	inline int32_t* get_address_of_m_DrawEnd_58() { return &___m_DrawEnd_58; }
	inline void set_m_DrawEnd_58(int32_t value)
	{
		___m_DrawEnd_58 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_59() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_DragCoroutine_59)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_m_DragCoroutine_59() const { return ___m_DragCoroutine_59; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_m_DragCoroutine_59() { return &___m_DragCoroutine_59; }
	inline void set_m_DragCoroutine_59(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___m_DragCoroutine_59 = value;
		Il2CppCodeGenWriteBarrier((&___m_DragCoroutine_59), value);
	}

	inline static int32_t get_offset_of_m_OriginalText_60() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_OriginalText_60)); }
	inline String_t* get_m_OriginalText_60() const { return ___m_OriginalText_60; }
	inline String_t** get_address_of_m_OriginalText_60() { return &___m_OriginalText_60; }
	inline void set_m_OriginalText_60(String_t* value)
	{
		___m_OriginalText_60 = value;
		Il2CppCodeGenWriteBarrier((&___m_OriginalText_60), value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_61() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WasCanceled_61)); }
	inline bool get_m_WasCanceled_61() const { return ___m_WasCanceled_61; }
	inline bool* get_address_of_m_WasCanceled_61() { return &___m_WasCanceled_61; }
	inline void set_m_WasCanceled_61(bool value)
	{
		___m_WasCanceled_61 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_62() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_HasDoneFocusTransition_62)); }
	inline bool get_m_HasDoneFocusTransition_62() const { return ___m_HasDoneFocusTransition_62; }
	inline bool* get_address_of_m_HasDoneFocusTransition_62() { return &___m_HasDoneFocusTransition_62; }
	inline void set_m_HasDoneFocusTransition_62(bool value)
	{
		___m_HasDoneFocusTransition_62 = value;
	}

	inline static int32_t get_offset_of_m_WaitForSecondsRealtime_63() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_WaitForSecondsRealtime_63)); }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * get_m_WaitForSecondsRealtime_63() const { return ___m_WaitForSecondsRealtime_63; }
	inline WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 ** get_address_of_m_WaitForSecondsRealtime_63() { return &___m_WaitForSecondsRealtime_63; }
	inline void set_m_WaitForSecondsRealtime_63(WaitForSecondsRealtime_t0CF361107C4A9E25E0D4CF2F37732CE785235739 * value)
	{
		___m_WaitForSecondsRealtime_63 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitForSecondsRealtime_63), value);
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_65() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005, ___m_ProcessingEvent_65)); }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * get_m_ProcessingEvent_65() const { return ___m_ProcessingEvent_65; }
	inline Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 ** get_address_of_m_ProcessingEvent_65() { return &___m_ProcessingEvent_65; }
	inline void set_m_ProcessingEvent_65(Event_t187FF6A6B357447B83EC2064823EE0AEC5263210 * value)
	{
		___m_ProcessingEvent_65 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProcessingEvent_65), value);
	}
};

struct InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___kSeparators_19;

public:
	inline static int32_t get_offset_of_kSeparators_19() { return static_cast<int32_t>(offsetof(InputField_t533609195B110760BCFF00B746C87D81969CB005_StaticFields, ___kSeparators_19)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_kSeparators_19() const { return ___kSeparators_19; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_kSeparators_19() { return &___kSeparators_19; }
	inline void set_kSeparators_19(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___kSeparators_19 = value;
		Il2CppCodeGenWriteBarrier((&___kSeparators_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTFIELD_T533609195B110760BCFF00B746C87D81969CB005_H
#ifndef MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#define MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_22)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_23)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_TDA46A5925C6A2101217C9F52C855B5C1A36A7A0F_H
#ifndef RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#define RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.RawImage
struct  RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * ___m_Texture_30;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___m_UVRect_31;

public:
	inline static int32_t get_offset_of_m_Texture_30() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_Texture_30)); }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * get_m_Texture_30() const { return ___m_Texture_30; }
	inline Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 ** get_address_of_m_Texture_30() { return &___m_Texture_30; }
	inline void set_m_Texture_30(Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * value)
	{
		___m_Texture_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_Texture_30), value);
	}

	inline static int32_t get_offset_of_m_UVRect_31() { return static_cast<int32_t>(offsetof(RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8, ___m_UVRect_31)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_m_UVRect_31() const { return ___m_UVRect_31; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_m_UVRect_31() { return &___m_UVRect_31; }
	inline void set_m_UVRect_31(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___m_UVRect_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAWIMAGE_T68991514DB8F48442D614E7904A298C936B3C7C8_H
#ifndef TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#define TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_30)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_32)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_34)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_TE9317B57477F4B50AA4C16F460DE6F82DAD6D030_H
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  m_Items[1];

public:
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  m_Items[1];

public:
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		m_Items[index] = value;
	}
};



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" IL2CPP_METHOD_ATTR Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * RawImage_get_texture_mA902F1297E6D0EB804AB7F8FF211C377A69C61AD (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
extern "C" IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
extern "C" IL2CPP_METHOD_ATTR bool WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7 (WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture__ctor_mDE1953773AFEB3650581D5AE2C7B5537715DE68F (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, String_t* p0, int32_t p1, int32_t p2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
extern "C" IL2CPP_METHOD_ATTR void WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void RawImage_set_texture_m897BC65663AFF15258A611CC6E3480B078F41D23 (RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * __this, Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UnityEngine.UI.AspectRatioFitter::set_aspectRatio(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AspectRatioFitter_set_aspectRatio_m97D43C307087AAF9130ABF35AED9748CD8B50084 (AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * __this, float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.WebCamTexture::get_videoVerticallyMirrored()
extern "C" IL2CPP_METHOD_ATTR bool WebCamTexture_get_videoVerticallyMirrored_m4E0EB16E94118818A000761778F2672B5D2DD8AD (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C" IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * Graphic_get_rectTransform_m127FCBF38F4F0D4B264D892013A3AD9A507936DE (Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.WebCamTexture::get_videoRotationAngle()
extern "C" IL2CPP_METHOD_ATTR int32_t WebCamTexture_get_videoRotationAngle_m02878E5708942CE6149A57E6E10C453358D2B2A9 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void ZXing.BarcodeReader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BarcodeReader__ctor_mDFC431B4E6F46DE7CF97C1768BC3A84A50048D23 (BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8 * __this, const RuntimeMethod* method);
// UnityEngine.Color32[] UnityEngine.WebCamTexture::GetPixels32()
extern "C" IL2CPP_METHOD_ATTR Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* WebCamTexture_GetPixels32_m8A1903E6F3C6E40D34C085FC2DF2B92973F16FF7 (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * __this, const RuntimeMethod* method);
// System.String ZXing.Result::get_Text()
extern "C" IL2CPP_METHOD_ATTR String_t* Result_get_Text_m29774A0532C277D7200E9238586162C2F3FBBCCD (Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 * __this, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" IL2CPP_METHOD_ATTR ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817 (Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9 (UnityEvent_t5C6DDC2FCDF7F5C1808F1DDFBAD27A383F5FE65F * __this, UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String UnityEngine.UI.InputField::get_text()
extern "C" IL2CPP_METHOD_ATTR String_t* InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7 (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void UnityEngine.UI.InputField::set_text(System.String)
extern "C" IL2CPP_METHOD_ATTR void InputField_set_text_mB4B4573F3DD8E2D1430A09E42B1777AC4A94AA2B (InputField_t533609195B110760BCFF00B746C87D81969CB005 * __this, String_t* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraScript::.ctor()
extern "C" IL2CPP_METHOD_ATTR void CameraScript__ctor_mA68C62D00B5B189E1783ABE5A38D45F0B6D4E930 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraScript::Start()
extern "C" IL2CPP_METHOD_ATTR void CameraScript_Start_m0B14A9408DDD8CEE45AE814E541B3D79E6AEBEEA (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraScript_Start_m0B14A9408DDD8CEE45AE814E541B3D79E6AEBEEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* V_0 = NULL;
	int32_t V_1 = 0;
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_textbox_8();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_2 = __this->get_button_7();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_panel_9();
		NullCheck(L_4);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, (bool)0, /*hidden argument*/NULL);
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_5 = __this->get_background_14();
		NullCheck(L_5);
		Texture_t387FE83BB848001FD06B14707AEA6D5A0F6A95F4 * L_6 = RawImage_get_texture_mA902F1297E6D0EB804AB7F8FF211C377A69C61AD(L_5, /*hidden argument*/NULL);
		__this->set_defaultBackground_6(L_6);
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_7 = WebCamTexture_get_devices_mF5D7FA78E9C67ADCBF592220A10F4B6678F1A920(/*hidden argument*/NULL);
		V_0 = L_7;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))
		{
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral177068E091A509F447CAE7B4614ABA284ED9FE75, /*hidden argument*/NULL);
		__this->set_camAvailable_4((bool)0);
		return;
	}

IL_005e:
	{
		V_1 = 0;
		goto IL_009b;
	}

IL_0065:
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		bool L_11 = WebCamDevice_get_isFrontFacing_mD55FF74A2CE25897AD77EAB5935B6A76AD929D38((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0097;
		}
	}
	{
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		String_t* L_14 = WebCamDevice_get_name_m4D7362BB29DC20B7C8EF47759A09D54DEE8031F7((WebCamDevice_tA545BEDFAFD78866911F4837B8406845541B8F54 *)((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), /*hidden argument*/NULL);
		int32_t L_15 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_16 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_17 = (WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 *)il2cpp_codegen_object_new(WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_mDE1953773AFEB3650581D5AE2C7B5537715DE68F(L_17, L_14, L_15, L_16, /*hidden argument*/NULL);
		__this->set_backCam_5(L_17);
	}

IL_0097:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_19 = V_1;
		WebCamDeviceU5BU5D_t1E18FBC79F0E58E248F2496291CE994A5E4AC21A* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0065;
		}
	}
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_21 = __this->get_backCam_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_22 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral53BFE0264CAECF3AF3A1DB825364BB24748B298A, /*hidden argument*/NULL);
		return;
	}

IL_00c0:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_23 = __this->get_backCam_5();
		NullCheck(L_23);
		WebCamTexture_Play_mCF10A9B5EE587A066396B6378A972B31C9134436(L_23, /*hidden argument*/NULL);
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_24 = __this->get_background_14();
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_25 = __this->get_backCam_5();
		NullCheck(L_24);
		RawImage_set_texture_m897BC65663AFF15258A611CC6E3480B078F41D23(L_24, L_25, /*hidden argument*/NULL);
		__this->set_camAvailable_4((bool)1);
		int32_t L_26 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_27 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_28;
		memset(&L_28, 0, sizeof(L_28));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_28), (0.0f), (0.0f), (((float)((float)L_26))), (((float)((float)L_27))), /*hidden argument*/NULL);
		__this->set_screenRect_17(L_28);
		return;
	}
}
// System.Void CameraScript::OnGUI()
extern "C" IL2CPP_METHOD_ATTR void CameraScript_OnGUI_mA63E87F9DCD70FF56C8300CF9C67178903BF9E34 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraScript_OnGUI_mA63E87F9DCD70FF56C8300CF9C67178903BF9E34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 * V_4 = NULL;
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	float G_B5_0 = 0.0f;
	{
		bool L_0 = __this->get_camAvailable_4();
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_1 = __this->get_backCam_5();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_1);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_3 = __this->get_backCam_5();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_3);
		V_0 = ((float)((float)(((float)((float)L_2)))/(float)(((float)((float)L_4)))));
		AspectRatioFitter_t3CA8A085831067C09B872C67F6E7F6F4EBB967B6 * L_5 = __this->get_fit_15();
		float L_6 = V_0;
		NullCheck(L_5);
		AspectRatioFitter_set_aspectRatio_m97D43C307087AAF9130ABF35AED9748CD8B50084(L_5, L_6, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_7 = __this->get_backCam_5();
		NullCheck(L_7);
		bool L_8 = WebCamTexture_get_videoVerticallyMirrored_m4E0EB16E94118818A000761778F2672B5D2DD8AD(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_004c;
		}
	}
	{
		G_B5_0 = (-1.0f);
		goto IL_0051;
	}

IL_004c:
	{
		G_B5_0 = (1.0f);
	}

IL_0051:
	{
		V_1 = G_B5_0;
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_9 = __this->get_background_14();
		NullCheck(L_9);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_10 = Graphic_get_rectTransform_m127FCBF38F4F0D4B264D892013A3AD9A507936DE(L_9, /*hidden argument*/NULL);
		float L_11 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (1.0f), L_11, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_10, L_12, /*hidden argument*/NULL);
		WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_13 = __this->get_backCam_5();
		NullCheck(L_13);
		int32_t L_14 = WebCamTexture_get_videoRotationAngle_m02878E5708942CE6149A57E6E10C453358D2B2A9(L_13, /*hidden argument*/NULL);
		V_2 = ((-L_14));
		RawImage_t68991514DB8F48442D614E7904A298C936B3C7C8 * L_15 = __this->get_background_14();
		NullCheck(L_15);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_16 = Graphic_get_rectTransform_m127FCBF38F4F0D4B264D892013A3AD9A507936DE(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_18), (0.0f), (0.0f), (((float)((float)L_17))), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localEulerAngles_mC5E92A989DD8B2E7B854F9D84B528A34AEAA1A17(L_16, L_18, /*hidden argument*/NULL);
	}

IL_00a0:
	try
	{ // begin try (depth: 1)
		{
			BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8 * L_19 = (BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8 *)il2cpp_codegen_object_new(BarcodeReader_tD37BF77014DC23D60EBFCDE94B158C7809C9ACC8_il2cpp_TypeInfo_var);
			BarcodeReader__ctor_mDFC431B4E6F46DE7CF97C1768BC3A84A50048D23(L_19, /*hidden argument*/NULL);
			V_3 = L_19;
			RuntimeObject* L_20 = V_3;
			WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_21 = __this->get_backCam_5();
			NullCheck(L_21);
			Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* L_22 = WebCamTexture_GetPixels32_m8A1903E6F3C6E40D34C085FC2DF2B92973F16FF7(L_21, /*hidden argument*/NULL);
			WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_23 = __this->get_backCam_5();
			NullCheck(L_23);
			int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_23);
			WebCamTexture_tEC97A7A0A101B159FEC9A3E95B14E41DD84EFD73 * L_25 = __this->get_backCam_5();
			NullCheck(L_25);
			int32_t L_26 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_25);
			NullCheck(L_20);
			Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 * L_27 = InterfaceFuncInvoker3< Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 *, Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983*, int32_t, int32_t >::Invoke(0 /* ZXing.Result ZXing.IBarcodeReader::Decode(UnityEngine.Color32[],System.Int32,System.Int32) */, IBarcodeReader_t0372201520E008EC141FFF4644C6B7A6B47A64D0_il2cpp_TypeInfo_var, L_20, L_22, L_24, L_26);
			V_4 = L_27;
			Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 * L_28 = V_4;
			if (!L_28)
			{
				goto IL_0152;
			}
		}

IL_00d6:
		{
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_29 = __this->get_textbox_8();
			Result_tEEA7D9542485B75CE6FCE70E388703E55A4759A7 * L_30 = V_4;
			NullCheck(L_30);
			String_t* L_31 = Result_get_Text_m29774A0532C277D7200E9238586162C2F3FBBCCD(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_31);
			Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_32 = __this->get_button_7();
			NullCheck(L_32);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_32, /*hidden argument*/NULL);
			NullCheck(L_33);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_33, (bool)1, /*hidden argument*/NULL);
			Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_34 = __this->get_button_7();
			NullCheck(L_34);
			ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_35 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_34, /*hidden argument*/NULL);
			UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_36 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
			UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_36, __this, (intptr_t)((intptr_t)CameraScript_selected_m7057DCBE2184A4DC19FB4A6E152E073C2557D4B5_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_35);
			UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_35, L_36, /*hidden argument*/NULL);
			Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_37 = __this->get_backButton_11();
			NullCheck(L_37);
			ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_38 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_37, /*hidden argument*/NULL);
			UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_39 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
			UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_39, __this, (intptr_t)((intptr_t)CameraScript_back_m188157FC8C5D13F8F0FDEE3BEF69EA9E81DA5976_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_38);
			UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_38, L_39, /*hidden argument*/NULL);
			Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_40 = __this->get_commentButton_12();
			NullCheck(L_40);
			ButtonClickedEvent_t975D9C903BC4880557ADD7D3ACFB01CB2B3D6DDB * L_41 = Button_get_onClick_m77E8CA6917881760CC7900930F4C789F3E2F8817(L_40, /*hidden argument*/NULL);
			UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_42 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
			UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_42, __this, (intptr_t)((intptr_t)CameraScript_comment_mF440EE46DB708F258867CF8BB6BAED2B9ECBA58A_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_41);
			UnityEvent_AddListener_m31973FDDC5BB0B2828AB6EF519EC4FD6563499C9(L_41, L_42, /*hidden argument*/NULL);
			goto IL_0173;
		}

IL_0152:
		{
			Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_43 = __this->get_textbox_8();
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_44 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
			NullCheck(L_43);
			VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, L_44);
			Button_t1203820000D5513FDCCE3D4BFF9C1C9CC755CC2B * L_45 = __this->get_button_7();
			NullCheck(L_45);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_46 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_45, /*hidden argument*/NULL);
			NullCheck(L_46);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_46, (bool)0, /*hidden argument*/NULL);
		}

IL_0173:
		{
			goto IL_018b;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0178;
		throw e;
	}

CATCH_0178:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		Exception_t * L_47 = V_5;
		NullCheck(L_47);
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_47);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_48, /*hidden argument*/NULL);
		goto IL_018b;
	} // end catch (depth: 1)

IL_018b:
	{
		return;
	}
}
// System.Void CameraScript::selected()
extern "C" IL2CPP_METHOD_ATTR void CameraScript_selected_m7057DCBE2184A4DC19FB4A6E152E073C2557D4B5 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_panel_9();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraScript::back()
extern "C" IL2CPP_METHOD_ATTR void CameraScript_back_m188157FC8C5D13F8F0FDEE3BEF69EA9E81DA5976 (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_panel_9();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraScript::comment()
extern "C" IL2CPP_METHOD_ATTR void CameraScript_comment_mF440EE46DB708F258867CF8BB6BAED2B9ECBA58A (CameraScript_tFD993C03E212C26DEDD89B96FD4B851BFDAE41C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraScript_comment_mF440EE46DB708F258867CF8BB6BAED2B9ECBA58A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_commentBox_13();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_1 = __this->get_commentBox_13();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(72 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_3 = __this->get_inHere_10();
		NullCheck(L_3);
		String_t* L_4 = InputField_get_text_m83A3F1698F82ECB7B763E786D1FB1F04D767F1E7(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_mDF3A55D4269A0D2D7969D90C6D38B472E24DD445(L_2, L_4, _stringLiteralADC83B19E793491B1C6EA0FD8B46CD9F32E592FC, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		InputField_t533609195B110760BCFF00B746C87D81969CB005 * L_6 = __this->get_inHere_10();
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		NullCheck(L_6);
		InputField_set_text_mB4B4573F3DD8E2D1430A09E42B1777AC4A94AA2B(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
