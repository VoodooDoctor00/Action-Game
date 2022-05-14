#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<ChestItem>
struct List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<Item>
struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<ShopItem>
struct List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// ChestItem[]
struct ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277;
// Dialogue[]
struct DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// Item[]
struct ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// ShopItem[]
struct ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Chest
struct Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C;
// ChestItem
struct ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Consumable
struct Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3;
// Dialogue
struct Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3;
// DialogueController
struct DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000;
// EnemyController
struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB;
// EnemyMeleeCollider
struct EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MeleeWeapon
struct MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NPCController
struct NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PlayerMeleeCollider
struct PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2;
// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F;
// RangedWeapon
struct RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6;
// ShopItem
struct ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0F83721532357DB6ADE3EE7DFE77897A86F9848D;
IL2CPP_EXTERN_C String_t* _stringLiteral13B53BF6C0A685719F46C721345A10A84CDC882A;
IL2CPP_EXTERN_C String_t* _stringLiteral21C9C70535876FA3A24C2F32A06C51F60BBE60D0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988;
IL2CPP_EXTERN_C String_t* _stringLiteral5B4619B42D50494E6FBABEAFEAA9F021D8A7955B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral82F11E134141E47D20638E79BD966204FC621121;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49;
IL2CPP_EXTERN_C String_t* _stringLiteral8A705A912E7C3D5A85F35B92062F452FB4BC0909;
IL2CPP_EXTERN_C String_t* _stringLiteral901B8EFAC94050E53E2DF4747CABD71B8AE8A558;
IL2CPP_EXTERN_C String_t* _stringLiteral930264011A3274912877CD076DCB68F2B1EBDB18;
IL2CPP_EXTERN_C String_t* _stringLiteral961244A58B5E45D6194AE818322FD93848580A36;
IL2CPP_EXTERN_C String_t* _stringLiteralC54BC3B18936B2EE60BF26419154CC71CB67A175;
IL2CPP_EXTERN_C String_t* _stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEBDE5DEC217CAFD87131BFB3386A40F04B72A8F7;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309;
IL2CPP_EXTERN_C String_t* _stringLiteralF3A79AF490FB8E957E0644DF7EDCC2A1F9A32FE5;
IL2CPP_EXTERN_C String_t* _stringLiteralFE3AFEF9A57E93941702635B6DE894C4E05E180B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA52A7F9A44AC77DD80B4FF5CF44D55BA01999160_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m73769AEB7989B65D692F62D95C82B08896A99670_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCA60EF87E6C8DF2AF164480BD3AB903D7E605D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mD15D166F5C3F08236BF8CEAE66D5BCEFFA0B6114_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisDialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000_m8F1082E1C70C0C48EB4319FB4A904DAC91E02848_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisRangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E_m4AE98820494A75575B975BE6030BE383A8F5422E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m11585BA7F9E83F69ADC0D3634FAAEDD2C6DB8175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_m945070CA9355D05CB3CCD058D67E7F69B19324B1_RuntimeMethod_var;
struct ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 ;

struct DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<ChestItem>
struct List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496, ____items_1)); }
	inline ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* get__items_1() const { return ____items_1; }
	inline ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_StaticFields, ____emptyArray_5)); }
	inline ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ChestItemU5BU5D_tD3528DCE5D00696A5FB722FB80A2C16995C57F97* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Item>
struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____items_1)); }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* get__items_1() const { return ____items_1; }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_StaticFields, ____emptyArray_5)); }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ItemU5BU5D_tEE54AD0D4D72299A508C229F13FAFD80E118048F* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ShopItem>
struct List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8, ____items_1)); }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* get__items_1() const { return ____items_1; }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8_StaticFields, ____emptyArray_5)); }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ShopItemU5BU5D_t4282E889CB3BD567F18880DF2E570A45247B3C74* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Dialogue
struct Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3  : public RuntimeObject
{
public:
	// System.String Dialogue::npcName
	String_t* ___npcName_0;
	// System.String[] Dialogue::dialogue
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dialogue_1;

public:
	inline static int32_t get_offset_of_npcName_0() { return static_cast<int32_t>(offsetof(Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3, ___npcName_0)); }
	inline String_t* get_npcName_0() const { return ___npcName_0; }
	inline String_t** get_address_of_npcName_0() { return &___npcName_0; }
	inline void set_npcName_0(String_t* value)
	{
		___npcName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___npcName_0), (void*)value);
	}

	inline static int32_t get_offset_of_dialogue_1() { return static_cast<int32_t>(offsetof(Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3, ___dialogue_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dialogue_1() const { return ___dialogue_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dialogue_1() { return &___dialogue_1; }
	inline void set_dialogue_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dialogue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogue_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* ___m_LegacyContacts_8;

public:
	inline static int32_t get_offset_of_m_Collider_0() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Collider_0)); }
	inline int32_t get_m_Collider_0() const { return ___m_Collider_0; }
	inline int32_t* get_address_of_m_Collider_0() { return &___m_Collider_0; }
	inline void set_m_Collider_0(int32_t value)
	{
		___m_Collider_0 = value;
	}

	inline static int32_t get_offset_of_m_OtherCollider_1() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherCollider_1)); }
	inline int32_t get_m_OtherCollider_1() const { return ___m_OtherCollider_1; }
	inline int32_t* get_address_of_m_OtherCollider_1() { return &___m_OtherCollider_1; }
	inline void set_m_OtherCollider_1(int32_t value)
	{
		___m_OtherCollider_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Rigidbody_2)); }
	inline int32_t get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline int32_t* get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(int32_t value)
	{
		___m_Rigidbody_2 = value;
	}

	inline static int32_t get_offset_of_m_OtherRigidbody_3() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_OtherRigidbody_3)); }
	inline int32_t get_m_OtherRigidbody_3() const { return ___m_OtherRigidbody_3; }
	inline int32_t* get_address_of_m_OtherRigidbody_3() { return &___m_OtherRigidbody_3; }
	inline void set_m_OtherRigidbody_3(int32_t value)
	{
		___m_OtherRigidbody_3 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_4() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_RelativeVelocity_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RelativeVelocity_4() const { return ___m_RelativeVelocity_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RelativeVelocity_4() { return &___m_RelativeVelocity_4; }
	inline void set_m_RelativeVelocity_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RelativeVelocity_4 = value;
	}

	inline static int32_t get_offset_of_m_Enabled_5() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_Enabled_5)); }
	inline int32_t get_m_Enabled_5() const { return ___m_Enabled_5; }
	inline int32_t* get_address_of_m_Enabled_5() { return &___m_Enabled_5; }
	inline void set_m_Enabled_5(int32_t value)
	{
		___m_Enabled_5 = value;
	}

	inline static int32_t get_offset_of_m_ContactCount_6() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ContactCount_6)); }
	inline int32_t get_m_ContactCount_6() const { return ___m_ContactCount_6; }
	inline int32_t* get_address_of_m_ContactCount_6() { return &___m_ContactCount_6; }
	inline void set_m_ContactCount_6(int32_t value)
	{
		___m_ContactCount_6 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_7() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_ReusedContacts_7)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_ReusedContacts_7() const { return ___m_ReusedContacts_7; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_ReusedContacts_7() { return &___m_ReusedContacts_7; }
	inline void set_m_ReusedContacts_7(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_ReusedContacts_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_8() { return static_cast<int32_t>(offsetof(Collision2D_t95B5FD331CE95276D3658140844190B485D26564, ___m_LegacyContacts_8)); }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* get_m_LegacyContacts_8() const { return ___m_LegacyContacts_8; }
	inline ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277** get_address_of_m_LegacyContacts_8() { return &___m_LegacyContacts_8; }
	inline void set_m_LegacyContacts_8(ContactPoint2DU5BU5D_t7AE0F95E9BFC90DE859575689AA76B503D433277* value)
	{
		___m_LegacyContacts_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_8), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t95B5FD331CE95276D3658140844190B485D26564_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_ReusedContacts_7;
	ContactPoint2D_t5A4C242ABAE740C565BF01A35CEE279058E66A62 * ___m_LegacyContacts_8;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// EnemyController/enemystates
struct enemystates_t344CA861CBE571ABD4936916B2E41DD5A2D8D359 
{
public:
	// System.Int32 EnemyController/enemystates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(enemystates_t344CA861CBE571ABD4936916B2E41DD5A2D8D359, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Item/rarity
struct rarity_tF37EAEA509D2EEAB3469D72AAD8FB986D2303642 
{
public:
	// System.Int32 Item/rarity::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(rarity_tF37EAEA509D2EEAB3469D72AAD8FB986D2303642, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// CameraController
struct CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform CameraController::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// System.Single CameraController::lerpSpeed
	float ___lerpSpeed_5;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_lerpSpeed_5() { return static_cast<int32_t>(offsetof(CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0, ___lerpSpeed_5)); }
	inline float get_lerpSpeed_5() const { return ___lerpSpeed_5; }
	inline float* get_address_of_lerpSpeed_5() { return &___lerpSpeed_5; }
	inline void set_lerpSpeed_5(float value)
	{
		___lerpSpeed_5 = value;
	}
};


// Chest
struct Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Chest::chestParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___chestParent_4;
	// PlayerController Chest::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_5;
	// GameController Chest::cont
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___cont_6;
	// System.Boolean Chest::populated
	bool ___populated_7;

public:
	inline static int32_t get_offset_of_chestParent_4() { return static_cast<int32_t>(offsetof(Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C, ___chestParent_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_chestParent_4() const { return ___chestParent_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_chestParent_4() { return &___chestParent_4; }
	inline void set_chestParent_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___chestParent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chestParent_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C, ___player_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_5() const { return ___player_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_cont_6() { return static_cast<int32_t>(offsetof(Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C, ___cont_6)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_cont_6() const { return ___cont_6; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_cont_6() { return &___cont_6; }
	inline void set_cont_6(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___cont_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_6), (void*)value);
	}

	inline static int32_t get_offset_of_populated_7() { return static_cast<int32_t>(offsetof(Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C, ___populated_7)); }
	inline bool get_populated_7() const { return ___populated_7; }
	inline bool* get_address_of_populated_7() { return &___populated_7; }
	inline void set_populated_7(bool value)
	{
		___populated_7 = value;
	}
};


// ChestItem
struct ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Item ChestItem::item
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_4;
	// PlayerController ChestItem::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_5;
	// Inventory ChestItem::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_6;
	// UnityEngine.SpriteRenderer ChestItem::rend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___rend_7;
	// UnityEngine.UI.Text ChestItem::itemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___itemText_8;

public:
	inline static int32_t get_offset_of_item_4() { return static_cast<int32_t>(offsetof(ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D, ___item_4)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_4() const { return ___item_4; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_4() { return &___item_4; }
	inline void set_item_4(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D, ___player_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_5() const { return ___player_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_6() { return static_cast<int32_t>(offsetof(ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D, ___inventory_6)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_6() const { return ___inventory_6; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_6() { return &___inventory_6; }
	inline void set_inventory_6(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_6), (void*)value);
	}

	inline static int32_t get_offset_of_rend_7() { return static_cast<int32_t>(offsetof(ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D, ___rend_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_rend_7() const { return ___rend_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_rend_7() { return &___rend_7; }
	inline void set_rend_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___rend_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_7), (void*)value);
	}

	inline static int32_t get_offset_of_itemText_8() { return static_cast<int32_t>(offsetof(ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D, ___itemText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_itemText_8() const { return ___itemText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_itemText_8() { return &___itemText_8; }
	inline void set_itemText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___itemText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemText_8), (void*)value);
	}
};


// DialogueController
struct DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Dialogue DialogueController::currentDialogue
	Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * ___currentDialogue_4;
	// UnityEngine.GameObject DialogueController::UIParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___UIParent_5;
	// UnityEngine.UI.Text DialogueController::nameUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameUI_6;
	// UnityEngine.UI.Text DialogueController::dialogueUI
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___dialogueUI_7;
	// System.Int32 DialogueController::currentIndex
	int32_t ___currentIndex_8;

public:
	inline static int32_t get_offset_of_currentDialogue_4() { return static_cast<int32_t>(offsetof(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000, ___currentDialogue_4)); }
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * get_currentDialogue_4() const { return ___currentDialogue_4; }
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 ** get_address_of_currentDialogue_4() { return &___currentDialogue_4; }
	inline void set_currentDialogue_4(Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * value)
	{
		___currentDialogue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentDialogue_4), (void*)value);
	}

	inline static int32_t get_offset_of_UIParent_5() { return static_cast<int32_t>(offsetof(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000, ___UIParent_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_UIParent_5() const { return ___UIParent_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_UIParent_5() { return &___UIParent_5; }
	inline void set_UIParent_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___UIParent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIParent_5), (void*)value);
	}

	inline static int32_t get_offset_of_nameUI_6() { return static_cast<int32_t>(offsetof(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000, ___nameUI_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameUI_6() const { return ___nameUI_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameUI_6() { return &___nameUI_6; }
	inline void set_nameUI_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_dialogueUI_7() { return static_cast<int32_t>(offsetof(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000, ___dialogueUI_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_dialogueUI_7() const { return ___dialogueUI_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_dialogueUI_7() { return &___dialogueUI_7; }
	inline void set_dialogueUI_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___dialogueUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogueUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_8() { return static_cast<int32_t>(offsetof(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000, ___currentIndex_8)); }
	inline int32_t get_currentIndex_8() const { return ___currentIndex_8; }
	inline int32_t* get_address_of_currentIndex_8() { return &___currentIndex_8; }
	inline void set_currentIndex_8(int32_t value)
	{
		___currentIndex_8 = value;
	}
};


// EnemyController
struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyController::maxHealth
	float ___maxHealth_4;
	// System.Single EnemyController::health
	float ___health_5;
	// System.Single EnemyController::exp
	float ___exp_6;
	// System.Int32 EnemyController::money
	int32_t ___money_7;
	// PlayerController EnemyController::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_8;
	// System.Single EnemyController::iframeTime
	float ___iframeTime_9;
	// System.Single EnemyController::iframe
	float ___iframe_10;
	// EnemyController/enemystates EnemyController::currentState
	int32_t ___currentState_11;
	// UnityEngine.Animator EnemyController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_12;
	// GameController EnemyController::cont
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___cont_13;
	// UnityEngine.Rigidbody2D EnemyController::enemyRigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___enemyRigidbody_14;
	// System.Single EnemyController::timeBetweenAttacks
	float ___timeBetweenAttacks_15;
	// System.Single EnemyController::cools
	float ___cools_16;
	// System.Single EnemyController::speed
	float ___speed_17;
	// System.Int32 EnemyController::dir
	int32_t ___dir_18;
	// System.Single EnemyController::attackRange
	float ___attackRange_19;
	// System.Single EnemyController::distance
	float ___distance_20;
	// UnityEngine.SpriteRenderer EnemyController::rend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___rend_21;
	// UnityEngine.GameObject EnemyController::meleeCollider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meleeCollider_22;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___maxHealth_4)); }
	inline float get_maxHealth_4() const { return ___maxHealth_4; }
	inline float* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(float value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___health_5)); }
	inline float get_health_5() const { return ___health_5; }
	inline float* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(float value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_exp_6() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___exp_6)); }
	inline float get_exp_6() const { return ___exp_6; }
	inline float* get_address_of_exp_6() { return &___exp_6; }
	inline void set_exp_6(float value)
	{
		___exp_6 = value;
	}

	inline static int32_t get_offset_of_money_7() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___money_7)); }
	inline int32_t get_money_7() const { return ___money_7; }
	inline int32_t* get_address_of_money_7() { return &___money_7; }
	inline void set_money_7(int32_t value)
	{
		___money_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___player_8)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_8() const { return ___player_8; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_iframeTime_9() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___iframeTime_9)); }
	inline float get_iframeTime_9() const { return ___iframeTime_9; }
	inline float* get_address_of_iframeTime_9() { return &___iframeTime_9; }
	inline void set_iframeTime_9(float value)
	{
		___iframeTime_9 = value;
	}

	inline static int32_t get_offset_of_iframe_10() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___iframe_10)); }
	inline float get_iframe_10() const { return ___iframe_10; }
	inline float* get_address_of_iframe_10() { return &___iframe_10; }
	inline void set_iframe_10(float value)
	{
		___iframe_10 = value;
	}

	inline static int32_t get_offset_of_currentState_11() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___currentState_11)); }
	inline int32_t get_currentState_11() const { return ___currentState_11; }
	inline int32_t* get_address_of_currentState_11() { return &___currentState_11; }
	inline void set_currentState_11(int32_t value)
	{
		___currentState_11 = value;
	}

	inline static int32_t get_offset_of_anim_12() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___anim_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_12() const { return ___anim_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_12() { return &___anim_12; }
	inline void set_anim_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_12), (void*)value);
	}

	inline static int32_t get_offset_of_cont_13() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___cont_13)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_cont_13() const { return ___cont_13; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_cont_13() { return &___cont_13; }
	inline void set_cont_13(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___cont_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyRigidbody_14() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___enemyRigidbody_14)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_enemyRigidbody_14() const { return ___enemyRigidbody_14; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_enemyRigidbody_14() { return &___enemyRigidbody_14; }
	inline void set_enemyRigidbody_14(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___enemyRigidbody_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyRigidbody_14), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenAttacks_15() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___timeBetweenAttacks_15)); }
	inline float get_timeBetweenAttacks_15() const { return ___timeBetweenAttacks_15; }
	inline float* get_address_of_timeBetweenAttacks_15() { return &___timeBetweenAttacks_15; }
	inline void set_timeBetweenAttacks_15(float value)
	{
		___timeBetweenAttacks_15 = value;
	}

	inline static int32_t get_offset_of_cools_16() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___cools_16)); }
	inline float get_cools_16() const { return ___cools_16; }
	inline float* get_address_of_cools_16() { return &___cools_16; }
	inline void set_cools_16(float value)
	{
		___cools_16 = value;
	}

	inline static int32_t get_offset_of_speed_17() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___speed_17)); }
	inline float get_speed_17() const { return ___speed_17; }
	inline float* get_address_of_speed_17() { return &___speed_17; }
	inline void set_speed_17(float value)
	{
		___speed_17 = value;
	}

	inline static int32_t get_offset_of_dir_18() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___dir_18)); }
	inline int32_t get_dir_18() const { return ___dir_18; }
	inline int32_t* get_address_of_dir_18() { return &___dir_18; }
	inline void set_dir_18(int32_t value)
	{
		___dir_18 = value;
	}

	inline static int32_t get_offset_of_attackRange_19() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___attackRange_19)); }
	inline float get_attackRange_19() const { return ___attackRange_19; }
	inline float* get_address_of_attackRange_19() { return &___attackRange_19; }
	inline void set_attackRange_19(float value)
	{
		___attackRange_19 = value;
	}

	inline static int32_t get_offset_of_distance_20() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___distance_20)); }
	inline float get_distance_20() const { return ___distance_20; }
	inline float* get_address_of_distance_20() { return &___distance_20; }
	inline void set_distance_20(float value)
	{
		___distance_20 = value;
	}

	inline static int32_t get_offset_of_rend_21() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___rend_21)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_rend_21() const { return ___rend_21; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_rend_21() { return &___rend_21; }
	inline void set_rend_21(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___rend_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_21), (void*)value);
	}

	inline static int32_t get_offset_of_meleeCollider_22() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___meleeCollider_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_meleeCollider_22() const { return ___meleeCollider_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_meleeCollider_22() { return &___meleeCollider_22; }
	inline void set_meleeCollider_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___meleeCollider_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meleeCollider_22), (void*)value);
	}
};


// EnemyMeleeCollider
struct EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyMeleeCollider::attack
	float ___attack_4;

public:
	inline static int32_t get_offset_of_attack_4() { return static_cast<int32_t>(offsetof(EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332, ___attack_4)); }
	inline float get_attack_4() const { return ___attack_4; }
	inline float* get_address_of_attack_4() { return &___attack_4; }
	inline void set_attack_4(float value)
	{
		___attack_4 = value;
	}
};


// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<ShopItem> GameController::shopItems
	List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * ___shopItems_4;
	// System.Collections.Generic.List`1<ChestItem> GameController::chestItems
	List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___chestItems_5;
	// System.Collections.Generic.List`1<ChestItem> GameController::legendaryItems
	List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___legendaryItems_6;
	// System.Collections.Generic.List`1<ChestItem> GameController::rareItems
	List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___rareItems_7;
	// System.Collections.Generic.List`1<ChestItem> GameController::uncommonItems
	List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___uncommonItems_8;
	// System.Collections.Generic.List`1<ChestItem> GameController::commonItems
	List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___commonItems_9;
	// UnityEngine.GameObject[] GameController::spawnPoints
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___spawnPoints_10;
	// UnityEngine.GameObject GameController::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_11;
	// System.Single GameController::timeBetweenSpawns
	float ___timeBetweenSpawns_12;
	// System.Single GameController::cooldown
	float ___cooldown_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> GameController::enemies
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___enemies_14;

public:
	inline static int32_t get_offset_of_shopItems_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___shopItems_4)); }
	inline List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * get_shopItems_4() const { return ___shopItems_4; }
	inline List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 ** get_address_of_shopItems_4() { return &___shopItems_4; }
	inline void set_shopItems_4(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * value)
	{
		___shopItems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopItems_4), (void*)value);
	}

	inline static int32_t get_offset_of_chestItems_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___chestItems_5)); }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * get_chestItems_5() const { return ___chestItems_5; }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 ** get_address_of_chestItems_5() { return &___chestItems_5; }
	inline void set_chestItems_5(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * value)
	{
		___chestItems_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___chestItems_5), (void*)value);
	}

	inline static int32_t get_offset_of_legendaryItems_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___legendaryItems_6)); }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * get_legendaryItems_6() const { return ___legendaryItems_6; }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 ** get_address_of_legendaryItems_6() { return &___legendaryItems_6; }
	inline void set_legendaryItems_6(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * value)
	{
		___legendaryItems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___legendaryItems_6), (void*)value);
	}

	inline static int32_t get_offset_of_rareItems_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___rareItems_7)); }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * get_rareItems_7() const { return ___rareItems_7; }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 ** get_address_of_rareItems_7() { return &___rareItems_7; }
	inline void set_rareItems_7(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * value)
	{
		___rareItems_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rareItems_7), (void*)value);
	}

	inline static int32_t get_offset_of_uncommonItems_8() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___uncommonItems_8)); }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * get_uncommonItems_8() const { return ___uncommonItems_8; }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 ** get_address_of_uncommonItems_8() { return &___uncommonItems_8; }
	inline void set_uncommonItems_8(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * value)
	{
		___uncommonItems_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uncommonItems_8), (void*)value);
	}

	inline static int32_t get_offset_of_commonItems_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___commonItems_9)); }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * get_commonItems_9() const { return ___commonItems_9; }
	inline List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 ** get_address_of_commonItems_9() { return &___commonItems_9; }
	inline void set_commonItems_9(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * value)
	{
		___commonItems_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___commonItems_9), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___spawnPoints_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_spawnPoints_10() const { return ___spawnPoints_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_spawnPoints_10() { return &___spawnPoints_10; }
	inline void set_spawnPoints_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___spawnPoints_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_10), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___enemy_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_11() const { return ___enemy_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_11() { return &___enemy_11; }
	inline void set_enemy_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_11), (void*)value);
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_12() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timeBetweenSpawns_12)); }
	inline float get_timeBetweenSpawns_12() const { return ___timeBetweenSpawns_12; }
	inline float* get_address_of_timeBetweenSpawns_12() { return &___timeBetweenSpawns_12; }
	inline void set_timeBetweenSpawns_12(float value)
	{
		___timeBetweenSpawns_12 = value;
	}

	inline static int32_t get_offset_of_cooldown_13() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___cooldown_13)); }
	inline float get_cooldown_13() const { return ___cooldown_13; }
	inline float* get_address_of_cooldown_13() { return &___cooldown_13; }
	inline void set_cooldown_13(float value)
	{
		___cooldown_13 = value;
	}

	inline static int32_t get_offset_of_enemies_14() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___enemies_14)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_enemies_14() const { return ___enemies_14; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_enemies_14() { return &___enemies_14; }
	inline void set_enemies_14(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___enemies_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_14), (void*)value);
	}
};


// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Item> Inventory::items
	List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * ___items_4;
	// System.Int32 Inventory::iSlot
	int32_t ___iSlot_5;
	// System.Int32 Inventory::nextSlot
	int32_t ___nextSlot_6;
	// System.Boolean Inventory::rotate
	bool ___rotate_7;
	// UnityEngine.SpriteRenderer Inventory::parentRend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___parentRend_8;

public:
	inline static int32_t get_offset_of_items_4() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___items_4)); }
	inline List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * get_items_4() const { return ___items_4; }
	inline List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 ** get_address_of_items_4() { return &___items_4; }
	inline void set_items_4(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * value)
	{
		___items_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_4), (void*)value);
	}

	inline static int32_t get_offset_of_iSlot_5() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___iSlot_5)); }
	inline int32_t get_iSlot_5() const { return ___iSlot_5; }
	inline int32_t* get_address_of_iSlot_5() { return &___iSlot_5; }
	inline void set_iSlot_5(int32_t value)
	{
		___iSlot_5 = value;
	}

	inline static int32_t get_offset_of_nextSlot_6() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___nextSlot_6)); }
	inline int32_t get_nextSlot_6() const { return ___nextSlot_6; }
	inline int32_t* get_address_of_nextSlot_6() { return &___nextSlot_6; }
	inline void set_nextSlot_6(int32_t value)
	{
		___nextSlot_6 = value;
	}

	inline static int32_t get_offset_of_rotate_7() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___rotate_7)); }
	inline bool get_rotate_7() const { return ___rotate_7; }
	inline bool* get_address_of_rotate_7() { return &___rotate_7; }
	inline void set_rotate_7(bool value)
	{
		___rotate_7 = value;
	}

	inline static int32_t get_offset_of_parentRend_8() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___parentRend_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_parentRend_8() const { return ___parentRend_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_parentRend_8() { return &___parentRend_8; }
	inline void set_parentRend_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___parentRend_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentRend_8), (void*)value);
	}
};


// Item
struct Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Item::itemName
	String_t* ___itemName_4;
	// System.String Item::itemDescription
	String_t* ___itemDescription_5;
	// System.Int32 Item::itemCost
	int32_t ___itemCost_6;
	// System.Boolean Item::rotate
	bool ___rotate_7;
	// System.Single Item::amount
	float ___amount_8;
	// Item/rarity Item::itemRarity
	int32_t ___itemRarity_9;
	// UnityEngine.Sprite Item::itemSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___itemSprite_10;
	// Inventory Item::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_11;
	// UnityEngine.SpriteRenderer Item::itemRend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___itemRend_12;

public:
	inline static int32_t get_offset_of_itemName_4() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemName_4)); }
	inline String_t* get_itemName_4() const { return ___itemName_4; }
	inline String_t** get_address_of_itemName_4() { return &___itemName_4; }
	inline void set_itemName_4(String_t* value)
	{
		___itemName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemName_4), (void*)value);
	}

	inline static int32_t get_offset_of_itemDescription_5() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemDescription_5)); }
	inline String_t* get_itemDescription_5() const { return ___itemDescription_5; }
	inline String_t** get_address_of_itemDescription_5() { return &___itemDescription_5; }
	inline void set_itemDescription_5(String_t* value)
	{
		___itemDescription_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemDescription_5), (void*)value);
	}

	inline static int32_t get_offset_of_itemCost_6() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemCost_6)); }
	inline int32_t get_itemCost_6() const { return ___itemCost_6; }
	inline int32_t* get_address_of_itemCost_6() { return &___itemCost_6; }
	inline void set_itemCost_6(int32_t value)
	{
		___itemCost_6 = value;
	}

	inline static int32_t get_offset_of_rotate_7() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___rotate_7)); }
	inline bool get_rotate_7() const { return ___rotate_7; }
	inline bool* get_address_of_rotate_7() { return &___rotate_7; }
	inline void set_rotate_7(bool value)
	{
		___rotate_7 = value;
	}

	inline static int32_t get_offset_of_amount_8() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___amount_8)); }
	inline float get_amount_8() const { return ___amount_8; }
	inline float* get_address_of_amount_8() { return &___amount_8; }
	inline void set_amount_8(float value)
	{
		___amount_8 = value;
	}

	inline static int32_t get_offset_of_itemRarity_9() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemRarity_9)); }
	inline int32_t get_itemRarity_9() const { return ___itemRarity_9; }
	inline int32_t* get_address_of_itemRarity_9() { return &___itemRarity_9; }
	inline void set_itemRarity_9(int32_t value)
	{
		___itemRarity_9 = value;
	}

	inline static int32_t get_offset_of_itemSprite_10() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemSprite_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_itemSprite_10() const { return ___itemSprite_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_itemSprite_10() { return &___itemSprite_10; }
	inline void set_itemSprite_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___itemSprite_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemSprite_10), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_11() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___inventory_11)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_11() const { return ___inventory_11; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_11() { return &___inventory_11; }
	inline void set_inventory_11(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_11), (void*)value);
	}

	inline static int32_t get_offset_of_itemRend_12() { return static_cast<int32_t>(offsetof(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C, ___itemRend_12)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_itemRend_12() const { return ___itemRend_12; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_itemRend_12() { return &___itemRend_12; }
	inline void set_itemRend_12(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___itemRend_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemRend_12), (void*)value);
	}
};


// NPCController
struct NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// DialogueController NPCController::dialogueController
	DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * ___dialogueController_4;
	// Dialogue[] NPCController::dialogues
	DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD* ___dialogues_5;
	// System.Int32 NPCController::currentDial
	int32_t ___currentDial_6;

public:
	inline static int32_t get_offset_of_dialogueController_4() { return static_cast<int32_t>(offsetof(NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1, ___dialogueController_4)); }
	inline DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * get_dialogueController_4() const { return ___dialogueController_4; }
	inline DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 ** get_address_of_dialogueController_4() { return &___dialogueController_4; }
	inline void set_dialogueController_4(DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * value)
	{
		___dialogueController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogueController_4), (void*)value);
	}

	inline static int32_t get_offset_of_dialogues_5() { return static_cast<int32_t>(offsetof(NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1, ___dialogues_5)); }
	inline DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD* get_dialogues_5() const { return ___dialogues_5; }
	inline DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD** get_address_of_dialogues_5() { return &___dialogues_5; }
	inline void set_dialogues_5(DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD* value)
	{
		___dialogues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dialogues_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentDial_6() { return static_cast<int32_t>(offsetof(NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1, ___currentDial_6)); }
	inline int32_t get_currentDial_6() const { return ___currentDial_6; }
	inline int32_t* get_address_of_currentDial_6() { return &___currentDial_6; }
	inline void set_currentDial_6(int32_t value)
	{
		___currentDial_6 = value;
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D PlayerController::playerRigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___playerRigidbody_4;
	// UnityEngine.Vector2 PlayerController::input
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___input_5;
	// System.Single PlayerController::speed
	float ___speed_6;
	// UnityEngine.Animator PlayerController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_7;
	// UnityEngine.SpriteRenderer PlayerController::rend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___rend_8;
	// System.Int32 PlayerController::lookDir
	int32_t ___lookDir_9;
	// System.Boolean PlayerController::moving
	bool ___moving_10;
	// System.Single PlayerController::maxHealth
	float ___maxHealth_11;
	// System.Single PlayerController::health
	float ___health_12;
	// System.Int32 PlayerController::maxMoney
	int32_t ___maxMoney_13;
	// System.Int32 PlayerController::money
	int32_t ___money_14;
	// System.Single PlayerController::attack
	float ___attack_15;
	// System.Int32 PlayerController::level
	int32_t ___level_16;
	// System.Single PlayerController::experience
	float ___experience_17;
	// System.Single PlayerController::expToNext
	float ___expToNext_18;
	// UnityEngine.AnimationCurve PlayerController::expCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___expCurve_19;
	// UnityEngine.UI.Image PlayerController::healthUI
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___healthUI_20;
	// UnityEngine.UI.Text PlayerController::moneyText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___moneyText_21;
	// UnityEngine.UI.Text PlayerController::expText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___expText_22;
	// System.Single PlayerController::iframeTime
	float ___iframeTime_23;
	// System.Single PlayerController::iframe
	float ___iframe_24;
	// UnityEngine.GameObject PlayerController::meleeCollider
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___meleeCollider_25;
	// System.Boolean PlayerController::gameOver
	bool ___gameOver_26;
	// UnityEngine.GameObject PlayerController::gameOverUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverUI_27;

public:
	inline static int32_t get_offset_of_playerRigidbody_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___playerRigidbody_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_playerRigidbody_4() const { return ___playerRigidbody_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_playerRigidbody_4() { return &___playerRigidbody_4; }
	inline void set_playerRigidbody_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___playerRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerRigidbody_4), (void*)value);
	}

	inline static int32_t get_offset_of_input_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___input_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_input_5() const { return ___input_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_input_5() { return &___input_5; }
	inline void set_input_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___input_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___anim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_7() const { return ___anim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_7), (void*)value);
	}

	inline static int32_t get_offset_of_rend_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___rend_8)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_rend_8() const { return ___rend_8; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_rend_8() { return &___rend_8; }
	inline void set_rend_8(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___rend_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_8), (void*)value);
	}

	inline static int32_t get_offset_of_lookDir_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___lookDir_9)); }
	inline int32_t get_lookDir_9() const { return ___lookDir_9; }
	inline int32_t* get_address_of_lookDir_9() { return &___lookDir_9; }
	inline void set_lookDir_9(int32_t value)
	{
		___lookDir_9 = value;
	}

	inline static int32_t get_offset_of_moving_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___moving_10)); }
	inline bool get_moving_10() const { return ___moving_10; }
	inline bool* get_address_of_moving_10() { return &___moving_10; }
	inline void set_moving_10(bool value)
	{
		___moving_10 = value;
	}

	inline static int32_t get_offset_of_maxHealth_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___maxHealth_11)); }
	inline float get_maxHealth_11() const { return ___maxHealth_11; }
	inline float* get_address_of_maxHealth_11() { return &___maxHealth_11; }
	inline void set_maxHealth_11(float value)
	{
		___maxHealth_11 = value;
	}

	inline static int32_t get_offset_of_health_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___health_12)); }
	inline float get_health_12() const { return ___health_12; }
	inline float* get_address_of_health_12() { return &___health_12; }
	inline void set_health_12(float value)
	{
		___health_12 = value;
	}

	inline static int32_t get_offset_of_maxMoney_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___maxMoney_13)); }
	inline int32_t get_maxMoney_13() const { return ___maxMoney_13; }
	inline int32_t* get_address_of_maxMoney_13() { return &___maxMoney_13; }
	inline void set_maxMoney_13(int32_t value)
	{
		___maxMoney_13 = value;
	}

	inline static int32_t get_offset_of_money_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___money_14)); }
	inline int32_t get_money_14() const { return ___money_14; }
	inline int32_t* get_address_of_money_14() { return &___money_14; }
	inline void set_money_14(int32_t value)
	{
		___money_14 = value;
	}

	inline static int32_t get_offset_of_attack_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___attack_15)); }
	inline float get_attack_15() const { return ___attack_15; }
	inline float* get_address_of_attack_15() { return &___attack_15; }
	inline void set_attack_15(float value)
	{
		___attack_15 = value;
	}

	inline static int32_t get_offset_of_level_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___level_16)); }
	inline int32_t get_level_16() const { return ___level_16; }
	inline int32_t* get_address_of_level_16() { return &___level_16; }
	inline void set_level_16(int32_t value)
	{
		___level_16 = value;
	}

	inline static int32_t get_offset_of_experience_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___experience_17)); }
	inline float get_experience_17() const { return ___experience_17; }
	inline float* get_address_of_experience_17() { return &___experience_17; }
	inline void set_experience_17(float value)
	{
		___experience_17 = value;
	}

	inline static int32_t get_offset_of_expToNext_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___expToNext_18)); }
	inline float get_expToNext_18() const { return ___expToNext_18; }
	inline float* get_address_of_expToNext_18() { return &___expToNext_18; }
	inline void set_expToNext_18(float value)
	{
		___expToNext_18 = value;
	}

	inline static int32_t get_offset_of_expCurve_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___expCurve_19)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_expCurve_19() const { return ___expCurve_19; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_expCurve_19() { return &___expCurve_19; }
	inline void set_expCurve_19(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___expCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_healthUI_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___healthUI_20)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_healthUI_20() const { return ___healthUI_20; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_healthUI_20() { return &___healthUI_20; }
	inline void set_healthUI_20(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___healthUI_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___healthUI_20), (void*)value);
	}

	inline static int32_t get_offset_of_moneyText_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___moneyText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_moneyText_21() const { return ___moneyText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_moneyText_21() { return &___moneyText_21; }
	inline void set_moneyText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___moneyText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moneyText_21), (void*)value);
	}

	inline static int32_t get_offset_of_expText_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___expText_22)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_expText_22() const { return ___expText_22; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_expText_22() { return &___expText_22; }
	inline void set_expText_22(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___expText_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expText_22), (void*)value);
	}

	inline static int32_t get_offset_of_iframeTime_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___iframeTime_23)); }
	inline float get_iframeTime_23() const { return ___iframeTime_23; }
	inline float* get_address_of_iframeTime_23() { return &___iframeTime_23; }
	inline void set_iframeTime_23(float value)
	{
		___iframeTime_23 = value;
	}

	inline static int32_t get_offset_of_iframe_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___iframe_24)); }
	inline float get_iframe_24() const { return ___iframe_24; }
	inline float* get_address_of_iframe_24() { return &___iframe_24; }
	inline void set_iframe_24(float value)
	{
		___iframe_24 = value;
	}

	inline static int32_t get_offset_of_meleeCollider_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___meleeCollider_25)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_meleeCollider_25() const { return ___meleeCollider_25; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_meleeCollider_25() { return &___meleeCollider_25; }
	inline void set_meleeCollider_25(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___meleeCollider_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meleeCollider_25), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___gameOver_26)); }
	inline bool get_gameOver_26() const { return ___gameOver_26; }
	inline bool* get_address_of_gameOver_26() { return &___gameOver_26; }
	inline void set_gameOver_26(bool value)
	{
		___gameOver_26 = value;
	}

	inline static int32_t get_offset_of_gameOverUI_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___gameOverUI_27)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverUI_27() const { return ___gameOverUI_27; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverUI_27() { return &___gameOverUI_27; }
	inline void set_gameOverUI_27(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverUI_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverUI_27), (void*)value);
	}
};


// PlayerMeleeCollider
struct PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerMeleeCollider::attack
	float ___attack_4;
	// PlayerController PlayerMeleeCollider::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_5;

public:
	inline static int32_t get_offset_of_attack_4() { return static_cast<int32_t>(offsetof(PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2, ___attack_4)); }
	inline float get_attack_4() const { return ___attack_4; }
	inline float* get_address_of_attack_4() { return &___attack_4; }
	inline void set_attack_4(float value)
	{
		___attack_4 = value;
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2, ___player_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_5() const { return ___player_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}
};


// Projectile
struct Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Projectile::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D Projectile::bulletRigidbody
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___bulletRigidbody_5;
	// RangedWeapon Projectile::colt
	RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * ___colt_6;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_bulletRigidbody_5() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___bulletRigidbody_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_bulletRigidbody_5() const { return ___bulletRigidbody_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_bulletRigidbody_5() { return &___bulletRigidbody_5; }
	inline void set_bulletRigidbody_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___bulletRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletRigidbody_5), (void*)value);
	}

	inline static int32_t get_offset_of_colt_6() { return static_cast<int32_t>(offsetof(Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F, ___colt_6)); }
	inline RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * get_colt_6() const { return ___colt_6; }
	inline RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E ** get_address_of_colt_6() { return &___colt_6; }
	inline void set_colt_6(RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * value)
	{
		___colt_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colt_6), (void*)value);
	}
};


// Shop
struct Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Shop::interactDistance
	float ___interactDistance_4;
	// System.Single Shop::distance
	float ___distance_5;
	// UnityEngine.GameObject Shop::shopParent
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___shopParent_6;
	// PlayerController Shop::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_7;
	// GameController Shop::cont
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___cont_8;

public:
	inline static int32_t get_offset_of_interactDistance_4() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___interactDistance_4)); }
	inline float get_interactDistance_4() const { return ___interactDistance_4; }
	inline float* get_address_of_interactDistance_4() { return &___interactDistance_4; }
	inline void set_interactDistance_4(float value)
	{
		___interactDistance_4 = value;
	}

	inline static int32_t get_offset_of_distance_5() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___distance_5)); }
	inline float get_distance_5() const { return ___distance_5; }
	inline float* get_address_of_distance_5() { return &___distance_5; }
	inline void set_distance_5(float value)
	{
		___distance_5 = value;
	}

	inline static int32_t get_offset_of_shopParent_6() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___shopParent_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_shopParent_6() const { return ___shopParent_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_shopParent_6() { return &___shopParent_6; }
	inline void set_shopParent_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___shopParent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shopParent_6), (void*)value);
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___player_7)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_7() const { return ___player_7; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_7), (void*)value);
	}

	inline static int32_t get_offset_of_cont_8() { return static_cast<int32_t>(offsetof(Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6, ___cont_8)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_cont_8() const { return ___cont_8; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_cont_8() { return &___cont_8; }
	inline void set_cont_8(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___cont_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cont_8), (void*)value);
	}
};


// ShopItem
struct ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Item ShopItem::item
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item_4;
	// PlayerController ShopItem::player
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * ___player_5;
	// Inventory ShopItem::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_6;
	// UnityEngine.SpriteRenderer ShopItem::rend
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___rend_7;
	// UnityEngine.UI.Text ShopItem::itemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___itemText_8;

public:
	inline static int32_t get_offset_of_item_4() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___item_4)); }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * get_item_4() const { return ___item_4; }
	inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C ** get_address_of_item_4() { return &___item_4; }
	inline void set_item_4(Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * value)
	{
		___item_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___player_5)); }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * get_player_5() const { return ___player_5; }
	inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_inventory_6() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___inventory_6)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_6() const { return ___inventory_6; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_6() { return &___inventory_6; }
	inline void set_inventory_6(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_6), (void*)value);
	}

	inline static int32_t get_offset_of_rend_7() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___rend_7)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_rend_7() const { return ___rend_7; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_rend_7() { return &___rend_7; }
	inline void set_rend_7(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___rend_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rend_7), (void*)value);
	}

	inline static int32_t get_offset_of_itemText_8() { return static_cast<int32_t>(offsetof(ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101, ___itemText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_itemText_8() const { return ___itemText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_itemText_8() { return &___itemText_8; }
	inline void set_itemText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___itemText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemText_8), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Consumable
struct Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3  : public Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C
{
public:
	// System.Int32 Consumable::uses
	int32_t ___uses_13;

public:
	inline static int32_t get_offset_of_uses_13() { return static_cast<int32_t>(offsetof(Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3, ___uses_13)); }
	inline int32_t get_uses_13() const { return ___uses_13; }
	inline int32_t* get_address_of_uses_13() { return &___uses_13; }
	inline void set_uses_13(int32_t value)
	{
		___uses_13 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// MeleeWeapon
struct MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5  : public Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C
{
public:
	// UnityEngine.Animator MeleeWeapon::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_13;
	// UnityEngine.LayerMask MeleeWeapon::enemyLayer
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___enemyLayer_14;
	// System.Single MeleeWeapon::rayLength
	float ___rayLength_15;

public:
	inline static int32_t get_offset_of_anim_13() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___anim_13)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_13() const { return ___anim_13; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_13() { return &___anim_13; }
	inline void set_anim_13(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_13), (void*)value);
	}

	inline static int32_t get_offset_of_enemyLayer_14() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___enemyLayer_14)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_enemyLayer_14() const { return ___enemyLayer_14; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_enemyLayer_14() { return &___enemyLayer_14; }
	inline void set_enemyLayer_14(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___enemyLayer_14 = value;
	}

	inline static int32_t get_offset_of_rayLength_15() { return static_cast<int32_t>(offsetof(MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5, ___rayLength_15)); }
	inline float get_rayLength_15() const { return ___rayLength_15; }
	inline float* get_address_of_rayLength_15() { return &___rayLength_15; }
	inline void set_rayLength_15(float value)
	{
		___rayLength_15 = value;
	}
};


// RangedWeapon
struct RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E  : public Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C
{
public:
	// UnityEngine.GameObject RangedWeapon::projectile
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___projectile_13;

public:
	inline static int32_t get_offset_of_projectile_13() { return static_cast<int32_t>(offsetof(RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E, ___projectile_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_projectile_13() const { return ___projectile_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_projectile_13() { return &___projectile_13; }
	inline void set_projectile_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___projectile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___projectile_13), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Dialogue[]
struct DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * m_Items[1];

public:
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C (const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Object::FindObjectOfType<GameController>()
inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D (const RuntimeMethod* method)
{
	return ((  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ChestItem>::get_Count()
inline int32_t List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// ChestItem GameController::GetRandomItem(System.Collections.Generic.List`1<ChestItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___l0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<ChestItem>(!!0)
inline ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605 (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * ___original0, const RuntimeMethod* method)
{
	return ((  ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * (*) (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F (Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void Chest::PopulateChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_PopulateChest_mE8F6222AB910F5DABADAE14AC85ED4DDE2BF70A4 (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<Inventory>()
inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E (const RuntimeMethod* method)
{
	return ((  Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void Inventory::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddItem_m5E3DC6A8F5D61109B551111CB7B89FF759E8F13A (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void ChestItem::PickupItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem_PickupItem_m1DD747F7FA22C96090FE5B06AC845E99AD38C96E (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method);
// System.Void Item::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method);
// System.Void PlayerController::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Heal_m061094BDB34A9AFD7CBFAA2A84A881ACF15535C6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method);
// System.Void Item::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Remove_m28F2CBE8D00ACB39B30E554CAD092A7655E8D76F (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method);
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DialogueController::ExitDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_ExitDialogue_m61C718DAE85FBABF82D70BF697FCB157BF84C4D5 (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void EnemyController::Chase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Chase_m2A5BB9BFBB2648A3E26A529827CD6455A8414495 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void EnemyController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Attack_mBD1D4167BFC5075465C9CBED16775C4FFC7FB0DF (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void EnemyController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Die_mF8345A38C1A9EE642AA11FE39D03303836390305 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method);
// System.Void PlayerController::AddExp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddExp_mE3EE6B84A25BDFD8C153205D99D8D84105B6E221 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method);
// System.Void PlayerController::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddMoney_m2163000937EB3B520ECBB74BCB5049E1CD88AA95 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___amt0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
inline PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void PlayerController::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Damage_mABB89F5C0FA31700D41B118892D57A8A33512FB8 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<ChestItem>::get_Item(System.Int32)
inline ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * (*) (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<ChestItem>::Add(!0)
inline void List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * __this, ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *, ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void GameController::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.GameObject GameController::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameController_GetEnemy_mCECA5C4DE9EA8000E7344EC63FC2A810AA512D08 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<ShopItem>::get_Count()
inline int32_t List_1_get_Count_m73769AEB7989B65D692F62D95C82B08896A99670_inline (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<ShopItem>::get_Item(System.Int32)
inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * List_1_get_Item_mCA60EF87E6C8DF2AF164480BD3AB903D7E605D48_inline (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * (*) (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<ShopItem>::.ctor()
inline void List_1__ctor_mA52A7F9A44AC77DD80B4FF5CF44D55BA01999160 (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<ChestItem>::.ctor()
inline void List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3 (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Item>::get_Count()
inline int32_t List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Inventory::EquipItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_EquipItem_m11A9004CE668636C12716507C09563E2C10DF92D (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, int32_t ___slot0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Item>::get_Item(System.Int32)
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Inventory::RemoveItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_RemoveItem_m6519ED53569AB67F8929F4A282C42E39F39B8236 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<Item>(!!0)
inline Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * Object_Instantiate_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m11585BA7F9E83F69ADC0D3634FAAEDD2C6DB8175 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___original0, const RuntimeMethod* method)
{
	return ((  Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * (*) (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Item>::Add(!0)
inline void List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<Item>::Remove(!0)
inline bool List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11 (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Item>::.ctor()
inline void List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4 (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Object_FindObjectOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mD15D166F5C3F08236BF8CEAE66D5BCEFFA0B6114 (const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// !!0 UnityEngine.GameObject::GetComponent<EnemyController>()
inline EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void EnemyController::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, float ___amt0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<DialogueController>()
inline DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * Object_FindObjectOfType_TisDialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000_m8F1082E1C70C0C48EB4319FB4A904DAC91E02848 (const RuntimeMethod* method)
{
	return ((  DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void DialogueController::StartDialogue(Dialogue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_StartDialogue_m146B5A1C3DE13F95F3D5F2F282A6B583D61E43AB (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * ___d0, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Single PlayerController::CalculateExp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_CalculateExp_mCA4EF029908F2EFBFA3561E0F696F481CE6D613F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AnimationCurve::AddKey(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void PlayerController::SwingAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SwingAttack_m95E8A1E73F3FC8BB5E41E8700D097DA26E73D29C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5 (const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m2A44CB9CC6A92B0963A0F5D3FA8B6A95F46EA533 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void PlayerController::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LevelUp_m2FD1B9AE5A7D9DB7D3E960F2E133160E3B68D4AF (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<RangedWeapon>()
inline RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * Object_FindObjectOfType_TisRangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E_m4AE98820494A75575B975BE6030BE383A8F5422E (const RuntimeMethod* method)
{
	return ((  RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void Shop::PopulateShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_PopulateShop_m9AE78715530E91EB18E486ED637D7B2E0F2A659F (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method);
// ShopItem GameController::GetRandomItem(System.Collections.Generic.List`1<ShopItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * GameController_GetRandomItem_m3C21FAE09CD0EA1607A871AD61CCFE1E3B3962DF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * ___l0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<ShopItem>(!!0)
inline ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * Object_Instantiate_TisShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_m945070CA9355D05CB3CCD058D67E7F69B19324B1 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * ___original0, const RuntimeMethod* method)
{
	return ((  ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * (*) (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void ShopItem::BuyItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem_BuyItem_m1D7C64B7A3D00309B75E475815CF07F80E9D00A3 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void CameraController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_FixedUpdate_m5C8D9F96E5AECA2F53DB83DAD8194CE51048B9E3 (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = Vector3.Lerp(transform.position, new Vector3(target.position.x, target.position.y, -10), lerpSpeed * Time.fixedDeltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = __this->get_target_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_5, L_8, (-10.0f), /*hidden argument*/NULL);
		float L_10 = __this->get_lerpSpeed_5();
		float L_11;
		L_11 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_2, L_9, ((float)il2cpp_codegen_multiply((float)L_10, (float)L_11)), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_m07EC5A8C82742876097619BE7DD9043F47327DAE (CameraController_tCFCE51ADE50A46097682FD3E2CEA53100D84E7E0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Chest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_Awake_m0B9DD40267536CE3882FCCFCB17D9A86D15ADFF7 (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_5(L_0);
		// cont = FindObjectOfType<GameController>();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1;
		L_1 = Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D(/*hidden argument*/Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		__this->set_cont_6(L_1);
		// }
		return;
	}
}
// System.Void Chest::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_Update_m4FA8556D3034321A01625325CE1F0612CB333866 (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Chest::PopulateChest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_PopulateChest_mE8F6222AB910F5DABADAE14AC85ED4DDE2BF70A4 (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21C9C70535876FA3A24C2F32A06C51F60BBE60D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54BC3B18936B2EE60BF26419154CC71CB67A175);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_01d8;
	}

IL_0007:
	{
		// int r = Random.Range(0, 100);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		V_1 = L_0;
		// Debug.Log("random number is " + r);
		String_t* L_1;
		L_1 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_1), /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral21C9C70535876FA3A24C2F32A06C51F60BBE60D0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_2, /*hidden argument*/NULL);
		// if (r < 3 && cont.legendaryItems.Count != 0) // legendary item
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)3)))
		{
			goto IL_0091;
		}
	}
	{
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_4 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_5 = L_4->get_legendaryItems_6();
		int32_t L_6;
		L_6 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_5, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		// chestItem = Instantiate(cont.GetRandomItem(cont.legendaryItems));
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_7 = __this->get_cont_6();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_8 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_9 = L_8->get_legendaryItems_6();
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_10;
		L_10 = GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D(L_7, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_11;
		L_11 = Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605(L_10, /*hidden argument*/Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var);
		// chestItem.transform.SetParent(chestParent.transform);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_12 = L_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_chestParent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_14, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_13, L_15, /*hidden argument*/NULL);
		// chestItem.transform.localPosition = new Vector3((i * 2) -2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)), (int32_t)2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_18, /*hidden argument*/NULL);
		// }
		goto IL_01d4;
	}

IL_0091:
	{
		// else if (r < 10 && cont.rareItems.Count != 0) // rare item
		int32_t L_19 = V_1;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)10))))
		{
			goto IL_00fd;
		}
	}
	{
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_20 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_21 = L_20->get_rareItems_7();
		int32_t L_22;
		L_22 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_21, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		if (!L_22)
		{
			goto IL_00fd;
		}
	}
	{
		// chestItem = Instantiate(cont.GetRandomItem(cont.rareItems));
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_23 = __this->get_cont_6();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_24 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_25 = L_24->get_rareItems_7();
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_26;
		L_26 = GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D(L_23, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_27;
		L_27 = Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605(L_26, /*hidden argument*/Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var);
		// chestItem.transform.SetParent(chestParent.transform);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_28 = L_27;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_chestParent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_29, L_31, /*hidden argument*/NULL);
		// chestItem.transform.localPosition = new Vector3((i * 2) -2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_28, /*hidden argument*/NULL);
		int32_t L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_34), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_33, (int32_t)2)), (int32_t)2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_32, L_34, /*hidden argument*/NULL);
		// }
		goto IL_01d4;
	}

IL_00fd:
	{
		// else if (r < 50 && cont.uncommonItems.Count != 0) // uncommon item
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) >= ((int32_t)((int32_t)50))))
		{
			goto IL_0166;
		}
	}
	{
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_36 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_37 = L_36->get_uncommonItems_8();
		int32_t L_38;
		L_38 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_37, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		if (!L_38)
		{
			goto IL_0166;
		}
	}
	{
		// chestItem = Instantiate(cont.GetRandomItem(cont.uncommonItems));
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_39 = __this->get_cont_6();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_40 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_41 = L_40->get_uncommonItems_8();
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_42;
		L_42 = GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D(L_39, L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_43;
		L_43 = Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605(L_42, /*hidden argument*/Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var);
		// chestItem.transform.SetParent(chestParent.transform);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_44 = L_43;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46 = __this->get_chestParent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_46, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_45, L_47, /*hidden argument*/NULL);
		// chestItem.transform.localPosition = new Vector3((i * 2) -2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		int32_t L_49 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_50), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_49, (int32_t)2)), (int32_t)2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_48, L_50, /*hidden argument*/NULL);
		// }
		goto IL_01d4;
	}

IL_0166:
	{
		// else if (cont.commonItems.Count != 0)// common
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_51 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_52 = L_51->get_commonItems_9();
		int32_t L_53;
		L_53 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_52, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		if (!L_53)
		{
			goto IL_01ca;
		}
	}
	{
		// chestItem = Instantiate(cont.GetRandomItem(cont.commonItems));
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_54 = __this->get_cont_6();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_55 = __this->get_cont_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_56 = L_55->get_commonItems_9();
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_57;
		L_57 = GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D(L_54, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_58;
		L_58 = Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605(L_57, /*hidden argument*/Object_Instantiate_TisChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D_m4E9FE47DFCD218DFD59F97038DACE8D3A3955605_RuntimeMethod_var);
		// chestItem.transform.SetParent(chestParent.transform);
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_59 = L_58;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = __this->get_chestParent_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_61, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_60, L_62, /*hidden argument*/NULL);
		// chestItem.transform.localPosition = new Vector3((i * 2) -2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		int32_t L_64 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_65), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_64, (int32_t)2)), (int32_t)2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_63, L_65, /*hidden argument*/NULL);
		// }
		goto IL_01d4;
	}

IL_01ca:
	{
		// Debug.Log("No items in Chest");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC54BC3B18936B2EE60BF26419154CC71CB67A175, /*hidden argument*/NULL);
	}

IL_01d4:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_66 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01d8:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_67 = V_0;
		if ((((int32_t)L_67) < ((int32_t)3)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Chest::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest_OnCollisionEnter2D_m329207BBA1943E05A4FFB581F5040EFF542FD02B (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!populated && collision.gameObject.CompareTag("Player"))
		bool L_0 = __this->get_populated_7();
		if (L_0)
		{
			goto IL_0027;
		}
	}
	{
		Collision2D_t95B5FD331CE95276D3658140844190B485D26564 * L_1 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Collision2D_get_gameObject_m6F07B9CA1FAD187933EB6D8E44BD9F870658F89F(L_1, /*hidden argument*/NULL);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// PopulateChest();
		Chest_PopulateChest_mE8F6222AB910F5DABADAE14AC85ED4DDE2BF70A4(__this, /*hidden argument*/NULL);
		// populated = true;
		__this->set_populated_7((bool)1);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Chest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Chest__ctor_m107B91B4F8435DE9E7C45BC7C0707B14BE3632D2 (Chest_tF5FAEEFD66F59BDFBFCE78BE5BCAB9FCA9F1B66C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ChestItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem_Start_m451BAC1893DDF3D89F059670AF294C7E172491A8 (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_5(L_0);
		// inventory  = FindObjectOfType<Inventory>();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1;
		L_1 = Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E(/*hidden argument*/Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		__this->set_inventory_6(L_1);
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_rend_7(L_2);
		// itemText = GetComponentInChildren<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_itemText_8(L_3);
		// rend.sprite = item.itemSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_rend_7();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = __this->get_item_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_itemSprite_10();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChestItem::PickupItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem_PickupItem_m1DD747F7FA22C96090FE5B06AC845E99AD38C96E (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory.AddItem(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_item_4();
		Inventory_AddItem_m5E3DC6A8F5D61109B551111CB7B89FF759E8F13A(L_0, L_1, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChestItem::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem_OnMouseDown_mC569748B73E2C1734FCED55B0BE6CDF438BCD743 (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method)
{
	{
		// PickupItem();
		ChestItem_PickupItem_m1DD747F7FA22C96090FE5B06AC845E99AD38C96E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChestItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem_Update_mAEA38DFE2AE647A394D8567A9F9D3DE4E7FB6639 (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method)
{
	{
		// itemText.text = item.itemName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_itemText_8();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_item_4();
		String_t* L_2 = L_1->get_itemName_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ChestItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestItem__ctor_mEC4C0A59A2B848603DC21AF10DEABE00AA7FF97E (ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Consumable::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Consumable_Use_m814F376A4EC39526547C06A8A37119C520DE9C4D (Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Use();
		Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2(__this, /*hidden argument*/NULL);
		// if (uses > 0)
		int32_t L_0 = __this->get_uses_13();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		// uses--;
		int32_t L_1 = __this->get_uses_13();
		__this->set_uses_13(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// FindObjectOfType<PlayerController>().Heal(amount);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_2;
		L_2 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		float L_3 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)__this)->get_amount_8();
		PlayerController_Heal_m061094BDB34A9AFD7CBFAA2A84A881ACF15535C6(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// Remove();
		VirtActionInvoker0::Invoke(5 /* System.Void Item::Remove() */, __this);
		// }
		return;
	}
}
// System.Void Consumable::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Consumable_Remove_m03F0378AC9C6F4D943FB59534D7AB53C36E8175D (Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3 * __this, const RuntimeMethod* method)
{
	{
		// base.Remove();
		Item_Remove_m28F2CBE8D00ACB39B30E554CAD092A7655E8D76F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Consumable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Consumable__ctor_m49924D1710089801735A2523E1C66AD726832A7A (Consumable_t515F9B4C81CF91F4B0D50759706BA4C1B32832B3 * __this, const RuntimeMethod* method)
{
	{
		Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147(__this, /*hidden argument*/NULL);
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
// System.Void Dialogue::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Start_m9724CCDA8233483785E796460B0C13FCCC3635A4 (Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dialogue::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue_Update_m1FDF6C9B65E25D3F4706149D82055051FF0FF94F (Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dialogue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dialogue__ctor_m76C11FD80AFD4F6BE87E30C737879EBB5A1D724E (Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void DialogueController::StartDialogue(Dialogue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_StartDialogue_m146B5A1C3DE13F95F3D5F2F282A6B583D61E43AB (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * ___d0, const RuntimeMethod* method)
{
	{
		// currentDialogue = d;
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_0 = ___d0;
		__this->set_currentDialogue_4(L_0);
		// UIParent.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_UIParent_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// currentIndex = 0;
		__this->set_currentIndex_8(0);
		// nameUI.text = currentDialogue.npcName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_nameUI_6();
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_3 = __this->get_currentDialogue_4();
		String_t* L_4 = L_3->get_npcName_0();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// dialogueUI.text = currentDialogue.dialogue[currentIndex];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_dialogueUI_7();
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_6 = __this->get_currentDialogue_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6->get_dialogue_1();
		int32_t L_8 = __this->get_currentIndex_8();
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_10);
		// }
		return;
	}
}
// System.Void DialogueController::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_NextLine_mF5A3249A665DF9DC75F9850BB7A86E193824AFC5 (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, const RuntimeMethod* method)
{
	{
		// currentIndex++;
		int32_t L_0 = __this->get_currentIndex_8();
		__this->set_currentIndex_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (currentIndex < currentDialogue.dialogue.Length)
		int32_t L_1 = __this->get_currentIndex_8();
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_2 = __this->get_currentDialogue_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2->get_dialogue_1();
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0057;
		}
	}
	{
		// nameUI.text = currentDialogue.npcName;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_nameUI_6();
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_5 = __this->get_currentDialogue_4();
		String_t* L_6 = L_5->get_npcName_0();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// dialogueUI.text = currentDialogue.dialogue[currentIndex];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_dialogueUI_7();
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_8 = __this->get_currentDialogue_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8->get_dialogue_1();
		int32_t L_10 = __this->get_currentIndex_8();
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, L_12);
		// }
		return;
	}

IL_0057:
	{
		// ExitDialogue();
		DialogueController_ExitDialogue_m61C718DAE85FBABF82D70BF697FCB157BF84C4D5(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DialogueController::ExitDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_ExitDialogue_m61C718DAE85FBABF82D70BF697FCB157BF84C4D5 (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// nameUI.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_nameUI_6();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// dialogueUI.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_dialogueUI_7();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// UIParent.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_UIParent_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// currentIndex = 0;
		__this->set_currentIndex_8(0);
		// }
		return;
	}
}
// System.Void DialogueController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController__ctor_m00DD1EEE496B9E0CE145F37CBFF4428DDC6446FB (DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Awake_m087C7DD0CA5FE842BA91E56A21B5F4C9F32FA422 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_8(L_0);
		// cont = FindObjectOfType<GameController>();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1;
		L_1 = Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D(/*hidden argument*/Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		__this->set_cont_13(L_1);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2;
		L_2 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_12(L_2);
		// enemyRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_enemyRigidbody_14(L_3);
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_rend_21(L_4);
		// health = maxHealth;
		float L_5 = __this->get_maxHealth_4();
		__this->set_health_5(L_5);
		// iframe = iframeTime;
		float L_6 = __this->get_iframeTime_9();
		__this->set_iframe_10(L_6);
		// cools = timeBetweenAttacks;
		float L_7 = __this->get_timeBetweenAttacks_15();
		__this->set_cools_16(L_7);
		// }
		return;
	}
}
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mC1ABE2BC43CD0B05455128E0D6FEA2AB2CE1DE0F (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void EnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Update_mDB0B02F4008FD062F471267A67A06169E1BC1B3C (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F11E134141E47D20638E79BD966204FC621121);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (iframe > 0) iframe -= Time.deltaTime;
		float L_0 = __this->get_iframe_10();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (iframe > 0) iframe -= Time.deltaTime;
		float L_1 = __this->get_iframe_10();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_iframe_10(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		// if (cools > 0) cools -= Time.deltaTime;
		float L_3 = __this->get_cools_16();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// if (cools > 0) cools -= Time.deltaTime;
		float L_4 = __this->get_cools_16();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_cools_16(((float)il2cpp_codegen_subtract((float)L_4, (float)L_5)));
	}

IL_003e:
	{
		// switch (currentState)
		int32_t L_6 = __this->get_currentState_11();
		V_0 = L_6;
		int32_t L_7 = V_0;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_005c;
	}

IL_004e:
	{
		// Chase();
		EnemyController_Chase_m2A5BB9BFBB2648A3E26A529827CD6455A8414495(__this, /*hidden argument*/NULL);
		// break;
		goto IL_005c;
	}

IL_0056:
	{
		// Attack();
		EnemyController_Attack_mBD1D4167BFC5075465C9CBED16775C4FFC7FB0DF(__this, /*hidden argument*/NULL);
	}

IL_005c:
	{
		// anim.SetInteger("dir", dir);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_anim_12();
		int32_t L_10 = __this->get_dir_18();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_9, _stringLiteral82F11E134141E47D20638E79BD966204FC621121, L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyController::Chase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Chase_m2A5BB9BFBB2648A3E26A529827CD6455A8414495 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// distance = Vector2.Distance(transform.position, player.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_2, L_6, /*hidden argument*/NULL);
		__this->set_distance_20(L_7);
		// if (player.transform.position.y < transform.position.y)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		if ((!(((float)L_11) < ((float)L_14))))
		{
			goto IL_0087;
		}
	}
	{
		// dir = 0;
		__this->set_dir_18(0);
		// meleeCollider.transform.localPosition = new Vector3(0, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_meleeCollider_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_17), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_17, /*hidden argument*/NULL);
		// }
		goto IL_019c;
	}

IL_0087:
	{
		// else if (player.transform.position.x > transform.position.x)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_18 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_19, /*hidden argument*/NULL);
		float L_21 = L_20.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		if ((!(((float)L_21) > ((float)L_24))))
		{
			goto IL_00ea;
		}
	}
	{
		// rend.flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_25 = __this->get_rend_21();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_25, (bool)0, /*hidden argument*/NULL);
		// dir = 1;
		__this->set_dir_18(1);
		// meleeCollider.transform.localPosition = new Vector3(0.3f, 0.2f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_meleeCollider_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_28), (0.300000012f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_27, L_28, /*hidden argument*/NULL);
		// }
		goto IL_019c;
	}

IL_00ea:
	{
		// else if (player.transform.position.x < transform.position.x)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_29 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_x_2();
		if ((!(((float)L_32) < ((float)L_35))))
		{
			goto IL_014a;
		}
	}
	{
		// rend.flipX = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_36 = __this->get_rend_21();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_36, (bool)1, /*hidden argument*/NULL);
		// dir = 1;
		__this->set_dir_18(1);
		// meleeCollider.transform.localPosition = new Vector3(-0.3f, 0.2f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_meleeCollider_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), (-0.300000012f), (0.200000003f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_38, L_39, /*hidden argument*/NULL);
		// }
		goto IL_019c;
	}

IL_014a:
	{
		// else if (player.transform.position.y > transform.position.y)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_40 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_40, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42;
		L_42 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_41, /*hidden argument*/NULL);
		float L_43 = L_42.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45;
		L_45 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_44, /*hidden argument*/NULL);
		float L_46 = L_45.get_y_3();
		if ((!(((float)L_43) > ((float)L_46))))
		{
			goto IL_019c;
		}
	}
	{
		// dir = 2;
		__this->set_dir_18(2);
		// meleeCollider.transform.localPosition = new Vector3(0, 0.5f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = __this->get_meleeCollider_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_48;
		L_48 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), (0.0f), (0.5f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_48, L_49, /*hidden argument*/NULL);
	}

IL_019c:
	{
		// if (distance > attackRange)
		float L_50 = __this->get_distance_20();
		float L_51 = __this->get_attackRange_19();
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_01f2;
		}
	}
	{
		// Vector3 direction = player.transform.position - transform.position;
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_52 = __this->get_player_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54;
		L_54 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_53, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_55, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_54, L_56, /*hidden argument*/NULL);
		V_0 = L_57;
		// enemyRigidbody.AddForce(direction * speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_58 = __this->get_enemyRigidbody_14();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59 = V_0;
		float L_60 = __this->get_speed_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_59, L_60, /*hidden argument*/NULL);
		float L_62;
		L_62 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		L_63 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_61, L_62, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64;
		L_64 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_63, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_58, L_64, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01f2:
	{
		// if (cools <= 0) currentState = enemystates.attack;
		float L_65 = __this->get_cools_16();
		if ((!(((float)L_65) <= ((float)(0.0f)))))
		{
			goto IL_0206;
		}
	}
	{
		// if (cools <= 0) currentState = enemystates.attack;
		__this->set_currentState_11(1);
	}

IL_0206:
	{
		// }
		return;
	}
}
// System.Void EnemyController::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Attack_mBD1D4167BFC5075465C9CBED16775C4FFC7FB0DF (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("attacking");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_12();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49, /*hidden argument*/NULL);
		// cools = timeBetweenAttacks;
		float L_1 = __this->get_timeBetweenAttacks_15();
		__this->set_cools_16(L_1);
		// currentState = enemystates.chase;
		__this->set_currentState_11(0);
		// }
		return;
	}
}
// System.Void EnemyController::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, float ___amt0, const RuntimeMethod* method)
{
	{
		// if (iframe <= 0)
		float L_0 = __this->get_iframe_10();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// health -= amt;
		float L_1 = __this->get_health_5();
		float L_2 = ___amt0;
		__this->set_health_5(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// iframe = iframeTime;
		float L_3 = __this->get_iframeTime_9();
		__this->set_iframe_10(L_3);
		// if (health <= 0)
		float L_4 = __this->get_health_5();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// Die();
		EnemyController_Die_mF8345A38C1A9EE642AA11FE39D03303836390305(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void EnemyController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Die_mF8345A38C1A9EE642AA11FE39D03303836390305 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// player.AddExp(exp);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_1 = __this->get_player_8();
		float L_2 = __this->get_exp_6();
		PlayerController_AddExp_mE3EE6B84A25BDFD8C153205D99D8D84105B6E221(L_1, L_2, /*hidden argument*/NULL);
		// player.AddMoney(money);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3 = __this->get_player_8();
		int32_t L_4 = __this->get_money_7();
		PlayerController_AddMoney_m2163000937EB3B520ECBB74BCB5049E1CD88AA95(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public float iframeTime = 0.3f;
		__this->set_iframeTime_9((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyMeleeCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMeleeCollider_OnTriggerEnter2D_m996F89CB0D898EEAFFE5F20F5EAE884F9A244156 (EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().Damage(attack);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_5;
		L_5 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_4, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		float L_6 = __this->get_attack_4();
		PlayerController_Damage_mABB89F5C0FA31700D41B118892D57A8A33512FB8(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void EnemyMeleeCollider::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMeleeCollider_OnTriggerStay2D_m4318003A75F45FDD24C24F9F0DA6273AB12959EF (EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// collision.gameObject.GetComponent<PlayerController>().Damage(attack);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_5;
		L_5 = GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8(L_4, /*hidden argument*/GameObject_GetComponent_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m8ED8742627DA9ECE0BCAE630AA9B1953F1924DB8_RuntimeMethod_var);
		float L_6 = __this->get_attack_4();
		PlayerController_Damage_mABB89F5C0FA31700D41B118892D57A8A33512FB8(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void EnemyMeleeCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyMeleeCollider__ctor_m330E2721163593F89D8C35EF635474B87BD00555 (EnemyMeleeCollider_tE31D48E9164F2A5ECA706D829994A13295CF3332 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_mE678A4EEF012294E485A814D37D93231A90B4BEC (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral961244A58B5E45D6194AE818322FD93848580A36);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag("SpawnPoint");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral961244A58B5E45D6194AE818322FD93848580A36, /*hidden argument*/NULL);
		__this->set_spawnPoints_10(L_0);
		// cooldown = timeBetweenSpawns;
		float L_1 = __this->get_timeBetweenSpawns_12();
		__this->set_cooldown_13(L_1);
		// for ( int i = 0; i < chestItems.Count; i++)
		V_0 = 0;
		goto IL_00b8;
	}

IL_0023:
	{
		// switch(chestItems[i].item.itemRarity)
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_2 = __this->get_chestItems_5();
		int32_t L_3 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_4;
		L_4 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = L_4->get_item_4();
		int32_t L_6 = L_5->get_itemRarity_9();
		V_1 = L_6;
		int32_t L_7 = V_1;
		switch (L_7)
		{
			case 0:
			{
				goto IL_009d;
			}
			case 1:
			{
				goto IL_0084;
			}
			case 2:
			{
				goto IL_006b;
			}
			case 3:
			{
				goto IL_0052;
			}
		}
	}
	{
		goto IL_00b4;
	}

IL_0052:
	{
		// commonItems.Add(chestItems[i]);
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_8 = __this->get_commonItems_9();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_9 = __this->get_chestItems_5();
		int32_t L_10 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_11;
		L_11 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E(L_8, L_11, /*hidden argument*/List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var);
		// break;
		goto IL_00b4;
	}

IL_006b:
	{
		// uncommonItems.Add(chestItems[i]);
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_12 = __this->get_uncommonItems_8();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_13 = __this->get_chestItems_5();
		int32_t L_14 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_15;
		L_15 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E(L_12, L_15, /*hidden argument*/List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var);
		// break;
		goto IL_00b4;
	}

IL_0084:
	{
		// rareItems.Add(chestItems[i]);
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_16 = __this->get_rareItems_7();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_17 = __this->get_chestItems_5();
		int32_t L_18 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_19;
		L_19 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E(L_16, L_19, /*hidden argument*/List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var);
		// break;
		goto IL_00b4;
	}

IL_009d:
	{
		// legendaryItems.Add(chestItems[i]);
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_20 = __this->get_legendaryItems_6();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_21 = __this->get_chestItems_5();
		int32_t L_22 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_23;
		L_23 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_21, L_22, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E(L_20, L_23, /*hidden argument*/List_1_Add_m39B29749F21C9DA575D05CB1073120054E44EB4E_RuntimeMethod_var);
	}

IL_00b4:
	{
		// for ( int i = 0; i < chestItems.Count; i++)
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00b8:
	{
		// for ( int i = 0; i < chestItems.Count; i++)
		int32_t L_25 = V_0;
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_26 = __this->get_chestItems_5();
		int32_t L_27;
		L_27 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_26, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0023;
		}
	}
	{
		// spawnPoints = GameObject.FindGameObjectsWithTag("SpawnPoint");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_28;
		L_28 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral961244A58B5E45D6194AE818322FD93848580A36, /*hidden argument*/NULL);
		__this->set_spawnPoints_10(L_28);
		// }
		return;
	}
}
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_mCC3F0292799528323E2217A12DB08D98CDD492AE (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mA76A2CE1F2AC1AACCDBF913CA6E1EA73DC621CD0 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// if (cooldown > 0)
		float L_0 = __this->get_cooldown_13();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// cooldown -= Time.deltaTime;
		float L_1 = __this->get_cooldown_13();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_cooldown_13(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		return;
	}

IL_0020:
	{
		// SpawnEnemy();
		GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject GameController::GetEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameController_GetEnemy_mCECA5C4DE9EA8000E7344EC63FC2A810AA512D08 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < enemies.Count; i++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (!enemies[i].activeInHierarchy)
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_enemies_14();
		int32_t L_1 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		bool L_3;
		L_3 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0024;
		}
	}
	{
		// return enemies[i];
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_enemies_14();
		int32_t L_5 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_RuntimeMethod_var);
		return L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0028:
	{
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_8 = V_1;
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_9 = __this->get_enemies_14();
		int32_t L_10;
		L_10 = List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_inline(L_9, /*hidden argument*/List_1_get_Count_m6206A8F48C7A98B9CFC23A13548CB215717573BD_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// GameObject en = Instantiate(enemy, transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_enemy_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14;
		L_14 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_11, L_13, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_0 = L_15;
		// enemies.Add(en);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_16 = __this->get_enemies_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = V_0;
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_16, L_17, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// en.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = V_0;
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		// return en;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = V_0;
		return L_19;
	}
}
// System.Void GameController::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_SpawnEnemy_mBE7985A65ECDF6BCDAB4A8E525805B0FA829B01A (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// GameObject obj = GetEnemy();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameController_GetEnemy_mCECA5C4DE9EA8000E7344EC63FC2A810AA512D08(__this, /*hidden argument*/NULL);
		// obj.transform.position = spawnPoints[Random.Range(0, spawnPoints.Length)].transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_spawnPoints_10();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_spawnPoints_10();
		int32_t L_5;
		L_5 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_9, /*hidden argument*/NULL);
		// obj.SetActive(true);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// cooldown = timeBetweenSpawns;
		float L_10 = __this->get_timeBetweenSpawns_12();
		__this->set_cooldown_13(L_10);
		// }
		return;
	}
}
// ShopItem GameController::GetRandomItem(System.Collections.Generic.List`1<ShopItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * GameController_GetRandomItem_m3C21FAE09CD0EA1607A871AD61CCFE1E3B3962DF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m73769AEB7989B65D692F62D95C82B08896A99670_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCA60EF87E6C8DF2AF164480BD3AB903D7E605D48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = Random.Range(0, l.Count);
		List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * L_0 = ___l0;
		int32_t L_1;
		L_1 = List_1_get_Count_m73769AEB7989B65D692F62D95C82B08896A99670_inline(L_0, /*hidden argument*/List_1_get_Count_m73769AEB7989B65D692F62D95C82B08896A99670_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// ShopItem item = l[index];
		List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * L_3 = ___l0;
		int32_t L_4 = V_0;
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * L_5;
		L_5 = List_1_get_Item_mCA60EF87E6C8DF2AF164480BD3AB903D7E605D48_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mCA60EF87E6C8DF2AF164480BD3AB903D7E605D48_RuntimeMethod_var);
		// return item;
		return L_5;
	}
}
// ChestItem GameController::GetRandomItem(System.Collections.Generic.List`1<ChestItem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * GameController_GetRandomItem_mA2CFF765AFC298957D66B1DCE6C42993BE8F462D (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * ___l0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = Random.Range(0, l.Count);
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_0 = ___l0;
		int32_t L_1;
		L_1 = List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_inline(L_0, /*hidden argument*/List_1_get_Count_mBDC816D87F1F2209048B85F08012B7607E83523C_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// ChestItem item = l[index];
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_3 = ___l0;
		int32_t L_4 = V_0;
		ChestItem_t7D885FE9068914590D15F1E0C82D25EED2A7296D * L_5;
		L_5 = List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mC1589A5F35BF607AE494983EA4707B5EEEC6F44F_RuntimeMethod_var);
		// return item;
		return L_5;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA52A7F9A44AC77DD80B4FF5CF44D55BA01999160_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ShopItem> shopItems = new List<ShopItem>();
		List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * L_0 = (List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 *)il2cpp_codegen_object_new(List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8_il2cpp_TypeInfo_var);
		List_1__ctor_mA52A7F9A44AC77DD80B4FF5CF44D55BA01999160(L_0, /*hidden argument*/List_1__ctor_mA52A7F9A44AC77DD80B4FF5CF44D55BA01999160_RuntimeMethod_var);
		__this->set_shopItems_4(L_0);
		// public List<ChestItem> chestItems = new List<ChestItem>();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_1 = (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *)il2cpp_codegen_object_new(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3(L_1, /*hidden argument*/List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		__this->set_chestItems_5(L_1);
		// public List<ChestItem> legendaryItems = new List<ChestItem>();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_2 = (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *)il2cpp_codegen_object_new(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3(L_2, /*hidden argument*/List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		__this->set_legendaryItems_6(L_2);
		// public List<ChestItem> rareItems = new List<ChestItem>();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_3 = (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *)il2cpp_codegen_object_new(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3(L_3, /*hidden argument*/List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		__this->set_rareItems_7(L_3);
		// public List<ChestItem> uncommonItems = new List<ChestItem>();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_4 = (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *)il2cpp_codegen_object_new(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3(L_4, /*hidden argument*/List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		__this->set_uncommonItems_8(L_4);
		// public List<ChestItem> commonItems = new List<ChestItem>();
		List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 * L_5 = (List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496 *)il2cpp_codegen_object_new(List_1_tEA6299CAAA6B14CBD35118BEE42AA336053A7496_il2cpp_TypeInfo_var);
		List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3(L_5, /*hidden argument*/List_1__ctor_m2F5FB3ABE8525D1854A35435D000567500A0BBA3_RuntimeMethod_var);
		__this->set_commonItems_9(L_5);
		// public float timeBetweenSpawns = 5f;
		__this->set_timeBetweenSpawns_12((5.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Inventory::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Awake_m2040A4C75E81B9580543F04EFA2364F3F1B9EEE0 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		// nextSlot = iSlot;
		int32_t L_0 = __this->get_iSlot_5();
		__this->set_nextSlot_6(L_0);
		// }
		return;
	}
}
// System.Void Inventory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Update_m638C06C0982F2CF38FA145712F2613AC79B77D2E (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral930264011A3274912877CD076DCB68F2B1EBDB18);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B6_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B7_1 = NULL;
	{
		// if (rotate)
		bool L_0 = __this->get_rotate_7();
		if (!L_0)
		{
			goto IL_0093;
		}
	}
	{
		// Vector3 dir = Input.mousePosition - Camera.main.WorldToScreenPoint(transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_2, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// float angle = Mathf.Atan2(dir.y, dir.x) * Mathf.Rad2Deg;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		float L_10 = L_9.get_x_2();
		float L_11;
		L_11 = atan2f(L_8, L_10);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_11, (float)(57.2957802f)));
		// if (transform.localScale.x != 1)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_x_2();
		if ((((float)L_14) == ((float)(1.0f))))
		{
			goto IL_0062;
		}
	}
	{
		// angle += 180;
		float L_15 = V_1;
		V_1 = ((float)il2cpp_codegen_add((float)L_15, (float)(180.0f)));
	}

IL_0062:
	{
		// transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.AngleAxis(angle, Vector3.forward), Time.deltaTime * 10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_19, L_20, /*hidden argument*/NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_Lerp_mBFA4C4D2574C8140AA840273D3E6565D66F6F261(L_18, L_21, ((float)il2cpp_codegen_multiply((float)L_22, (float)(10.0f))), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_16, L_23, /*hidden argument*/NULL);
	}

IL_0093:
	{
		// transform.localScale = new Vector3(parentRend.flipX? -1:1, 1, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_25 = __this->get_parentRend_8();
		bool L_26;
		L_26 = SpriteRenderer_get_flipX_mCB73CAF5724B925903C9D9805D3F7B8AD0C509F5(L_25, /*hidden argument*/NULL);
		G_B5_0 = L_24;
		if (L_26)
		{
			G_B6_0 = L_24;
			goto IL_00a9;
		}
	}
	{
		G_B7_0 = 1;
		G_B7_1 = G_B5_0;
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B7_0 = (-1);
		G_B7_1 = G_B6_0;
	}

IL_00aa:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_27), ((float)((float)G_B7_0)), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(G_B7_1, L_27, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Z))    // press z to equip the current item
		bool L_28;
		L_28 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)122), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00ed;
		}
	}
	{
		// if (items.Count != 0)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_29 = __this->get_items_4();
		int32_t L_30;
		L_30 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_29, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_00e3;
		}
	}
	{
		// EquipItem(nextSlot);
		int32_t L_31 = __this->get_nextSlot_6();
		Inventory_EquipItem_m11A9004CE668636C12716507C09563E2C10DF92D(__this, L_31, /*hidden argument*/NULL);
		goto IL_00ed;
	}

IL_00e3:
	{
		// Debug.Log("No item in Inventory");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral930264011A3274912877CD076DCB68F2B1EBDB18, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// if (Input.GetKeyDown(KeyCode.X))    // press x to use the equipped item
		bool L_32;
		L_32 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)120), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0132;
		}
	}
	{
		// if (items.Count != 0 && items[iSlot] != null)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_33 = __this->get_items_4();
		int32_t L_34;
		L_34 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_33, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_0132;
		}
	}
	{
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_35 = __this->get_items_4();
		int32_t L_36 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_37;
		L_37 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_35, L_36, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0132;
		}
	}
	{
		// items[iSlot].Use();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_39 = __this->get_items_4();
		int32_t L_40 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_41;
		L_41 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_39, L_40, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		VirtActionInvoker0::Invoke(4 /* System.Void Item::Use() */, L_41);
	}

IL_0132:
	{
		// if (Input.GetKeyDown(KeyCode.C))
		bool L_42;
		L_42 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)99), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_016b;
		}
	}
	{
		// if (items[iSlot] != null)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_43 = __this->get_items_4();
		int32_t L_44 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_45;
		L_45 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_43, L_44, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_016b;
		}
	}
	{
		// RemoveItem(items[iSlot]);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_47 = __this->get_items_4();
		int32_t L_48 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_49;
		L_49 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_47, L_48, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		Inventory_RemoveItem_m6519ED53569AB67F8929F4A282C42E39F39B8236(__this, L_49, /*hidden argument*/NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void Inventory::AddItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_AddItem_m5E3DC6A8F5D61109B551111CB7B89FF759E8F13A (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m11585BA7F9E83F69ADC0D3634FAAEDD2C6DB8175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * V_0 = NULL;
	{
		// Item newItem = Instantiate(item);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_0 = ___item0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1;
		L_1 = Object_Instantiate_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m11585BA7F9E83F69ADC0D3634FAAEDD2C6DB8175(L_0, /*hidden argument*/Object_Instantiate_TisItem_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C_m11585BA7F9E83F69ADC0D3634FAAEDD2C6DB8175_RuntimeMethod_var);
		V_0 = L_1;
		// newItem.transform.SetParent(transform);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_3, L_4, /*hidden argument*/NULL);
		// newItem.transform.localPosition = Vector3.zero;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_6, L_7, /*hidden argument*/NULL);
		// newItem.transform.localRotation = Quaternion.identity;
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_9, L_10, /*hidden argument*/NULL);
		// newItem.transform.localScale = new Vector3(1, 1, 1);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_11 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_13), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_12, L_13, /*hidden argument*/NULL);
		// items.Add(newItem);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_14 = __this->get_items_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_15 = V_0;
		List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D(L_14, L_15, /*hidden argument*/List_1_Add_m17382E73E27D945DEC6B9BD38A447B638D0D7C0D_RuntimeMethod_var);
		// newItem.gameObject.SetActive(false);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_16 = V_0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Inventory::EquipItem(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_EquipItem_m11A9004CE668636C12716507C09563E2C10DF92D (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, int32_t ___slot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (items.Count != 0)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_0 = __this->get_items_4();
		int32_t L_1;
		L_1 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_0, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_00bc;
		}
	}
	{
		// items[iSlot % items.Count].gameObject.SetActive(false);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_2 = __this->get_items_4();
		int32_t L_3 = __this->get_iSlot_5();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_4 = __this->get_items_4();
		int32_t L_5;
		L_5 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_4, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_6;
		L_6 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_2, ((int32_t)((int32_t)L_3%(int32_t)L_5)), /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// iSlot = slot % items.Count;
		int32_t L_8 = ___slot0;
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_9 = __this->get_items_4();
		int32_t L_10;
		L_10 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_9, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		__this->set_iSlot_5(((int32_t)((int32_t)L_8%(int32_t)L_10)));
		// items[iSlot].gameObject.SetActive(true);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_11 = __this->get_items_4();
		int32_t L_12 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_13;
		L_13 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_16;
		L_16 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_15, L_16, /*hidden argument*/NULL);
		// rotate = items[iSlot].rotate;
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_17 = __this->get_items_4();
		int32_t L_18 = __this->get_iSlot_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_19;
		L_19 = List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_inline(L_17, L_18, /*hidden argument*/List_1_get_Item_mF132E1A0C2CC6DD4CA89DBE3493C69CB4E94BCAD_RuntimeMethod_var);
		bool L_20 = L_19->get_rotate_7();
		__this->set_rotate_7(L_20);
		// nextSlot = (iSlot + 1) % items.Count;
		int32_t L_21 = __this->get_iSlot_5();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_22 = __this->get_items_4();
		int32_t L_23;
		L_23 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_22, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		__this->set_nextSlot_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1))%(int32_t)L_23)));
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Inventory::RemoveItem(Item)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_RemoveItem_m6519ED53569AB67F8929F4A282C42E39F39B8236 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * ___item0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (items.Count != 0)
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_0 = __this->get_items_4();
		int32_t L_1;
		L_1 = List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_inline(L_0, /*hidden argument*/List_1_get_Count_mADDA621D2E95A713E42B7CC5C32DEB26F6107763_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// items.Remove(item);
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_2 = __this->get_items_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = ___item0;
		bool L_4;
		L_4 = List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11(L_2, L_3, /*hidden argument*/List_1_Remove_m822464A408DB63746E72190B3527E4283A6B3E11_RuntimeMethod_var);
		// item.gameObject.SetActive(false);
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = ___item0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mF2ACBF005FF40F23F68AE8E9E416A4870EC4B27C (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Item> items = new List<Item>();
		List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 * L_0 = (List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657 *)il2cpp_codegen_object_new(List_1_t256B29F1077D2ECA15751FDB5DCBFC07B6536657_il2cpp_TypeInfo_var);
		List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4(L_0, /*hidden argument*/List_1__ctor_m6D4334AF3C7C3FD8F6D2CAA35357F341CC13EAA4_RuntimeMethod_var);
		__this->set_items_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Item::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Awake_m5A258A100673BF7CAF84642D8F8CD3711279AE6A (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = FindObjectOfType<Inventory>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0;
		L_0 = Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E(/*hidden argument*/Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		__this->set_inventory_11(L_0);
		// itemRend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_itemRend_12(L_1);
		// itemRend.sprite = itemSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_itemRend_12();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_itemSprite_10();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F83721532357DB6ADE3EE7DFE77897A86F9848D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("base use");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0F83721532357DB6ADE3EE7DFE77897A86F9848D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item_Remove_m28F2CBE8D00ACB39B30E554CAD092A7655E8D76F (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B4619B42D50494E6FBABEAFEAA9F021D8A7955B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("base remove");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral5B4619B42D50494E6FBABEAFEAA9F021D8A7955B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Item::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147 (Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MeleeWeapon::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeWeapon_Use_m7EA9426363EFA1D74B76E72225206C62D4DB7B22 (MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mD15D166F5C3F08236BF8CEAE66D5BCEFFA0B6114_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral901B8EFAC94050E53E2DF4747CABD71B8AE8A558);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBDE5DEC217CAFD87131BFB3386A40F04B72A8F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Use();
		Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2(__this, /*hidden argument*/NULL);
		// Debug.Log("Use MeleeWeapon");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralEBDE5DEC217CAFD87131BFB3386A40F04B72A8F7, /*hidden argument*/NULL);
		// FindObjectOfType<Animator>().SetTrigger("strike");
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Object_FindObjectOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mD15D166F5C3F08236BF8CEAE66D5BCEFFA0B6114(/*hidden argument*/Object_FindObjectOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mD15D166F5C3F08236BF8CEAE66D5BCEFFA0B6114_RuntimeMethod_var);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_0, _stringLiteral901B8EFAC94050E53E2DF4747CABD71B8AE8A558, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MeleeWeapon::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeWeapon_Remove_m85D255592171CE44310AFCCECB90098931B04BB5 (MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13B53BF6C0A685719F46C721345A10A84CDC882A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Remove();
		Item_Remove_m28F2CBE8D00ACB39B30E554CAD092A7655E8D76F(__this, /*hidden argument*/NULL);
		// Debug.Log("Remove MeleeWeapon");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral13B53BF6C0A685719F46C721345A10A84CDC882A, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MeleeWeapon::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeWeapon_OnTriggerEnter2D_mBCEF81E7D016580DFC9E98194B6F64DD731EBDA0 (MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A705A912E7C3D5A85F35B92062F452FB4BC0909);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// Debug.Log("Sword hit an enemy");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8A705A912E7C3D5A85F35B92062F452FB4BC0909, /*hidden argument*/NULL);
		// collision.gameObject.GetComponent<EnemyController>().Damage(amount);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * L_5;
		L_5 = GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		float L_6 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)__this)->get_amount_8();
		EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342(L_5, L_6, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void MeleeWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeWeapon__ctor_mABBAB7E90A6D26201CA9724BA3DEA14247874DF0 (MeleeWeapon_t99F6945A2526CC179DF2F531CF5A0B88050684B5 * __this, const RuntimeMethod* method)
{
	{
		Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147(__this, /*hidden argument*/NULL);
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
// System.Void NPCController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController_Awake_mC78684B1239B3DB868366F0D7D61401E33C5101A (NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisDialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000_m8F1082E1C70C0C48EB4319FB4A904DAC91E02848_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dialogueController = FindObjectOfType<DialogueController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * L_0;
		L_0 = Object_FindObjectOfType_TisDialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000_m8F1082E1C70C0C48EB4319FB4A904DAC91E02848(/*hidden argument*/Object_FindObjectOfType_TisDialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000_m8F1082E1C70C0C48EB4319FB4A904DAC91E02848_RuntimeMethod_var);
		__this->set_dialogueController_4(L_0);
		// }
		return;
	}
}
// System.Void NPCController::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController_OnMouseDown_m66DEBB3BBCC0FE9AE89BC1EC9BDC73B360CAFA6D (NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1 * __this, const RuntimeMethod* method)
{
	{
		// dialogueController.StartDialogue(dialogues[currentDial]);
		DialogueController_t842A9EC321F5301C5139A04C848B1B60BECF0000 * L_0 = __this->get_dialogueController_4();
		DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD* L_1 = __this->get_dialogues_5();
		int32_t L_2 = __this->get_currentDial_6();
		int32_t L_3 = L_2;
		Dialogue_tA1C94EA0CB09E76D320538CBB50740460F5D15F3 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		DialogueController_StartDialogue_m146B5A1C3DE13F95F3D5F2F282A6B583D61E43AB(L_0, L_4, /*hidden argument*/NULL);
		// currentDial = (currentDial + 1) % dialogues.Length;
		int32_t L_5 = __this->get_currentDial_6();
		DialogueU5BU5D_t630E3E72C039725E4577C8A1A3ADFFF4516AC5AD* L_6 = __this->get_dialogues_5();
		__this->set_currentDial_6(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1))%(int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))));
		// }
		return;
	}
}
// System.Void NPCController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NPCController__ctor_mA7F58AC0C72103FE8578AD810E506AB67EB8455E (NPCController_t77918B24A938A628759AFC26CFF28E558CBAE6E1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m23059564DCFDD324EA9DB966473251896647CD23 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// gameOver = false;
		__this->set_gameOver_26((bool)0);
		// Time.timeScale = 1f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// playerRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_playerRigidbody_4(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_7(L_1);
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_rend_8(L_2);
		// health = maxHealth;
		float L_3 = __this->get_maxHealth_11();
		__this->set_health_12(L_3);
		// money = maxMoney;
		int32_t L_4 = __this->get_maxMoney_13();
		__this->set_money_14(L_4);
		// expToNext = CalculateExp(level);
		int32_t L_5 = __this->get_level_16();
		float L_6;
		L_6 = PlayerController_CalculateExp_mCA4EF029908F2EFBFA3561E0F696F481CE6D613F(__this, L_5, /*hidden argument*/NULL);
		__this->set_expToNext_18(L_6);
		// for(int i = 1; i <= 30; i++)
		V_0 = 1;
		goto IL_007c;
	}

IL_0063:
	{
		// expCurve.AddKey(i, CalculateExp(i));
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = __this->get_expCurve_19();
		int32_t L_8 = V_0;
		int32_t L_9 = V_0;
		float L_10;
		L_10 = PlayerController_CalculateExp_mCA4EF029908F2EFBFA3561E0F696F481CE6D613F(__this, L_9, /*hidden argument*/NULL);
		int32_t L_11;
		L_11 = AnimationCurve_AddKey_m159FB7119B6BBCD11DDEBCC3ECB782DEBF0FD5C7(L_7, ((float)((float)L_8)), L_10, /*hidden argument*/NULL);
		// for(int i = 1; i <= 30; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_007c:
	{
		// for(int i = 1; i <= 30; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)30))))
		{
			goto IL_0063;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82F11E134141E47D20638E79BD966204FC621121);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE3AFEF9A57E93941702635B6DE894C4E05E180B);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B4_0 = NULL;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B5_1 = NULL;
	{
		// if (iframe > 0) iframe -= Time.deltaTime;
		float L_0 = __this->get_iframe_24();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (iframe > 0) iframe -= Time.deltaTime;
		float L_1 = __this->get_iframe_24();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_iframe_24(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
	}

IL_001f:
	{
		// input = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		float L_4;
		L_4 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		__this->set_input_5(L_5);
		// playerRigidbody.AddForce(input * speed * Time.deltaTime);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6 = __this->get_playerRigidbody_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = __this->get_input_5();
		float L_8 = __this->get_speed_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		L_9 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_7, L_8, /*hidden argument*/NULL);
		float L_10;
		L_10 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11;
		L_11 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_9, L_10, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_6, L_11, /*hidden argument*/NULL);
		// moving = (input.x != 0 || input.y != 0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_12 = __this->get_address_of_input_5();
		float L_13 = L_12->get_x_0();
		G_B3_0 = __this;
		if ((!(((float)L_13) == ((float)(0.0f)))))
		{
			G_B4_0 = __this;
			goto IL_008e;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_14 = __this->get_address_of_input_5();
		float L_15 = L_14->get_y_1();
		G_B5_0 = ((((int32_t)((((float)L_15) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_008f;
	}

IL_008e:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_008f:
	{
		G_B5_1->set_moving_10((bool)G_B5_0);
		// if (input.y < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_16 = __this->get_address_of_input_5();
		float L_17 = L_16->get_y_1();
		if ((!(((float)L_17) < ((float)(0.0f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// lookDir = 0;
		__this->set_lookDir_9(0);
		// meleeCollider.transform.localPosition = new Vector3(0, -0.3f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_meleeCollider_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_20), (0.0f), (-0.300000012f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_19, L_20, /*hidden argument*/NULL);
		// }
		goto IL_01ac;
	}

IL_00d6:
	{
		// else if (input.x > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_21 = __this->get_address_of_input_5();
		float L_22 = L_21->get_x_0();
		if ((!(((float)L_22) > ((float)(0.0f)))))
		{
			goto IL_0124;
		}
	}
	{
		// rend.flipX = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_23 = __this->get_rend_8();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_23, (bool)0, /*hidden argument*/NULL);
		// lookDir = 1;
		__this->set_lookDir_9(1);
		// meleeCollider.transform.localPosition = new Vector3(0.3f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_meleeCollider_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_26), (0.300000012f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_25, L_26, /*hidden argument*/NULL);
		// }
		goto IL_01ac;
	}

IL_0124:
	{
		// else if (input.x < 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_27 = __this->get_address_of_input_5();
		float L_28 = L_27->get_x_0();
		if ((!(((float)L_28) < ((float)(0.0f)))))
		{
			goto IL_016f;
		}
	}
	{
		// rend.flipX = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_29 = __this->get_rend_8();
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_29, (bool)1, /*hidden argument*/NULL);
		// lookDir = 1;
		__this->set_lookDir_9(1);
		// meleeCollider.transform.localPosition = new Vector3(-0.3f, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_meleeCollider_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_32), (-0.300000012f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_31, L_32, /*hidden argument*/NULL);
		// }
		goto IL_01ac;
	}

IL_016f:
	{
		// else if (input.y > 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_33 = __this->get_address_of_input_5();
		float L_34 = L_33->get_y_1();
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_01ac;
		}
	}
	{
		// lookDir = 2;
		__this->set_lookDir_9(2);
		// meleeCollider.transform.localPosition = new Vector3(0, 0.3f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_meleeCollider_25();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), (0.0f), (0.300000012f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_36, L_37, /*hidden argument*/NULL);
	}

IL_01ac:
	{
		// anim.SetInteger("dir", lookDir);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_38 = __this->get_anim_7();
		int32_t L_39 = __this->get_lookDir_9();
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_38, _stringLiteral82F11E134141E47D20638E79BD966204FC621121, L_39, /*hidden argument*/NULL);
		// anim.SetBool("moving", moving);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_40 = __this->get_anim_7();
		bool L_41 = __this->get_moving_10();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_40, _stringLiteralC8E73DC4EDC0AEBC71ACEDC10E8B5EF7D26C8764, L_41, /*hidden argument*/NULL);
		// if (Input.GetKeyDown(KeyCode.Space))
		bool L_42;
		L_42 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)32), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01e7;
		}
	}
	{
		// SwingAttack();
		PlayerController_SwingAttack_m95E8A1E73F3FC8BB5E41E8700D097DA26E73D29C(__this, /*hidden argument*/NULL);
	}

IL_01e7:
	{
		// if (Application.isEditor)
		bool L_43;
		L_43 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0216;
		}
	}
	{
		// if(Input.GetKeyDown(KeyCode.L))
		bool L_44;
		L_44 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)108), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0202;
		}
	}
	{
		// Damage(5f);
		PlayerController_Damage_mABB89F5C0FA31700D41B118892D57A8A33512FB8(__this, (5.0f), /*hidden argument*/NULL);
	}

IL_0202:
	{
		// if(Input.GetKeyDown(KeyCode.J))
		bool L_45;
		L_45 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)106), /*hidden argument*/NULL);
		if (!L_45)
		{
			goto IL_0216;
		}
	}
	{
		// AddExp(20f);
		PlayerController_AddExp_mE3EE6B84A25BDFD8C153205D99D8D84105B6E221(__this, (20.0f), /*hidden argument*/NULL);
	}

IL_0216:
	{
		// healthUI.fillAmount = health / maxHealth;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_46 = __this->get_healthUI_20();
		float L_47 = __this->get_health_12();
		float L_48 = __this->get_maxHealth_11();
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_46, ((float)((float)L_47/(float)L_48)), /*hidden argument*/NULL);
		// moneyText.text = "Coins: " + money.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_49 = __this->get_moneyText_21();
		int32_t* L_50 = __this->get_address_of_money_14();
		String_t* L_51;
		L_51 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_50, /*hidden argument*/NULL);
		String_t* L_52;
		L_52 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralD949CFCC149B19BB1FD26DD619A194C93CFC026A, L_51, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_52);
		// expText.text = "Level: " + level.ToString() + " Exp: " + experience.ToString() + "/" + expToNext.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_53 = __this->get_expText_22();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_54 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_54;
		ArrayElementTypeCheck (L_55, _stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4975196A6F53C6F86AFA9BBCFB514F4A4416ADC);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_56 = L_55;
		int32_t* L_57 = __this->get_address_of_level_16();
		String_t* L_58;
		L_58 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_57, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_56, L_58);
		(L_56)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_58);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_59 = L_56;
		ArrayElementTypeCheck (L_59, _stringLiteralFE3AFEF9A57E93941702635B6DE894C4E05E180B);
		(L_59)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFE3AFEF9A57E93941702635B6DE894C4E05E180B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = L_59;
		float* L_61 = __this->get_address_of_experience_17();
		String_t* L_62;
		L_62 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_61, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_60, L_62);
		(L_60)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_62);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = L_60;
		ArrayElementTypeCheck (L_63, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_63;
		float* L_65 = __this->get_address_of_expToNext_18();
		String_t* L_66;
		L_66 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_65, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_66);
		String_t* L_67;
		L_67 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_64, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, L_67);
		// if (gameOver && Input.anyKeyDown)
		bool L_68 = __this->get_gameOver_26();
		if (!L_68)
		{
			goto IL_02d1;
		}
	}
	{
		bool L_69;
		L_69 = Input_get_anyKeyDown_m0E5B02352AC40A25BBE31F4532764279D5AF03A5(/*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_02d1;
		}
	}
	{
		// Debug.Log("GameOver");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC62B61BC27E509D700023566A09D2AE606BE85A7, /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_70;
		L_70 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_70;
		String_t* L_71;
		L_71 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_71, /*hidden argument*/NULL);
	}

IL_02d1:
	{
		// }
		return;
	}
}
// System.Void PlayerController::SwingAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_SwingAttack_m95E8A1E73F3FC8BB5E41E8700D097DA26E73D29C (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("attacking", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_7();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49, (bool)1, /*hidden argument*/NULL);
		// Invoke("ResetAttack", 0.1f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral39B40D41792F29F7CD36E6C1B1304273CD84F988, (0.100000001f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::ResetAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ResetAttack_m714650C46EB4A2A3952A8CDD0EC4302B74887019 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetBool("attacking", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_anim_7();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_0, _stringLiteral875AAE6D72D339456A9D9247C47882FA3A360E49, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Heal(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Heal_m061094BDB34A9AFD7CBFAA2A84A881ACF15535C6 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method)
{
	{
		// health += amt;
		float L_0 = __this->get_health_12();
		float L_1 = ___amt0;
		__this->set_health_12(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (health > maxHealth) health = maxHealth;
		float L_2 = __this->get_health_12();
		float L_3 = __this->get_maxHealth_11();
		if ((!(((float)L_2) > ((float)L_3))))
		{
			goto IL_0028;
		}
	}
	{
		// if (health > maxHealth) health = maxHealth;
		float L_4 = __this->get_maxHealth_11();
		__this->set_health_12(L_4);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Damage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Damage_mABB89F5C0FA31700D41B118892D57A8A33512FB8 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method)
{
	{
		// if (iframe <= 0)
		float L_0 = __this->get_iframe_24();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// health -= amt;
		float L_1 = __this->get_health_12();
		float L_2 = ___amt0;
		__this->set_health_12(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// iframe = iframeTime;
		float L_3 = __this->get_iframeTime_23();
		__this->set_iframe_24(L_3);
		// if (health <= 0) Die();
		float L_4 = __this->get_health_12();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_003a;
		}
	}
	{
		// if (health <= 0) Die();
		PlayerController_Die_m2A44CB9CC6A92B0963A0F5D3FA8B6A95F46EA533(__this, /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void PlayerController::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Die_m2A44CB9CC6A92B0963A0F5D3FA8B6A95F46EA533 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// GameOver();
		PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_GameOver_m5F5B93715E520F34882F6C4E346BFD880A3AD19D (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// gameOver = true;
		__this->set_gameOver_26((bool)1);
		// gameOverUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameOverUI_27();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerController::AddMoney(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddMoney_m2163000937EB3B520ECBB74BCB5049E1CD88AA95 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___amt0, const RuntimeMethod* method)
{
	{
		// money += amt;
		int32_t L_0 = __this->get_money_14();
		int32_t L_1 = ___amt0;
		__this->set_money_14(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// }
		return;
	}
}
// System.Single PlayerController::CalculateExp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerController_CalculateExp_mCA4EF029908F2EFBFA3561E0F696F481CE6D613F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		// expNeeded = level * 100f;
		int32_t L_0 = ___level0;
		// return expNeeded;
		return ((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)(100.0f)));
	}
}
// System.Void PlayerController::AddExp(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AddExp_mE3EE6B84A25BDFD8C153205D99D8D84105B6E221 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, float ___amt0, const RuntimeMethod* method)
{
	{
		// experience += amt;
		float L_0 = __this->get_experience_17();
		float L_1 = ___amt0;
		__this->set_experience_17(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (experience >= expToNext)
		float L_2 = __this->get_experience_17();
		float L_3 = __this->get_expToNext_18();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		// LevelUp();
		PlayerController_LevelUp_m2FD1B9AE5A7D9DB7D3E960F2E133160E3B68D4AF(__this, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void PlayerController::LevelUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_LevelUp_m2FD1B9AE5A7D9DB7D3E960F2E133160E3B68D4AF (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	{
		// level++;
		int32_t L_0 = __this->get_level_16();
		__this->set_level_16(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// experience -= expToNext;
		float L_1 = __this->get_experience_17();
		float L_2 = __this->get_expToNext_18();
		__this->set_experience_17(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// attack += 5f;
		float L_3 = __this->get_attack_15();
		__this->set_attack_15(((float)il2cpp_codegen_add((float)L_3, (float)(5.0f))));
		// speed += 50f;
		float L_4 = __this->get_speed_6();
		__this->set_speed_6(((float)il2cpp_codegen_add((float)L_4, (float)(50.0f))));
		// Heal(maxHealth);
		float L_5 = __this->get_maxHealth_11();
		PlayerController_Heal_m061094BDB34A9AFD7CBFAA2A84A881ACF15535C6(__this, L_5, /*hidden argument*/NULL);
		// expToNext = CalculateExp(level);
		int32_t L_6 = __this->get_level_16();
		float L_7;
		L_7 = PlayerController_CalculateExp_mCA4EF029908F2EFBFA3561E0F696F481CE6D613F(__this, L_6, /*hidden argument*/NULL);
		__this->set_expToNext_18(L_7);
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int level = 1;
		__this->set_level_16(1);
		// public AnimationCurve expCurve = new AnimationCurve();
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_0 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_m68D6F819242C539EC522FEAFFEB6F1579767043E(L_0, /*hidden argument*/NULL);
		__this->set_expCurve_19(L_0);
		// public float iframeTime = 0.8f;
		__this->set_iframeTime_23((0.800000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMeleeCollider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMeleeCollider_Awake_mF688A3D3E3F101B97D72656D2EAD4F42D5B7360B (PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_5(L_0);
		// }
		return;
	}
}
// System.Void PlayerMeleeCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMeleeCollider_OnTriggerEnter2D_m1703691C785BA4009866909CB8B9F6A23DF5ECC3 (PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// collision.gameObject.GetComponent<EnemyController>().Damage(player.attack);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * L_5;
		L_5 = GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = __this->get_player_5();
		float L_7 = L_6->get_attack_15();
		EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void PlayerMeleeCollider::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMeleeCollider_OnTriggerStay2D_m87C2407618EF3F5EF7C065DC5D3B9959D48EE2EE (PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// collision.gameObject.GetComponent<EnemyController>().Damage(player.attack);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * L_5;
		L_5 = GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_6 = __this->get_player_5();
		float L_7 = L_6->get_attack_15();
		EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342(L_5, L_7, /*hidden argument*/NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void PlayerMeleeCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMeleeCollider__ctor_m017E4CA00274E883A2D0DE845D3E1B80D7C3174C (PlayerMeleeCollider_tE423144EE51995953BCC103A8BC5E8BA75E73CB2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Projectile::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Awake_m4ED9387212020F3D7411C2947E02802536106072 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisRangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E_m4AE98820494A75575B975BE6030BE383A8F5422E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bulletRigidbody = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_bulletRigidbody_5(L_0);
		// colt = FindObjectOfType<RangedWeapon>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * L_1;
		L_1 = Object_FindObjectOfType_TisRangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E_m4AE98820494A75575B975BE6030BE383A8F5422E(/*hidden argument*/Object_FindObjectOfType_TisRangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E_m4AE98820494A75575B975BE6030BE383A8F5422E_RuntimeMethod_var);
		__this->set_colt_6(L_1);
		// }
		return;
	}
}
// System.Void Projectile::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnEnable_m75871572C7D961EFD94323C35A328D8A19EAB105 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bulletRigidbody.AddForce(transform.up * speed);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_bulletRigidbody_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_up_mAB753D250A30C78924D5D22B0821F1D254525C31(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_0, L_5, /*hidden argument*/NULL);
		// Invoke("Disable", 4f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (4.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Disable_m53DB84DCF1068BFCF5D167E74FB051C719AEF78A (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_Update_m382C5B499BD4599FE34A04DA3DA0701077C710B2 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Projectile::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnTriggerEnter2D_m555D86B29742738A756C391F8806270B8CEB1E80 (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("Enemy"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// collision.gameObject.GetComponent<EnemyController>().Damage(colt.amount);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_3 = ___collision0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * L_5;
		L_5 = GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB(L_4, /*hidden argument*/GameObject_GetComponent_TisEnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_mDE008A33B2BC27476302E088DBCF927CCBB5EBBB_RuntimeMethod_var);
		RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * L_6 = __this->get_colt_6();
		float L_7 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)L_6)->get_amount_8();
		EnemyController_Damage_m81CDD38D764F90B4E775417B274F51D7C42AD342(L_5, L_7, /*hidden argument*/NULL);
		// Invoke("Disable", 0.001f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralECAC9756AB416770CE66B9411AB7AEB8B8181309, (0.00100000005f), /*hidden argument*/NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Projectile::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile_OnDisable_m0D019A7E0503697A4891AB53D2971BEF6E44CB0D (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Projectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Projectile__ctor_m22DAC83BA9B394316027755FD2ADFCA806EE39BB (Projectile_t8BAB3D47786918922F97CC7FADEB6146D6E31B9F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RangedWeapon::Use()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangedWeapon_Use_m85888FF7C02FEACB114ECDA74ADA42F28327081E (RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Use();
		Item_Use_m5997F50DDBA73069DDFC93B2AF076EAFC2A2C1C2(__this, /*hidden argument*/NULL);
		// if (inventory.transform.localScale.x == 1)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_0 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)__this)->get_inventory_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		if ((!(((float)L_3) == ((float)(1.0f)))))
		{
			goto IL_005d;
		}
	}
	{
		// Instantiate(projectile, transform.position, transform.rotation * Quaternion.Euler(0, 0, -90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_projectile_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_4, L_6, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_005d:
	{
		// if (inventory.transform.localScale.x == -1)
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_12 = ((Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C *)__this)->get_inventory_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_x_2();
		if ((!(((float)L_15) == ((float)(-1.0f)))))
		{
			goto IL_00b4;
		}
	}
	{
		// Instantiate(projectile, transform.position, transform.rotation * Quaternion.Euler(0, 0, 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_projectile_13();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_17, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_20;
		L_20 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_19, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_21;
		L_21 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
		L_22 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_16, L_18, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void RangedWeapon::Remove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangedWeapon_Remove_m2B1657FD6E9FB907A59818C34E64D4E41FAA0DE1 (RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3A79AF490FB8E957E0644DF7EDCC2A1F9A32FE5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Remove();
		Item_Remove_m28F2CBE8D00ACB39B30E554CAD092A7655E8D76F(__this, /*hidden argument*/NULL);
		// Debug.Log("Remove RangedWeapon");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF3A79AF490FB8E957E0644DF7EDCC2A1F9A32FE5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RangedWeapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangedWeapon__ctor_m4030C1AAB709D26CD2D1B7934F19D6F24DB31929 (RangedWeapon_t27F6DDB269A130E42E2A3C9BA87BC217C781A04E * __this, const RuntimeMethod* method)
{
	{
		Item__ctor_m51C5ECE57526347477E1E2A4CF519CF555BC8147(__this, /*hidden argument*/NULL);
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
// System.Void Shop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Awake_m1E78134107BE400B4F77E7298F72C771A6828635 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_7(L_0);
		// cont = FindObjectOfType<GameController>();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1;
		L_1 = Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D(/*hidden argument*/Object_FindObjectOfType_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_mCBE129B396568B632923B0B88AF7ADDD9E69A69D_RuntimeMethod_var);
		__this->set_cont_8(L_1);
		// PopulateShop();
		Shop_PopulateShop_m9AE78715530E91EB18E486ED637D7B2E0F2A659F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_Update_m0BAB0F4160017513DD4CFDA2FEE96BFE06358DB0 (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		// distance = Vector2.Distance(transform.position, player.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_3 = __this->get_player_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_3, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Vector2_Distance_m7DFAD110E57AF0E903DDC47BDBD99D1CC62EA03F(L_2, L_6, /*hidden argument*/NULL);
		__this->set_distance_5(L_7);
		// if (distance <= interactDistance)
		float L_8 = __this->get_distance_5();
		float L_9 = __this->get_interactDistance_4();
		if ((!(((float)L_8) <= ((float)L_9))))
		{
			goto IL_004b;
		}
	}
	{
		// shopParent.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_shopParent_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_004b:
	{
		// shopParent.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_shopParent_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Shop::PopulateShop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop_PopulateShop_m9AE78715530E91EB18E486ED637D7B2E0F2A659F (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_m945070CA9355D05CB3CCD058D67E7F69B19324B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0058;
	}

IL_0004:
	{
		// shopItem = Instantiate(cont.GetRandomItem(cont.shopItems));
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_0 = __this->get_cont_8();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1 = __this->get_cont_8();
		List_1_t3A98E2CCA58F55A65C5F19E164DE6E1A360758F8 * L_2 = L_1->get_shopItems_4();
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * L_3;
		L_3 = GameController_GetRandomItem_m3C21FAE09CD0EA1607A871AD61CCFE1E3B3962DF(L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * L_4;
		L_4 = Object_Instantiate_TisShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_m945070CA9355D05CB3CCD058D67E7F69B19324B1(L_3, /*hidden argument*/Object_Instantiate_TisShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101_m945070CA9355D05CB3CCD058D67E7F69B19324B1_RuntimeMethod_var);
		// shopItem.transform.SetParent(shopParent.transform);
		ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * L_5 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_shopParent_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_7, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_6, L_8, /*hidden argument*/NULL);
		// shopItem.transform.localPosition = new Vector3((i * 2) -2, 0, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		memset((&L_11), 0, sizeof(L_11));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_11), ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)), (int32_t)2)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_11, /*hidden argument*/NULL);
		// for (int i = 0; i < 3; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0058:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)3)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Shop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shop__ctor_m9321F06993F85B2AE2C6F4E443276AC9D48E738C (Shop_t6EDF0EB7925EB85AAD19AFDF960631CE822318A6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ShopItem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem_Start_m2E82D6E31BB1856AB7C6B21DA30DAC2F520E4666 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<PlayerController>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0;
		L_0 = Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C(/*hidden argument*/Object_FindObjectOfType_TisPlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_m103DCCD6402CE2D0754386B1727F93700DA6175C_RuntimeMethod_var);
		__this->set_player_5(L_0);
		// inventory  = FindObjectOfType<Inventory>();
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1;
		L_1 = Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E(/*hidden argument*/Object_FindObjectOfType_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m99714528A214CD186FA969CED72EDC8C0910D79E_RuntimeMethod_var);
		__this->set_inventory_6(L_1);
		// rend = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m7224DFA0D29BF2205FEA6E432D9BCB4133F6E491_RuntimeMethod_var);
		__this->set_rend_7(L_2);
		// itemText = GetComponentInChildren<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(__this, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		__this->set_itemText_8(L_3);
		// rend.sprite = item.itemSprite;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_4 = __this->get_rend_7();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = __this->get_item_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = L_5->get_itemSprite_10();
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItem::BuyItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem_BuyItem_m1D7C64B7A3D00309B75E475815CF07F80E9D00A3 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (player.money >= item.itemCost)
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_0 = __this->get_player_5();
		int32_t L_1 = L_0->get_money_14();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_2 = __this->get_item_4();
		int32_t L_3 = L_2->get_itemCost_6();
		if ((((int32_t)L_1) < ((int32_t)L_3)))
		{
			goto IL_004b;
		}
	}
	{
		// player.AddMoney(-item.itemCost);
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_4 = __this->get_player_5();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_5 = __this->get_item_4();
		int32_t L_6 = L_5->get_itemCost_6();
		PlayerController_AddMoney_m2163000937EB3B520ECBB74BCB5049E1CD88AA95(L_4, ((-L_6)), /*hidden argument*/NULL);
		// inventory.AddItem(item);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_7 = __this->get_inventory_6();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_8 = __this->get_item_4();
		Inventory_AddItem_m5E3DC6A8F5D61109B551111CB7B89FF759E8F13A(L_7, L_8, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void ShopItem::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem_OnMouseDown_mFBDC30B9F156CFCB66E306377863F48F8858AC67 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	{
		// BuyItem();
		ShopItem_BuyItem_m1D7C64B7A3D00309B75E475815CF07F80E9D00A3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ShopItem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem_Update_mABA1CC46464261AEFCB321BA82D66A7DFB66A996 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B2_0 = NULL;
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B1_0 = NULL;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * G_B3_1 = NULL;
	{
		// itemText.text = item.itemName + "\n" +item.itemCost;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_itemText_8();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_1 = __this->get_item_4();
		String_t* L_2 = L_1->get_itemName_4();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_3 = __this->get_item_4();
		int32_t* L_4 = L_3->get_address_of_itemCost_6();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_4, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_5, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_6);
		// itemText.color = player.money > item.itemCost? Color.green: Color.red;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = __this->get_itemText_8();
		PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * L_8 = __this->get_player_5();
		int32_t L_9 = L_8->get_money_14();
		Item_t834A68C039C5C43B7F2B7D0FF5FEC54B8FD4233C * L_10 = __this->get_item_4();
		int32_t L_11 = L_10->get_itemCost_6();
		G_B1_0 = L_7;
		if ((((int32_t)L_9) > ((int32_t)L_11)))
		{
			G_B2_0 = L_7;
			goto IL_0055;
		}
	}
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		G_B3_0 = L_12;
		G_B3_1 = G_B1_0;
		goto IL_005a;
	}

IL_0055:
	{
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		L_13 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
	}

IL_005a:
	{
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void ShopItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShopItem__ctor_m1720253360ECC5EA804F66B9A6B1DD8C24835802 (ShopItem_tF41FE634D8298D7B2CF2E03AE237F89818D3E101 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
