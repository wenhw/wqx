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


// System.String
struct String_t;
// System.String[0...,0...]
struct StringU5B0___U2C0___U5D_t1281789341;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<Words>
struct List_1_t3735769822;
// CellWord
struct CellWord_t3464418838;
// WordsInfoView
struct WordsInfoView_t2509931091;
// Words
struct Words_t2263695080;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Button
struct Button_t4055032469;
// SaveSerializable
struct SaveSerializable_t1274999825;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// WordsMatrix
struct WordsMatrix_t205748741;
// UnityEngine.Transform
struct Transform_t3600365921;
// CellWord[0...,0...]
struct CellWordU5B0___U2C0___U5D_t1668747476;
// System.Collections.Generic.List`1<CellWord>
struct List_1_t641526284;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Animation
struct Animation_t3648466861;
// System.Collections.Generic.List`1<Temp>
struct List_1_t111450085;
// System.Func`2<Temp,System.Single>
struct Func_2_t4263588129;
// UnityEngine.UI.Image
struct Image_t2670269651;
// UnityEngine.UI.Outline
struct Outline_t2536100125;
// CellWordsView
struct CellWordsView_t913094270;




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
#ifndef WORDSMATRIX_T205748741_H
#define WORDSMATRIX_T205748741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WordsMatrix
struct  WordsMatrix_t205748741  : public RuntimeObject
{
public:
	// System.String[0...,0...] WordsMatrix::answer
	StringU5B0___U2C0___U5D_t1281789341* ___answer_1;
	// System.String[0...,0...] WordsMatrix::quastion
	StringU5B0___U2C0___U5D_t1281789341* ___quastion_2;
	// System.Collections.Generic.List`1<System.String> WordsMatrix::canOpreation
	List_1_t3319525431 * ___canOpreation_3;
	// System.Collections.Generic.List`1<Words> WordsMatrix::curWords
	List_1_t3735769822 * ___curWords_4;

public:
	inline static int32_t get_offset_of_answer_1() { return static_cast<int32_t>(offsetof(WordsMatrix_t205748741, ___answer_1)); }
	inline StringU5B0___U2C0___U5D_t1281789341* get_answer_1() const { return ___answer_1; }
	inline StringU5B0___U2C0___U5D_t1281789341** get_address_of_answer_1() { return &___answer_1; }
	inline void set_answer_1(StringU5B0___U2C0___U5D_t1281789341* value)
	{
		___answer_1 = value;
		Il2CppCodeGenWriteBarrier((&___answer_1), value);
	}

	inline static int32_t get_offset_of_quastion_2() { return static_cast<int32_t>(offsetof(WordsMatrix_t205748741, ___quastion_2)); }
	inline StringU5B0___U2C0___U5D_t1281789341* get_quastion_2() const { return ___quastion_2; }
	inline StringU5B0___U2C0___U5D_t1281789341** get_address_of_quastion_2() { return &___quastion_2; }
	inline void set_quastion_2(StringU5B0___U2C0___U5D_t1281789341* value)
	{
		___quastion_2 = value;
		Il2CppCodeGenWriteBarrier((&___quastion_2), value);
	}

	inline static int32_t get_offset_of_canOpreation_3() { return static_cast<int32_t>(offsetof(WordsMatrix_t205748741, ___canOpreation_3)); }
	inline List_1_t3319525431 * get_canOpreation_3() const { return ___canOpreation_3; }
	inline List_1_t3319525431 ** get_address_of_canOpreation_3() { return &___canOpreation_3; }
	inline void set_canOpreation_3(List_1_t3319525431 * value)
	{
		___canOpreation_3 = value;
		Il2CppCodeGenWriteBarrier((&___canOpreation_3), value);
	}

	inline static int32_t get_offset_of_curWords_4() { return static_cast<int32_t>(offsetof(WordsMatrix_t205748741, ___curWords_4)); }
	inline List_1_t3735769822 * get_curWords_4() const { return ___curWords_4; }
	inline List_1_t3735769822 ** get_address_of_curWords_4() { return &___curWords_4; }
	inline void set_curWords_4(List_1_t3735769822 * value)
	{
		___curWords_4 = value;
		Il2CppCodeGenWriteBarrier((&___curWords_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSMATRIX_T205748741_H
#ifndef WORDS_T2263695080_H
#define WORDS_T2263695080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Words
struct  Words_t2263695080  : public RuntimeObject
{
public:
	// System.Int32 Words::<Index>k__BackingField
	int32_t ___U3CIndexU3Ek__BackingField_0;
	// System.String Words::<data>k__BackingField
	String_t* ___U3CdataU3Ek__BackingField_1;
	// System.String Words::<Phonetic>k__BackingField
	String_t* ___U3CPhoneticU3Ek__BackingField_2;
	// System.String Words::<Explain>k__BackingField
	String_t* ___U3CExplainU3Ek__BackingField_3;
	// System.String Words::<Source>k__BackingField
	String_t* ___U3CSourceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CIndexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Words_t2263695080, ___U3CIndexU3Ek__BackingField_0)); }
	inline int32_t get_U3CIndexU3Ek__BackingField_0() const { return ___U3CIndexU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CIndexU3Ek__BackingField_0() { return &___U3CIndexU3Ek__BackingField_0; }
	inline void set_U3CIndexU3Ek__BackingField_0(int32_t value)
	{
		___U3CIndexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CdataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Words_t2263695080, ___U3CdataU3Ek__BackingField_1)); }
	inline String_t* get_U3CdataU3Ek__BackingField_1() const { return ___U3CdataU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CdataU3Ek__BackingField_1() { return &___U3CdataU3Ek__BackingField_1; }
	inline void set_U3CdataU3Ek__BackingField_1(String_t* value)
	{
		___U3CdataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdataU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPhoneticU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Words_t2263695080, ___U3CPhoneticU3Ek__BackingField_2)); }
	inline String_t* get_U3CPhoneticU3Ek__BackingField_2() const { return ___U3CPhoneticU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPhoneticU3Ek__BackingField_2() { return &___U3CPhoneticU3Ek__BackingField_2; }
	inline void set_U3CPhoneticU3Ek__BackingField_2(String_t* value)
	{
		___U3CPhoneticU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPhoneticU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CExplainU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Words_t2263695080, ___U3CExplainU3Ek__BackingField_3)); }
	inline String_t* get_U3CExplainU3Ek__BackingField_3() const { return ___U3CExplainU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CExplainU3Ek__BackingField_3() { return &___U3CExplainU3Ek__BackingField_3; }
	inline void set_U3CExplainU3Ek__BackingField_3(String_t* value)
	{
		___U3CExplainU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CExplainU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CSourceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Words_t2263695080, ___U3CSourceU3Ek__BackingField_4)); }
	inline String_t* get_U3CSourceU3Ek__BackingField_4() const { return ___U3CSourceU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CSourceU3Ek__BackingField_4() { return &___U3CSourceU3Ek__BackingField_4; }
	inline void set_U3CSourceU3Ek__BackingField_4(String_t* value)
	{
		___U3CSourceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSourceU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDS_T2263695080_H
#ifndef TEMP_T2934342639_H
#define TEMP_T2934342639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Temp
struct  Temp_t2934342639  : public RuntimeObject
{
public:
	// CellWord Temp::c
	CellWord_t3464418838 * ___c_0;
	// System.Single Temp::dis
	float ___dis_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(Temp_t2934342639, ___c_0)); }
	inline CellWord_t3464418838 * get_c_0() const { return ___c_0; }
	inline CellWord_t3464418838 ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(CellWord_t3464418838 * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((&___c_0), value);
	}

	inline static int32_t get_offset_of_dis_1() { return static_cast<int32_t>(offsetof(Temp_t2934342639, ___dis_1)); }
	inline float get_dis_1() const { return ___dis_1; }
	inline float* get_address_of_dis_1() { return &___dis_1; }
	inline void set_dis_1(float value)
	{
		___dis_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEMP_T2934342639_H
#ifndef U3CSETDATAU3EC__ANONSTOREY0_T867831856_H
#define U3CSETDATAU3EC__ANONSTOREY0_T867831856_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellWordsView/<SetData>c__AnonStorey0
struct  U3CSetDataU3Ec__AnonStorey0_t867831856  : public RuntimeObject
{
public:
	// WordsInfoView CellWordsView/<SetData>c__AnonStorey0::wordsInfoView
	WordsInfoView_t2509931091 * ___wordsInfoView_0;
	// Words CellWordsView/<SetData>c__AnonStorey0::data
	Words_t2263695080 * ___data_1;

public:
	inline static int32_t get_offset_of_wordsInfoView_0() { return static_cast<int32_t>(offsetof(U3CSetDataU3Ec__AnonStorey0_t867831856, ___wordsInfoView_0)); }
	inline WordsInfoView_t2509931091 * get_wordsInfoView_0() const { return ___wordsInfoView_0; }
	inline WordsInfoView_t2509931091 ** get_address_of_wordsInfoView_0() { return &___wordsInfoView_0; }
	inline void set_wordsInfoView_0(WordsInfoView_t2509931091 * value)
	{
		___wordsInfoView_0 = value;
		Il2CppCodeGenWriteBarrier((&___wordsInfoView_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(U3CSetDataU3Ec__AnonStorey0_t867831856, ___data_1)); }
	inline Words_t2263695080 * get_data_1() const { return ___data_1; }
	inline Words_t2263695080 ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Words_t2263695080 * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSETDATAU3EC__ANONSTOREY0_T867831856_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VECTOR2INT_T3469998543_H
#define VECTOR2INT_T3469998543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2Int
struct  Vector2Int_t3469998543 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_t3469998543_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t3469998543  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t3469998543  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t3469998543  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t3469998543  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t3469998543  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t3469998543  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_t3469998543  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_t3469998543 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_t3469998543  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_One_3)); }
	inline Vector2Int_t3469998543  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_t3469998543 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_t3469998543  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Up_4)); }
	inline Vector2Int_t3469998543  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_t3469998543 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_t3469998543  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Down_5)); }
	inline Vector2Int_t3469998543  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_t3469998543 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_t3469998543  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Left_6)); }
	inline Vector2Int_t3469998543  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_t3469998543 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_t3469998543  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_t3469998543_StaticFields, ___s_Right_7)); }
	inline Vector2Int_t3469998543  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_t3469998543 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_t3469998543  value)
	{
		___s_Right_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2INT_T3469998543_H
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
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
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
#endif // COLOR_T2555686324_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef CELLWORDSTATE_T3249112667_H
#define CELLWORDSTATE_T3249112667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellWord/CellWordState
struct  CellWordState_t3249112667 
{
public:
	// System.Int32 CellWord/CellWordState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CellWordState_t3249112667, ___value___1)); }
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
#endif // CELLWORDSTATE_T3249112667_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef FORWARD_T420032478_H
#define FORWARD_T420032478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WordsMatrix/Forward
struct  Forward_t420032478 
{
public:
	// System.Int32 WordsMatrix/Forward::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Forward_t420032478, ___value___1)); }
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
#endif // FORWARD_T420032478_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef SAVESERIALIZABLE_T1274999825_H
#define SAVESERIALIZABLE_T1274999825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveSerializable
struct  SaveSerializable_t1274999825  : public ScriptableObject_t2528358522
{
public:
	// System.Int32 SaveSerializable::curLevel
	int32_t ___curLevel_2;
	// System.Int32 SaveSerializable::haveYuanBaoCount
	int32_t ___haveYuanBaoCount_3;
	// System.Int32 SaveSerializable::tipCost
	int32_t ___tipCost_4;
	// System.Boolean SaveSerializable::openAudio
	bool ___openAudio_5;
	// System.Int32 SaveSerializable::StudyCount
	int32_t ___StudyCount_6;

public:
	inline static int32_t get_offset_of_curLevel_2() { return static_cast<int32_t>(offsetof(SaveSerializable_t1274999825, ___curLevel_2)); }
	inline int32_t get_curLevel_2() const { return ___curLevel_2; }
	inline int32_t* get_address_of_curLevel_2() { return &___curLevel_2; }
	inline void set_curLevel_2(int32_t value)
	{
		___curLevel_2 = value;
	}

	inline static int32_t get_offset_of_haveYuanBaoCount_3() { return static_cast<int32_t>(offsetof(SaveSerializable_t1274999825, ___haveYuanBaoCount_3)); }
	inline int32_t get_haveYuanBaoCount_3() const { return ___haveYuanBaoCount_3; }
	inline int32_t* get_address_of_haveYuanBaoCount_3() { return &___haveYuanBaoCount_3; }
	inline void set_haveYuanBaoCount_3(int32_t value)
	{
		___haveYuanBaoCount_3 = value;
	}

	inline static int32_t get_offset_of_tipCost_4() { return static_cast<int32_t>(offsetof(SaveSerializable_t1274999825, ___tipCost_4)); }
	inline int32_t get_tipCost_4() const { return ___tipCost_4; }
	inline int32_t* get_address_of_tipCost_4() { return &___tipCost_4; }
	inline void set_tipCost_4(int32_t value)
	{
		___tipCost_4 = value;
	}

	inline static int32_t get_offset_of_openAudio_5() { return static_cast<int32_t>(offsetof(SaveSerializable_t1274999825, ___openAudio_5)); }
	inline bool get_openAudio_5() const { return ___openAudio_5; }
	inline bool* get_address_of_openAudio_5() { return &___openAudio_5; }
	inline void set_openAudio_5(bool value)
	{
		___openAudio_5 = value;
	}

	inline static int32_t get_offset_of_StudyCount_6() { return static_cast<int32_t>(offsetof(SaveSerializable_t1274999825, ___StudyCount_6)); }
	inline int32_t get_StudyCount_6() const { return ___StudyCount_6; }
	inline int32_t* get_address_of_StudyCount_6() { return &___StudyCount_6; }
	inline void set_StudyCount_6(int32_t value)
	{
		___StudyCount_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAVESERIALIZABLE_T1274999825_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef STARTPANEL_T2365624132_H
#define STARTPANEL_T2365624132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartPanel
struct  StartPanel_t2365624132  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text StartPanel::yuanBaoText
	Text_t1901882714 * ___yuanBaoText_2;
	// UnityEngine.UI.Button StartPanel::musicButton
	Button_t4055032469 * ___musicButton_3;
	// UnityEngine.UI.Button StartPanel::startGameButton
	Button_t4055032469 * ___startGameButton_4;
	// SaveSerializable StartPanel::saveSerializable
	SaveSerializable_t1274999825 * ___saveSerializable_5;
	// UnityEngine.Sprite StartPanel::openMusicSign
	Sprite_t280657092 * ___openMusicSign_6;
	// UnityEngine.Sprite StartPanel::closeMusicSign
	Sprite_t280657092 * ___closeMusicSign_7;

public:
	inline static int32_t get_offset_of_yuanBaoText_2() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___yuanBaoText_2)); }
	inline Text_t1901882714 * get_yuanBaoText_2() const { return ___yuanBaoText_2; }
	inline Text_t1901882714 ** get_address_of_yuanBaoText_2() { return &___yuanBaoText_2; }
	inline void set_yuanBaoText_2(Text_t1901882714 * value)
	{
		___yuanBaoText_2 = value;
		Il2CppCodeGenWriteBarrier((&___yuanBaoText_2), value);
	}

	inline static int32_t get_offset_of_musicButton_3() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___musicButton_3)); }
	inline Button_t4055032469 * get_musicButton_3() const { return ___musicButton_3; }
	inline Button_t4055032469 ** get_address_of_musicButton_3() { return &___musicButton_3; }
	inline void set_musicButton_3(Button_t4055032469 * value)
	{
		___musicButton_3 = value;
		Il2CppCodeGenWriteBarrier((&___musicButton_3), value);
	}

	inline static int32_t get_offset_of_startGameButton_4() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___startGameButton_4)); }
	inline Button_t4055032469 * get_startGameButton_4() const { return ___startGameButton_4; }
	inline Button_t4055032469 ** get_address_of_startGameButton_4() { return &___startGameButton_4; }
	inline void set_startGameButton_4(Button_t4055032469 * value)
	{
		___startGameButton_4 = value;
		Il2CppCodeGenWriteBarrier((&___startGameButton_4), value);
	}

	inline static int32_t get_offset_of_saveSerializable_5() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___saveSerializable_5)); }
	inline SaveSerializable_t1274999825 * get_saveSerializable_5() const { return ___saveSerializable_5; }
	inline SaveSerializable_t1274999825 ** get_address_of_saveSerializable_5() { return &___saveSerializable_5; }
	inline void set_saveSerializable_5(SaveSerializable_t1274999825 * value)
	{
		___saveSerializable_5 = value;
		Il2CppCodeGenWriteBarrier((&___saveSerializable_5), value);
	}

	inline static int32_t get_offset_of_openMusicSign_6() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___openMusicSign_6)); }
	inline Sprite_t280657092 * get_openMusicSign_6() const { return ___openMusicSign_6; }
	inline Sprite_t280657092 ** get_address_of_openMusicSign_6() { return &___openMusicSign_6; }
	inline void set_openMusicSign_6(Sprite_t280657092 * value)
	{
		___openMusicSign_6 = value;
		Il2CppCodeGenWriteBarrier((&___openMusicSign_6), value);
	}

	inline static int32_t get_offset_of_closeMusicSign_7() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132, ___closeMusicSign_7)); }
	inline Sprite_t280657092 * get_closeMusicSign_7() const { return ___closeMusicSign_7; }
	inline Sprite_t280657092 ** get_address_of_closeMusicSign_7() { return &___closeMusicSign_7; }
	inline void set_closeMusicSign_7(Sprite_t280657092 * value)
	{
		___closeMusicSign_7 = value;
		Il2CppCodeGenWriteBarrier((&___closeMusicSign_7), value);
	}
};

struct StartPanel_t2365624132_StaticFields
{
public:
	// UnityEngine.Events.UnityAction StartPanel::<>f__am$cache0
	UnityAction_t3245792599 * ___U3CU3Ef__amU24cache0_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_8() { return static_cast<int32_t>(offsetof(StartPanel_t2365624132_StaticFields, ___U3CU3Ef__amU24cache0_8)); }
	inline UnityAction_t3245792599 * get_U3CU3Ef__amU24cache0_8() const { return ___U3CU3Ef__amU24cache0_8; }
	inline UnityAction_t3245792599 ** get_address_of_U3CU3Ef__amU24cache0_8() { return &___U3CU3Ef__amU24cache0_8; }
	inline void set_U3CU3Ef__amU24cache0_8(UnityAction_t3245792599 * value)
	{
		___U3CU3Ef__amU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STARTPANEL_T2365624132_H
#ifndef WORDSINFOVIEW_T2509931091_H
#define WORDSINFOVIEW_T2509931091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WordsInfoView
struct  WordsInfoView_t2509931091  : public MonoBehaviour_t3962482529
{
public:
	// Words WordsInfoView::data
	Words_t2263695080 * ___data_2;
	// UnityEngine.UI.Text WordsInfoView::wordsName
	Text_t1901882714 * ___wordsName_3;
	// UnityEngine.UI.Text WordsInfoView::phonetic_txt
	Text_t1901882714 * ___phonetic_txt_4;
	// UnityEngine.UI.Text WordsInfoView::explain_txt
	Text_t1901882714 * ___explain_txt_5;
	// UnityEngine.UI.Text WordsInfoView::source_txt
	Text_t1901882714 * ___source_txt_6;
	// UnityEngine.UI.Button WordsInfoView::closePanel
	Button_t4055032469 * ___closePanel_7;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___data_2)); }
	inline Words_t2263695080 * get_data_2() const { return ___data_2; }
	inline Words_t2263695080 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Words_t2263695080 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_wordsName_3() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___wordsName_3)); }
	inline Text_t1901882714 * get_wordsName_3() const { return ___wordsName_3; }
	inline Text_t1901882714 ** get_address_of_wordsName_3() { return &___wordsName_3; }
	inline void set_wordsName_3(Text_t1901882714 * value)
	{
		___wordsName_3 = value;
		Il2CppCodeGenWriteBarrier((&___wordsName_3), value);
	}

	inline static int32_t get_offset_of_phonetic_txt_4() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___phonetic_txt_4)); }
	inline Text_t1901882714 * get_phonetic_txt_4() const { return ___phonetic_txt_4; }
	inline Text_t1901882714 ** get_address_of_phonetic_txt_4() { return &___phonetic_txt_4; }
	inline void set_phonetic_txt_4(Text_t1901882714 * value)
	{
		___phonetic_txt_4 = value;
		Il2CppCodeGenWriteBarrier((&___phonetic_txt_4), value);
	}

	inline static int32_t get_offset_of_explain_txt_5() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___explain_txt_5)); }
	inline Text_t1901882714 * get_explain_txt_5() const { return ___explain_txt_5; }
	inline Text_t1901882714 ** get_address_of_explain_txt_5() { return &___explain_txt_5; }
	inline void set_explain_txt_5(Text_t1901882714 * value)
	{
		___explain_txt_5 = value;
		Il2CppCodeGenWriteBarrier((&___explain_txt_5), value);
	}

	inline static int32_t get_offset_of_source_txt_6() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___source_txt_6)); }
	inline Text_t1901882714 * get_source_txt_6() const { return ___source_txt_6; }
	inline Text_t1901882714 ** get_address_of_source_txt_6() { return &___source_txt_6; }
	inline void set_source_txt_6(Text_t1901882714 * value)
	{
		___source_txt_6 = value;
		Il2CppCodeGenWriteBarrier((&___source_txt_6), value);
	}

	inline static int32_t get_offset_of_closePanel_7() { return static_cast<int32_t>(offsetof(WordsInfoView_t2509931091, ___closePanel_7)); }
	inline Button_t4055032469 * get_closePanel_7() const { return ___closePanel_7; }
	inline Button_t4055032469 ** get_address_of_closePanel_7() { return &___closePanel_7; }
	inline void set_closePanel_7(Button_t4055032469 * value)
	{
		___closePanel_7 = value;
		Il2CppCodeGenWriteBarrier((&___closePanel_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WORDSINFOVIEW_T2509931091_H
#ifndef MATRIXRENDERER_T80878794_H
#define MATRIXRENDERER_T80878794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MatrixRenderer
struct  MatrixRenderer_t80878794  : public MonoBehaviour_t3962482529
{
public:
	// WordsMatrix MatrixRenderer::wordsMatrix
	WordsMatrix_t205748741 * ___wordsMatrix_2;
	// System.String[0...,0...] MatrixRenderer::curAnswer
	StringU5B0___U2C0___U5D_t1281789341* ___curAnswer_3;
	// UnityEngine.Transform MatrixRenderer::interfacePanel
	Transform_t3600365921 * ___interfacePanel_4;
	// CellWord MatrixRenderer::cellWordPrefab
	CellWord_t3464418838 * ___cellWordPrefab_5;
	// System.Single MatrixRenderer::spacing
	float ___spacing_6;
	// CellWord[0...,0...] MatrixRenderer::cellWordDatas
	CellWordU5B0___U2C0___U5D_t1668747476* ___cellWordDatas_7;
	// UnityEngine.Transform MatrixRenderer::canUseWordsParent
	Transform_t3600365921 * ___canUseWordsParent_8;
	// System.Collections.Generic.List`1<CellWord> MatrixRenderer::canUseWords
	List_1_t641526284 * ___canUseWords_9;
	// UnityEngine.GameObject MatrixRenderer::sizeAdjustObject
	GameObject_t1113636619 * ___sizeAdjustObject_10;
	// UnityEngine.Sprite MatrixRenderer::cellWord_BG
	Sprite_t280657092 * ___cellWord_BG_11;
	// UnityEngine.Sprite MatrixRenderer::cellWord_Empty_BG
	Sprite_t280657092 * ___cellWord_Empty_BG_12;
	// UnityEngine.Sprite MatrixRenderer::cellWord_True_BG
	Sprite_t280657092 * ___cellWord_True_BG_13;
	// UnityEngine.Sprite MatrixRenderer::cellWord_Error_BG
	Sprite_t280657092 * ___cellWord_Error_BG_14;
	// UnityEngine.UI.Button MatrixRenderer::backMain
	Button_t4055032469 * ___backMain_15;
	// UnityEngine.UI.Text MatrixRenderer::yuanBaoCount
	Text_t1901882714 * ___yuanBaoCount_16;
	// UnityEngine.UI.Button MatrixRenderer::RestartGame_btn
	Button_t4055032469 * ___RestartGame_btn_17;
	// UnityEngine.UI.Button MatrixRenderer::tips_btn
	Button_t4055032469 * ___tips_btn_18;
	// UnityEngine.UI.Text MatrixRenderer::tipsCost_Sign
	Text_t1901882714 * ___tipsCost_Sign_19;
	// System.Collections.Generic.List`1<CellWord> MatrixRenderer::CanUseWordss
	List_1_t641526284 * ___CanUseWordss_20;
	// UnityEngine.Animation MatrixRenderer::Fly
	Animation_t3648466861 * ___Fly_21;
	// System.Collections.Generic.List`1<CellWord> MatrixRenderer::cellWords
	List_1_t641526284 * ___cellWords_22;
	// System.Collections.Generic.List`1<Temp> MatrixRenderer::temps
	List_1_t111450085 * ___temps_23;

public:
	inline static int32_t get_offset_of_wordsMatrix_2() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___wordsMatrix_2)); }
	inline WordsMatrix_t205748741 * get_wordsMatrix_2() const { return ___wordsMatrix_2; }
	inline WordsMatrix_t205748741 ** get_address_of_wordsMatrix_2() { return &___wordsMatrix_2; }
	inline void set_wordsMatrix_2(WordsMatrix_t205748741 * value)
	{
		___wordsMatrix_2 = value;
		Il2CppCodeGenWriteBarrier((&___wordsMatrix_2), value);
	}

	inline static int32_t get_offset_of_curAnswer_3() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___curAnswer_3)); }
	inline StringU5B0___U2C0___U5D_t1281789341* get_curAnswer_3() const { return ___curAnswer_3; }
	inline StringU5B0___U2C0___U5D_t1281789341** get_address_of_curAnswer_3() { return &___curAnswer_3; }
	inline void set_curAnswer_3(StringU5B0___U2C0___U5D_t1281789341* value)
	{
		___curAnswer_3 = value;
		Il2CppCodeGenWriteBarrier((&___curAnswer_3), value);
	}

	inline static int32_t get_offset_of_interfacePanel_4() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___interfacePanel_4)); }
	inline Transform_t3600365921 * get_interfacePanel_4() const { return ___interfacePanel_4; }
	inline Transform_t3600365921 ** get_address_of_interfacePanel_4() { return &___interfacePanel_4; }
	inline void set_interfacePanel_4(Transform_t3600365921 * value)
	{
		___interfacePanel_4 = value;
		Il2CppCodeGenWriteBarrier((&___interfacePanel_4), value);
	}

	inline static int32_t get_offset_of_cellWordPrefab_5() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWordPrefab_5)); }
	inline CellWord_t3464418838 * get_cellWordPrefab_5() const { return ___cellWordPrefab_5; }
	inline CellWord_t3464418838 ** get_address_of_cellWordPrefab_5() { return &___cellWordPrefab_5; }
	inline void set_cellWordPrefab_5(CellWord_t3464418838 * value)
	{
		___cellWordPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___cellWordPrefab_5), value);
	}

	inline static int32_t get_offset_of_spacing_6() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___spacing_6)); }
	inline float get_spacing_6() const { return ___spacing_6; }
	inline float* get_address_of_spacing_6() { return &___spacing_6; }
	inline void set_spacing_6(float value)
	{
		___spacing_6 = value;
	}

	inline static int32_t get_offset_of_cellWordDatas_7() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWordDatas_7)); }
	inline CellWordU5B0___U2C0___U5D_t1668747476* get_cellWordDatas_7() const { return ___cellWordDatas_7; }
	inline CellWordU5B0___U2C0___U5D_t1668747476** get_address_of_cellWordDatas_7() { return &___cellWordDatas_7; }
	inline void set_cellWordDatas_7(CellWordU5B0___U2C0___U5D_t1668747476* value)
	{
		___cellWordDatas_7 = value;
		Il2CppCodeGenWriteBarrier((&___cellWordDatas_7), value);
	}

	inline static int32_t get_offset_of_canUseWordsParent_8() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___canUseWordsParent_8)); }
	inline Transform_t3600365921 * get_canUseWordsParent_8() const { return ___canUseWordsParent_8; }
	inline Transform_t3600365921 ** get_address_of_canUseWordsParent_8() { return &___canUseWordsParent_8; }
	inline void set_canUseWordsParent_8(Transform_t3600365921 * value)
	{
		___canUseWordsParent_8 = value;
		Il2CppCodeGenWriteBarrier((&___canUseWordsParent_8), value);
	}

	inline static int32_t get_offset_of_canUseWords_9() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___canUseWords_9)); }
	inline List_1_t641526284 * get_canUseWords_9() const { return ___canUseWords_9; }
	inline List_1_t641526284 ** get_address_of_canUseWords_9() { return &___canUseWords_9; }
	inline void set_canUseWords_9(List_1_t641526284 * value)
	{
		___canUseWords_9 = value;
		Il2CppCodeGenWriteBarrier((&___canUseWords_9), value);
	}

	inline static int32_t get_offset_of_sizeAdjustObject_10() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___sizeAdjustObject_10)); }
	inline GameObject_t1113636619 * get_sizeAdjustObject_10() const { return ___sizeAdjustObject_10; }
	inline GameObject_t1113636619 ** get_address_of_sizeAdjustObject_10() { return &___sizeAdjustObject_10; }
	inline void set_sizeAdjustObject_10(GameObject_t1113636619 * value)
	{
		___sizeAdjustObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___sizeAdjustObject_10), value);
	}

	inline static int32_t get_offset_of_cellWord_BG_11() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWord_BG_11)); }
	inline Sprite_t280657092 * get_cellWord_BG_11() const { return ___cellWord_BG_11; }
	inline Sprite_t280657092 ** get_address_of_cellWord_BG_11() { return &___cellWord_BG_11; }
	inline void set_cellWord_BG_11(Sprite_t280657092 * value)
	{
		___cellWord_BG_11 = value;
		Il2CppCodeGenWriteBarrier((&___cellWord_BG_11), value);
	}

	inline static int32_t get_offset_of_cellWord_Empty_BG_12() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWord_Empty_BG_12)); }
	inline Sprite_t280657092 * get_cellWord_Empty_BG_12() const { return ___cellWord_Empty_BG_12; }
	inline Sprite_t280657092 ** get_address_of_cellWord_Empty_BG_12() { return &___cellWord_Empty_BG_12; }
	inline void set_cellWord_Empty_BG_12(Sprite_t280657092 * value)
	{
		___cellWord_Empty_BG_12 = value;
		Il2CppCodeGenWriteBarrier((&___cellWord_Empty_BG_12), value);
	}

	inline static int32_t get_offset_of_cellWord_True_BG_13() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWord_True_BG_13)); }
	inline Sprite_t280657092 * get_cellWord_True_BG_13() const { return ___cellWord_True_BG_13; }
	inline Sprite_t280657092 ** get_address_of_cellWord_True_BG_13() { return &___cellWord_True_BG_13; }
	inline void set_cellWord_True_BG_13(Sprite_t280657092 * value)
	{
		___cellWord_True_BG_13 = value;
		Il2CppCodeGenWriteBarrier((&___cellWord_True_BG_13), value);
	}

	inline static int32_t get_offset_of_cellWord_Error_BG_14() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWord_Error_BG_14)); }
	inline Sprite_t280657092 * get_cellWord_Error_BG_14() const { return ___cellWord_Error_BG_14; }
	inline Sprite_t280657092 ** get_address_of_cellWord_Error_BG_14() { return &___cellWord_Error_BG_14; }
	inline void set_cellWord_Error_BG_14(Sprite_t280657092 * value)
	{
		___cellWord_Error_BG_14 = value;
		Il2CppCodeGenWriteBarrier((&___cellWord_Error_BG_14), value);
	}

	inline static int32_t get_offset_of_backMain_15() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___backMain_15)); }
	inline Button_t4055032469 * get_backMain_15() const { return ___backMain_15; }
	inline Button_t4055032469 ** get_address_of_backMain_15() { return &___backMain_15; }
	inline void set_backMain_15(Button_t4055032469 * value)
	{
		___backMain_15 = value;
		Il2CppCodeGenWriteBarrier((&___backMain_15), value);
	}

	inline static int32_t get_offset_of_yuanBaoCount_16() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___yuanBaoCount_16)); }
	inline Text_t1901882714 * get_yuanBaoCount_16() const { return ___yuanBaoCount_16; }
	inline Text_t1901882714 ** get_address_of_yuanBaoCount_16() { return &___yuanBaoCount_16; }
	inline void set_yuanBaoCount_16(Text_t1901882714 * value)
	{
		___yuanBaoCount_16 = value;
		Il2CppCodeGenWriteBarrier((&___yuanBaoCount_16), value);
	}

	inline static int32_t get_offset_of_RestartGame_btn_17() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___RestartGame_btn_17)); }
	inline Button_t4055032469 * get_RestartGame_btn_17() const { return ___RestartGame_btn_17; }
	inline Button_t4055032469 ** get_address_of_RestartGame_btn_17() { return &___RestartGame_btn_17; }
	inline void set_RestartGame_btn_17(Button_t4055032469 * value)
	{
		___RestartGame_btn_17 = value;
		Il2CppCodeGenWriteBarrier((&___RestartGame_btn_17), value);
	}

	inline static int32_t get_offset_of_tips_btn_18() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___tips_btn_18)); }
	inline Button_t4055032469 * get_tips_btn_18() const { return ___tips_btn_18; }
	inline Button_t4055032469 ** get_address_of_tips_btn_18() { return &___tips_btn_18; }
	inline void set_tips_btn_18(Button_t4055032469 * value)
	{
		___tips_btn_18 = value;
		Il2CppCodeGenWriteBarrier((&___tips_btn_18), value);
	}

	inline static int32_t get_offset_of_tipsCost_Sign_19() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___tipsCost_Sign_19)); }
	inline Text_t1901882714 * get_tipsCost_Sign_19() const { return ___tipsCost_Sign_19; }
	inline Text_t1901882714 ** get_address_of_tipsCost_Sign_19() { return &___tipsCost_Sign_19; }
	inline void set_tipsCost_Sign_19(Text_t1901882714 * value)
	{
		___tipsCost_Sign_19 = value;
		Il2CppCodeGenWriteBarrier((&___tipsCost_Sign_19), value);
	}

	inline static int32_t get_offset_of_CanUseWordss_20() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___CanUseWordss_20)); }
	inline List_1_t641526284 * get_CanUseWordss_20() const { return ___CanUseWordss_20; }
	inline List_1_t641526284 ** get_address_of_CanUseWordss_20() { return &___CanUseWordss_20; }
	inline void set_CanUseWordss_20(List_1_t641526284 * value)
	{
		___CanUseWordss_20 = value;
		Il2CppCodeGenWriteBarrier((&___CanUseWordss_20), value);
	}

	inline static int32_t get_offset_of_Fly_21() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___Fly_21)); }
	inline Animation_t3648466861 * get_Fly_21() const { return ___Fly_21; }
	inline Animation_t3648466861 ** get_address_of_Fly_21() { return &___Fly_21; }
	inline void set_Fly_21(Animation_t3648466861 * value)
	{
		___Fly_21 = value;
		Il2CppCodeGenWriteBarrier((&___Fly_21), value);
	}

	inline static int32_t get_offset_of_cellWords_22() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___cellWords_22)); }
	inline List_1_t641526284 * get_cellWords_22() const { return ___cellWords_22; }
	inline List_1_t641526284 ** get_address_of_cellWords_22() { return &___cellWords_22; }
	inline void set_cellWords_22(List_1_t641526284 * value)
	{
		___cellWords_22 = value;
		Il2CppCodeGenWriteBarrier((&___cellWords_22), value);
	}

	inline static int32_t get_offset_of_temps_23() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794, ___temps_23)); }
	inline List_1_t111450085 * get_temps_23() const { return ___temps_23; }
	inline List_1_t111450085 ** get_address_of_temps_23() { return &___temps_23; }
	inline void set_temps_23(List_1_t111450085 * value)
	{
		___temps_23 = value;
		Il2CppCodeGenWriteBarrier((&___temps_23), value);
	}
};

struct MatrixRenderer_t80878794_StaticFields
{
public:
	// UnityEngine.Events.UnityAction MatrixRenderer::<>f__am$cache0
	UnityAction_t3245792599 * ___U3CU3Ef__amU24cache0_24;
	// UnityEngine.Events.UnityAction MatrixRenderer::<>f__am$cache1
	UnityAction_t3245792599 * ___U3CU3Ef__amU24cache1_25;
	// System.Func`2<Temp,System.Single> MatrixRenderer::<>f__am$cache2
	Func_2_t4263588129 * ___U3CU3Ef__amU24cache2_26;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_24() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794_StaticFields, ___U3CU3Ef__amU24cache0_24)); }
	inline UnityAction_t3245792599 * get_U3CU3Ef__amU24cache0_24() const { return ___U3CU3Ef__amU24cache0_24; }
	inline UnityAction_t3245792599 ** get_address_of_U3CU3Ef__amU24cache0_24() { return &___U3CU3Ef__amU24cache0_24; }
	inline void set_U3CU3Ef__amU24cache0_24(UnityAction_t3245792599 * value)
	{
		___U3CU3Ef__amU24cache0_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_25() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794_StaticFields, ___U3CU3Ef__amU24cache1_25)); }
	inline UnityAction_t3245792599 * get_U3CU3Ef__amU24cache1_25() const { return ___U3CU3Ef__amU24cache1_25; }
	inline UnityAction_t3245792599 ** get_address_of_U3CU3Ef__amU24cache1_25() { return &___U3CU3Ef__amU24cache1_25; }
	inline void set_U3CU3Ef__amU24cache1_25(UnityAction_t3245792599 * value)
	{
		___U3CU3Ef__amU24cache1_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_25), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_26() { return static_cast<int32_t>(offsetof(MatrixRenderer_t80878794_StaticFields, ___U3CU3Ef__amU24cache2_26)); }
	inline Func_2_t4263588129 * get_U3CU3Ef__amU24cache2_26() const { return ___U3CU3Ef__amU24cache2_26; }
	inline Func_2_t4263588129 ** get_address_of_U3CU3Ef__amU24cache2_26() { return &___U3CU3Ef__amU24cache2_26; }
	inline void set_U3CU3Ef__amU24cache2_26(Func_2_t4263588129 * value)
	{
		___U3CU3Ef__amU24cache2_26 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIXRENDERER_T80878794_H
#ifndef CELLWORDSVIEW_T913094270_H
#define CELLWORDSVIEW_T913094270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellWordsView
struct  CellWordsView_t913094270  : public MonoBehaviour_t3962482529
{
public:
	// Words CellWordsView::data
	Words_t2263695080 * ___data_2;
	// UnityEngine.UI.Text CellWordsView::words_txt
	Text_t1901882714 * ___words_txt_3;
	// WordsInfoView CellWordsView::wordsInfoView
	WordsInfoView_t2509931091 * ___wordsInfoView_4;
	// UnityEngine.UI.Button CellWordsView::button
	Button_t4055032469 * ___button_5;

public:
	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(CellWordsView_t913094270, ___data_2)); }
	inline Words_t2263695080 * get_data_2() const { return ___data_2; }
	inline Words_t2263695080 ** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(Words_t2263695080 * value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}

	inline static int32_t get_offset_of_words_txt_3() { return static_cast<int32_t>(offsetof(CellWordsView_t913094270, ___words_txt_3)); }
	inline Text_t1901882714 * get_words_txt_3() const { return ___words_txt_3; }
	inline Text_t1901882714 ** get_address_of_words_txt_3() { return &___words_txt_3; }
	inline void set_words_txt_3(Text_t1901882714 * value)
	{
		___words_txt_3 = value;
		Il2CppCodeGenWriteBarrier((&___words_txt_3), value);
	}

	inline static int32_t get_offset_of_wordsInfoView_4() { return static_cast<int32_t>(offsetof(CellWordsView_t913094270, ___wordsInfoView_4)); }
	inline WordsInfoView_t2509931091 * get_wordsInfoView_4() const { return ___wordsInfoView_4; }
	inline WordsInfoView_t2509931091 ** get_address_of_wordsInfoView_4() { return &___wordsInfoView_4; }
	inline void set_wordsInfoView_4(WordsInfoView_t2509931091 * value)
	{
		___wordsInfoView_4 = value;
		Il2CppCodeGenWriteBarrier((&___wordsInfoView_4), value);
	}

	inline static int32_t get_offset_of_button_5() { return static_cast<int32_t>(offsetof(CellWordsView_t913094270, ___button_5)); }
	inline Button_t4055032469 * get_button_5() const { return ___button_5; }
	inline Button_t4055032469 ** get_address_of_button_5() { return &___button_5; }
	inline void set_button_5(Button_t4055032469 * value)
	{
		___button_5 = value;
		Il2CppCodeGenWriteBarrier((&___button_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CELLWORDSVIEW_T913094270_H
#ifndef CELLWORD_T3464418838_H
#define CELLWORD_T3464418838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CellWord
struct  CellWord_t3464418838  : public MonoBehaviour_t3962482529
{
public:
	// CellWord/CellWordState CellWord::cellWordState
	int32_t ___cellWordState_2;
	// UnityEngine.UI.Image CellWord::cellWord_BG
	Image_t2670269651 * ___cellWord_BG_3;
	// UnityEngine.UI.Text CellWord::word_txt
	Text_t1901882714 * ___word_txt_4;
	// UnityEngine.Vector2Int CellWord::indexPos
	Vector2Int_t3469998543  ___indexPos_5;
	// UnityEngine.UI.Outline CellWord::outline
	Outline_t2536100125 * ___outline_6;
	// UnityEngine.Color CellWord::normalColor
	Color_t2555686324  ___normalColor_7;
	// UnityEngine.Color CellWord::tureAnswerColor
	Color_t2555686324  ___tureAnswerColor_8;
	// UnityEngine.Color CellWord::errorAnswerColor
	Color_t2555686324  ___errorAnswerColor_9;
	// UnityEngine.UI.Button CellWord::button
	Button_t4055032469 * ___button_10;
	// CellWord CellWord::curFill
	CellWord_t3464418838 * ___curFill_11;
	// System.String CellWord::Data
	String_t* ___Data_12;
	// UnityEngine.UI.Text CellWord::posIndex
	Text_t1901882714 * ___posIndex_13;
	// UnityEngine.Animation CellWord::anim
	Animation_t3648466861 * ___anim_14;

public:
	inline static int32_t get_offset_of_cellWordState_2() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___cellWordState_2)); }
	inline int32_t get_cellWordState_2() const { return ___cellWordState_2; }
	inline int32_t* get_address_of_cellWordState_2() { return &___cellWordState_2; }
	inline void set_cellWordState_2(int32_t value)
	{
		___cellWordState_2 = value;
	}

	inline static int32_t get_offset_of_cellWord_BG_3() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___cellWord_BG_3)); }
	inline Image_t2670269651 * get_cellWord_BG_3() const { return ___cellWord_BG_3; }
	inline Image_t2670269651 ** get_address_of_cellWord_BG_3() { return &___cellWord_BG_3; }
	inline void set_cellWord_BG_3(Image_t2670269651 * value)
	{
		___cellWord_BG_3 = value;
		Il2CppCodeGenWriteBarrier((&___cellWord_BG_3), value);
	}

	inline static int32_t get_offset_of_word_txt_4() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___word_txt_4)); }
	inline Text_t1901882714 * get_word_txt_4() const { return ___word_txt_4; }
	inline Text_t1901882714 ** get_address_of_word_txt_4() { return &___word_txt_4; }
	inline void set_word_txt_4(Text_t1901882714 * value)
	{
		___word_txt_4 = value;
		Il2CppCodeGenWriteBarrier((&___word_txt_4), value);
	}

	inline static int32_t get_offset_of_indexPos_5() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___indexPos_5)); }
	inline Vector2Int_t3469998543  get_indexPos_5() const { return ___indexPos_5; }
	inline Vector2Int_t3469998543 * get_address_of_indexPos_5() { return &___indexPos_5; }
	inline void set_indexPos_5(Vector2Int_t3469998543  value)
	{
		___indexPos_5 = value;
	}

	inline static int32_t get_offset_of_outline_6() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___outline_6)); }
	inline Outline_t2536100125 * get_outline_6() const { return ___outline_6; }
	inline Outline_t2536100125 ** get_address_of_outline_6() { return &___outline_6; }
	inline void set_outline_6(Outline_t2536100125 * value)
	{
		___outline_6 = value;
		Il2CppCodeGenWriteBarrier((&___outline_6), value);
	}

	inline static int32_t get_offset_of_normalColor_7() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___normalColor_7)); }
	inline Color_t2555686324  get_normalColor_7() const { return ___normalColor_7; }
	inline Color_t2555686324 * get_address_of_normalColor_7() { return &___normalColor_7; }
	inline void set_normalColor_7(Color_t2555686324  value)
	{
		___normalColor_7 = value;
	}

	inline static int32_t get_offset_of_tureAnswerColor_8() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___tureAnswerColor_8)); }
	inline Color_t2555686324  get_tureAnswerColor_8() const { return ___tureAnswerColor_8; }
	inline Color_t2555686324 * get_address_of_tureAnswerColor_8() { return &___tureAnswerColor_8; }
	inline void set_tureAnswerColor_8(Color_t2555686324  value)
	{
		___tureAnswerColor_8 = value;
	}

	inline static int32_t get_offset_of_errorAnswerColor_9() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___errorAnswerColor_9)); }
	inline Color_t2555686324  get_errorAnswerColor_9() const { return ___errorAnswerColor_9; }
	inline Color_t2555686324 * get_address_of_errorAnswerColor_9() { return &___errorAnswerColor_9; }
	inline void set_errorAnswerColor_9(Color_t2555686324  value)
	{
		___errorAnswerColor_9 = value;
	}

	inline static int32_t get_offset_of_button_10() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___button_10)); }
	inline Button_t4055032469 * get_button_10() const { return ___button_10; }
	inline Button_t4055032469 ** get_address_of_button_10() { return &___button_10; }
	inline void set_button_10(Button_t4055032469 * value)
	{
		___button_10 = value;
		Il2CppCodeGenWriteBarrier((&___button_10), value);
	}

	inline static int32_t get_offset_of_curFill_11() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___curFill_11)); }
	inline CellWord_t3464418838 * get_curFill_11() const { return ___curFill_11; }
	inline CellWord_t3464418838 ** get_address_of_curFill_11() { return &___curFill_11; }
	inline void set_curFill_11(CellWord_t3464418838 * value)
	{
		___curFill_11 = value;
		Il2CppCodeGenWriteBarrier((&___curFill_11), value);
	}

	inline static int32_t get_offset_of_Data_12() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___Data_12)); }
	inline String_t* get_Data_12() const { return ___Data_12; }
	inline String_t** get_address_of_Data_12() { return &___Data_12; }
	inline void set_Data_12(String_t* value)
	{
		___Data_12 = value;
		Il2CppCodeGenWriteBarrier((&___Data_12), value);
	}

	inline static int32_t get_offset_of_posIndex_13() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___posIndex_13)); }
	inline Text_t1901882714 * get_posIndex_13() const { return ___posIndex_13; }
	inline Text_t1901882714 ** get_address_of_posIndex_13() { return &___posIndex_13; }
	inline void set_posIndex_13(Text_t1901882714 * value)
	{
		___posIndex_13 = value;
		Il2CppCodeGenWriteBarrier((&___posIndex_13), value);
	}

	inline static int32_t get_offset_of_anim_14() { return static_cast<int32_t>(offsetof(CellWord_t3464418838, ___anim_14)); }
	inline Animation_t3648466861 * get_anim_14() const { return ___anim_14; }
	inline Animation_t3648466861 ** get_address_of_anim_14() { return &___anim_14; }
	inline void set_anim_14(Animation_t3648466861 * value)
	{
		___anim_14 = value;
		Il2CppCodeGenWriteBarrier((&___anim_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CELLWORD_T3464418838_H
#ifndef RESULTPANEL_T1162610072_H
#define RESULTPANEL_T1162610072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultPanel
struct  ResultPanel_t1162610072  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Button ResultPanel::backToMain_btn
	Button_t4055032469 * ___backToMain_btn_2;
	// UnityEngine.UI.Text ResultPanel::yuanBaoCount_txt
	Text_t1901882714 * ___yuanBaoCount_txt_3;
	// UnityEngine.UI.Text ResultPanel::studyWords_txt
	Text_t1901882714 * ___studyWords_txt_4;
	// CellWordsView ResultPanel::wordsViewPrefab
	CellWordsView_t913094270 * ___wordsViewPrefab_5;
	// UnityEngine.Transform ResultPanel::wordsViewParent
	Transform_t3600365921 * ___wordsViewParent_6;
	// UnityEngine.UI.Button ResultPanel::nextLevel_btn
	Button_t4055032469 * ___nextLevel_btn_7;
	// WordsInfoView ResultPanel::wordsInfoView
	WordsInfoView_t2509931091 * ___wordsInfoView_8;

public:
	inline static int32_t get_offset_of_backToMain_btn_2() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___backToMain_btn_2)); }
	inline Button_t4055032469 * get_backToMain_btn_2() const { return ___backToMain_btn_2; }
	inline Button_t4055032469 ** get_address_of_backToMain_btn_2() { return &___backToMain_btn_2; }
	inline void set_backToMain_btn_2(Button_t4055032469 * value)
	{
		___backToMain_btn_2 = value;
		Il2CppCodeGenWriteBarrier((&___backToMain_btn_2), value);
	}

	inline static int32_t get_offset_of_yuanBaoCount_txt_3() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___yuanBaoCount_txt_3)); }
	inline Text_t1901882714 * get_yuanBaoCount_txt_3() const { return ___yuanBaoCount_txt_3; }
	inline Text_t1901882714 ** get_address_of_yuanBaoCount_txt_3() { return &___yuanBaoCount_txt_3; }
	inline void set_yuanBaoCount_txt_3(Text_t1901882714 * value)
	{
		___yuanBaoCount_txt_3 = value;
		Il2CppCodeGenWriteBarrier((&___yuanBaoCount_txt_3), value);
	}

	inline static int32_t get_offset_of_studyWords_txt_4() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___studyWords_txt_4)); }
	inline Text_t1901882714 * get_studyWords_txt_4() const { return ___studyWords_txt_4; }
	inline Text_t1901882714 ** get_address_of_studyWords_txt_4() { return &___studyWords_txt_4; }
	inline void set_studyWords_txt_4(Text_t1901882714 * value)
	{
		___studyWords_txt_4 = value;
		Il2CppCodeGenWriteBarrier((&___studyWords_txt_4), value);
	}

	inline static int32_t get_offset_of_wordsViewPrefab_5() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___wordsViewPrefab_5)); }
	inline CellWordsView_t913094270 * get_wordsViewPrefab_5() const { return ___wordsViewPrefab_5; }
	inline CellWordsView_t913094270 ** get_address_of_wordsViewPrefab_5() { return &___wordsViewPrefab_5; }
	inline void set_wordsViewPrefab_5(CellWordsView_t913094270 * value)
	{
		___wordsViewPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((&___wordsViewPrefab_5), value);
	}

	inline static int32_t get_offset_of_wordsViewParent_6() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___wordsViewParent_6)); }
	inline Transform_t3600365921 * get_wordsViewParent_6() const { return ___wordsViewParent_6; }
	inline Transform_t3600365921 ** get_address_of_wordsViewParent_6() { return &___wordsViewParent_6; }
	inline void set_wordsViewParent_6(Transform_t3600365921 * value)
	{
		___wordsViewParent_6 = value;
		Il2CppCodeGenWriteBarrier((&___wordsViewParent_6), value);
	}

	inline static int32_t get_offset_of_nextLevel_btn_7() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___nextLevel_btn_7)); }
	inline Button_t4055032469 * get_nextLevel_btn_7() const { return ___nextLevel_btn_7; }
	inline Button_t4055032469 ** get_address_of_nextLevel_btn_7() { return &___nextLevel_btn_7; }
	inline void set_nextLevel_btn_7(Button_t4055032469 * value)
	{
		___nextLevel_btn_7 = value;
		Il2CppCodeGenWriteBarrier((&___nextLevel_btn_7), value);
	}

	inline static int32_t get_offset_of_wordsInfoView_8() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072, ___wordsInfoView_8)); }
	inline WordsInfoView_t2509931091 * get_wordsInfoView_8() const { return ___wordsInfoView_8; }
	inline WordsInfoView_t2509931091 ** get_address_of_wordsInfoView_8() { return &___wordsInfoView_8; }
	inline void set_wordsInfoView_8(WordsInfoView_t2509931091 * value)
	{
		___wordsInfoView_8 = value;
		Il2CppCodeGenWriteBarrier((&___wordsInfoView_8), value);
	}
};

struct ResultPanel_t1162610072_StaticFields
{
public:
	// UnityEngine.Events.UnityAction ResultPanel::<>f__am$cache0
	UnityAction_t3245792599 * ___U3CU3Ef__amU24cache0_9;
	// UnityEngine.Events.UnityAction ResultPanel::<>f__am$cache1
	UnityAction_t3245792599 * ___U3CU3Ef__amU24cache1_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline UnityAction_t3245792599 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline UnityAction_t3245792599 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(UnityAction_t3245792599 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_10() { return static_cast<int32_t>(offsetof(ResultPanel_t1162610072_StaticFields, ___U3CU3Ef__amU24cache1_10)); }
	inline UnityAction_t3245792599 * get_U3CU3Ef__amU24cache1_10() const { return ___U3CU3Ef__amU24cache1_10; }
	inline UnityAction_t3245792599 ** get_address_of_U3CU3Ef__amU24cache1_10() { return &___U3CU3Ef__amU24cache1_10; }
	inline void set_U3CU3Ef__amU24cache1_10(UnityAction_t3245792599 * value)
	{
		___U3CU3Ef__amU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESULTPANEL_T1162610072_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2600 = { sizeof (SaveSerializable_t1274999825), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2600[5] = 
{
	SaveSerializable_t1274999825::get_offset_of_curLevel_2(),
	SaveSerializable_t1274999825::get_offset_of_haveYuanBaoCount_3(),
	SaveSerializable_t1274999825::get_offset_of_tipCost_4(),
	SaveSerializable_t1274999825::get_offset_of_openAudio_5(),
	SaveSerializable_t1274999825::get_offset_of_StudyCount_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2601 = { sizeof (CellWord_t3464418838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2601[13] = 
{
	CellWord_t3464418838::get_offset_of_cellWordState_2(),
	CellWord_t3464418838::get_offset_of_cellWord_BG_3(),
	CellWord_t3464418838::get_offset_of_word_txt_4(),
	CellWord_t3464418838::get_offset_of_indexPos_5(),
	CellWord_t3464418838::get_offset_of_outline_6(),
	CellWord_t3464418838::get_offset_of_normalColor_7(),
	CellWord_t3464418838::get_offset_of_tureAnswerColor_8(),
	CellWord_t3464418838::get_offset_of_errorAnswerColor_9(),
	CellWord_t3464418838::get_offset_of_button_10(),
	CellWord_t3464418838::get_offset_of_curFill_11(),
	CellWord_t3464418838::get_offset_of_Data_12(),
	CellWord_t3464418838::get_offset_of_posIndex_13(),
	CellWord_t3464418838::get_offset_of_anim_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2602 = { sizeof (CellWordState_t3249112667)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2602[7] = 
{
	CellWordState_t3249112667::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2603 = { sizeof (CellWordsView_t913094270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2603[4] = 
{
	CellWordsView_t913094270::get_offset_of_data_2(),
	CellWordsView_t913094270::get_offset_of_words_txt_3(),
	CellWordsView_t913094270::get_offset_of_wordsInfoView_4(),
	CellWordsView_t913094270::get_offset_of_button_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2604 = { sizeof (U3CSetDataU3Ec__AnonStorey0_t867831856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2604[2] = 
{
	U3CSetDataU3Ec__AnonStorey0_t867831856::get_offset_of_wordsInfoView_0(),
	U3CSetDataU3Ec__AnonStorey0_t867831856::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2605 = { sizeof (MatrixRenderer_t80878794), -1, sizeof(MatrixRenderer_t80878794_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2605[25] = 
{
	MatrixRenderer_t80878794::get_offset_of_wordsMatrix_2(),
	MatrixRenderer_t80878794::get_offset_of_curAnswer_3(),
	MatrixRenderer_t80878794::get_offset_of_interfacePanel_4(),
	MatrixRenderer_t80878794::get_offset_of_cellWordPrefab_5(),
	MatrixRenderer_t80878794::get_offset_of_spacing_6(),
	MatrixRenderer_t80878794::get_offset_of_cellWordDatas_7(),
	MatrixRenderer_t80878794::get_offset_of_canUseWordsParent_8(),
	MatrixRenderer_t80878794::get_offset_of_canUseWords_9(),
	MatrixRenderer_t80878794::get_offset_of_sizeAdjustObject_10(),
	MatrixRenderer_t80878794::get_offset_of_cellWord_BG_11(),
	MatrixRenderer_t80878794::get_offset_of_cellWord_Empty_BG_12(),
	MatrixRenderer_t80878794::get_offset_of_cellWord_True_BG_13(),
	MatrixRenderer_t80878794::get_offset_of_cellWord_Error_BG_14(),
	MatrixRenderer_t80878794::get_offset_of_backMain_15(),
	MatrixRenderer_t80878794::get_offset_of_yuanBaoCount_16(),
	MatrixRenderer_t80878794::get_offset_of_RestartGame_btn_17(),
	MatrixRenderer_t80878794::get_offset_of_tips_btn_18(),
	MatrixRenderer_t80878794::get_offset_of_tipsCost_Sign_19(),
	MatrixRenderer_t80878794::get_offset_of_CanUseWordss_20(),
	MatrixRenderer_t80878794::get_offset_of_Fly_21(),
	MatrixRenderer_t80878794::get_offset_of_cellWords_22(),
	MatrixRenderer_t80878794::get_offset_of_temps_23(),
	MatrixRenderer_t80878794_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_24(),
	MatrixRenderer_t80878794_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_25(),
	MatrixRenderer_t80878794_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2606 = { sizeof (Temp_t2934342639), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2606[2] = 
{
	Temp_t2934342639::get_offset_of_c_0(),
	Temp_t2934342639::get_offset_of_dis_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2607 = { sizeof (ResultPanel_t1162610072), -1, sizeof(ResultPanel_t1162610072_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2607[9] = 
{
	ResultPanel_t1162610072::get_offset_of_backToMain_btn_2(),
	ResultPanel_t1162610072::get_offset_of_yuanBaoCount_txt_3(),
	ResultPanel_t1162610072::get_offset_of_studyWords_txt_4(),
	ResultPanel_t1162610072::get_offset_of_wordsViewPrefab_5(),
	ResultPanel_t1162610072::get_offset_of_wordsViewParent_6(),
	ResultPanel_t1162610072::get_offset_of_nextLevel_btn_7(),
	ResultPanel_t1162610072::get_offset_of_wordsInfoView_8(),
	ResultPanel_t1162610072_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_9(),
	ResultPanel_t1162610072_StaticFields::get_offset_of_U3CU3Ef__amU24cache1_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2608 = { sizeof (StartPanel_t2365624132), -1, sizeof(StartPanel_t2365624132_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2608[7] = 
{
	StartPanel_t2365624132::get_offset_of_yuanBaoText_2(),
	StartPanel_t2365624132::get_offset_of_musicButton_3(),
	StartPanel_t2365624132::get_offset_of_startGameButton_4(),
	StartPanel_t2365624132::get_offset_of_saveSerializable_5(),
	StartPanel_t2365624132::get_offset_of_openMusicSign_6(),
	StartPanel_t2365624132::get_offset_of_closeMusicSign_7(),
	StartPanel_t2365624132_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2609 = { sizeof (WordsInfoView_t2509931091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2609[6] = 
{
	WordsInfoView_t2509931091::get_offset_of_data_2(),
	WordsInfoView_t2509931091::get_offset_of_wordsName_3(),
	WordsInfoView_t2509931091::get_offset_of_phonetic_txt_4(),
	WordsInfoView_t2509931091::get_offset_of_explain_txt_5(),
	WordsInfoView_t2509931091::get_offset_of_source_txt_6(),
	WordsInfoView_t2509931091::get_offset_of_closePanel_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2610 = { sizeof (Words_t2263695080), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2610[5] = 
{
	Words_t2263695080::get_offset_of_U3CIndexU3Ek__BackingField_0(),
	Words_t2263695080::get_offset_of_U3CdataU3Ek__BackingField_1(),
	Words_t2263695080::get_offset_of_U3CPhoneticU3Ek__BackingField_2(),
	Words_t2263695080::get_offset_of_U3CExplainU3Ek__BackingField_3(),
	Words_t2263695080::get_offset_of_U3CSourceU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2611 = { sizeof (WordsMatrix_t205748741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2611[5] = 
{
	0,
	WordsMatrix_t205748741::get_offset_of_answer_1(),
	WordsMatrix_t205748741::get_offset_of_quastion_2(),
	WordsMatrix_t205748741::get_offset_of_canOpreation_3(),
	WordsMatrix_t205748741::get_offset_of_curWords_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2612 = { sizeof (Forward_t420032478)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2612[3] = 
{
	Forward_t420032478::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
