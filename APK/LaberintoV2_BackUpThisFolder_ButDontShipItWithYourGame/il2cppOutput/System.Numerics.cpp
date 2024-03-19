#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8BB3B0410A6FE73E075A5E8CD2F563089B45BBFC 
{
};
struct Il2CppArrayBounds;

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Numerics.Complex
struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 
{
	// System.Double System.Numerics.Complex::m_real
	double ___m_real_6;
	// System.Double System.Numerics.Complex::m_imaginary
	double ___m_imaginary_7;
};

struct Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields
{
	// System.Numerics.Complex System.Numerics.Complex::Zero
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___Zero_0;
	// System.Numerics.Complex System.Numerics.Complex::One
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___One_1;
	// System.Numerics.Complex System.Numerics.Complex::ImaginaryOne
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___ImaginaryOne_2;
	// System.Double System.Numerics.Complex::s_sqrtRescaleThreshold
	double ___s_sqrtRescaleThreshold_3;
	// System.Double System.Numerics.Complex::s_asinOverflowThreshold
	double ___s_asinOverflowThreshold_4;
	// System.Double System.Numerics.Complex::s_log2
	double ___s_log2_5;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Numerics.Complex::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, double ___real0, double ___imaginary1, const RuntimeMethod* method) ;
// System.Double System.Numerics.Complex::Hypot(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Complex_Hypot_mE175127EBB2CB7AEA0782095432A717878D09893 (double ___a0, double ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsPositiveInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline (double ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsNaN(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Complex::Equals(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_m3ADB8896F3C90ACFF0FD672B87819E7165C81BFA (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Numerics.Complex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138 (double* __this, double ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Double::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
// System.Int32 System.Numerics.Complex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_mFDB24C4843AE5E5F2C4F3973427EB37A039E5635 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56 (RuntimeObject* ___provider0, String_t* ___format1, RuntimeObject* ___arg02, RuntimeObject* ___arg13, const RuntimeMethod* method) ;
// System.String System.Numerics.Complex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Complex_ToString_m664F18D6BDC49AFEF703BBA953428523C8D3EB21 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789 (double* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.String System.Numerics.Complex::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Complex_ToString_m1A6DD2A0410CB2478AEC8D7AC97BB4D4C1AFA856 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) ;
// System.Boolean System.Double::IsInfinity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) ;
// System.Int64 System.BitConverter::DoubleToInt64Bits(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) ;
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
// System.Void System.Numerics.Complex::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, double ___real0, double ___imaginary1, const RuntimeMethod* method) 
{
	{
		double L_0 = ___real0;
		__this->___m_real_6 = L_0;
		double L_1 = ___imaginary1;
		__this->___m_imaginary_7 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987_AdjustorThunk (RuntimeObject* __this, double ___real0, double ___imaginary1, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987(_thisAdjusted, ___real0, ___imaginary1, method);
}
// System.Double System.Numerics.Complex::Abs(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Complex_Abs_m9071FD7C31882EC127D716281EB99041CB26190E (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_0 = ___value0;
		double L_1 = L_0.___m_real_6;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_2 = ___value0;
		double L_3 = L_2.___m_imaginary_7;
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = Complex_Hypot_mE175127EBB2CB7AEA0782095432A717878D09893(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Double System.Numerics.Complex::Hypot(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Complex_Hypot_mE175127EBB2CB7AEA0782095432A717878D09893 (double ___a0, double ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		double L_0 = ___a0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = fabs(L_0);
		___a0 = L_1;
		double L_2 = ___b1;
		double L_3;
		L_3 = fabs(L_2);
		___b1 = L_3;
		double L_4 = ___a0;
		double L_5 = ___b1;
		if ((!(((double)L_4) < ((double)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		double L_6 = ___a0;
		V_0 = L_6;
		double L_7 = ___b1;
		V_1 = L_7;
		goto IL_001e;
	}

IL_001a:
	{
		double L_8 = ___b1;
		V_0 = L_8;
		double L_9 = ___a0;
		V_1 = L_9;
	}

IL_001e:
	{
		double L_10 = V_0;
		if ((!(((double)L_10) == ((double)(0.0)))))
		{
			goto IL_002c;
		}
	}
	{
		double L_11 = V_1;
		return L_11;
	}

IL_002c:
	{
		double L_12 = V_1;
		bool L_13;
		L_13 = Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline(L_12, NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}
	{
		double L_14 = V_0;
		bool L_15;
		L_15 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_14, NULL);
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		return (std::numeric_limits<double>::infinity());
	}

IL_0046:
	{
		double L_16 = V_0;
		double L_17 = V_1;
		V_2 = ((double)(L_16/L_17));
		double L_18 = V_1;
		double L_19 = V_2;
		double L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = sqrt(((double)il2cpp_codegen_add((1.0), ((double)il2cpp_codegen_multiply(L_19, L_20)))));
		return ((double)il2cpp_codegen_multiply(L_18, L_21));
	}
}
// System.Boolean System.Numerics.Complex::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___obj0;
		bool L_2;
		L_2 = Complex_Equals_m3ADB8896F3C90ACFF0FD672B87819E7165C81BFA(__this, ((*(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*)((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*)(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*)UnBox(L_1, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var)))), NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Complex_Equals_mB64F111EF60ABC9D8BDD94D258145CFB5D7D4995(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.Numerics.Complex::Equals(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Complex_Equals_m3ADB8896F3C90ACFF0FD672B87819E7165C81BFA (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___value0, const RuntimeMethod* method) 
{
	{
		double* L_0 = (&__this->___m_real_6);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_1 = ___value0;
		double L_2 = L_1.___m_real_6;
		bool L_3;
		L_3 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		double* L_4 = (&__this->___m_imaginary_7);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_5 = ___value0;
		double L_6 = L_5.___m_imaginary_7;
		bool L_7;
		L_7 = Double_Equals_mAB526D98719C44EA42107A297B23A739F2E14138(L_4, L_6, NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Complex_Equals_m3ADB8896F3C90ACFF0FD672B87819E7165C81BFA_AdjustorThunk (RuntimeObject* __this, Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___value0, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Complex_Equals_m3ADB8896F3C90ACFF0FD672B87819E7165C81BFA(_thisAdjusted, ___value0, method);
	return _returnValue;
}
// System.Int32 System.Numerics.Complex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Complex_GetHashCode_mFDB24C4843AE5E5F2C4F3973427EB37A039E5635 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = ((int32_t)99999997);
		double* L_0 = (&__this->___m_real_6);
		int32_t L_1;
		L_1 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_0, NULL);
		int32_t L_2 = V_0;
		double* L_3 = (&__this->___m_imaginary_7);
		int32_t L_4;
		L_4 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_1;
		return ((int32_t)(((int32_t)(L_1%L_2))^L_5));
	}
}
IL2CPP_EXTERN_C  int32_t Complex_GetHashCode_mFDB24C4843AE5E5F2C4F3973427EB37A039E5635_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Complex_GetHashCode_mFDB24C4843AE5E5F2C4F3973427EB37A039E5635(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Complex::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Complex_ToString_m664F18D6BDC49AFEF703BBA953428523C8D3EB21 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		double L_1 = __this->___m_real_6;
		double L_2 = L_1;
		RuntimeObject* L_3 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_2);
		double L_4 = __this->___m_imaginary_7;
		double L_5 = L_4;
		RuntimeObject* L_6 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_3, L_6, NULL);
		return L_7;
	}
}
IL2CPP_EXTERN_C  String_t* Complex_ToString_m664F18D6BDC49AFEF703BBA953428523C8D3EB21_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Complex_ToString_m664F18D6BDC49AFEF703BBA953428523C8D3EB21(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Numerics.Complex::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Complex_ToString_m1A6DD2A0410CB2478AEC8D7AC97BB4D4C1AFA856 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___provider1;
		double* L_1 = (&__this->___m_real_6);
		String_t* L_2 = ___format0;
		RuntimeObject* L_3 = ___provider1;
		String_t* L_4;
		L_4 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789(L_1, L_2, L_3, NULL);
		double* L_5 = (&__this->___m_imaginary_7);
		String_t* L_6 = ___format0;
		RuntimeObject* L_7 = ___provider1;
		String_t* L_8;
		L_8 = Double_ToString_m7E3930DDFB35B1919FE538A246A59C3FC62AF789(L_5, L_6, L_7, NULL);
		String_t* L_9;
		L_9 = String_Format_m44BF8BF44DC9B67D6CF265A1A2703A6D743F5C56(L_0, _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_4, L_8, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C  String_t* Complex_ToString_m1A6DD2A0410CB2478AEC8D7AC97BB4D4C1AFA856_AdjustorThunk (RuntimeObject* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Complex_ToString_m1A6DD2A0410CB2478AEC8D7AC97BB4D4C1AFA856(_thisAdjusted, ___format0, ___provider1, method);
	return _returnValue;
}
// System.Numerics.Complex System.Numerics.Complex::Sqrt(System.Numerics.Complex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Complex_Sqrt_m14924A3ECEAF3C2A33BFFAE0D1F639AE5453F219 (Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_0 = ___value0;
		double L_1 = L_0.___m_imaginary_7;
		if ((!(((double)L_1) == ((double)(0.0)))))
		{
			goto IL_0057;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_2 = ___value0;
		double L_3 = L_2.___m_real_6;
		if ((!(((double)L_3) < ((double)(0.0)))))
		{
			goto IL_003d;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_4 = ___value0;
		double L_5 = L_4.___m_real_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((-L_5)));
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_7), (0.0), L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_003d:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_8 = ___value0;
		double L_9 = L_8.___m_real_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_10;
		L_10 = sqrt(L_9);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_11;
		memset((&L_11), 0, sizeof(L_11));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_11), L_10, (0.0), /*hidden argument*/NULL);
		return L_11;
	}

IL_0057:
	{
		V_0 = (bool)0;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_12 = ___value0;
		double L_13 = L_12.___m_real_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = fabs(L_13);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_15 = ((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___s_sqrtRescaleThreshold_3;
		if ((((double)L_14) >= ((double)L_15)))
		{
			goto IL_007d;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_16 = ___value0;
		double L_17 = L_16.___m_imaginary_7;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = fabs(L_17);
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_19 = ((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___s_sqrtRescaleThreshold_3;
		if ((!(((double)L_18) >= ((double)L_19))))
		{
			goto IL_00d6;
		}
	}

IL_007d:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_20 = ___value0;
		double L_21 = L_20.___m_imaginary_7;
		bool L_22;
		L_22 = Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline(L_21, NULL);
		if (!L_22)
		{
			goto IL_00ac;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_23 = ___value0;
		double L_24 = L_23.___m_real_6;
		bool L_25;
		L_25 = Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline(L_24, NULL);
		if (L_25)
		{
			goto IL_00ac;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_26 = ___value0;
		double L_27 = L_26.___m_imaginary_7;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_28), (std::numeric_limits<double>::infinity()), L_27, /*hidden argument*/NULL);
		return L_28;
	}

IL_00ac:
	{
		double* L_29 = (&(&___value0)->___m_real_6);
		double* L_30 = L_29;
		double L_31 = *((double*)L_30);
		*((double*)L_30) = (double)((double)il2cpp_codegen_multiply(L_31, (0.25)));
		double* L_32 = (&(&___value0)->___m_imaginary_7);
		double* L_33 = L_32;
		double L_34 = *((double*)L_33);
		*((double*)L_33) = (double)((double)il2cpp_codegen_multiply(L_34, (0.25)));
		V_0 = (bool)1;
	}

IL_00d6:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_35 = ___value0;
		double L_36 = L_35.___m_real_6;
		if ((!(((double)L_36) >= ((double)(0.0)))))
		{
			goto IL_0124;
		}
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_37 = ___value0;
		double L_38 = L_37.___m_real_6;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_39 = ___value0;
		double L_40 = L_39.___m_imaginary_7;
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_41;
		L_41 = Complex_Hypot_mE175127EBB2CB7AEA0782095432A717878D09893(L_38, L_40, NULL);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_42 = ___value0;
		double L_43 = L_42.___m_real_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_44;
		L_44 = sqrt(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_add(L_41, L_43)), (0.5))));
		V_1 = L_44;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_45 = ___value0;
		double L_46 = L_45.___m_imaginary_7;
		double L_47 = V_1;
		V_2 = ((double)(L_46/((double)il2cpp_codegen_multiply((2.0), L_47))));
		goto IL_0173;
	}

IL_0124:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_48 = ___value0;
		double L_49 = L_48.___m_real_6;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_50 = ___value0;
		double L_51 = L_50.___m_imaginary_7;
		il2cpp_codegen_runtime_class_init_inline(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		double L_52;
		L_52 = Complex_Hypot_mE175127EBB2CB7AEA0782095432A717878D09893(L_49, L_51, NULL);
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_53 = ___value0;
		double L_54 = L_53.___m_real_6;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_55;
		L_55 = sqrt(((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_52, L_54)), (0.5))));
		V_2 = L_55;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_56 = ___value0;
		double L_57 = L_56.___m_imaginary_7;
		if ((!(((double)L_57) < ((double)(0.0)))))
		{
			goto IL_0160;
		}
	}
	{
		double L_58 = V_2;
		V_2 = ((-L_58));
	}

IL_0160:
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_59 = ___value0;
		double L_60 = L_59.___m_imaginary_7;
		double L_61 = V_2;
		V_1 = ((double)(L_60/((double)il2cpp_codegen_multiply((2.0), L_61))));
	}

IL_0173:
	{
		bool L_62 = V_0;
		if (!L_62)
		{
			goto IL_018e;
		}
	}
	{
		double L_63 = V_1;
		V_1 = ((double)il2cpp_codegen_multiply(L_63, (2.0)));
		double L_64 = V_2;
		V_2 = ((double)il2cpp_codegen_multiply(L_64, (2.0)));
	}

IL_018e:
	{
		double L_65 = V_1;
		double L_66 = V_2;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_67;
		memset((&L_67), 0, sizeof(L_67));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_67), L_65, L_66, /*hidden argument*/NULL);
		return L_67;
	}
}
// System.Numerics.Complex System.Numerics.Complex::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 Complex_op_Implicit_mDF8825A57625898C371A231997892A6E6C8CE314 (float ___value0, const RuntimeMethod* method) 
{
	{
		float L_0 = ___value0;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_1), ((double)L_0), (0.0), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Numerics.Complex::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Complex__cctor_m663AF81CE0C66D9769240A16BA486CDA85A301B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_0), (0.0), (0.0), /*hidden argument*/NULL);
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___Zero_0 = L_0;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_1), (1.0), (0.0), /*hidden argument*/NULL);
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___One_1 = L_1;
		Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Complex__ctor_m33ABF44E3236B0F1214F6E68752B84F343F2C987((&L_2), (0.0), (1.0), /*hidden argument*/NULL);
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___ImaginaryOne_2 = L_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_3;
		L_3 = sqrt((2.0));
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___s_sqrtRescaleThreshold_3 = ((double)((1.7976931348623157E+308)/((double)il2cpp_codegen_add(L_3, (1.0)))));
		double L_4;
		L_4 = sqrt((1.7976931348623157E+308));
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___s_asinOverflowThreshold_4 = ((double)(L_4/(2.0)));
		double L_5;
		L_5 = log((2.0));
		((Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_StaticFields*)il2cpp_codegen_static_fields_for(Complex_tC7518465FEAE5F5138E1653314A611EEC09467A2_il2cpp_TypeInfo_var))->___s_log2_5 = L_5;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsPositiveInfinity_m2987455D4BE481D4568F1A47120843F2A8A5FFB0_inline (double ___d0, const RuntimeMethod* method) 
{
	{
		double L_0 = ___d0;
		return (bool)((((double)L_0) == ((double)(std::numeric_limits<double>::infinity())))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsNaN_mF2BC6D1FD4813179B2CAE58D29770E42830D0883_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) > ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Double_IsInfinity_mF1F2BB1A8094AF95520E754AE9888993EA948B34_inline (double ___d0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___d0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		return (bool)((((int64_t)((int64_t)(L_1&((int64_t)(std::numeric_limits<int64_t>::max)())))) == ((int64_t)((int64_t)9218868437227405312LL)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___value0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
