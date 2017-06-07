// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: goodow_operation.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class GDOPBAttribute;
@class GDOPBDelta_Operation;
@class GDOPBDelta_Operation_Embed;
GPB_ENUM_FWD_DECLARE(GDPBBool);

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum GDOPBAlignment

/** 对齐方式, 作用于整行或一个段落 */
typedef GPB_ENUM(GDOPBAlignment) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GDOPBAlignment_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** 默认值 */
  GDOPBAlignment_DefaultAlignment = 0,

  /** 故意使用小写, 以使转换为 JSON 后的值为 'left' */
  GDOPBAlignment_Left = 1,
  GDOPBAlignment_Center = 2,
  GDOPBAlignment_Right = 3,
  GDOPBAlignment_Justify = 4,
};

GPBEnumDescriptor *GDOPBAlignment_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GDOPBAlignment_IsValidValue(int32_t value);

#pragma mark - Enum GDOPBScript

/** 角标 */
typedef GPB_ENUM(GDOPBScript) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  GDOPBScript_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** 默认值 */
  GDOPBScript_DefaultScript = 0,
  GDOPBScript_Super = 1,
  GDOPBScript_Sub = 2,
};

GPBEnumDescriptor *GDOPBScript_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL GDOPBScript_IsValidValue(int32_t value);

#pragma mark - GDOPBGoodowOperationRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface GDOPBGoodowOperationRoot : GPBRootObject
@end

#pragma mark - GDOPBAttribute

typedef GPB_ENUM(GDOPBAttribute_FieldNumber) {
  GDOPBAttribute_FieldNumber_Color = 1,
  GDOPBAttribute_FieldNumber_Background = 2,
  GDOPBAttribute_FieldNumber_Size = 3,
  GDOPBAttribute_FieldNumber_Font = 4,
  GDOPBAttribute_FieldNumber_Link = 5,
  GDOPBAttribute_FieldNumber_Bold = 6,
  GDOPBAttribute_FieldNumber_Italic = 7,
  GDOPBAttribute_FieldNumber_Underline = 8,
  GDOPBAttribute_FieldNumber_Strike = 9,
  GDOPBAttribute_FieldNumber_Code = 10,
  GDOPBAttribute_FieldNumber_Script = 11,
  GDOPBAttribute_FieldNumber_Extras = 12,
  GDOPBAttribute_FieldNumber_Align = 13,
  GDOPBAttribute_FieldNumber_Width = 14,
  GDOPBAttribute_FieldNumber_Height = 15,
};

/**
 * 样式的集合
 **/
@interface GDOPBAttribute : GPBMessage

/** * Inline Formats * */
@property(nonatomic, readwrite, copy, null_resettable) NSString *color;

/** 背景色 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *background;

/** 字号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *size;

/** 字体 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *font;

/** 链接 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *link;

/** 粗体 */
@property(nonatomic, readwrite) enum GDPBBool bold;

/** 斜体 */
@property(nonatomic, readwrite) enum GDPBBool italic;

/** 下划线 */
@property(nonatomic, readwrite) enum GDPBBool underline;

/** 删除线 */
@property(nonatomic, readwrite) enum GDPBBool strike;

@property(nonatomic, readwrite) enum GDPBBool code;

@property(nonatomic, readwrite) GDOPBScript script;

/** * 用于扩展自定义样式 * */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, NSString*> *extras;
/** The number of items in @c extras without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger extras_Count;

/** * Block Formats * */
@property(nonatomic, readwrite) GDOPBAlignment align;

/** * Embeds Formats * */
@property(nonatomic, readwrite, copy, null_resettable) NSString *width;

@property(nonatomic, readwrite, copy, null_resettable) NSString *height;

@end

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c bold property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Bold_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c bold property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Bold_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c italic property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Italic_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c italic property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Italic_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c underline property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Underline_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c underline property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Underline_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c strike property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Strike_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c strike property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Strike_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c code property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Code_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c code property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Code_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c script property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Script_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c script property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Script_RawValue(GDOPBAttribute *message, int32_t value);

/**
 * Fetches the raw value of a @c GDOPBAttribute's @c align property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t GDOPBAttribute_Align_RawValue(GDOPBAttribute *message);
/**
 * Sets the raw value of an @c GDOPBAttribute's @c align property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetGDOPBAttribute_Align_RawValue(GDOPBAttribute *message, int32_t value);

#pragma mark - GDOPBDelta

typedef GPB_ENUM(GDOPBDelta_FieldNumber) {
  GDOPBDelta_FieldNumber_OpsArray = 1,
};

/**
 * 富文本数据模型
 **/
@interface GDOPBDelta : GPBMessage

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<GDOPBDelta_Operation*> *opsArray;
/** The number of items in @c opsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger opsArray_Count;

@end

#pragma mark - GDOPBDelta_Operation

typedef GPB_ENUM(GDOPBDelta_Operation_FieldNumber) {
  GDOPBDelta_Operation_FieldNumber_Insert = 1,
  GDOPBDelta_Operation_FieldNumber_InsertEmbed = 2,
  GDOPBDelta_Operation_FieldNumber_Retain_p = 3,
  GDOPBDelta_Operation_FieldNumber_Delete_p = 4,
  GDOPBDelta_Operation_FieldNumber_Attributes = 5,
};

/**
 * 富文本片段
 **/
@interface GDOPBDelta_Operation : GPBMessage

/** 文本内容. 当值为换行符 '\\n' 时, attributes(忽略非 Block Formats) 表示段落的样式 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *insert;

/** 非文本类型内容 */
@property(nonatomic, readwrite, strong, null_resettable) GDOPBDelta_Operation_Embed *insertEmbed;
/** Test to see if @c insertEmbed has been set. */
@property(nonatomic, readwrite) BOOL hasInsertEmbed;

/** 如 attributes 也存在, 可用于改变内容的样式 */
@property(nonatomic, readwrite) uint64_t retain_p;

/** 先保留, 暂不实现 */
@property(nonatomic, readwrite) uint64_t delete_p;

/** 样式 */
@property(nonatomic, readwrite, strong, null_resettable) GDOPBAttribute *attributes;
/** Test to see if @c attributes has been set. */
@property(nonatomic, readwrite) BOOL hasAttributes;

@end

#pragma mark - GDOPBDelta_Operation_Embed

typedef GPB_ENUM(GDOPBDelta_Operation_Embed_FieldNumber) {
  GDOPBDelta_Operation_Embed_FieldNumber_Image = 1,
  GDOPBDelta_Operation_Embed_FieldNumber_Video = 2,
  GDOPBDelta_Operation_Embed_FieldNumber_Space = 3,
  GDOPBDelta_Operation_Embed_FieldNumber_Button = 4,
};

/**
 * 非文本类型内容
 **/
@interface GDOPBDelta_Operation_Embed : GPBMessage

/** 图片 url */
@property(nonatomic, readwrite, copy, null_resettable) NSString *image;

/** 视频 url */
@property(nonatomic, readwrite, copy, null_resettable) NSString *video;

/** 空白点位. 等同于 url 为一个透明图片的 image */
@property(nonatomic, readwrite) BOOL space;

/** 按钮标题. 使用 link 属性表示点击动作 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *button;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)