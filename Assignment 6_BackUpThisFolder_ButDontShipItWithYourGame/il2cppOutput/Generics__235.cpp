#include "pch-cpp.hpp"





template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*,T1,T2,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*,T1,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj,p1,invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B;
struct Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19;
struct Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333;
struct Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA;
struct Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D;
struct Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D;
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081;
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC;
struct Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937;
struct IEnumerator_1_t41A31EBCC681A6EEBAF4ADF87E8BFA44F565113F;
struct IEnumerator_1_t63A7D8D61E466681FD5C14A1D1BCC426980B452A;
struct IEnumerator_1_tDD2627FCFC71A4FFD903B4AEF273FF46FFBDFF80;
struct IEnumerator_1_tA7A4B24874B32CD986FBECFEC3CFC24A296E89EF;
struct IEnumerator_1_tD6AB88F4642F09193747335415CC9A5576D38BC8;
struct IEnumerator_1_t1DE90964025F3E49484DDA43335AF57CECEAFBFF;
struct IEnumerator_1_t9172917DB5A215B645D6CC01DEB99EC8A65483CF;
struct IEnumerator_1_t8CB33065830712577EAFAB72418518818E12D4AC;
struct IEnumerator_1_t3321D0481093F5F37A06F0DE0F52842ED7810BDD;
struct IEnumerator_1_tDFDA733A40523681099DF822E97AA4397205F8E5;
struct IEnumerator_1_tC027B9C75091151E01521B33507D9483DDF76923;
struct IEnumerator_1_t2F3426234216B43F059E29CBD94B030FE9450DF5;
struct IEnumerator_1_t9E3E38E99D632155CF320317E81CD3B58180AACB;
struct IEnumerator_1_tCAF0556CFF26D996657B0C5552E18C822AFC05F7;
struct IEnumerator_1_t9A9BE82202EF171563947D0E29B0735C6478B402;
struct IEnumerator_1_t695C7AC3690631EAEA8C52BD4B17D470FADBEBBA;
struct IEnumerator_1_t05A7E2833DD4038C49FF40712F1051225E9705BA;
struct IEnumerator_1_t664B99C800E4590E71725CFAB0C2B3FBCB419C9E;
struct IEnumerator_1_t6A805AFB7C443AA0883CD0050C54894D87931011;
struct IEnumerator_1_t93968BD445EE7F0C80FAF8340134732F5881D878;
struct IEnumerator_1_t395C5CF5FCF2B997FAC0955A183CF5FA39C933BE;
struct IEnumerator_1_t1514FD9C50C06BDCD5DA7C55B55DE17C7FDE0503;
struct IEnumerator_1_tF699E4E098053D5559A625574B874275803F1D96;
struct IEnumerator_1_tB05E3484560B25B7256FA873CC25D0535092079F;
struct IEnumerator_1_t85AF6758BDF07BCEF6628A95FE6FAD7AB16C9311;
struct IEnumerator_1_tFD2D4CFC82FDC0123F02143BBC5AA284407619D6;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_tBBAE7A086BB8551DBC40DA5D2D737592B6A23443;
struct IEnumerator_1_t74105E6C32CA7AC4F4202BB870BF99B1C95BA2DE;
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
struct IEnumerator_1_t8ED46B87E7705380C41A64C1E848D3F32789C639;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t9F467D6B8346BA28D59C7613A12C8092265D57DC;
struct IEnumerator_1_tFB94D0AF6D95F58DEC65B8B3CEFC8EA4F2418CB2;
struct IEnumerator_1_tE448B7EE079805406D664C2451CAC17486C43699;
struct IEnumerator_1_t88BE43B6DC421B6B8A63EB09557816D1F5C614D3;
struct IList_1_t220F757C91A42A0840E5D43DD2ED9096538684B6;
struct IList_1_t499E984C486A3745CB8E5A0573E515E8FA31C8BD;
struct IList_1_t6FBDBA046A8046DF805DDD78676E382C5175BCA8;
struct IList_1_tDCD0A5542134A8A01C50F0162F2B0A7DBFA289F2;
struct IList_1_t71C6B305B4E920816108CE24BDAD6A310E82734E;
struct IList_1_tF228F8B23FEE2408C543C11E93C047A95B77F18C;
struct IList_1_t28DD22267960AE7CD527A0F20717CFEF748D3D3D;
struct IList_1_t12B22E15524AF65BDE7CB3709C170B6EEDB41DC0;
struct IList_1_t4A3350D422077CEE59413A603768C70A2AAD963B;
struct IList_1_tC0D84E53E2BA19E57062F4B5A0CCBD0AC0F555A6;
struct IList_1_t18AE8B6F25252935E7ADCDF4D60B65EF893E9C14;
struct IList_1_t54E80E2B0C58F936DFF71D278F42F1C3A882A608;
struct IList_1_tB2C767A1BD619B9C475FAE6702609A7CFCE68BA4;
struct IList_1_t158D47E17E57E686EEFE175B5606062B9FD20399;
struct IList_1_t4930D54F0A004DE811E1C1960B0AE1492A134131;
struct IList_1_t15C490787A3CCC830BAC7CEEC3A06D3AA61B76AE;
struct IList_1_t6807CE7C4C885B824D8D56FA229CBB5B59642F1D;
struct IList_1_t5D3CA1FE42E42AF74C9F884ED5A562CCF309F70F;
struct IList_1_t6440CF01C77A2C7322B08F1C640B0BD1278F8FBD;
struct IList_1_t54B68D844A2A3029DA0F33A4BFD70431FE34156D;
struct IList_1_t893EDAEF107BB18A047B48A59CB64A51F2C30B51;
struct IList_1_t30A49CDF39E9753B83C1DAB58C23130A2B81475F;
struct IList_1_tF8419408B3E48CA645989E582B6B4BBE6BFE91D0;
struct IList_1_t48B184D74E7299A5EF4A8B1BAA513FF6305C9B6A;
struct IList_1_t2FB3C863CABD61189105FE06B574C14BC381E875;
struct IList_1_t1F95A02D96DD55EE68FCA3B4181EF50164424F7A;
struct IList_1_t5A297FC203B0FCA68405D7A28FDB0CE657A1E98D;
struct IList_1_t4AA6DAB8DA4F87F4CD7C7B6423D4688AD79B8A85;
struct IList_1_t8E19FE6409C73D6FC86C242C2E14A30AAF8E5CCF;
struct IList_1_t32FF973C5C94017EEDAC8DB04F239919FF7B39C2;
struct IList_1_t592CEE0FABDA27202274A13CCA35CF0DEC568E00;
struct IList_1_t9D1E1984BBA352AAFA6B21A51C29498A0B9E9A1B;
struct IList_1_t7DC7A22F42EEFA1E8D796516A9F22282DF4EB5FA;
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
struct InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76;
struct Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8;
struct Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219;
struct Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD;
struct Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0;
struct Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0;
struct Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD;
struct Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938;
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88;
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107;
struct Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556;
struct Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC;
struct Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4;
struct Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D;
struct ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068;
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470;
struct ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C;
struct ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39;
struct ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC;
struct ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF;
struct ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5;
struct ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A;
struct ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40;
struct ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F;
struct ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521;
struct ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5;
struct ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4;
struct ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F;
struct ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878;
struct ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F;
struct ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6;
struct ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE;
struct ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7;
struct ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3;
struct ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178;
struct ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794;
struct ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261;
struct ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D;
struct ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A;
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263;
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8;
struct TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273;
struct Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16;
struct Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529;
struct Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB;
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74;
struct Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E;
struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320;
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1;
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623;
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
struct InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548;
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A;
struct OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8;
struct UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Exception_t;
struct Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com;
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com;
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com;
struct UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke;

struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC;
struct DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23;
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1;
struct DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74;
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165;
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93;
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530;
struct KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E;
struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019;
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA;
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61;
struct NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522;
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3;
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D;
struct NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124;
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61;
struct NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA;
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD;
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376;
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320;
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1;
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623;
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D;
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57;
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86;
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD;
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5;
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2;
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354;
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD;
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104;
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE;
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5  : public RuntimeObject
{
};
struct Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D  : public RuntimeObject
{
	ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* ____builder;
	int32_t ____version;
	int32_t ____index;
	Il2CppSharedGenericObject* ____current;
};
struct Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69 : public RuntimeObject {};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081  : public RuntimeObject
{
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC  : public RuntimeObject
{
};
struct ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068  : public RuntimeObject
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
};
struct ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tBB1570DA9B07DD0877CAF3127842505340785EF2  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_tDF477CA7C755B3844E4458BC2955E3013D321B84  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t09DCEFCD3B4D4122EA414DF940DB8C450C6279F5  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t3DA9FF65C986EA3FB3529D9258AD7338DC8E9617  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t7C2FE22421C494751C983959DA3B73E0319A30B6  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t8E0CC0B3E00EDD11C9BA10C2C5E0E91497DA91DB  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t4E53F7CEBBCD50DBC5D065A76F990B6216A0167E  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t7B937758956C75704E6FCFD67209C6E75E97F366  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t51FBAE7E37B9E1DC3E9CE8E0BF5CCFE97F3FD4E1  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8  : public RuntimeObject
{
	RuntimeObject* ___list;
	RuntimeObject* ____syncRoot;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB 
{
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 
{
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 
{
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D 
{
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C 
{
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A 
{
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE 
{
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ___m_Array;
	int32_t ___m_IndexStart;
	int32_t ___m_IndexEnd;
	int32_t ___m_Index;
};
struct InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD 
{
	int32_t ___length;
	Action_1_tA4CC4B05C836AB92F811D67AC960A6ED20CCCB7B* ___firstValue;
	Action_1U5BU5D_t18C922CAB85EAE463E29566305D718EF64B12A16* ___additionalValues;
};
struct InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E 
{
	int32_t ___length;
	Action_2_t6A27AF0A3585FFCF87D39ADE472BCFD2F2930F19* ___firstValue;
	Action_2U5BU5D_tBE18774DE78EE629377991D4C8F3B44D96E3A529* ___additionalValues;
};
struct InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 
{
	int32_t ___length;
	Action_3_tE646D5EE2107669AE49025C0E3DC04C831ACCAE0* ___firstValue;
	Action_3U5BU5D_t624B9D1D653A8F69756207CB2B95EEF3143387DB* ___additionalValues;
};
struct InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D 
{
	int32_t ___length;
	Func_3_t42E9F5CDEF4CF174C35D943F427EF585FE829937* ___firstValue;
	Func_3U5BU5D_t46F58FB7530550D36B775F49E118190032295BE6* ___additionalValues;
};
struct InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 
{
	int32_t ___length;
	Touchscreen_t5A3B494C10A53A822AEDB3508093860D142D84CE* ___firstValue;
	TouchscreenU5BU5D_t73D22E3D2A7039C6C374D75B796C8F83BCA897E3* ___additionalValues;
};
struct Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E 
{
	Il2CppSharedGenericObject* ___Key;
	bool ___Value;
};
struct KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 
{
	int32_t ___key;
	Il2CppSharedGenericObject* ___value;
};
struct KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 
{
	Il2CppSharedGenericObject* ___key;
	int32_t ___value;
};
struct KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 
{
	Il2CppSharedGenericObject* ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 
{
	bool ____initialized;
	int32_t ____statusCode;
	int32_t ____status;
};
struct ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4 
{
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9 
{
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C 
{
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 
{
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 
{
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 
{
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72 
{
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621 
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7 
{
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670 
{
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17 
{
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570 
{
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ___m_Array;
	int32_t ___m_StartIndex;
	int32_t ___m_Length;
};
struct Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 
{
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___m_Owner;
	int32_t ___m_IndexPlusOne;
	uint32_t ___m_Version;
};
struct TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273  : public ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263
{
};
struct TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03  : public ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8
{
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED 
{
	int32_t ___m_Code;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 
{
	String_t* ___m_Name;
	String_t* ___m_BindingGroup;
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke* ___m_DeviceRequirements;
};
struct InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_BindingGroup;
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com* ___m_DeviceRequirements;
};
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E 
{
	uint32_t ___m_Id;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	uint64_t ___m_SubId1;
	uint64_t ___m_SubId2;
};
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
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_pinvoke
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956_marshaled_com
{
	InputDevice_t8BCF67533E872A75779C24C93D1D7085B72D364B* ___device;
	uint32_t ___userId;
};
struct CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_Callbacks;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToAdd;
	InlinedArray_1_tFABE06D675C714FC44C09C36D7B9C908690ADEAD ___m_CallbacksToRemove;
};
struct CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_Callbacks;
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToAdd;
	InlinedArray_1_tB2FA5372BE7591F760748AE97979B26DDD7E9A0E ___m_CallbacksToRemove;
};
struct CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_Callbacks;
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToAdd;
	InlinedArray_1_tC64553F2D494A77784441699A84E32D1096DC2F2 ___m_CallbacksToRemove;
};
struct CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE 
{
	bool ___m_CannotMutateCallbacksArray;
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_Callbacks;
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToAdd;
	InlinedArray_1_t89D09048674475F5C319FE41264ED79405A8209D ___m_CallbacksToRemove;
};
struct InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C 
{
	int32_t ___length;
	OngoingAccountSelection_t8471F20105109B19CE04657B1C72EB8D23976956 ___firstValue;
	OngoingAccountSelectionU5BU5D_t0CC84AB78BA7B45022C3D6E08B0DADA7A61BCBD8* ___additionalValues;
};
struct KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 
{
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct ExceptionResource_t609A85E253A4E615583553D91D839E2E79FDFBD9 
{
	int32_t ___value__;
};
struct InputUpdateType_t31A66F5342D924983382FA675EF78007C04EC590 
{
	int32_t ___value__;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 
{
	String_t* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com
{
	Finger_t0E27A005E4B818F9D0078D69AF2B22649DDD4C6A* ___m_Finger;
	Record_t4205712C85C6F00A9F1DC4D23E20F595FCB4F6A4 ___m_TouchRecord;
};
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	int32_t ___value__;
};
struct UsagePage_t6EF545F107AB1DED99B07C377BD0B8457DC6F7B8 
{
	int32_t ___value__;
};
struct Flags_t2ED4EFE461994B03533B3B524C8C2EA71315AAE6 
{
	int32_t ___value__;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 
{
	int32_t ___m_DeviceId;
	String_t* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	String_t* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_pinvoke
{
	int32_t ___m_DeviceId;
	char* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	char* ___m_FullLayoutJson;
};
struct DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52_marshaled_com
{
	int32_t ___m_DeviceId;
	Il2CppChar* ___m_Layout;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___m_StateFormat;
	int32_t ___m_StateSizeInBytes;
	Il2CppChar* ___m_FullLayoutJson;
};
struct UpdateMode_tCD49766B755C4CD8E1F2DE8D57798DAC2C5CBF32 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct Flags_t36D5070200D1061BA68BF41808748FA000DEE57C 
{
	int32_t ___value__;
};
struct Flags_t1E712B23AAE0C9B46749E115A88CF844D5AD1C33 
{
	int32_t ___value__;
};
struct KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C 
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___key;
	Il2CppSharedGenericObject* ___value;
};
struct NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 
{
	String_t* ___m_Name;
	String_t* ___m_Id;
	String_t* ___m_Path;
	String_t* ___m_Interactions;
	String_t* ___m_Processors;
	String_t* ___m_Groups;
	String_t* ___m_Action;
	int32_t ___m_Flags;
	String_t* ___m_OverridePath;
	String_t* ___m_OverrideInteractions;
	String_t* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_pinvoke
{
	char* ___m_Name;
	char* ___m_Id;
	char* ___m_Path;
	char* ___m_Interactions;
	char* ___m_Processors;
	char* ___m_Groups;
	char* ___m_Action;
	int32_t ___m_Flags;
	char* ___m_OverridePath;
	char* ___m_OverrideInteractions;
	char* ___m_OverrideProcessors;
};
struct InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5_marshaled_com
{
	Il2CppChar* ___m_Name;
	Il2CppChar* ___m_Id;
	Il2CppChar* ___m_Path;
	Il2CppChar* ___m_Interactions;
	Il2CppChar* ___m_Processors;
	Il2CppChar* ___m_Groups;
	Il2CppChar* ___m_Action;
	int32_t ___m_Flags;
	Il2CppChar* ___m_OverridePath;
	Il2CppChar* ___m_OverrideInteractions;
	Il2CppChar* ___m_OverrideProcessors;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			bool ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			bool ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			Il2CppChar ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			Il2CppChar ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___m_Type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___m_Type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_BoolValue_OffsetPadding[4];
			int32_t ___m_BoolValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_BoolValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_BoolValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_CharValue_OffsetPadding[4];
			uint8_t ___m_CharValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_CharValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_CharValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ByteValue_OffsetPadding[4];
			uint8_t ___m_ByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ByteValue_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___m_ByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_SByteValue_OffsetPadding[4];
			int8_t ___m_SByteValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_SByteValue_OffsetPadding_forAlignmentOnly[4];
			int8_t ___m_SByteValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ShortValue_OffsetPadding[4];
			int16_t ___m_ShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ShortValue_OffsetPadding_forAlignmentOnly[4];
			int16_t ___m_ShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UShortValue_OffsetPadding[4];
			uint16_t ___m_UShortValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UShortValue_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___m_UShortValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_IntValue_OffsetPadding[4];
			int32_t ___m_IntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_IntValue_OffsetPadding_forAlignmentOnly[4];
			int32_t ___m_IntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_UIntValue_OffsetPadding[4];
			uint32_t ___m_UIntValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_UIntValue_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___m_UIntValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_LongValue_OffsetPadding[4];
			int64_t ___m_LongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_LongValue_OffsetPadding_forAlignmentOnly[4];
			int64_t ___m_LongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_ULongValue_OffsetPadding[4];
			uint64_t ___m_ULongValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_ULongValue_OffsetPadding_forAlignmentOnly[4];
			uint64_t ___m_ULongValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_FloatValue_OffsetPadding[4];
			float ___m_FloatValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_FloatValue_OffsetPadding_forAlignmentOnly[4];
			float ___m_FloatValue_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___m_DoubleValue_OffsetPadding[4];
			double ___m_DoubleValue;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___m_DoubleValue_OffsetPadding_forAlignmentOnly[4];
			double ___m_DoubleValue_forAlignmentOnly;
		};
	};
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F 
{
	int32_t ___page;
	int32_t ___usage;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 
{
	String_t* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_pinvoke
{
	char* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056_marshaled_com
{
	Il2CppChar* ___m_ControlPath;
	int32_t ___m_Flags;
};
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 
{
	int32_t ___pairingStateVersion;
	uint32_t ___lastUserId;
	int32_t ___allUserCount;
	int32_t ___allPairedDeviceCount;
	int32_t ___allLostDeviceCount;
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ___allUsers;
	UserDataU5BU5D_t5CB4987877C71E61FA131704B58CA6D8E5272C7E* ___allUserData;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed;
	Action_2_t4D6C6A84A6B44BE6193A1F64753F6E48558FBE9D* ___actionChangeDelegate;
	Action_2_tB79528C85CFEF7DFF52C575DDAA398D2FE6BC333* ___onDeviceChangeDelegate;
	Action_2_t4943DD8C32CAB983950535CEF3BABA85DF8C9AAA* ___onEventDelegate;
	bool ___onActionChangeHooked;
	bool ___onDeviceChangeHooked;
	bool ___onEventHooked;
	int32_t ___listenForUnpairedDeviceActivity;
};
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_pinvoke
{
	int32_t ___pairingStateVersion;
	uint32_t ___lastUserId;
	int32_t ___allUserCount;
	int32_t ___allPairedDeviceCount;
	int32_t ___allLostDeviceCount;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_pinvoke* ___allUserData;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed;
	Il2CppMethodPointer ___actionChangeDelegate;
	Il2CppMethodPointer ___onDeviceChangeDelegate;
	Il2CppMethodPointer ___onEventDelegate;
	int32_t ___onActionChangeHooked;
	int32_t ___onDeviceChangeHooked;
	int32_t ___onEventHooked;
	int32_t ___listenForUnpairedDeviceActivity;
};
struct GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3_marshaled_com
{
	int32_t ___pairingStateVersion;
	uint32_t ___lastUserId;
	int32_t ___allUserCount;
	int32_t ___allPairedDeviceCount;
	int32_t ___allLostDeviceCount;
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* ___allUsers;
	UserData_t0F7AA24AC638FDFB7CF552415A75CAE057C2D42C_marshaled_com* ___allUserData;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allPairedDevices;
	InputDeviceU5BU5D_tA9AEFC6AF63557D3D5DCFB2B26DDA6F63147D548* ___allLostDevices;
	InlinedArray_1_tED5DB880E229C88EB2F96B60C2BFBEC2CA7EC28C ___ongoingAccountSelections;
	CallbackArray_1_tB60CC6CDA475FF8033F707EC1B4A66AF5B83F9E9 ___onChange;
	CallbackArray_1_tE2A0EB348F3111C908D22768F814AE7219DB4F34 ___onUnpairedDeviceUsed;
	CallbackArray_1_t1A72A00347540C99C2A4BF0488E37A8C1B45C1BE ___onPreFilterUnpairedDeviceUsed;
	Il2CppMethodPointer ___actionChangeDelegate;
	Il2CppMethodPointer ___onDeviceChangeDelegate;
	Il2CppMethodPointer ___onEventDelegate;
	int32_t ___onActionChangeHooked;
	int32_t ___onDeviceChangeHooked;
	int32_t ___onEventHooked;
	int32_t ___listenForUnpairedDeviceActivity;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D 
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	bool ___haveBuiltActiveTouches;
	bool ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_pinvoke* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com
{
	int32_t ___updateMask;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___fingers;
	FingerU5BU5D_t7D581BC6C3943F4482AA079AE68BBE33F3E58D7F* ___activeFingers;
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_marshaled_com* ___activeTouches;
	int32_t ___activeFingerCount;
	int32_t ___activeTouchCount;
	int32_t ___totalFingerCount;
	uint32_t ___lastId;
	int32_t ___haveBuiltActiveTouches;
	int32_t ___haveActiveTouchesNeedingRefreshNextUpdate;
	InputStateHistory_1_tFE6497AA1E7DC5B54CA3C00976576A7E88C77798* ___activeTouchState;
};
struct DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 
{
	NativeArray_1_t76F16C71E23AB5F30821F9564775BA0C510012AA ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F 
{
	NativeArray_1_t3C666A50D3E0F5803B63036EC771A974D48FFF62 ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 
{
	NativeArray_1_tB946AB7C39022A3069BADCA1BFB2EB857A84AAD9 ___array;
	int32_t ___framesRemaining;
};
struct DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F 
{
	NativeArray_1_tD3E166440DED38454F2B25BF9A375A5EBF8C47AB ___array;
	int32_t ___framesRemaining;
};
struct KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 
{
	Il2CppSharedGenericObject* ___key;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___value;
};
struct Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76  : public MulticastDelegate_t
{
};
struct Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8  : public MulticastDelegate_t
{
};
struct Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219  : public MulticastDelegate_t
{
};
struct Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD  : public MulticastDelegate_t
{
};
struct Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0  : public MulticastDelegate_t
{
};
struct Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD  : public MulticastDelegate_t
{
};
struct Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938  : public MulticastDelegate_t
{
};
struct Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88  : public MulticastDelegate_t
{
};
struct Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107  : public MulticastDelegate_t
{
};
struct Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556  : public MulticastDelegate_t
{
};
struct Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4  : public MulticastDelegate_t
{
};
struct Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED 
{
	String_t* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CvalueU3Ek__BackingField;
};
struct NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CvalueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD 
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___U3CvariantsU3Ek__BackingField;
	String_t* ___U3CuseStateFromU3Ek__BackingField;
	String_t* ___U3CdisplayNameU3Ek__BackingField;
	String_t* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4 ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_pinvoke
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke ___U3CvariantsU3Ek__BackingField;
	char* ___U3CuseStateFromU3Ek__BackingField;
	char* ___U3CdisplayNameU3Ek__BackingField;
	char* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_pinvoke ___U3CmaxValueU3Ek__BackingField;
};
struct ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD_marshaled_com
{
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CnameU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3ClayoutU3Ek__BackingField;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com ___U3CvariantsU3Ek__BackingField;
	Il2CppChar* ___U3CuseStateFromU3Ek__BackingField;
	Il2CppChar* ___U3CdisplayNameU3Ek__BackingField;
	Il2CppChar* ___U3CshortDisplayNameU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CusagesU3Ek__BackingField;
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064 ___U3CaliasesU3Ek__BackingField;
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9 ___U3CparametersU3Ek__BackingField;
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41 ___U3CprocessorsU3Ek__BackingField;
	uint32_t ___U3CoffsetU3Ek__BackingField;
	uint32_t ___U3CbitU3Ek__BackingField;
	uint32_t ___U3CsizeInBitsU3Ek__BackingField;
	FourCC_tA6CAA4015BC25A7F1053B6C512202D57A9C994ED ___U3CformatU3Ek__BackingField;
	int32_t ___U3CflagsU3Ek__BackingField;
	int32_t ___U3CarraySizeU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CdefaultStateU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CminValueU3Ek__BackingField;
	PrimitiveValue_t1CC37566F40746757D5E3F87474A05909D85C2D4_marshaled_com ___U3CmaxValueU3Ek__BackingField;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A 
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_pinvoke
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_pinvoke ___playerState;
};
struct GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A_marshaled_com
{
	InlinedArray_1_t1BB3E1C727E53B8F4342843F1042AFE85C5A70C3 ___touchscreens;
	int32_t ___historyLengthPerFinger;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerDown;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerMove;
	CallbackArray_1_t1F5839E457B3AE192D38F0A2463CAB97DA96B96B ___onFingerUp;
	int32_t ___enhancedTouchEnabled;
	int32_t ___enhancedTouchUpdateMode;
	FingerAndTouchState_tC0A8EFA38A7428736E11195294EA7F6E1BA8F82D_marshaled_com ___playerState;
};
struct Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0  : public MulticastDelegate_t
{
};
struct Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC  : public MulticastDelegate_t
{
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields
{
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___Value;
};
struct EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields
{
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* ___defaultComparer;
};
struct EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC_StaticFields
{
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* ___defaultComparer;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputUserOnChangeMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InputCheckForUnpairMarker;
	GlobalState_t11A6C6C3EF611D00EF34976903A48BCABCD6C9D3 ___s_GlobalState;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70_StaticFields
{
	GlobalState_tFDD5D3FE93083EE02E4E8987E61A5D7D5F5CE61A ___s_GlobalState;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57  : public RuntimeArray
{
	ALIGN_FIELD (8) InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 m_Items[1];

	inline InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Id), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Interactions), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Processors), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Groups), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Action), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverridePath), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverrideInteractions), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverrideProcessors), (void*)NULL);
		#endif
	}
	inline InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Id), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Path), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Interactions), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Processors), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Groups), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Action), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverridePath), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverrideInteractions), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_OverrideProcessors), (void*)NULL);
		#endif
	}
};
struct InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86  : public RuntimeArray
{
	ALIGN_FIELD (8) InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 m_Items[1];

	inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BindingGroup), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DeviceRequirements), (void*)NULL);
		#endif
	}
	inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_BindingGroup), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DeviceRequirements), (void*)NULL);
		#endif
	}
};
struct InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD  : public RuntimeArray
{
	ALIGN_FIELD (8) InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E m_Items[1];

	inline InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E value)
	{
		m_Items[index] = value;
	}
};
struct InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5  : public RuntimeArray
{
	ALIGN_FIELD (8) InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 m_Items[1];

	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase), (void*)NULL);
		#endif
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_StringLowerCase), (void*)NULL);
		#endif
	}
};
struct NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2  : public RuntimeArray
{
	ALIGN_FIELD (8) NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 m_Items[1];

	inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
	inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
};
struct NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A  : public RuntimeArray
{
	ALIGN_FIELD (8) NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED m_Items[1];

	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CnameU3Ek__BackingField), (void*)NULL);
	}
};
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
struct TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 m_Items[1];

	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord))->___m_Owner), (void*)NULL);
		#endif
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Finger), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___m_TouchRecord))->___m_Owner), (void*)NULL);
		#endif
	}
};
struct __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppSharedGenericObject* m_Items[1];

	inline Il2CppSharedGenericObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Il2CppSharedGenericObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppSharedGenericObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppSharedGenericObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD  : public RuntimeArray
{
	ALIGN_FIELD (8) HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F m_Items[1];

	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F value)
	{
		m_Items[index] = value;
	}
};
struct ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104  : public RuntimeArray
{
	ALIGN_FIELD (8) ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD m_Items[1];

	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CnameU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3ClayoutU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringOriginalCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CvariantsU3Ek__BackingField))->___m_StringLowerCase), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CuseStateFromU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CdisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___U3CshortDisplayNameU3Ek__BackingField), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CusagesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CaliasesU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CparametersU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___U3CprocessorsU3Ek__BackingField))->___m_Array), (void*)NULL);
		#endif
	}
};
struct DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE  : public RuntimeArray
{
	ALIGN_FIELD (8) DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 m_Items[1];

	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ControlPath), (void*)NULL);
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_ControlPath), (void*)NULL);
	}
};
struct DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A  : public RuntimeArray
{
	ALIGN_FIELD (8) DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 m_Items[1];

	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Layout), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FullLayoutJson), (void*)NULL);
		#endif
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Layout), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FullLayoutJson), (void*)NULL);
		#endif
	}
};
struct DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 m_Items[1];

	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 value)
	{
		m_Items[index] = value;
	}
};
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
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
struct DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F m_Items[1];

	inline DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F value)
	{
		m_Items[index] = value;
	}
};
struct DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 m_Items[1];

	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 value)
	{
		m_Items[index] = value;
	}
};
struct DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74  : public RuntimeArray
{
	ALIGN_FIELD (8) DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F m_Items[1];

	inline DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F value)
	{
		m_Items[index] = value;
	}
};
struct ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165  : public RuntimeArray
{
	ALIGN_FIELD (8) Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E m_Items[1];

	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 m_Items[1];

	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C m_Items[1];

	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 m_Items[1];

	inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
	inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 m_Items[1];

	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
	}
};
struct KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 m_Items[1];

	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___value), (void*)NULL);
		#endif
	}
};
struct KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61  : public RuntimeArray
{
	ALIGN_FIELD (8) KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 m_Items[1];

	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___key), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&((m_Items + index)->___value))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___value))->___anyValue), (void*)NULL);
		#endif
	}
};
struct NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C m_Items[1];

	inline NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 m_Items[1];

	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD m_Items[1];

	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 m_Items[1];

	inline NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 value)
	{
		m_Items[index] = value;
	}
};
struct NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 m_Items[1];

	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C m_Items[1];

	inline NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B m_Items[1];

	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 m_Items[1];

	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A m_Items[1];

	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 m_Items[1];

	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 value)
	{
		m_Items[index] = value;
	}
};
struct NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623  : public RuntimeArray
{
	ALIGN_FIELD (8) NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 m_Items[1];

	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 value)
	{
		m_Items[index] = value;
	}
};
struct OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 m_Items[1];

	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4925514CC4302994581398D23A8B49200B76E1F8_inline (Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1D94A69E513892DC6F9DACFA58E234D4B42BD535 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8D185CA371CD0155A2654D5F2A4E5D7A32C381E1 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA31BF89D96AD4EC7DF04D5D981786CC8D24DFBD0_inline (Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* __this, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63190626990FE5C683B5DCA5959C7F29F4143CB0 (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m6E3F2117A240093A1609B5ED0DB1ED6F8BC5931B (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m23A1B53BC41489689166C315949325DBF11AAC6F_inline (Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* __this, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m47C1253D196D9265AAC49A95D9D45921DAACC426 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mDA3F3390002EEF2CD052271814F6538337137555 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ReadOnlyArray_1_get_Item_m05A99C75002E0F39F7375FF6137095A8E52E4B43 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m5D84FC43D82AC73FA245FD6DBF1505A27141D99E (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m01B4486E155F7BC1A3899CB900CA650AC4BB226D (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ReadOnlyArray_1_get_Item_m428877DB540279F16189CA8B1697F69717789D88 (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E4697D994795EAE905BEE355174215697B815D7_inline (Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mA0B47BB28FD1B9A82FB4D5B50981FF84178A325D (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mA9AC884E09954730B7001747C406F06532CE5E4C (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ReadOnlyArray_1_get_Item_m33CCD0200E2AC2E282AD02BAED65A68EE4AAB7DA (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B_fshared (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_min, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_mF7AE2A8A24BEB275E49BF3F9B354A8BDA792171D_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m98C7BD6716BA17D25F8B9B4BD047C68BDEB19815_gshared (Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D* __this, ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* ___0_builder, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m47DE3657EA69A40875AF5EEFE0F0825319BC3EAA_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E_gshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m27FBB2D810E0A0AD5DF459762BF64D4B63333D83_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m69CF2D9BF6F3E0F171B32C9129028208C163EF76_fshared_inline (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_m47B0FE6D4FFF67C6AAAEDDCFCBA96922A7507D70_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_m9DDF62E919A397122ED64466833E33480EA94980_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_m16C754184D14C2E64F71386B150F02685E2C017F_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollectionBuilder_1_get_Item_mBE6E2D88C69F6514FEE466701A475692D700D3BE_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_m71A1888718F07FB7C27E03A0323479CC64FB9D60_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlyCollectionBuilder_1_ToArray_m27A440E47420469361CDEE5C9B0D78C99F8E6DFD_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrueReadOnlyCollection_1__ctor_mD57EF5451712C65DFCEE4477FCDFD1E8E86143FE_gshared (TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_list, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_mABDF1BEC26DE10439C869B5479ACCFFBF2B3DEBA_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m685E33687041AE241CB9AF46CD74A0D14F29375B (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF6E466AF68CFEC8F47F7CF45C4133EF69DDF248A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m884266F7C492DE4AFA45B5059E72AB8AADFE1701 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC11B95DC5BCB94CAE3AFA3D16E8D584D5611EC8F (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m838B5E6314B03A3AB9923223BB4821D618210436 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2052E4178AF32DCCB3A36700D775691B7754B687 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0977A268DF5A5540454EFACC58FF2C010A86CD3D (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFFF2618F4888C7AB1485B1076C10EFD688BC7AD2 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0DA883888751E89AA69F98E60BAFF8FBABB38C60 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE00C5E66D753E1071BE29CCFB9B1297D147ABF76 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4C16309031446534F4776B705DB4BF2FD0882362 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9244F5B1663BCC1829687A2C005146A449BE2A5E (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m71745ADD92D415DAACD7C285EA848CBB6B673B9B (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD9D85FA10DC0E3CD95A7B801591CCF2DFAFD142 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD99308B65BA325981719086EA118A7F077305500 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m27BE264B56B78111130857D7F1C06E5C73CAA860 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD725B68E38115E1ED393D3E0C92ED8564FE73B36_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m201268DDDC13112173AA1BCBBE02C261CA5BF665_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF142780D99644619462FAAA89846C2C0565601E7_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC0963FC6DD3F96602A2147E4A82AB5E3D0A374F1_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m998337273E514908027348F2AE19B89774318265_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1C8B6015B945A9698E7DFC6E25D174AE08D88435_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mACEE8AA0779761DB0E633CA4F6CAF03C4BBE133B_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m82BE11829466F4B5F6BA6D56636698A0441E8EF7_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2FED9A63761DE9F0D10DEE47A620D54BC62E48FD_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m817982520ED3B7B990BE9982710B049AA93EE11B_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m80C308502468318FDB526747A3F094B513D09934_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m8F784115A7A0930E20320A561C75BA427825E62B_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45A857F8A98E3E51C009D604618932CE66CF04BD_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m484AD86EC9E9E3FB503BC624F9122E3F3A85DD50_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA000B8EB7528D9D41F6FD5CC4E289011D35F6381_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6D64B6B073FD1CF4D831ECFE05E1623A75FB96F5_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75BDDF78FE058AD7B469434093D7A0D2998E10E7_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m28F2D0F0B3F893D1802E4D7B17256C66AEC58BBF_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m37C1965F27A1810D3AAA1331497EFA1D51A975A1_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1275764B723E3599AF2891F21C8F96CE3635C4BA_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBD2424B8EBC3D9058E16CED4581527606F63F012_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8A97077239C70BE9C9375F2127C82F3C283E81A3 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF7AA90D7AC9126E9396188FEADDDAE16BD698924 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mBE15981470D788343F71D108AD20D6B88C99B199 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD789D84F5F7E12E4F6F6C7659ECB705958FE8531 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAB482F95F7DAD8E45AEFC9D68113DC67B5A5FF18 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m182F39AC5FB4735C49EE66373D712B20B3FF5FA2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91996AFFF42C95AF18381233760D0FE8FB91D9CF (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m880B9A3177AA9FABE2C74EAAE1C697D1A6FB344A (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6A2DD10645C3C99E93B0A5D35C167ED7BA3B2B9 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6E515FF09DE1EE6B9C37CFC896EE7F4CA113045 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4CAC8D293E40FB4526D9C23196EACF849F429379 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5550CBD835D9F269CB5920858A48CE8147947A92 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m99B9E7E11429F47D1A80327473949E466B4B91F7 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4ABCC0DC73891F9BB3D5CEF83BE2EEFD63DC05BB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9D0ABDC9DCDC95FB974D3BA50CCBEF239118F318 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1B382823F3A9C24EDE706056482E6D7C53005987 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m16D553F92458225BB8CE5B325E381F38E84F3A3F (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m24AE4FAC7DBAB5FE4C92AEE7F9E04E80D5C7FF98 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC8653C9B3196644FFCCDE9279DFC1E25D1DB6D89 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5C407CE31DA6DAB79055A3C67C72D7674F358E03 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m479FD11AA0603AE8828762261714E8C366F349C6 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7221B30E09E70A275D9F6D234544A9F037EC0E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91A164D681D8812A4148D2561B6ECEC02CD61C49 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m71CEFBE6F99A20BB57961EC3A8455CA7919F7150 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m90E7B655CC2C12EC37423A97EBB21DB1680BE06B (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFDF4573C72E27A48C6A8BAE4DFE0C5EBD25CCA98 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF127107360D2211BEFC85AAEE36D96F6408B065E (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9229451605652B5DB71F8B8FE73569DEFFA6094D (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1F139D4AE644DB044C847F0F70224AD21C6F70FB (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m17BEF3D58FBEC0BEF9235AE0049F72FD06EFC57F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3EDD912161578F48F5E76C01D7C19F8F98B5617E (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB9392399119A83D55E96CED8494B18D93A4B5899 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1E0EFF605A7C6AFE538C0AA18CC455215DF08677 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE45427E8FB79B15653D9795E67A727F7532F235B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m2506B3215547F42B9D6E73C07F394B8CCC14EDA2 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m774093B34CAD7C830556A1CD6D842A18A7A9FDF8 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3BA31B14BBC7A97723D334EE4916E6B9CE7AE4AB (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB69CBF81CE741C05119502E3BBE6A16168167183 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m21357843C08DD018321DEC0F827058249C12FFE6 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF638FA3440A3F8803CF8FD7C4E6C5165141DE67D (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB0E24DAF8C568571332AF177303189F62090F44D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m188B55BB38B193FE525D0168DD93F727B284303C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E4CA572BF4E2858AABCCDEA7E1B9639139ED95D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m65881C5133BEFF21657BE17CDA6B0D53F0C1A069 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m37180A76E0619AEDD98CA4CD3CE3D2AE615BDAC8_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6C63C7438BEAC842A1ECFC04649C97CAE0CFCB34_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCF3CFD24A275A071347D7D4B4B237723BD3ED298_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared (const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4925514CC4302994581398D23A8B49200B76E1F8_inline (Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB ReadOnlyArray_1_GetEnumerator_m6D73E5C9F27E46DF4F3A4E1AC230173485921CB4 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB (*) (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1D94A69E513892DC6F9DACFA58E234D4B42BD535 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8D185CA371CD0155A2654D5F2A4E5D7A32C381E1 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA31BF89D96AD4EC7DF04D5D981786CC8D24DFBD0_inline (Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* __this, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 ReadOnlyArray_1_GetEnumerator_mC0E0174B84B061981A3E19FB9C5E40D0D830158C (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 (*) (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63190626990FE5C683B5DCA5959C7F29F4143CB0 (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m6E3F2117A240093A1609B5ED0DB1ED6F8BC5931B (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m23A1B53BC41489689166C315949325DBF11AAC6F_inline (Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* __this, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 ReadOnlyArray_1_GetEnumerator_mD7F84C214F8B86A692EBB6B9DD29118C1358789D (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 (*) (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m47C1253D196D9265AAC49A95D9D45921DAACC426 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mDA3F3390002EEF2CD052271814F6538337137555 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ReadOnlyArray_1_get_Item_m05A99C75002E0F39F7375FF6137095A8E52E4B43 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 ReadOnlyArray_1_GetEnumerator_mEF9D703AE2040E485A1AB057E1518F30128C4529 (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 (*) (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m5D84FC43D82AC73FA245FD6DBF1505A27141D99E (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m01B4486E155F7BC1A3899CB900CA650AC4BB226D (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ReadOnlyArray_1_get_Item_m428877DB540279F16189CA8B1697F69717789D88 (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E4697D994795EAE905BEE355174215697B815D7_inline (Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 ReadOnlyArray_1_GetEnumerator_m36C41A0B246AC07926543F34AE6118022D5DFA21 (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 (*) (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mA0B47BB28FD1B9A82FB4D5B50981FF84178A325D (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mA9AC884E09954730B7001747C406F06532CE5E4C (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ReadOnlyArray_1_get_Item_m33CCD0200E2AC2E282AD02BAED65A68EE4AAB7DA (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 (*) (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 (*) (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 (*) (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88*, Il2CppSharedGenericObject*, const RuntimeMethod*))Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline)(__this, ___0_obj, method);
}
inline Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6 (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared)(__this, method);
}
inline Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3 (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621*, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B_fshared)(__this, ___0_array, ___1_index, ___2_length, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared)(__this, method);
}
inline RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared)(__this, method);
}
inline void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared)(__this, ___0_array, method);
}
inline int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline)(__this, method);
}
inline void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4 (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared)((ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*)__this, ___0_index, il2cppRetVal, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D (*) (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C (*) (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A (*) (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) ;
inline Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE (*) (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570*, const RuntimeMethod*))ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline (const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline)(method);
}
inline int32_t Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33 (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_array, Il2CppSharedGenericObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, Il2CppSharedGenericObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_min, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB_gshared)(__this, ___0_min, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline)(method);
}
inline int32_t ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC_gshared)(__this, ___0_item, method);
}
inline void ReadOnlyCollectionBuilder_1_RemoveAt_mF7AE2A8A24BEB275E49BF3F9B354A8BDA792171D (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_RemoveAt_mF7AE2A8A24BEB275E49BF3F9B354A8BDA792171D_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m98C7BD6716BA17D25F8B9B4BD047C68BDEB19815 (Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D* __this, ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* ___0_builder, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D*, ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, const RuntimeMethod*))Enumerator__ctor_m98C7BD6716BA17D25F8B9B4BD047C68BDEB19815_gshared)(__this, ___0_builder, method);
}
inline RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m47DE3657EA69A40875AF5EEFE0F0825319BC3EAA (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_GetEnumerator_m47DE3657EA69A40875AF5EEFE0F0825319BC3EAA_gshared)(__this, method);
}
inline void ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E_gshared)(___0_value, ___1_argument, method);
}
inline void ReadOnlyCollectionBuilder_1_Add_m27FBB2D810E0A0AD5DF459762BF64D4B63333D83 (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Add_m27FBB2D810E0A0AD5DF459762BF64D4B63333D83_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C (RuntimeObject* ___0_value, Type_t* ___1_type, String_t* ___2_paramName, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollectionBuilder_1_get_Count_mC5999DCAC16DD6BDFDE95A9330B2F2B12B4BABDC_inline (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_get_Count_m69CF2D9BF6F3E0F171B32C9129028208C163EF76_fshared_inline)(__this, method);
}
inline bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0_gshared)(___0_value, method);
}
inline bool ReadOnlyCollectionBuilder_1_Contains_m47B0FE6D4FFF67C6AAAEDDCFCBA96922A7507D70 (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Contains_m47B0FE6D4FFF67C6AAAEDDCFCBA96922A7507D70_gshared)(__this, ___0_item, method);
}
inline void ReadOnlyCollectionBuilder_1_Insert_m9DDF62E919A397122ED64466833E33480EA94980 (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Insert_m9DDF62E919A397122ED64466833E33480EA94980_gshared)(__this, ___0_index, ___1_item, method);
}
inline bool ReadOnlyCollectionBuilder_1_Remove_m16C754184D14C2E64F71386B150F02685E2C017F (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_Remove_m16C754184D14C2E64F71386B150F02685E2C017F_gshared)(__this, ___0_item, method);
}
inline Il2CppSharedGenericObject* ReadOnlyCollectionBuilder_1_get_Item_mBE6E2D88C69F6514FEE466701A475692D700D3BE (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_get_Item_mBE6E2D88C69F6514FEE466701A475692D700D3BE_gshared)(__this, ___0_index, method);
}
inline void ReadOnlyCollectionBuilder_1_set_Item_m71A1888718F07FB7C27E03A0323479CC64FB9D60 (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, Il2CppSharedGenericObject*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_set_Item_m71A1888718F07FB7C27E03A0323479CC64FB9D60_gshared)(__this, ___0_index, ___1_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlyCollectionBuilder_1_ToArray_m27A440E47420469361CDEE5C9B0D78C99F8E6DFD (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method)
{
	return ((  __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_ToArray_m27A440E47420469361CDEE5C9B0D78C99F8E6DFD_gshared)(__this, method);
}
inline void TrueReadOnlyCollection_1__ctor_mD57EF5451712C65DFCEE4477FCDFD1E8E86143FE (TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273* __this, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ___0_list, const RuntimeMethod* method)
{
	((  void (*) (TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273*, __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*, const RuntimeMethod*))TrueReadOnlyCollection_1__ctor_mD57EF5451712C65DFCEE4477FCDFD1E8E86143FE_gshared)(__this, ___0_list, method);
}
inline void ReadOnlyCollectionBuilder_1_set_Capacity_mABDF1BEC26DE10439C869B5479ACCFFBF2B3DEBA (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068*, int32_t, const RuntimeMethod*))ReadOnlyCollectionBuilder_1_set_Capacity_mABDF1BEC26DE10439C869B5479ACCFFBF2B3DEBA_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199 (Type_t* ___0_type, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA (int32_t ___0_resource, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m685E33687041AE241CB9AF46CD74A0D14F29375B (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF6E466AF68CFEC8F47F7CF45C4133EF69DDF248A (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m884266F7C492DE4AFA45B5059E72AB8AADFE1701 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC11B95DC5BCB94CAE3AFA3D16E8D584D5611EC8F (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m838B5E6314B03A3AB9923223BB4821D618210436 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2052E4178AF32DCCB3A36700D775691B7754B687 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0977A268DF5A5540454EFACC58FF2C010A86CD3D (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFFF2618F4888C7AB1485B1076C10EFD688BC7AD2 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0DA883888751E89AA69F98E60BAFF8FBABB38C60 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE00C5E66D753E1071BE29CCFB9B1297D147ABF76 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4C16309031446534F4776B705DB4BF2FD0882362 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9244F5B1663BCC1829687A2C005146A449BE2A5E (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m71745ADD92D415DAACD7C285EA848CBB6B673B9B (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD9D85FA10DC0E3CD95A7B801591CCF2DFAFD142 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD99308B65BA325981719086EA118A7F077305500 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m27BE264B56B78111130857D7F1C06E5C73CAA860 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_mD725B68E38115E1ED393D3E0C92ED8564FE73B36 (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mD725B68E38115E1ED393D3E0C92ED8564FE73B36_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m201268DDDC13112173AA1BCBBE02C261CA5BF665 (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5*, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m201268DDDC13112173AA1BCBBE02C261CA5BF665_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mF142780D99644619462FAAA89846C2C0565601E7 (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5*, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mF142780D99644619462FAAA89846C2C0565601E7_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mC0963FC6DD3F96602A2147E4A82AB5E3D0A374F1 (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mC0963FC6DD3F96602A2147E4A82AB5E3D0A374F1_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m998337273E514908027348F2AE19B89774318265 (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A*, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m998337273E514908027348F2AE19B89774318265_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m1C8B6015B945A9698E7DFC6E25D174AE08D88435 (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A*, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m1C8B6015B945A9698E7DFC6E25D174AE08D88435_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_mACEE8AA0779761DB0E633CA4F6CAF03C4BBE133B (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mACEE8AA0779761DB0E633CA4F6CAF03C4BBE133B_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m82BE11829466F4B5F6BA6D56636698A0441E8EF7 (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m82BE11829466F4B5F6BA6D56636698A0441E8EF7_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m2FED9A63761DE9F0D10DEE47A620D54BC62E48FD (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40*, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m2FED9A63761DE9F0D10DEE47A620D54BC62E48FD_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m817982520ED3B7B990BE9982710B049AA93EE11B (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m817982520ED3B7B990BE9982710B049AA93EE11B_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m80C308502468318FDB526747A3F094B513D09934 (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F*, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m80C308502468318FDB526747A3F094B513D09934_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m8F784115A7A0930E20320A561C75BA427825E62B (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F*, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m8F784115A7A0930E20320A561C75BA427825E62B_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m45A857F8A98E3E51C009D604618932CE66CF04BD (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m45A857F8A98E3E51C009D604618932CE66CF04BD_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m484AD86EC9E9E3FB503BC624F9122E3F3A85DD50 (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521*, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m484AD86EC9E9E3FB503BC624F9122E3F3A85DD50_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mA000B8EB7528D9D41F6FD5CC4E289011D35F6381 (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521*, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mA000B8EB7528D9D41F6FD5CC4E289011D35F6381_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m6D64B6B073FD1CF4D831ECFE05E1623A75FB96F5 (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m6D64B6B073FD1CF4D831ECFE05E1623A75FB96F5_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m75BDDF78FE058AD7B469434093D7A0D2998E10E7 (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m75BDDF78FE058AD7B469434093D7A0D2998E10E7_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_m28F2D0F0B3F893D1802E4D7B17256C66AEC58BBF (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5*, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_m28F2D0F0B3F893D1802E4D7B17256C66AEC58BBF_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_get_Count_m37C1965F27A1810D3AAA1331497EFA1D51A975A1 (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m37C1965F27A1810D3AAA1331497EFA1D51A975A1_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m1275764B723E3599AF2891F21C8F96CE3635C4BA (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4*, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m1275764B723E3599AF2891F21C8F96CE3635C4BA_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mBD2424B8EBC3D9058E16CED4581527606F63F012 (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4*, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mBD2424B8EBC3D9058E16CED4581527606F63F012_gshared)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8A97077239C70BE9C9375F2127C82F3C283E81A3 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF7AA90D7AC9126E9396188FEADDDAE16BD698924 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mBE15981470D788343F71D108AD20D6B88C99B199 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD789D84F5F7E12E4F6F6C7659ECB705958FE8531 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAB482F95F7DAD8E45AEFC9D68113DC67B5A5FF18 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m182F39AC5FB4735C49EE66373D712B20B3FF5FA2 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91996AFFF42C95AF18381233760D0FE8FB91D9CF (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m880B9A3177AA9FABE2C74EAAE1C697D1A6FB344A (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6A2DD10645C3C99E93B0A5D35C167ED7BA3B2B9 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6E515FF09DE1EE6B9C37CFC896EE7F4CA113045 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4CAC8D293E40FB4526D9C23196EACF849F429379 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5550CBD835D9F269CB5920858A48CE8147947A92 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m99B9E7E11429F47D1A80327473949E466B4B91F7 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4ABCC0DC73891F9BB3D5CEF83BE2EEFD63DC05BB (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9D0ABDC9DCDC95FB974D3BA50CCBEF239118F318 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1B382823F3A9C24EDE706056482E6D7C53005987 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m16D553F92458225BB8CE5B325E381F38E84F3A3F (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m24AE4FAC7DBAB5FE4C92AEE7F9E04E80D5C7FF98 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC8653C9B3196644FFCCDE9279DFC1E25D1DB6D89 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5C407CE31DA6DAB79055A3C67C72D7674F358E03 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m479FD11AA0603AE8828762261714E8C366F349C6 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7221B30E09E70A275D9F6D234544A9F037EC0E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91A164D681D8812A4148D2561B6ECEC02CD61C49 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m71CEFBE6F99A20BB57961EC3A8455CA7919F7150 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m90E7B655CC2C12EC37423A97EBB21DB1680BE06B (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFDF4573C72E27A48C6A8BAE4DFE0C5EBD25CCA98 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF127107360D2211BEFC85AAEE36D96F6408B065E (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9229451605652B5DB71F8B8FE73569DEFFA6094D (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1F139D4AE644DB044C847F0F70224AD21C6F70FB (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m17BEF3D58FBEC0BEF9235AE0049F72FD06EFC57F (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3EDD912161578F48F5E76C01D7C19F8F98B5617E (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB9392399119A83D55E96CED8494B18D93A4B5899 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1E0EFF605A7C6AFE538C0AA18CC455215DF08677 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE45427E8FB79B15653D9795E67A727F7532F235B (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m2506B3215547F42B9D6E73C07F394B8CCC14EDA2 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m774093B34CAD7C830556A1CD6D842A18A7A9FDF8 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3BA31B14BBC7A97723D334EE4916E6B9CE7AE4AB (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB69CBF81CE741C05119502E3BBE6A16168167183 (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m21357843C08DD018321DEC0F827058249C12FFE6 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF638FA3440A3F8803CF8FD7C4E6C5165141DE67D (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB0E24DAF8C568571332AF177303189F62090F44D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m188B55BB38B193FE525D0168DD93F727B284303C (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E4CA572BF4E2858AABCCDEA7E1B9639139ED95D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m65881C5133BEFF21657BE17CDA6B0D53F0C1A069 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) ;
inline int32_t ReadOnlyCollection_1_get_Count_m37180A76E0619AEDD98CA4CD3CE3D2AE615BDAC8 (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_m37180A76E0619AEDD98CA4CD3CE3D2AE615BDAC8_gshared)(__this, method);
}
inline bool ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7 (RuntimeObject* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7_gshared)(___0_value, method);
}
inline bool ReadOnlyCollection_1_Contains_m6C63C7438BEAC842A1ECFC04649C97CAE0CFCB34 (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))ReadOnlyCollection_1_Contains_m6C63C7438BEAC842A1ECFC04649C97CAE0CFCB34_gshared)(__this, ___0_value, method);
}
inline int32_t ReadOnlyCollection_1_IndexOf_mCF3CFD24A275A071347D7D4B4B237723BD3ED298 (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A*, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, const RuntimeMethod*))ReadOnlyCollection_1_IndexOf_mCF3CFD24A275A071347D7D4B4B237723BD3ED298_gshared)(__this, ___0_value, method);
}
inline EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530 (const RuntimeMethod* method)
{
	return ((  EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* (*) (const RuntimeMethod*))EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530_gshared)(method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* ReadOnlyArray_1_ToArray_m979DD9449486BEEE332E18BC5DCDCB3E86E09B95 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_1 = (InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57*)(InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mE73744156F24BE30E9B361FE7B214DE70C63EE5B (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* L_2 = ___0_predicate;
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m4925514CC4302994581398D23A8B49200B76E1F8_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1D94A69E513892DC6F9DACFA58E234D4B42BD535 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m6D73E5C9F27E46DF4F3A4E1AC230173485921CB4(__this, NULL);
		Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1D94A69E513892DC6F9DACFA58E234D4B42BD535_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1D94A69E513892DC6F9DACFA58E234D4B42BD535(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8D185CA371CD0155A2654D5F2A4E5D7A32C381E1 (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m6D73E5C9F27E46DF4F3A4E1AC230173485921CB4(__this, NULL);
		Enumerator_t1A96525DC4A4DB84933680B0C21DBE32D39746CB L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8D185CA371CD0155A2654D5F2A4E5D7A32C381E1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8D185CA371CD0155A2654D5F2A4E5D7A32C381E1(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A (ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		InputBindingU5BU5D_t7E47E87B9CAE12B6F6A0659008B425C58D84BB57* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF49E7A2430C7D717C5DF8A8C2626314D0D9C1CF4>(__this);
	InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mDAAB3D7833424DD373EA449309C8728D5BA96C4A(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* ReadOnlyArray_1_ToArray_mE8C272D83A49BE0BBF5157A3CACA9D2A6C63427F (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_1 = (InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86*)(InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m90AB0594B42400F8F8657B54B2BEAE43107173E4 (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* L_2 = ___0_predicate;
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_mA31BF89D96AD4EC7DF04D5D981786CC8D24DFBD0_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63190626990FE5C683B5DCA5959C7F29F4143CB0 (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mC0E0174B84B061981A3E19FB9C5E40D0D830158C(__this, NULL);
		Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63190626990FE5C683B5DCA5959C7F29F4143CB0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m63190626990FE5C683B5DCA5959C7F29F4143CB0(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m6E3F2117A240093A1609B5ED0DB1ED6F8BC5931B (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mC0E0174B84B061981A3E19FB9C5E40D0D830158C(__this, NULL);
		Enumerator_t337B0B590FEAA70C6300095CFAD85469A8E987E3 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m6E3F2117A240093A1609B5ED0DB1ED6F8BC5931B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m6E3F2117A240093A1609B5ED0DB1ED6F8BC5931B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E (ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		InputControlSchemeU5BU5D_tAE603126FBD4D6B8F67EA6F8CFA531A646C63D86* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tC41FC1476A6CC9385BDD74ECC6D3AF66A6C82BF9>(__this);
	InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m1B48B5B84CD98353C0E203B6E556E617FD3CA90E(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* ReadOnlyArray_1_ToArray_m5C314A6DFE74559D3F6FAB2CC0FDB9CBDF6CDF42 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_1 = (InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD*)(InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mA0448F67AEFB3D75AED166DABF9D543770B3E15B (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* L_2 = ___0_predicate;
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m23A1B53BC41489689166C315949325DBF11AAC6F_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m47C1253D196D9265AAC49A95D9D45921DAACC426 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD7F84C214F8B86A692EBB6B9DD29118C1358789D(__this, NULL);
		Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m47C1253D196D9265AAC49A95D9D45921DAACC426_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m47C1253D196D9265AAC49A95D9D45921DAACC426(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mDA3F3390002EEF2CD052271814F6538337137555 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD7F84C214F8B86A692EBB6B9DD29118C1358789D(__this, NULL);
		Enumerator_t5057D6C7C3C92532513BF1CCF992E606744608B4 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mDA3F3390002EEF2CD052271814F6538337137555_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mDA3F3390002EEF2CD052271814F6538337137555(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ReadOnlyArray_1_get_Item_m05A99C75002E0F39F7375FF6137095A8E52E4B43 (ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		InputUserU5BU5D_t4B71AE3CDE5BB252EADB6494FEE05EE141C2B1FD* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ReadOnlyArray_1_get_Item_m05A99C75002E0F39F7375FF6137095A8E52E4B43_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tF5AA7E538ACDA6A1D80C6333E00398EBA2C5D84C>(__this);
	InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m05A99C75002E0F39F7375FF6137095A8E52E4B43(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* ReadOnlyArray_1_ToArray_mF2CC70C1DA60B0F2557B41F50C2D6E28D09E2DDD (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_1 = (InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5*)(InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m8389652EACFFBDE51BA934862C6A61C1CA2595DC (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* L_2 = ___0_predicate;
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m5D84FC43D82AC73FA245FD6DBF1505A27141D99E (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mEF9D703AE2040E485A1AB057E1518F30128C4529(__this, NULL);
		Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m5D84FC43D82AC73FA245FD6DBF1505A27141D99E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m5D84FC43D82AC73FA245FD6DBF1505A27141D99E(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m01B4486E155F7BC1A3899CB900CA650AC4BB226D (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mEF9D703AE2040E485A1AB057E1518F30128C4529(__this, NULL);
		Enumerator_t247F0979C46030952B5BC4838793880B3551C4B1 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m01B4486E155F7BC1A3899CB900CA650AC4BB226D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m01B4486E155F7BC1A3899CB900CA650AC4BB226D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ReadOnlyArray_1_get_Item_m428877DB540279F16189CA8B1697F69717789D88 (ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		InternedStringU5BU5D_t0B851758733FC0B118D84BE83AED10A0404C18D5* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ReadOnlyArray_1_get_Item_m428877DB540279F16189CA8B1697F69717789D88_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1C2864D7CF4D444AB2616316AC8DD33932F77064>(__this);
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m428877DB540279F16189CA8B1697F69717789D88(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* ReadOnlyArray_1_ToArray_mB57BABCF8BB409DD2287A1D6D5AE4A637A2D8DF3 (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_1 = (NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2*)(NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m07D8FCBE666B6222208717D63B5E126B985049E2 (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* L_2 = ___0_predicate;
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m4E4697D994795EAE905BEE355174215697B815D7_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mA0B47BB28FD1B9A82FB4D5B50981FF84178A325D (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m36C41A0B246AC07926543F34AE6118022D5DFA21(__this, NULL);
		Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mA0B47BB28FD1B9A82FB4D5B50981FF84178A325D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mA0B47BB28FD1B9A82FB4D5B50981FF84178A325D(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mA9AC884E09954730B7001747C406F06532CE5E4C (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m36C41A0B246AC07926543F34AE6118022D5DFA21(__this, NULL);
		Enumerator_t271547CFBD4091AFFFAB150FA861C7675500D005 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mA9AC884E09954730B7001747C406F06532CE5E4C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mA9AC884E09954730B7001747C406F06532CE5E4C(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ReadOnlyArray_1_get_Item_m33CCD0200E2AC2E282AD02BAED65A68EE4AAB7DA (ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		NameAndParametersU5BU5D_tA6C2AC34ACDB1967A7A2CEF4BE1D717ADA695CA2* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ReadOnlyArray_1_get_Item_m33CCD0200E2AC2E282AD02BAED65A68EE4AAB7DA_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t1B44D48F2E9F425D218BABD5DE616117E8725D41>(__this);
	NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m33CCD0200E2AC2E282AD02BAED65A68EE4AAB7DA(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* ReadOnlyArray_1_ToArray_m0DDBFCEFB14F1F25B4F7807A271D1EAFC0AC524D (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_1 = (NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A*)(NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m6165A6A1C60AC610DD2D20F381E5D4EA5D35728E (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* L_2 = ___0_predicate;
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226(__this, NULL);
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF76B641C6ECC5D55DD0ADE99D55E00E1A84C58D5(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692 (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m291B1B11D48F36771B094A675C6B1F32B01A0226(__this, NULL);
		Enumerator_t143FA65339CA8DBAF42C7A5253F96ACFFA4BCC41 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m1220E5552C080069CA1DB5186448FEF2FBCF6692(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF (ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		NamedValueU5BU5D_tADD8F1373B88C55F68499688D72C21A97F63303A* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4A15F7D15ACB297B45A08889D51E4CACEAD4EDF9>(__this);
	NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m69AFBAAD6EB0E82AA39F56E13EF7F7B8FDA974FF(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ReadOnlyArray_1_ToArray_m666157130B824026DB20E92ADDD1310DF45CD556 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_1 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mF3FA48518E8960D3A270D8FE61868258E983A817 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* L_2 = ___0_predicate;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		float L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077(__this, NULL);
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF45CF2D20F176A7517D5596DBD5CABBE3F583DB1(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD19F592A5C896FAEC3D6D3693CB9A0BCE6B9B077(__this, NULL);
		Enumerator_tA94B4F01B0C3AD75EB4E9169C8ED8F921F731D64 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m183917F865C80BA68B0BE301A8C4DB2394B8F7A2(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747 (ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		float L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  float ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t30FAB5F37C9949740CA9F4F0BC6ECFA00146450B>(__this);
	float _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m04330518DA15D9B10349F6FCBFB201DAFCC75747(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* ReadOnlyArray_1_ToArray_m5F0F06637D0F9A4B4F300BDA7AE095D28A18D9F9 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_1 = (TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354*)(TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m2B6BA49BFAC4DFCEBD881F5B8B200F9045774194 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* L_2 = ___0_predicate;
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F(__this, NULL);
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m9F9511167D21F99F4C841B8AC7BC928F047987A0(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m337048790A2E77A5E4DFDF36992EB8BCFFD6133F(__this, NULL);
		Enumerator_t1401BB8858A2A2ED1A0698D23EB25FD52FAC9B34 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE548447BF22930F50681C90BE4B234382E355F49(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37 (ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		TouchU5BU5D_t32B2235E604E83356406C886C1A817C01F7C6354* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3D5F71F2FAC15E8E7413E1B4BDCCA92D49962E72>(__this);
	Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mF89401BF1E594CF00433FFAC12A3B3D321A44B37(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlyArray_1_ToArray_mFE8B41E973F86170E9C4D85ED8CB1D83D7C9B940_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m2C090CFF5465365F474D4E17AE6F5CA8E30CB30D_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* L_2 = ___0_predicate;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		Il2CppSharedGenericObject* L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6(__this, NULL);
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m2A273E366CAC3B638F05EFEA8E5A9E2E6763C0DC(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mD2D8BC866B0301626B3C173679A72775FB12A6C6(__this, NULL);
		Enumerator_t16D9D4B915D69801C90AC2FD471C13830683D064 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m8EC8B00B49A945C66D0D6BB21808DD371742C6FC(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_gshared (ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		Il2CppSharedGenericObject* L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  Il2CppSharedGenericObject* ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tCFF297E1CC8EA0C38E079233316CDB60E9FD1621>(__this);
	Il2CppSharedGenericObject* _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m2A4378A69F83291D4208F4A6617C63102E636EA3(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B2_0 = NULL;
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		__this->___m_StartIndex = 0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0015;
		}
		G_B1_0 = __this;
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0015:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_2)->max_length),NULL));
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
// Method Definition Index: 44550
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1__ctor_mE34B75820BA6C970A87F0EDAF15E5DAA69901653_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		__this->___m_Array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Array), (void*)L_0);
		int32_t L_1 = ___1_index;
		__this->___m_StartIndex = L_1;
		int32_t L_2 = ___2_length;
		__this->___m_Length = L_2;
		return;
	}
}
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyArray_1_ToArray_m2A72D5B07A38C67A79E357FA0B2A69B78993D87F_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m6BCAB50E467E9BA03DAF8CC5B61A330EACD02273_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* ___0_predicate, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t81499D2838AC2641B3FA14CD4DBF7E1594A9E107* L_2 = ___0_predicate;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		il2cpp_codegen_memcpy(L_7, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		NullCheck(L_2);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)), il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 ReadOnlyArray_1_GetEnumerator_mF6A8343060657DE75527CFCA1897D750347FFE4E_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Array;
		int32_t L_1 = __this->___m_StartIndex;
		int32_t L_2 = __this->___m_Length;
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Enumerator__ctor_mF961799B5F1CC1D9AEAC1E22C8F93C2EAC4E885B((&L_3), L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_0;
		L_0 = ((  Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m07F14F7DAB994A9F281140C0BF87018235B5A139(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_0;
		L_0 = ((  Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 (*) (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)))(__this, NULL);
		Enumerator_t9EBFDC5C792D6D306A9C02107ECFBC44DB94E923 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m06A064933B88C1878F75CD6984F5DCB5AA7BB726(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B ReadOnlyArray_1_op_Implicit_m3A2E46C6BBDB810D228A41977FB01D42400E6DF9_fshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_array;
		ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlyArray_1__ctor_m064B80B55276E5435A8AE6B652892FD7F6E8957B((&L_1), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 44557
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	int32_t _returnValue;
	_returnValue = ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_inline(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_fshared (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		il2cpp_codegen_memcpy(L_10, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TValue_tD95CC7A6B32B866027D236D4F8ECDF4C0F18A9B0);
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B>(__this);
	ReadOnlyArray_1_get_Item_mE4191E8B0D91DB7694107E09A98F2A084F2DF2F4(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* ReadOnlyArray_1_ToArray_m7C4848AF221AD3A11F95E50E61A49B4AA1FB58FE (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_1 = (HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD*)(HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mCD96F649D01B1568C86983EC4E2C0A9A5D47FFDA (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* L_2 = ___0_predicate;
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700(__this, NULL);
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m57A507096526418260D0E30361B6FAFC0A4C6454(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371 (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mA10E152A9AD151DA704D1A1FF10176DA8EEC5700(__this, NULL);
		Enumerator_t1858EB5DA113EEDAF7EDEE685C04492B2FBE9C6D L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m4FCD702E63DD1C581A6C4BE41B830C43FD048371(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB (ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		HIDPageUsageU5BU5D_t021CBAE17F584DBB0E9E003DA47E89ADE04211CD* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t4E5F2E199C64150C506F6058B4ACA149156276C7>(__this);
	HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m1BEFFB3B6F62DAA475BFD462C7D0960755A950DB(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* ReadOnlyArray_1_ToArray_m05906B40E65A82D08949407EA1EB1BD511E4F2A3 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_1 = (ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104*)(ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_m5C0002B7FF1AC9E0E8007637E59E26D9A22A3B88 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* L_2 = ___0_predicate;
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595 (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70(__this, NULL);
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m7A9E19F7C6223CA15D490282B01CB9A4FD57C595(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_m41699413CDEB1EEC9A602BF3F9C8991D30908B70(__this, NULL);
		Enumerator_tEDF92AFCC05D1B0B00370110CE3A4BE62C632C7C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mB930858409D2AD8EF5DF95A5AF3167ED5D1F0F0B(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB (ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		ControlItemU5BU5D_t7798E8B7C7F58B8F6D13B567539CD82E962C7104* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t33FF20B344958C68734E3615E9381A0A6F882670>(__this);
	ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mEFFFDCA2553F1C3B52903479ED4A2F57AE42CBBB(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* ReadOnlyArray_1_ToArray_mE9132A31033238EC816E1E9831572B5D2C912F2E (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_1 = (DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE*)(DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mB0290D946917DED43A56915D80416F717DDB52D5 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* L_2 = ___0_predicate;
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1(__this, NULL);
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_mF78BDC237CBE6E662F7A55C37142AD8ADEE4CA55(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mAEB7CA70C66F6C8EF48448BB1548F044185705F1(__this, NULL);
		Enumerator_t924412C78294BC2600FCB913AF5CF4D5F45C239A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_m775BC2314063FE7F3B00F14A4D9DE6FEAA424F5F(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083 (ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		DeviceRequirementU5BU5D_t0496FAAB7554B7BFC270BA53BA6A5EFD5DE061CE* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_t3389F7460233E259F0CCA6A6D86C359BD8271B17>(__this);
	DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_m3C26D8D16A39B39ACAA2055880C770EF5841B083(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 44549
// Method Definition Index: 44550
// Method Definition Index: 44551
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* ReadOnlyArray_1_ToArray_mAD4C7068200B8272E632EDDCA3E0D6744F7C7211 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* V_0 = NULL;
	{
		int32_t L_0 = __this->___m_Length;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_1 = (DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A*)(DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A*)SZArrayNew(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_5 = V_0;
		int32_t L_6 = __this->___m_Length;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_3, L_4, (RuntimeArray*)L_5, 0, L_6, NULL);
	}

IL_002e:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_7 = V_0;
		return L_7;
	}
}
// Method Definition Index: 44552
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_IndexOf_mFE4262FD29B7CC10555B765F22C7D263C0BC97AB (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* L_0 = ___0_predicate;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7EE837B2FC81E79F9F96BEFD9CD8B64870F5C628)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0012:
	{
		Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* L_2 = ___0_predicate;
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_3 = __this->___m_Array;
		int32_t L_4 = __this->___m_StartIndex;
		int32_t L_5 = V_0;
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		bool L_8;
		L_8 = Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline(L_2, L_7, NULL);
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = __this->___m_Length;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}
}
// Method Definition Index: 44553
// Method Definition Index: 44554
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12 (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE(__this, NULL);
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m0EDE2550B1D70ECE3E72979559648052CB9C7D12(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44555
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_0;
		L_0 = ReadOnlyArray_1_GetEnumerator_mB2A30C74F37F825E1839880697783D05A2D950FE(__this, NULL);
		Enumerator_t2B51120BAD814F6BF2C35804FB000B6FB85EDCDE L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 5), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyArray_1_System_Collections_IEnumerable_GetEnumerator_mE5CCEC702B75D77193949F2C716E6229BEDED58A(_thisAdjusted, method);
	return _returnValue;
}
// Method Definition Index: 44556
// Method Definition Index: 44557
// Method Definition Index: 44558
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A (ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->___m_Length;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_4 = __this->___m_Array;
		if (L_4)
		{
			goto IL_0026;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		DeviceInfoU5BU5D_t83A513EC4EB7BD3AA21A9352117520BC63C34E1A* L_6 = __this->___m_Array;
		int32_t L_7 = __this->___m_StartIndex;
		int32_t L_8 = ___0_index;
		NullCheck(L_6);
		int32_t L_9 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 L_10 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		return L_10;
	}
}
IL2CPP_EXTERN_C  DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570* _thisAdjusted;
	_thisAdjusted = il2cpp_codegen_get_raw_data<ReadOnlyArray_1_tA6BF8CE904C9753E9B1BA944C102C36E3B75E570>(__this);
	DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 _returnValue;
	_returnValue = ReadOnlyArray_1_get_Item_mDFB5E4BE282F80EE3CF856F0DD06DD5BD72B8B2A(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 76429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_m434ED7461C2E7568BCD6BA4A788C4BB69D8E35D5_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0;
		L_0 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 76430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_mABDF1BEC26DE10439C869B5479ACCFFBF2B3DEBA_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_8 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = V_0;
		int32_t L_12 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0047:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = V_0;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
		return;
	}

IL_004f:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_14;
		L_14 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_14);
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 76431
// Method Definition Index: 76432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		Il2CppSharedGenericObject* L_1 = ___0_item;
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = Array_IndexOf_TisIl2CppSharedGenericObject_m0C73DE72012C676D6E4354C82EA6550BBADC3D33(L_0, L_1, 0, L_2, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3));
		return L_3;
	}
}
// Method Definition Index: 76433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_m9DDF62E919A397122ED64466833E33480EA94980_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		Il2CppSharedGenericObject* L_17 = ___1_item;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (Il2CppSharedGenericObject*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 76434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_mF7AE2A8A24BEB275E49BF3F9B354A8BDA792171D_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		int32_t L_4 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_004c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_13 = __this->____items;
		int32_t L_14 = __this->____size;
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_15 = V_0;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppSharedGenericObject*)L_15);
		int32_t L_16 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_16, 1));
		return;
	}
}
// Method Definition Index: 76435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* ReadOnlyCollectionBuilder_1_get_Item_mBE6E2D88C69F6514FEE466701A475692D700D3BE_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Il2CppSharedGenericObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		return L_6;
	}
}
// Method Definition Index: 76436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_m71A1888718F07FB7C27E03A0323479CC64FB9D60_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, Il2CppSharedGenericObject* ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		Il2CppSharedGenericObject* L_5 = ___1_value;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Il2CppSharedGenericObject*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 76437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m27FBB2D810E0A0AD5DF459762BF64D4B63333D83_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_001e:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		Il2CppSharedGenericObject* L_8 = ___0_item;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppSharedGenericObject*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 76438
// Method Definition Index: 76439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_m47B0FE6D4FFF67C6AAAEDDCFCBA96922A7507D70_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Il2CppSharedGenericObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (L_4)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0025:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->____size;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_8;
		L_8 = EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_8;
		V_2 = 0;
		goto IL_0055;
	}

IL_003a:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_9 = V_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_10 = __this->____items;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Il2CppSharedGenericObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Il2CppSharedGenericObject* L_14 = ___0_item;
		NullCheck(L_9);
		bool L_15;
		L_15 = VirtualFuncInvoker2< bool, Il2CppSharedGenericObject*, Il2CppSharedGenericObject* >::Invoke(8, L_9, L_13, L_14);
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0055:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = __this->____size;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 76440
// Method Definition Index: 76441
// Method Definition Index: 76442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_m16C754184D14C2E64F71386B150F02685E2C017F_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, Il2CppSharedGenericObject* ___0_item, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		Il2CppSharedGenericObject* L_0 = ___0_item;
		int32_t L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		ReadOnlyCollectionBuilder_1_RemoveAt_mF7AE2A8A24BEB275E49BF3F9B354A8BDA792171D(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 76443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_m47DE3657EA69A40875AF5EEFE0F0825319BC3EAA_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D* L_0 = (Enumerator_tC1F0E9CA9DC16B5DAF7219CEFDC81D297D74BB4D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		Enumerator__ctor_m98C7BD6716BA17D25F8B9B4BD047C68BDEB19815(L_0, __this, NULL);
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 76444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IEnumerable_GetEnumerator_m0A8081D95D269B431496FB0C5AB0146E817BF608_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ReadOnlyCollectionBuilder_1_GetEnumerator_m47DE3657EA69A40875AF5EEFE0F0825319BC3EAA(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 76445
// Method Definition Index: 76446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_Add_m1FFFDA47A95F2010CA3F0CDE2A996E46021A5320_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_value;
		ReadOnlyCollectionBuilder_1_Add_m27FBB2D810E0A0AD5DF459762BF64D4B63333D83(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12));
		goto IL_0030;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_2 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_3 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		Exception_t* L_6;
		L_6 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_3, L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0030:
	{
		int32_t L_7;
		L_7 = ReadOnlyCollectionBuilder_1_get_Count_mC5999DCAC16DD6BDFDE95A9330B2F2B12B4BABDC_inline(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}
}
// Method Definition Index: 76447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_Contains_m794279343D9901470EA1790C98B8E92246DD2EBB_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollectionBuilder_1_Contains_m47B0FE6D4FFF67C6AAAEDDCFCBA96922A7507D70(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 76448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_IndexOf_mD0A2B994ED8AAD91D57C77E5CFC1B89B0B4B2643_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollectionBuilder_1_IndexOf_m035160F7F44A3FC62835CC498A0C353827F573BC(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 76449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Insert_m70346628AA7F6CA869A76C65B1DFE33B3D57A22A_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		ReadOnlyCollectionBuilder_1_Insert_m9DDF62E919A397122ED64466833E33480EA94980(__this, L_1, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Exception_t* L_7;
		L_7 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_4, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 76450
// Method Definition Index: 76451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Remove_m12469477709CACEA25627E870C20AF0AFAE2F5FD_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollectionBuilder_1_Remove_m16C754184D14C2E64F71386B150F02685E2C017F(__this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18));
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 76452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IList_get_Item_m13F2D80995402FEE24AE7BB6D087F282D6D15BFC_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		Il2CppSharedGenericObject* L_1;
		L_1 = ReadOnlyCollectionBuilder_1_get_Item_mBE6E2D88C69F6514FEE466701A475692D700D3BE(__this, L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19));
		return (RuntimeObject*)L_1;
	}
}
// Method Definition Index: 76453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_set_Item_m35EC6754175258D920FA13101A73257E4137BCC6_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		ReadOnlyCollectionBuilder_1_set_Item_m71A1888718F07FB7C27E03A0323479CC64FB9D60(__this, L_1, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_3 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_4 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		Exception_t* L_7;
		L_7 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_4, L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 76454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_ICollection_CopyTo_m12BAF1C5293B7F696453A72CCB740F51B2A35F2A_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = __this->____items;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 76455
// Method Definition Index: 76456
// Method Definition Index: 76457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* ReadOnlyCollectionBuilder_1_ToArray_m27A440E47420469361CDEE5C9B0D78C99F8E6DFD_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = (__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)(__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_2 = __this->____items;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = V_0;
		int32_t L_4 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 76458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m73583AEAD578218F3319098C87C2ECB9026E6990_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0019;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		V_0 = L_3;
		goto IL_0020;
	}

IL_0019:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4;
		L_4 = ReadOnlyCollectionBuilder_1_ToArray_m27A440E47420469361CDEE5C9B0D78C99F8E6DFD(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		V_0 = L_4;
	}

IL_0020:
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_5;
		L_5 = Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_inline(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		__this->____size = 0;
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_7 = V_0;
		TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273* L_8 = (TrueReadOnlyCollection_1_tB5F9BFA643D0B6B89EEC3ED99B9ADB907576B273*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		TrueReadOnlyCollection_1__ctor_mD57EF5451712C65DFCEE4477FCDFD1E8E86143FE(L_8, L_7, NULL);
		return (ReadOnlyCollection_1_t06F71F2F3EBC6E0A34714E0A7EB3367B6D248263*)L_8;
	}
}
// Method Definition Index: 76459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_mE51DEC740B84D2ED1BA90157DF16E404819D25BB_gshared (ReadOnlyCollectionBuilder_1_t8550E6B95F6234B1A5625122654919E1C7839068* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = 4;
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0021;
		}
	}
	{
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0027:
	{
		int32_t L_9 = V_0;
		ReadOnlyCollectionBuilder_1_set_Capacity_mABDF1BEC26DE10439C869B5479ACCFFBF2B3DEBA(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
	}

IL_002e:
	{
		return;
	}
}
// Method Definition Index: 76460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_mC7DC4275D0F4319AA58B02AD81E9B189857EC1E0_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (((Il2CppSharedGenericObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_2 = V_0;
		return (bool)((((RuntimeObject*)(Il2CppSharedGenericObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 76461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_m5A0D9264CEB21C6D6E4894A8DC0FEB534711B90E_gshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Il2CppSharedGenericObject*));
		Il2CppSharedGenericObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		String_t* L_4 = ___1_argument;
		Exception_t* L_5;
		L_5 = Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199(L_3, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0024:
	{
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
// Method Definition Index: 76429
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1__ctor_m250934FFE92E68EB52BFA1DEEA225C006567E7E5_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_0);
		return;
	}
}
// Method Definition Index: 76430
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Capacity_mE67D65656DDB9AE1C58561936CD1EF7A50E4DA7C_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_6 = ___0_value;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_7 = ___0_value;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_7);
		V_0 = L_8;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		int32_t L_12 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, 0, (RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0047:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = V_0;
		__this->____items = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_13);
		return;
	}

IL_004f:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14;
		L_14 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_14);
	}

IL_005a:
	{
		return;
	}
}
// Method Definition Index: 76431
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m69CF2D9BF6F3E0F171B32C9129028208C163EF76_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
// Method Definition Index: 76432
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_IndexOf_m230054649C9E9B91CD99DA0F363651A29A18B6D8_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		int32_t L_2 = __this->____size;
		int32_t L_3;
		L_3 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 3), NULL, L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_1: *(void**)L_1), 0, L_2);
		return L_3;
	}
}
// Method Definition Index: 76433
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Insert_mCC5CF7CBE8C56BCA2DCB0BFD28EE1A45EEE4A172_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_6 = __this->____size;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, ((int32_t)il2cpp_codegen_add(L_6, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_0032:
	{
		int32_t L_7 = ___0_index;
		int32_t L_8 = __this->____size;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0058;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____items;
		int32_t L_12 = ___0_index;
		int32_t L_13 = __this->____size;
		int32_t L_14 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), ((int32_t)il2cpp_codegen_subtract(L_13, L_14)), NULL);
	}

IL_0058:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____items;
		int32_t L_16 = ___0_index;
		il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_item : &___1_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_15);
		il2cpp_codegen_memcpy((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), L_17, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)), (void*)L_17);
		int32_t L_18 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_18, 1));
		int32_t L_19 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return;
	}
}
// Method Definition Index: 76434
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_RemoveAt_m39375336E09168B3D4FFADA6675E57994B75FB7E_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		int32_t L_0 = ___0_index;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___0_index;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0018;
		}
	}

IL_000d:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0018:
	{
		int32_t L_4 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		int32_t L_5 = ___0_index;
		int32_t L_6 = __this->____size;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_004c;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____items;
		int32_t L_8 = ___0_index;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____items;
		int32_t L_10 = ___0_index;
		int32_t L_11 = __this->____size;
		int32_t L_12 = ___0_index;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), (RuntimeArray*)L_9, L_10, ((int32_t)il2cpp_codegen_subtract(L_11, L_12)), NULL);
	}

IL_004c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____items;
		int32_t L_14 = __this->____size;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_15, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_13);
		il2cpp_codegen_memcpy((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), L_15, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), (void*)L_15);
		int32_t L_16 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_16, 1));
		return;
	}
}
// Method Definition Index: 76435
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_get_Item_mBEEFA08F78CF92A07877C3B05F4507CE013B7DC4_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(il2cppRetVal, L_6, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		return;
	}
}
// Method Definition Index: 76436
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_set_Item_m0F01A105DF646D259D03E3088CA5B17925BAC43A_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		int32_t L_1 = __this->____size;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		int32_t L_4 = ___0_index;
		il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___1_value : &___1_value), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_3);
		il2cpp_codegen_memcpy((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), L_5, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), (void*)L_5);
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		return;
	}
}
// Method Definition Index: 76437
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Add_m0528305BD67E04F82A8F4EC8BDFD887D3FFD701F_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = __this->____size;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)))(__this, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4));
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		int32_t L_5 = __this->____size;
		V_0 = L_5;
		int32_t L_6 = V_0;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_6, 1));
		int32_t L_7 = V_0;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return;
	}
}
// Method Definition Index: 76438
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_Clear_m96C2B04252182D9DDB022663C77731F047552C67_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		int32_t L_2 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_1, 0, L_2, NULL);
		__this->____size = 0;
	}

IL_0022:
	{
		int32_t L_3 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return;
	}
}
// Method Definition Index: 76439
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Contains_mE6C66F860D3341CBA7A2D084DC75827B94995837_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	const Il2CppFullySharedGenericAny L_5 = L_0;
	const Il2CppFullySharedGenericAny L_15 = L_0;
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_1 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_0);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		V_0 = 0;
		goto IL_0025;
	}

IL_000c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		il2cpp_codegen_memcpy(L_5, (L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_6 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_5);
		if (L_6)
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0025:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->____size;
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_0030:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_10;
		L_10 = ((  EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0055;
	}

IL_003a:
	{
		EqualityComparer_1_t974B6EF56BCA01CA6AD3434C04A3F054C43783CC* L_11 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____items;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		il2cpp_codegen_memcpy(L_15, (L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_16, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		NullCheck(L_11);
		bool L_17;
		L_17 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(8, L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_15: *(void**)L_15), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_16: *(void**)L_16));
		if (!L_17)
		{
			goto IL_0051;
		}
	}
	{
		return (bool)1;
	}

IL_0051:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0055:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = __this->____size;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_003a;
		}
	}
	{
		return (bool)0;
	}
}
// Method Definition Index: 76440
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_CopyTo_mD4D52FA043D25FB3DC095C23FD4E3A3A44A5BA35_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = ___0_array;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_0, 0, (RuntimeArray*)L_1, L_2, L_3, NULL);
		return;
	}
}
// Method Definition Index: 76441
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m1DD27BB25B29255A180020923925DB9940DAC38D_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 76442
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_Remove_mB7617C1B280DAB2A7016677226C196E5949FADE8_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_item : &___0_item), SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_0: *(void**)L_0));
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_3 = V_0;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(__this, L_3, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 76443
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_GetEnumerator_mBF312A19AD4C3692472CE306D658F430938583B4_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69* L_0 = (Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 8));
		((  void (*) (Enumerator_t80FD5046ECCBFF50D4CD855B7B13C05C89E66E69*, ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_0, __this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 76444
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IEnumerable_GetEnumerator_m4E322850074BCA8CB2E8D0C1808ED817B7B93BB3_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		return (RuntimeObject*)L_0;
	}
}
// Method Definition Index: 76445
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsReadOnly_m6C804BF42FCE7C87AF830A9A03C82BCEE69F1D09_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 76446
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_Add_mC315B1BD9975FCF36C943DB410E98807C5AB392A_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___0_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		RuntimeObject* L_1 = ___0_value;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 12), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))));
		goto IL_0030;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0019;
		}
		throw e;
	}

CATCH_0019:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_5 = ___0_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		Exception_t* L_8;
		L_8 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_5, L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0030:
	{
		int32_t L_9;
		L_9 = ((  int32_t (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14)))(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_9, 1));
	}
}
// Method Definition Index: 76447
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_Contains_mF83E9D29FF61AC04DCC314D055E19AC39A890E8D_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 16), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 76448
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_System_Collections_IList_IndexOf_m4A3ECEF60E1D4A360157CC1E7A735C4653605490_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		int32_t L_5;
		L_5 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 6), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		return L_5;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 76449
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Insert_m1693E139C1F9660532D19331BE296B8DE5595946_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 17), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Exception_t* L_9;
		L_9 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_6, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 76450
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_IList_get_IsFixedSize_mCF189E78FF5AE932EB92B4FC4777BE4B54CBAD9E_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 76451
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_Remove_m10A15392AD932A3DF41F607C342E6907933E5DB7_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ((  bool (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15)))(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 18), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
	}

IL_0015:
	{
		return;
	}
}
// Method Definition Index: 76452
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_IList_get_Item_mB304EB54646EA1127AEFFCDFD67D55A610CDFCA2_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = ___0_index;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 19), __this, L_0, (Il2CppFullySharedGenericAny*)L_1);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_1);
		return L_2;
	}
}
// Method Definition Index: 76453
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_IList_set_Item_m379F32349A5F51DD45C28A465938473136E309ED_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_index, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___1_value;
		((  void (*) (RuntimeObject*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11)))(L_0, _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 11));
	}
	try
	{
		int32_t L_1 = ___0_index;
		RuntimeObject* L_2 = ___1_value;
		void* L_4 = UnBox_Any(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), L_3);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 20), __this, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_4))));
		goto IL_0031;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_5 = ((InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)IL2CPP_GET_ACTIVE_EXCEPTION(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*));;
		RuntimeObject* L_6 = ___1_value;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		Exception_t* L_9;
		L_9 = Error_InvalidTypeException_m434387C9B5952F3087CD01FEA17199E22AADA89C(L_6, L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0031:
	{
		return;
	}
}
// Method Definition Index: 76454
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_System_Collections_ICollection_CopyTo_m185ABD6F8F8392C5ABB1424AF35D4D93ACF596A5_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = il2cpp_codegen_array_get_rank(L_2);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0022:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____items;
		RuntimeArray* L_6 = ___0_array;
		int32_t L_7 = ___1_index;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, 0, L_6, L_7, L_8, NULL);
		return;
	}
}
// Method Definition Index: 76455
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_IsSynchronized_m82796367A13DDF90DA3D17C56AD1DB695B1772F2_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (bool)0;
	}
}
// Method Definition Index: 76456
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollectionBuilder_1_System_Collections_ICollection_get_SyncRoot_m309394D8E2C1EE981D439DC1F2CC59BE2D134B6B_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (RuntimeObject*)__this;
	}
}
// Method Definition Index: 76457
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ReadOnlyCollectionBuilder_1_ToArray_m1802775EC669ACD2D1ECED4B18B0DF0339E7E0F3_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), (uint32_t)L_0);
		V_0 = L_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____items;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_0;
		int32_t L_4 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_2, 0, (RuntimeArray*)L_3, 0, L_4, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = V_0;
		return L_5;
	}
}
// Method Definition Index: 76458
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8* ReadOnlyCollectionBuilder_1_ToReadOnlyCollection_m17809585AA08EEB82BDFD1E21857871DA5BA829A_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____items;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_0019;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		V_0 = L_3;
		goto IL_0020;
	}

IL_0019:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4;
		L_4 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21)))(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 21));
		V_0 = L_4;
	}

IL_0020:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5;
		L_5 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0)))(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 0));
		__this->____items = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____items), (void*)L_5);
		__this->____size = 0;
		int32_t L_6 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_6, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03* L_8 = (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 22));
		((  void (*) (TrueReadOnlyCollection_1_t75B148B212697F1795828F9E34F7984842ADFC03*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23)))(L_8, L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 23));
		return (ReadOnlyCollection_1_t5B7AA4E006906DE6818A44873F2D5987EFBF3AB8*)L_8;
	}
}
// Method Definition Index: 76459
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_EnsureCapacity_mCEFA7FD2BC6D88F51D9E74DF54AFB780C39394E7_fshared (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, int32_t ___0_min, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->____items;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		int32_t L_2 = ___0_min;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = 4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____items;
		NullCheck(L_3);
		if (!(((RuntimeArray*)L_3)->max_length))
		{
			goto IL_0021;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____items;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_5, 2));
	}

IL_0021:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = ___0_min;
		if ((((int32_t)L_6) >= ((int32_t)L_7)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_8 = ___0_min;
		V_0 = L_8;
	}

IL_0027:
	{
		int32_t L_9 = V_0;
		((  void (*) (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24)))(__this, L_9, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 24));
	}

IL_002e:
	{
		return;
	}
}
// Method Definition Index: 76460
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollectionBuilder_1_IsCompatibleObject_m4182A9D16A594A96171C6B2500175BD08CD2BEF6_fshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_3 = !il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_2);
		bool L_4 = L_3;
		return L_4;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 76461
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollectionBuilder_1_ValidateNullValue_m9A9AAC00AF379D1A4AC78A929F7E29A3A7C14681_fshared (RuntimeObject* ___0_value, String_t* ___1_argument, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	CHECKED_LOCAL(Type_t_StaticInit);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	memset(V_0, 0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_tF7F5D54E165224B75F6839AD6F38D3E1EA213057);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2), L_1);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 13)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		String_t* L_5 = ___1_argument;
		Exception_t* L_6;
		L_6 = Error_InvalidNullValue_mD3F707613D9B6413719EB3549DAF5406FBD60199(L_4, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0024:
	{
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
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m685E33687041AE241CB9AF46CD74A0D14F29375B (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ReadOnlyCollection_1_get_Item_mEBD42AD012EFE7A1910937E713DD5AB722CD8613 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m884266F7C492DE4AFA45B5059E72AB8AADFE1701 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m7D73EAE96C93B4A7F580811D230BFA42CDB7DD8C (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0D253BA6255C9D9234169280DF9CAF6D48FAAC09 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mC11B95DC5BCB94CAE3AFA3D16E8D584D5611EC8F (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC4FD28F6482257D37B5258CE74264CEFAB820369 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mEB9EB7095B23B44F8F14F21FA7D8676D1E1073C2 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m685E33687041AE241CB9AF46CD74A0D14F29375B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t2B402FF2AC2B32AA6CC9A5004046806319D243DC*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_35;
			L_35 = InterfaceFuncInvoker1< DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF91E576830715C1BC10E213A8335C4994E1122E7 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF6E466AF68CFEC8F47F7CF45C4133EF69DDF248A (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699));
		DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m2CDBC987328D0A4C7C3D53A94B8131CF425D985E (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mF6E466AF68CFEC8F47F7CF45C4133EF69DDF248A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m884266F7C492DE4AFA45B5059E72AB8AADFE1701(__this, ((*(DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mC4C000C4F111A8FDEE3D570C357DE04C07D2D409 (ReadOnlyCollection_1_tE1E1623260F50B25EF98DCA6C8483A3150D2228C* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mF6E466AF68CFEC8F47F7CF45C4133EF69DDF248A(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mC11B95DC5BCB94CAE3AFA3D16E8D584D5611EC8F(__this, ((*(DeferredArray_tB1EEA722CAEFADCA5DB101F288131BDB91341699*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m838B5E6314B03A3AB9923223BB4821D618210436 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ReadOnlyCollection_1_get_Item_m8CAFB900E919C9B368C965920C6B5C58F9949695 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m0977A268DF5A5540454EFACC58FF2C010A86CD3D (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1F4E49EF3FBED0D0288BF21D013781F18FB4E17A (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m1395E9F514C380126D51E7FA4E9474225F2FABA7 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mFFF2618F4888C7AB1485B1076C10EFD688BC7AD2 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4C5973BEFB28DBA8998AABDA851505227AA0DA67 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mC6C2C5FC384E2ECF64FE6804312783BC27FA8CDC (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m838B5E6314B03A3AB9923223BB4821D618210436(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t3BD4EFCB3657D71410023E0F5130F15EF7A21B23*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_35;
			L_35 = InterfaceFuncInvoker1< DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m601B43E18FB1AF5EF577DAAB6550C10E8D8331E0 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m2052E4178AF32DCCB3A36700D775691B7754B687 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F));
		DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m51360C5128C218815CE27E93C6A7A69A216AFEF0 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2052E4178AF32DCCB3A36700D775691B7754B687(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m0977A268DF5A5540454EFACC58FF2C010A86CD3D(__this, ((*(DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5708D5712EE24BE80D248054FD6F8301E69D17C5 (ReadOnlyCollection_1_t2DA6C24CC896BEFD6DA7C7716A49F4D7560F3D39* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m2052E4178AF32DCCB3A36700D775691B7754B687(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mFFF2618F4888C7AB1485B1076C10EFD688BC7AD2(__this, ((*(DeferredArray_t2BECE302ECB2543D3E0082C7F2B5721514E6270F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m0DA883888751E89AA69F98E60BAFF8FBABB38C60 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ReadOnlyCollection_1_get_Item_mA786D6BC2F8936DE572747C916650D835C00BCE5 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4C16309031446534F4776B705DB4BF2FD0882362 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m81A9F797604A2D0EEE171DD90B8DFBDA3E340370 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m72C3B834A28953CE869BEC101AF1A288C3BE5A5C (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9244F5B1663BCC1829687A2C005146A449BE2A5E (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mCEF1E97A973E01B5C000F1E71A7DA5FDA8F8EDB0 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m05CD623643CE29D0D26B0F62BDBAB7721C5D4D4B (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m0DA883888751E89AA69F98E60BAFF8FBABB38C60(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_tB4ED071664EA73A4D56895411476AB8A983CBCF1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_35;
			L_35 = InterfaceFuncInvoker1< DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m388110CD12D54BEB2C74C894C2A575E311088A8B (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE00C5E66D753E1071BE29CCFB9B1297D147ABF76 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819));
		DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m334AEF35B289E091477877AC2F76B598B154169E (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE00C5E66D753E1071BE29CCFB9B1297D147ABF76(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m4C16309031446534F4776B705DB4BF2FD0882362(__this, ((*(DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m620ACC02A1074AFB1BD31E1CF7B6431874F75B15 (ReadOnlyCollection_1_t84E34036DE2DB092AE83E6D8D0CB44542ADBEAFC* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE00C5E66D753E1071BE29CCFB9B1297D147ABF76(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9244F5B1663BCC1829687A2C005146A449BE2A5E(__this, ((*(DeferredArray_t550A0C1FE3282F51201CDCB03B920FD2C8F8A819*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m71745ADD92D415DAACD7C285EA848CBB6B673B9B (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ReadOnlyCollection_1_get_Item_mB754BA5BF5F34552D27F40F19A3BB2E0F3B27AD3 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mD99308B65BA325981719086EA118A7F077305500 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mDBD20F0FF1559964656B864524BA8E7DAFCFCB30 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7BE6729CCC0BF93184799A044DF675A326150280 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m27BE264B56B78111130857D7F1C06E5C73CAA860 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mCC6CD8BB5EC513A8113380F6D12C8F7C633FFC21 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m515E269D74EA46763E9E96B36B312C0787FAA47C (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m71745ADD92D415DAACD7C285EA848CBB6B673B9B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< DeferredArrayU5BU5D_t6D635F4C80672BA27F457BDBCE514AD117AC2D74*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_35;
			L_35 = InterfaceFuncInvoker1< DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB088507168ED4BB90C9EC67FFF5ABFE718DFCAE7 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_2;
		L_2 = InterfaceFuncInvoker1< DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFD9D85FA10DC0E3CD95A7B801591CCF2DFAFD142 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F));
		DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m2C31D03298CEF3B2D04953E1FF5FD128AA1C8561 (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFD9D85FA10DC0E3CD95A7B801591CCF2DFAFD142(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mD99308B65BA325981719086EA118A7F077305500(__this, ((*(DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m7D880370CB184D9E7AB9836A89A7304993849B2A (ReadOnlyCollection_1_tAF1348CE6C859AC048F871265928A0CA08BD98BF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFD9D85FA10DC0E3CD95A7B801591CCF2DFAFD142(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m27BE264B56B78111130857D7F1C06E5C73CAA860(__this, ((*(DeferredArray_t021DC9D34F571CC415C56616800D2AB61451C85F*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD725B68E38115E1ED393D3E0C92ED8564FE73B36_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ReadOnlyCollection_1_get_Item_m6E43075460727B677C95B8D48327CF795F2D8C0E_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_2;
		L_2 = InterfaceFuncInvoker1< Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m201268DDDC13112173AA1BCBBE02C261CA5BF665_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m75B44BAA39604067F0251889772B6E8F9D5C30D6_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mCA072E85BC22E10FF62731ED523D2C0F28475CEE_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF142780D99644619462FAAA89846C2C0565601E7_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2E8611CA78C473EA158F0BFF04981846B27E5B21_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_2;
		L_2 = InterfaceFuncInvoker1< Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m9EA3C8F6A1852DD50B12A66B9781E92F63EF6708_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD725B68E38115E1ED393D3E0C92ED8564FE73B36(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< ItemU5BU5D_tB2AB30F4C7952C4FA867468576E1493A8858A165*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_35;
			L_35 = InterfaceFuncInvoker1< Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m87735D5AF359D18246420239A427255C5FA80955_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_2;
		L_2 = InterfaceFuncInvoker1< Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E));
		Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA5A3F4A47CEF01686D57100B09C2B2995CFEE4C8_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m201268DDDC13112173AA1BCBBE02C261CA5BF665(__this, ((*(Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mD5C8F86518746C70C6270A045FCE47BACBCF72F6_gshared (ReadOnlyCollection_1_tFAD514F12D7B7A8F9C4AB3D8D58A78CDAB36EAD5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m0CFA3C34B03A44B6938E8310F5098A87CC598F27(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mF142780D99644619462FAAA89846C2C0565601E7(__this, ((*(Item_t7E1C074BAD45111B502C4559B0ECF73B3F52774E*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mC0963FC6DD3F96602A2147E4A82AB5E3D0A374F1_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ReadOnlyCollection_1_get_Item_m87F5F983692A8F7F049C30AE576A64628825670F_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m998337273E514908027348F2AE19B89774318265_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC4D1A9B38DD6E6B10741E7B0DF59EE090FA39CB0_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m5B2033EE008880BA5A245A6B729103756E779F95_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1C8B6015B945A9698E7DFC6E25D174AE08D88435_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m601335E1CF6B2C0988EC5FE1A48DC8D7DDB95B09_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mB9B4509659E1A36B706CEED7321FD4BE55D9F5BE_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mC0963FC6DD3F96602A2147E4A82AB5E3D0A374F1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t1A5E2DC8C4A28412CFB10C3F45A64B3FE257AA93*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE56E8FCD14FE851402EF95B513F8D9DF6E32AEA5_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55));
		KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mD05E149EE4DF8A56D348CCDED2ACF113B53ACFE5_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m998337273E514908027348F2AE19B89774318265(__this, ((*(KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m4CCC493E6A5B8D261AADA518C7596BD47346F726_gshared (ReadOnlyCollection_1_tEE45B9D6F9D801AF392A14866B2D28D1AF43C83A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m06899F73FBFA0C918BAF26D47FE4BC69B0401960(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1C8B6015B945A9698E7DFC6E25D174AE08D88435(__this, ((*(KeyValuePair_2_t4454A395593798308537E86AEE2BC94179CFFF55*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mACEE8AA0779761DB0E633CA4F6CAF03C4BBE133B_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ReadOnlyCollection_1_get_Item_mE445D21A90B0BED4F3CB6261FE3DBDB0C4CA2975_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m82BE11829466F4B5F6BA6D56636698A0441E8EF7_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mD44DAD5D135A77490AAC4CC70BA93AD3AF354E42_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mAC3AD0CF7CA9B681DD504E66E3BFA688F5AD9128_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m2FED9A63761DE9F0D10DEE47A620D54BC62E48FD_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m605CC8343C424711691BE70A8CFE47655BFB94FA_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m7B24A76A6E512623BBD2963A2F2998A072C44440_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mACEE8AA0779761DB0E633CA4F6CAF03C4BBE133B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t8C3533117BF74D07CE298D36241A667A18933530*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m4994ECB1082AA3CF5615AAC28836CE190C9832C7_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C));
		KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mA07E86EE5E774DDA4EE45205A30397A9E921886C_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m82BE11829466F4B5F6BA6D56636698A0441E8EF7(__this, ((*(KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m9A584D5C46FA19F0BB6E70B25FCB7827808DFD72_gshared (ReadOnlyCollection_1_tFE2EC8D461625CA62C2AF94FA2F7DDF97194CE40* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m629471BF6D796C6BC0E657A5AA694DD03EBB3E72(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m2FED9A63761DE9F0D10DEE47A620D54BC62E48FD(__this, ((*(KeyValuePair_2_t85A6E3752184914490EEE166E70BB9926A661F9C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m817982520ED3B7B990BE9982710B049AA93EE11B_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ReadOnlyCollection_1_get_Item_m63F37A0DBA4DB0FC12E5A4542917C091DF2875BA_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m80C308502468318FDB526747A3F094B513D09934_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mFB9FABFF9FDE85DF1F552A46633DF295C95597DC_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m46AACE03C568280600AB61801D7B7F70A341D2AE_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m8F784115A7A0930E20320A561C75BA427825E62B_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m306879C4F254C9A54C13924512802A5522E81ABF_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m767FC8BCBEA0CFF0584EE67425BD63EFA86A4341_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m817982520ED3B7B990BE9982710B049AA93EE11B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t0661BCE2F9AC2BF1C4889A02085ED513CA901A9E*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m19143B57AAE175B4FE6508973FF09F262691520C_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4));
		KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mE02B947F7FDFE6E156AE2A7404B3AE5F42051635_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m80C308502468318FDB526747A3F094B513D09934(__this, ((*(KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m1A1F1A9F9F556340679A5B2AA0CF1387D98F855C_gshared (ReadOnlyCollection_1_tA87A22BE0368936D35907C56A06F25FC07403A6F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m3B640EB0BB079B77FC483EDAABAEC14520D14021(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m8F784115A7A0930E20320A561C75BA427825E62B(__this, ((*(KeyValuePair_2_tE27DBC67EA0E9A37D7E95BFBE485B272EECD3EB4*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m45A857F8A98E3E51C009D604618932CE66CF04BD_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ReadOnlyCollection_1_get_Item_m7C7A8A2E21BBE2D195F5E6BE7C34BAB5045C3E50_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m484AD86EC9E9E3FB503BC624F9122E3F3A85DD50_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m62D9EE1C343E05D4F77C753A30EFF706965720C0_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mD0653C4670EA7CB84272EB52BD92E004CE74D0C6_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mA000B8EB7528D9D41F6FD5CC4E289011D35F6381_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m4B3FED615E28EB08E9BA3028D9286C315BBFDB32_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m6B4DCC17F5F1F91C637FCEA2AADC480D3459BC5D_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m45A857F8A98E3E51C009D604618932CE66CF04BD(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t53569AB98BFFAF6E14A05AA258054C602CAB0019*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m8210AE6BF86E5C7AED62EDB74E2BA421BB032D2D_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8));
		KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m563448832162A728BCB5663168E727CF8C82D1BE_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m484AD86EC9E9E3FB503BC624F9122E3F3A85DD50(__this, ((*(KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m4CD11BC00A28902657E5FDB4873F7EDC9CB42C4E_gshared (ReadOnlyCollection_1_t04D296D48307F762C189072DF2CADF67BAE6A521* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4A7F343A4378D60CBF28DE48BF8D98AC0BB68E78(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mA000B8EB7528D9D41F6FD5CC4E289011D35F6381(__this, ((*(KeyValuePair_2_tC204C7251A9AA0A2ECAE3B05EB7D84010AFC50A8*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m6D64B6B073FD1CF4D831ECFE05E1623A75FB96F5_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ReadOnlyCollection_1_get_Item_m699F4E359994D43B4AF96E2FAA62A70857530D81_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m75BDDF78FE058AD7B469434093D7A0D2998E10E7_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1B53997C8C69807F47715D86807228C2282C3697_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mDE1687BE6271CC75BB3A350B38C03247D01C2C11_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m28F2D0F0B3F893D1802E4D7B17256C66AEC58BBF_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m26664E9B626FC28267B29D0D4F0E0B5CF8DB4AE8_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFB95CB86294DD42764F0657553E8C24820CE3419_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m6D64B6B073FD1CF4D831ECFE05E1623A75FB96F5(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t78D9368B607748564E2110C38FC6FCC5150E8DDA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mDCB0392C5C992720147FE1271F01165F95797ED7_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826));
		KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m37AA89FB0E29F2749B11285B444202DF12D23911_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m75BDDF78FE058AD7B469434093D7A0D2998E10E7(__this, ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mAB1789BCF86DD593737EC27484609F4E74AEDCEF_gshared (ReadOnlyCollection_1_t6BC2DCBE8EB131D79FE145A3861C3786E17D3CA5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m8716C838CA177C8AB0EA887D0B855BBD3B876695(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m28F2D0F0B3F893D1802E4D7B17256C66AEC58BBF(__this, ((*(KeyValuePair_2_tEB5CFC17B6D8F2A082613AF75FCB091A2A4EB826*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m37C1965F27A1810D3AAA1331497EFA1D51A975A1_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ReadOnlyCollection_1_get_Item_m1D0BE9DD9F6C77C6AB76BF592BB737749FDA8AC1_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m1275764B723E3599AF2891F21C8F96CE3635C4BA_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m717D98DD8D89C38BB3B062FAB6042B71EDCB285B_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7EDC6397DE4B5BC948E9D0436DBAC2DF12F8DDCF_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mBD2424B8EBC3D9058E16CED4581527606F63F012_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB5FD6B3B424CC0C17ADEBBBA89AE0D927694F563_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m8BEAB0128E74A40FF762A5E0B5590BA400D59912_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m37C1965F27A1810D3AAA1331497EFA1D51A975A1(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< KeyValuePair_2U5BU5D_t899E6C9DD89ED99CCF993FA90A368CCB9286EC61*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_35;
			L_35 = InterfaceFuncInvoker1< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mDCF9C33B69A77558A9CAB9A1CD892E89B2BCC2A3_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_2;
		L_2 = InterfaceFuncInvoker1< KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764));
		KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m300770270DE8D5C24F54682E5266AFDED21FC62A_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m1275764B723E3599AF2891F21C8F96CE3635C4BA(__this, ((*(KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m5373FE061713574B8537102BC74485EB07A10750_gshared (ReadOnlyCollection_1_tBD4CCEBC45FD27F930F251750EDEF0FE0F9067F4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m601594B931ACDA13FE772739FA4D3CEDB95165A8(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mBD2424B8EBC3D9058E16CED4581527606F63F012(__this, ((*(KeyValuePair_2_tBACD60E472B89AFFBC34B7B0D1E260E20392A764*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m8A97077239C70BE9C9375F2127C82F3C283E81A3 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ReadOnlyCollection_1_get_Item_m40C106B8CA3870D1798C7C834AFE5C3270650ABC (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mBE15981470D788343F71D108AD20D6B88C99B199 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m960E93D04F7BB4C3196EDABBF8269A2CC2DC6067 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7CD2E917812626CEAE332A9FDF4B6DB1A4539E1D (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mD789D84F5F7E12E4F6F6C7659ECB705958FE8531 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m93ECE25F91F8E3EC14960A6B5A768181AEFF2EBB (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mABABF6012465B12EA33B1AFF2A77B1DD4BDE1DC7 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m8A97077239C70BE9C9375F2127C82F3C283E81A3(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tA4169A0FB467A7CC805A274BAA933F0DAE293522*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_35;
			L_35 = InterfaceFuncInvoker1< NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mE4FB5677A2AFD228A37989BF6D810AFC864322AC (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mF7AA90D7AC9126E9396188FEADDDAE16BD698924 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C));
		NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mEF70EF82062C13A6FD3594CC5AC18DDFDE31DF20 (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mF7AA90D7AC9126E9396188FEADDDAE16BD698924(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mBE15981470D788343F71D108AD20D6B88C99B199(__this, ((*(NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE09E978D305CC389B3B37EBDCFA98D9CB57BE80E (ReadOnlyCollection_1_tB76E98FC73705D2AC28EA90D4EC4CB91CAEDD46F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mF7AA90D7AC9126E9396188FEADDDAE16BD698924(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mD789D84F5F7E12E4F6F6C7659ECB705958FE8531(__this, ((*(NativeArray_1_t1E4E343391EE676E3EE93E992C0AE9BDDD5E5C4C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mAB482F95F7DAD8E45AEFC9D68113DC67B5A5FF18 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ReadOnlyCollection_1_get_Item_m6378D284A2C1CAE78DC5C88EC20B4D3B7ED437BD (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91996AFFF42C95AF18381233760D0FE8FB91D9CF (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m30009E15C56609BB3886702EDAC955B538B24AC1 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m9883C977AD4FFE8FB4773CAB9490760F7664556D (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m880B9A3177AA9FABE2C74EAAE1C697D1A6FB344A (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mEF16766FE21DBE5CFF25786E3575AD393FCD77BC (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mDC1A59CE4F6A75E2AC41DCBF7F34B84D58BD0091 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mAB482F95F7DAD8E45AEFC9D68113DC67B5A5FF18(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_t75698E5C2142DD4A324DD38EE484D69C8FD2CFD3*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_35;
			L_35 = InterfaceFuncInvoker1< NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mA39FA944285BA334E2F6A3B769A757AA100E3F66 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m182F39AC5FB4735C49EE66373D712B20B3FF5FA2 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3));
		NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m1EDC4EA609E713EC60FF5EDC0CFC354413B57E8F (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m182F39AC5FB4735C49EE66373D712B20B3FF5FA2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m91996AFFF42C95AF18381233760D0FE8FB91D9CF(__this, ((*(NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mA2D6E1694EE93ADFBB5650306D5712A4A2FD2B03 (ReadOnlyCollection_1_t0D56A0B09546E9F141C635D6C4F759EE9A3B9878* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m182F39AC5FB4735C49EE66373D712B20B3FF5FA2(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m880B9A3177AA9FABE2C74EAAE1C697D1A6FB344A(__this, ((*(NativeArray_1_tF9AAF96E0048E8B93F277A9EAD3955253C6B34C3*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mD6A2DD10645C3C99E93B0A5D35C167ED7BA3B2B9 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ReadOnlyCollection_1_get_Item_m96801DE441E269D45A75087F608AF91FB487EA18 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m4CAC8D293E40FB4526D9C23196EACF849F429379 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m679FCB6BEC2AAC001DFBFA4AF239BB66D2D82D21 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m2F2BA77D96D20FB4CBD93C22136C8C56BE238584 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5550CBD835D9F269CB5920858A48CE8147947A92 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mC03772647AF92C4CD78B8F95BC64A1BE2CBA1C07 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mF5686907C679E6E3CAC0BF3104C6A6473556C690 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mD6A2DD10645C3C99E93B0A5D35C167ED7BA3B2B9(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_t48F28BC4076C1A1608AA864367077AD64E04C11D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_35;
			L_35 = InterfaceFuncInvoker1< NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mDA1A6C37432F5641C6926B4A6972390FF48BAA15 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB6E515FF09DE1EE6B9C37CFC896EE7F4CA113045 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD));
		NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m37C1E821DE130C84F7370F46B0556F4E04E3DC87 (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB6E515FF09DE1EE6B9C37CFC896EE7F4CA113045(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m4CAC8D293E40FB4526D9C23196EACF849F429379(__this, ((*(NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m14D01AA220BAF27401A450B5B7CCF43A26E0EFBA (ReadOnlyCollection_1_tD8E444758C2B4F97F35F47C75733B6B72311798F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB6E515FF09DE1EE6B9C37CFC896EE7F4CA113045(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m5550CBD835D9F269CB5920858A48CE8147947A92(__this, ((*(NativeArray_1_tDCB166A7D351D6EEDCDE6CB91075388DEEA5E3CD*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m99B9E7E11429F47D1A80327473949E466B4B91F7 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ReadOnlyCollection_1_get_Item_mDA46F2A9F24434471E88DC1AF5066047897AA122 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m9D0ABDC9DCDC95FB974D3BA50CCBEF239118F318 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2AA63FC4B7C031131B7959E06864EE3B660BDBF7 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m963C9361F1C107D44B9AF93903CB858147C04568 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m1B382823F3A9C24EDE706056482E6D7C53005987 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mB15C6C1FEE8FDBEA2027689D8E321ABD9E7655E2 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m448AE2C74D0AFF41D82DDDAFCC1837A72C7046E7 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m99B9E7E11429F47D1A80327473949E466B4B91F7(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tDE03AA4E156F57D3C8AB46696D4EE33FF8021124*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_35;
			L_35 = InterfaceFuncInvoker1< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB3AFCEC283581AA64697DB2E51804AB85BABB24C (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m4ABCC0DC73891F9BB3D5CEF83BE2EEFD63DC05BB (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0));
		NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mC696EAC422FFD0D8481040410CA0190B7BC828AF (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4ABCC0DC73891F9BB3D5CEF83BE2EEFD63DC05BB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m9D0ABDC9DCDC95FB974D3BA50CCBEF239118F318(__this, ((*(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m164D283F0F0C4C6CA01A941DFDEB1ACFB55366F9 (ReadOnlyCollection_1_tB4793F559D7FDEB4777EFD82476AB6D13555EDC6* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m4ABCC0DC73891F9BB3D5CEF83BE2EEFD63DC05BB(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m1B382823F3A9C24EDE706056482E6D7C53005987(__this, ((*(NativeArray_1_t1ABEAB84724CAEAFCB8767B8502FD3185AC9CAD0*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m16D553F92458225BB8CE5B325E381F38E84F3A3F (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ReadOnlyCollection_1_get_Item_mCE9D95F37D96010E1E46A31C8FECBCA8E79EC6C7 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mC8653C9B3196644FFCCDE9279DFC1E25D1DB6D89 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m1E1E07B120AB90D255A0C501A62DADD3739EA902 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m87F86036E138932A24D2687522A2AB87101FA042 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m5C407CE31DA6DAB79055A3C67C72D7674F358E03 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m2D45F8000A19EC8AF63395A32FD9B047A017A0C1 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD8FD01CFDD7266E6AEF7245A79605548E0562BEF (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m16D553F92458225BB8CE5B325E381F38E84F3A3F(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeArray_1U5BU5D_tB9179B8E492F9CEBC40651BF1C66A50255128C61*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_35;
			L_35 = InterfaceFuncInvoker1< NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mF8DDB9E747245460D291D3930506F9BDBCF99D1A (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_2;
		L_2 = InterfaceFuncInvoker1< NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m24AE4FAC7DBAB5FE4C92AEE7F9E04E80D5C7FF98 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57));
		NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mAE621D1D14DA22580F6A2353D90BB95CD4E0C923 (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m24AE4FAC7DBAB5FE4C92AEE7F9E04E80D5C7FF98(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mC8653C9B3196644FFCCDE9279DFC1E25D1DB6D89(__this, ((*(NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m0302DDB48E3868DCA5AB21AD4A5381CD0B74B56C (ReadOnlyCollection_1_tC6B1FE82DA5F2D752FD7AAF8B3602A6A7B8296AE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m24AE4FAC7DBAB5FE4C92AEE7F9E04E80D5C7FF98(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m5C407CE31DA6DAB79055A3C67C72D7674F358E03(__this, ((*(NativeArray_1_tA250DFA6F2B09B543458A4231692763973E84C57*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m479FD11AA0603AE8828762261714E8C366F349C6 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ReadOnlyCollection_1_get_Item_mE11CB36C60A306CA314AF5076F5DBADF401FC0A2 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m91A164D681D8812A4148D2561B6ECEC02CD61C49 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mC695D4779A3EC8046EC93798A513DF8536F6DC93 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mC8953A5D07AC0F33DF2C93C3F8C5D12735CC6BAD (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m71CEFBE6F99A20BB57961EC3A8455CA7919F7150 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m48BAE7AC5C032B8D3CEB679253700DA126D138E3 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mD3A2FA2E5A84975F5BC3D79DF4D2BF656B288926 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m479FD11AA0603AE8828762261714E8C366F349C6(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_tA2658F536BAB96D3A40A226CE9FCC90F25ADC8FA*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m977FF595D501F322FCADBBB1293DEE4D7CD58C33 (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m7221B30E09E70A275D9F6D234544A9F037EC0E3D (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C));
		NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m0785994BFB96319A5771EC70372EBFBA360A8C5E (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7221B30E09E70A275D9F6D234544A9F037EC0E3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m91A164D681D8812A4148D2561B6ECEC02CD61C49(__this, ((*(NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mADAD08167D06FAB10CB355969184859FAAF4ADCD (ReadOnlyCollection_1_t24841FDB9600CDE25CF2E865408C4CD8652BF7F7* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m7221B30E09E70A275D9F6D234544A9F037EC0E3D(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m71CEFBE6F99A20BB57961EC3A8455CA7919F7150(__this, ((*(NativeSlice_1_tD082749657486F7547D4E8EBD2FFB858BA6CD98C*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m90E7B655CC2C12EC37423A97EBB21DB1680BE06B (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ReadOnlyCollection_1_get_Item_mA05837108CB33750F6B5C5AE7D13B6145AA55120 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_mF127107360D2211BEFC85AAEE36D96F6408B065E (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mB8CBD5A8E8742BF5A1EFE82BCFD90E042A9E03D3 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mDA2F489CF5F8FE67D5AA81B0DC52187A4CBF5752 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m9229451605652B5DB71F8B8FE73569DEFFA6094D (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m641422859776F5EA559056B8C5750AF25E7ED765 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m137B18DDE22D6A70183597CF66B5736DA1075FAD (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m90E7B655CC2C12EC37423A97EBB21DB1680BE06B(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t4AA4AF19AB9FDDBD4CC8C6F7E4A9C6AC063C09FD*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m6F840C831B3F27397220011291F9E6AF1A690163 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mFDF4573C72E27A48C6A8BAE4DFE0C5EBD25CCA98 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B));
		NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mAF552CE56ECCC77337E4F05B992335F06DCCF03E (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFDF4573C72E27A48C6A8BAE4DFE0C5EBD25CCA98(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_mF127107360D2211BEFC85AAEE36D96F6408B065E(__this, ((*(NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m3D593C1923C6E384DA1E7ACB0C124FF489BE5288 (ReadOnlyCollection_1_tCDCE8AA9C0E38704960C02BBBFE7EE9BA3CE89E3* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mFDF4573C72E27A48C6A8BAE4DFE0C5EBD25CCA98(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m9229451605652B5DB71F8B8FE73569DEFFA6094D(__this, ((*(NativeSlice_1_t1108006793B0D86DFCF2E4481CD5E5E32AFF591B*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1F139D4AE644DB044C847F0F70224AD21C6F70FB (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ReadOnlyCollection_1_get_Item_m1318850CDCF8CC85F56D5F09F278979ACBBECDEC (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3EDD912161578F48F5E76C01D7C19F8F98B5617E (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m25B83A58F3A457AEE51B4BA0AFF8FA92F561D610 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mB4707B2043FE679D41D7BB9DEF9159BBC7CB5F78 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mB9392399119A83D55E96CED8494B18D93A4B5899 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m5ED9DF363E9F8622699FEACF05306DD24A778F63 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m044B33936BF08E42AF5A6ADEA30CD1D8399AB1E7 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1F139D4AE644DB044C847F0F70224AD21C6F70FB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_tDC36ACB61BCAC1B7A036318D24BE1BCB309EC376*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m0A33EA2BCDCE6C77CAD293FBE71119B91085B53D (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m17BEF3D58FBEC0BEF9235AE0049F72FD06EFC57F (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0));
		NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mBA2D21B6E7D37D20AFA09D792725BDDF9E40C3EF (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m17BEF3D58FBEC0BEF9235AE0049F72FD06EFC57F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3EDD912161578F48F5E76C01D7C19F8F98B5617E(__this, ((*(NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m979576AFB61AB8491901F3A0EE011AEC986E79B4 (ReadOnlyCollection_1_tCC07111583221315005E4E1E874F689440FA7178* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m17BEF3D58FBEC0BEF9235AE0049F72FD06EFC57F(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mB9392399119A83D55E96CED8494B18D93A4B5899(__this, ((*(NativeSlice_1_t84638F9F5F454538786C27E8F639E0B602DB00D0*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m1E0EFF605A7C6AFE538C0AA18CC455215DF08677 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ReadOnlyCollection_1_get_Item_m10575B299C797BD100EE5C1525C70A9BC5321EC2 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m2506B3215547F42B9D6E73C07F394B8CCC14EDA2 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m991ECEAE7FEE19276416507DDFFF0FB8F4204D8F (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEF780551B85AB70B29F595BD65E11B021926C360 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m774093B34CAD7C830556A1CD6D842A18A7A9FDF8 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m7D6B6450820056C6300A8F66EC2441C693F136DF (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mFFBC3EBB0A18030C00B3500D1F35C7CC20607210 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m1E0EFF605A7C6AFE538C0AA18CC455215DF08677(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t2F30D5283C1DFCDDB22E354B120151CB6D5E2320*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m789A3DC6A217D81D208DC156D588CDBAB8E0042A (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mE45427E8FB79B15653D9795E67A727F7532F235B (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A));
		NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m766DC97577D1930C104C8EBD6CE2CDDD4B7BD291 (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE45427E8FB79B15653D9795E67A727F7532F235B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m2506B3215547F42B9D6E73C07F394B8CCC14EDA2(__this, ((*(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m2D61D7172348611A445AD8C213C5A7FEF28A68CA (ReadOnlyCollection_1_t2245CEADA11E6FEBA5175FE80F72F1EC6303D794* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mE45427E8FB79B15653D9795E67A727F7532F235B(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m774093B34CAD7C830556A1CD6D842A18A7A9FDF8(__this, ((*(NativeSlice_1_t0D1A1AB7A9C4768B84EB7420D04A90920533C78A*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m3BA31B14BBC7A97723D334EE4916E6B9CE7AE4AB (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ReadOnlyCollection_1_get_Item_mF78823A75F543FE39BE1593416C0013AD071BE6C (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m21357843C08DD018321DEC0F827058249C12FFE6 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mFBC2E9DC627A03E8F0E965C122E976E28229DC2F (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mEF90514140DBDDDFE77E5021C0D147306ED6BB71 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mF638FA3440A3F8803CF8FD7C4E6C5165141DE67D (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m628186FB98277E9FBA92D00842DC0FA6A86979D5 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_mCF6665363CC40972B252CCE71978589447B93377 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m3BA31B14BBC7A97723D334EE4916E6B9CE7AE4AB(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t16C12F471D23F4C960D0CF0233390A24D85676C1*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m64D191F1D2A211C759CCED2332797EA94BA2B3BD (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mB69CBF81CE741C05119502E3BBE6A16168167183 (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2));
		NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m9543660DCDFAA6DEEC62027270D66C4AED4C601F (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB69CBF81CE741C05119502E3BBE6A16168167183(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m21357843C08DD018321DEC0F827058249C12FFE6(__this, ((*(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m76A8C6D3EEBF108D1B1919882C34D4AADB22B7A7 (ReadOnlyCollection_1_t86BCA7134ABD8077F6D16A9EA271254CDCB49261* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mB69CBF81CE741C05119502E3BBE6A16168167183(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mF638FA3440A3F8803CF8FD7C4E6C5165141DE67D(__this, ((*(NativeSlice_1_t66375568C4FF313931F4D2F646D64FE6A406BAD2*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mB0E24DAF8C568571332AF177303189F62090F44D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ReadOnlyCollection_1_get_Item_mBBBF373AC58DD2DA8A48EF192BF687AAC6DF5C78 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m3E4CA572BF4E2858AABCCDEA7E1B9639139ED95D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_mFE07C0A91E708F5E8E4323335D8D5C2344F75C53 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck(L_0);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m44BC1D4D03915497823C0805B569F9B765394BDB (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_m65881C5133BEFF21657BE17CDA6B0D53F0C1A069 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m791E0FBB3BC9AF94DDA390EF804242E725006AE5 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m9249CF82D55A3C4E968238CEF40F9365D207D8DA (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_mB0E24DAF8C568571332AF177303189F62090F44D(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck(L_12);
		InterfaceActionInvoker2< NativeSlice_1U5BU5D_t010FDB7575A78BB3EB09D1D008F9835266FF7623*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_35;
			L_35 = InterfaceFuncInvoker1< NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_mB3CE7F90C7D52939223AD6540F7AD3F29A54552B (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_2;
		L_2 = InterfaceFuncInvoker1< NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_m188B55BB38B193FE525D0168DD93F727B284303C (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9));
		NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_m698C083A44C7BC5E48DF63A43E1EB71F19275C2D (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m188B55BB38B193FE525D0168DD93F727B284303C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m3E4CA572BF4E2858AABCCDEA7E1B9639139ED95D(__this, ((*(NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_mE3FE1C29590A8F2D80BADBA94437162995213426 (ReadOnlyCollection_1_tDAF439ECFF6B5073A5E3A78B62C04D6235A0E86D* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_m188B55BB38B193FE525D0168DD93F727B284303C(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_m65881C5133BEFF21657BE17CDA6B0D53F0C1A069(__this, ((*(NativeSlice_1_t8E27FA1E73FC8A04E990C238360882D58A2DB2F9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_m37180A76E0619AEDD98CA4CD3CE3D2AE615BDAC8_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ReadOnlyCollection_1_get_Item_m4F8F8138C5415F6AB7D32FB24259645C905017A1_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2;
		L_2 = InterfaceFuncInvoker1< OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_Contains_m6C63C7438BEAC842A1ECFC04649C97CAE0CFCB34_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_1 = ___0_value;
		NullCheck((RuntimeObject*)L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 >::Invoke(4, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_CopyTo_m2E21FB28DD5BF57DB659C3736C19A21A71EE41D8_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_1 = ___0_array;
		int32_t L_2 = ___1_index;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker2< OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_0, L_1, L_2);
		return;
	}
}
// Method Definition Index: 10917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m58002416092E24FC7A6BA247A17BBE6FF36A1A0E_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		NullCheck((RuntimeObject*)L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 7), (RuntimeObject*)L_0);
		return L_1;
	}
}
// Method Definition Index: 10918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_IndexOf_mCF3CFD24A275A071347D7D4B4B237723BD3ED298_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_1 = ___0_value;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 >::Invoke(2, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10919
// Method Definition Index: 10920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_mE78EF38A2D352DF49B331DE246627B58DC3D1E41_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2;
		L_2 = InterfaceFuncInvoker1< OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		return L_2;
	}
}
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m513B0F48492B4A6D789F74BCADFE74D1F9AE3E86_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* V_0 = NULL;
	Type_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(3, NULL);
	}

IL_0009:
	{
		RuntimeArray* L_1 = ___0_array;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = il2cpp_codegen_array_get_rank(L_1);
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0018;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(7, NULL);
	}

IL_0018:
	{
		RuntimeArray* L_3 = ___0_array;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_3, 0, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(6, NULL);
	}

IL_0027:
	{
		int32_t L_5 = ___1_index;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		ThrowHelper_ThrowIndexArgumentOutOfRange_NeedNonNegNumException_m57AAB1E093F20BFC64BDDBD90FB5B592F582B82F(NULL);
	}

IL_0030:
	{
		RuntimeArray* L_6 = ___0_array;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = il2cpp_codegen_array_get_length(L_6);
		int32_t L_8 = ___1_index;
		int32_t L_9;
		L_9 = ReadOnlyCollection_1_get_Count_m37180A76E0619AEDD98CA4CD3CE3D2AE615BDAC8(__this, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, L_8))) >= ((int32_t)L_9)))
		{
			goto IL_0046;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_m698044D4F664D7D0DDB88124EEEE2D052AF628BA(5, NULL);
	}

IL_0046:
	{
		RuntimeArray* L_10 = ___0_array;
		V_0 = ((OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D*)IsInstSealed((RuntimeObject*)L_10, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 11)));
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_11 = V_0;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeObject* L_12 = __this->___list;
		OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D* L_13 = V_0;
		int32_t L_14 = ___1_index;
		NullCheck((RuntimeObject*)L_12);
		InterfaceActionInvoker2< OVRResult_1U5BU5D_t41D895E0AF1C283FF2AD2CB3947427983291FD2D*, int32_t >::Invoke(5, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_12, L_13, L_14);
		return;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___0_array;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = il2cpp_codegen_object_get_type(L_15);
		NullCheck(L_16);
		Type_t* L_17;
		L_17 = VirtualFuncInvoker0< Type_t* >::Invoke(47, L_16);
		V_1 = L_17;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 12)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		V_2 = L_19;
		Type_t* L_20 = V_1;
		Type_t* L_21 = V_2;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_20, L_21);
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		Type_t* L_23 = V_2;
		Type_t* L_24 = V_1;
		NullCheck(L_23);
		bool L_25;
		L_25 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(22, L_23, L_24);
		if (L_25)
		{
			goto IL_008c;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_008c:
	{
		RuntimeArray* L_26 = ___0_array;
		V_3 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)IsInst((RuntimeObject*)L_26, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = V_3;
		if (L_27)
		{
			goto IL_009b;
		}
	}
	{
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
	}

IL_009b:
	{
		RuntimeObject* L_28 = __this->___list;
		NullCheck((RuntimeObject*)L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 0), (RuntimeObject*)L_28);
		V_4 = L_29;
	}
	try
	{
		{
			V_5 = 0;
			goto IL_00cd_1;
		}

IL_00ad_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = V_3;
			int32_t L_31 = ___1_index;
			int32_t L_32 = L_31;
			___1_index = ((int32_t)il2cpp_codegen_add(L_32, 1));
			RuntimeObject* L_33 = __this->___list;
			int32_t L_34 = V_5;
			NullCheck(L_33);
			OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_35;
			L_35 = InterfaceFuncInvoker1< OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_33, L_34);
			OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_36 = L_35;
			RuntimeObject* L_37 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_36);
			NullCheck(L_30);
			ArrayElementTypeCheck (L_30, L_37);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (RuntimeObject*)L_37);
			int32_t L_38 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		}

IL_00cd_1:
		{
			int32_t L_39 = V_5;
			int32_t L_40 = V_4;
			if ((((int32_t)L_39) < ((int32_t)L_40)))
			{
				goto IL_00ad_1;
			}
		}
		{
			goto IL_00dd;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00d5;
		}
		throw e;
	}

CATCH_00d5:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_41 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ThrowHelper_ThrowArgumentException_Argument_InvalidArrayType_m469A6A5731A0F1E94D8B609ED9D001C3A1652A58(NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_00dd;
	}

IL_00dd:
	{
		return;
	}
}
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_System_Collections_IList_get_Item_m866D24E78742F4982ED7F6E995675281BE81C38B_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = __this->___list;
		int32_t L_1 = ___0_index;
		NullCheck(L_0);
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2;
		L_2 = InterfaceFuncInvoker1< OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9, int32_t >::Invoke(0, il2cpp_rgctx_data_init(il2cpp_codegen_method_rgctx(method), 2), L_0, L_1);
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4), &L_3);
		return L_4;
	}
}
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7_gshared (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_1 = ___0_value;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9));
		OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9 L_2 = V_0;
		return false;
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// Method Definition Index: 10938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyCollection_1_System_Collections_IList_Contains_mFB570652058F6CFD3E1C5E20A4D8E23E5E031CBD_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		bool L_3;
		L_3 = ReadOnlyCollection_1_Contains_m6C63C7438BEAC842A1ECFC04649C97CAE0CFCB34(__this, ((*(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 14));
		return L_3;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// Method Definition Index: 10939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_System_Collections_IList_IndexOf_m312896DCFBCA7AE861C185964398ADBCE56CB6B6_gshared (ReadOnlyCollection_1_tD16A720665968F809E9F48BF9E850727E1C69F0A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		RuntimeObject* L_0 = ___0_value;
		bool L_1;
		L_1 = ReadOnlyCollection_1_IsCompatibleObject_mD96CC2F99FF2198FF9C3948D05CE65F54D8404B7(L_0, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 13));
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_2 = ___0_value;
		int32_t L_3;
		L_3 = ReadOnlyCollection_1_IndexOf_mCF3CFD24A275A071347D7D4B4B237723BD3ED298(__this, ((*(OVRResult_1_t705BBA99EC7BB1E103BAA80F2FC3B63608AD27B9*)UnBox(L_2, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 4)))), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 15));
		return L_3;
	}

IL_0015:
	{
		return (-1);
	}
}
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 10912
// Method Definition Index: 10913
// Method Definition Index: 10914
// Method Definition Index: 10915
// Method Definition Index: 10916
// Method Definition Index: 10917
// Method Definition Index: 10918
// Method Definition Index: 10919
// Method Definition Index: 10920
// Method Definition Index: 10921
// Method Definition Index: 10922
// Method Definition Index: 10923
// Method Definition Index: 10924
// Method Definition Index: 10925
// Method Definition Index: 10926
// Method Definition Index: 10927
// Method Definition Index: 10928
// Method Definition Index: 10929
// Method Definition Index: 10930
// Method Definition Index: 10931
// Method Definition Index: 10932
// Method Definition Index: 10933
// Method Definition Index: 10934
// Method Definition Index: 10935
// Method Definition Index: 10936
// Method Definition Index: 10937
// Method Definition Index: 10938
// Method Definition Index: 10939
// Method Definition Index: 10940
// Method Definition Index: 10941
// Method Definition Index: 10942
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4925514CC4302994581398D23A8B49200B76E1F8_inline (Predicate_1_t80FB7E5C66BEF660F7A73B065A0027BEB853ED76* __this, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, InputBinding_t0D75BD1538CF81D29450D568D5C938E111633EC5, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mA31BF89D96AD4EC7DF04D5D981786CC8D24DFBD0_inline (Predicate_1_t2F2BEC402386E3B09B1D7D7D935BD33BDB4FAFF8* __this, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, InputControlScheme_tB60FB32F414727140B32E1A0447679DC7ABC8434, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m23A1B53BC41489689166C315949325DBF11AAC6F_inline (Predicate_1_t1F0D31C97B74C37A9764B0BCF88B6E15E2930219* __this, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, InputUser_tD938B6FAC4D79FB2BA7040DE247549A4F832000E, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m8B4BDF53D356DC2B6824AECCDFD936A57EBBA0FD_inline (Predicate_1_t2EB8AC06BBCD4AE7BBA9CACDDC3C1B9F611618FD* __this, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E4697D994795EAE905BEE355174215697B815D7_inline (Predicate_1_t8CFA91D4D02A049830E5D472DAAE120481DD8FC0* __this, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, NameAndParameters_t8F37102128EFD31CA57808AE6E3D1244758DEA01, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mF0C8DA1DA703B904663C8A97313FAA5D06CBB8AA_inline (Predicate_1_tDF40C5B214B8C1CD42C03A302327D001EDCFE1A0* __this, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, NamedValue_t1D89B1ACD11D2B5284666865014E67683742B8ED, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4E65B2A24A1D224A284A6E2ECCA25CD11AFDE9F3_inline (Predicate_1_tECA06EB82DA6AEBC4F101B945A192111822901DD* __this, float ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m22832669961C128D8C09CB0A3CCE145415A88EED_inline (Predicate_1_t8BFFAEFC5F80E3A5CD534EFA1FCE8E02111F2938* __this, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Touch_t07A55E11962F143607E917F0B6FEFB36EE2DDA70, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_mDF332C0CEB003C0D86A1E3A194ECFA96D424E34C_gshared_inline (Predicate_1_t586817D6627D147076FFDCC73DA7BEC23132FA88* __this, Il2CppSharedGenericObject* ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 44557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyArray_1_get_Count_m62C68097BC568BB0615B56865FDD0C504C545261_fshared_inline (ReadOnlyArray_1_t05523F7AEBC3651CD21006CE14CC962381C6143B* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m4F023DF8E8468E87CB5569D387D77C7D8EB411AA_inline (Predicate_1_t307A0D6E571F6E29070EB62217398E9D4D45C556* __this, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, HIDPageUsage_t13808EE79B93302D9F7E841A0DEEAA6671BA591F, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m697CA3A3C779F42ADA3F92BA3EE92B14B21A84DE_inline (Predicate_1_tDA45FFEC703500A529E702D9733C1C2095D663FC* __this, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, ControlItem_t25B2C46F52E78ADC5F54903F9E769364B02CD4AD, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m3D04DB85F71978F48F2AC57D40AE436776C837F8_inline (Predicate_1_tCC6C1019817F23EFFAC06C8D0EDD8803C71D54E4* __this, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, DeviceRequirement_t80E71C44DF1923C15D3AA025242B7348EBF8B056, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 920
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Predicate_1_Invoke_m05FFB4723D44E5790A3F5FC7923C79882D0B0003_inline (Predicate_1_t81E65ECFCC613C16F7408ECA5D3D94536697174D* __this, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52 ___0_obj, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, DeviceInfo_tAB83FF3BB4996BA68DFDF5D6255C1FEBB452AE52, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 3228
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* Array_Empty_TisIl2CppSharedGenericObject_m688909407CF299AE69145CC33ACB1E90C775C653_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	CHECKED_LOCAL(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit);
	//<source_info:<no-source>:1>
	{
		CHECKED_LOCAL_INIT(EmptyArray_1_t6C301AAECD8237FCD6328D15A5BC0071D53D11A1_StaticInit,(il2cpp_rgctx_data(method->rgctx_data, 0)),il2cpp_codegen_runtime_class_init_inline);
		__CanonU5BU5D_tFF96AE6C231BB36A6CEE54CEEB72ED8E90201979* L_0 = ((EmptyArray_1_tF2F83411E5DC963DBFFD1F75B10B58A1ED224DD5_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value;
		return L_0;
	}
}
// Method Definition Index: 11334
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* EqualityComparer_1_get_Default_mB451453B7B5B4B570A9347E090AB0FAC75C0C628_gshared_inline (const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* V_0 = NULL;
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_0 = ((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_2;
		L_2 = EqualityComparer_1_CreateComparer_m9D6667E20D4FCBB62E2725016FE2FC32442FE530(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		V_0 = L_2;
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_3 = V_0;
		il2cpp_codegen_memory_barrier();
		((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))->___defaultComparer), (void*)L_3);
	}

IL_0019:
	{
		EqualityComparer_1_t483FA2A5A974208961219D26E3DCCEBF150EF081* L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 76431
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlyCollectionBuilder_1_get_Count_m69CF2D9BF6F3E0F171B32C9129028208C163EF76_fshared_inline (ReadOnlyCollectionBuilder_1_t61293EE63E1CD022C5212FE61E22D8EB013B6470* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
