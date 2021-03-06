// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: User.proto

#import "GPBProtocolBuffers.h"

#if GOOGLE_PROTOBUF_OBJC_GEN_VERSION != 30000
#error This file was generated by a different version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum UserInfo_PhoneType

typedef GPB_ENUM(UserInfo_PhoneType) {
  UserInfo_PhoneType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  UserInfo_PhoneType_Mobile = 0,
  UserInfo_PhoneType_Home = 1,
  UserInfo_PhoneType_Work = 2,
};

GPBEnumDescriptor *UserInfo_PhoneType_EnumDescriptor(void);

BOOL UserInfo_PhoneType_IsValidValue(int32_t value);

#pragma mark - UserRoot

@interface UserRoot : GPBRootObject

// The base class provides:
//   + (GPBExtensionRegistry *)extensionRegistry;
// which is an GPBExtensionRegistry that includes all the extensions defined by
// this file and all files that it depends on.

@end

#pragma mark - UserInfo

typedef GPB_ENUM(UserInfo_FieldNumber) {
  UserInfo_FieldNumber_Name = 1,
  UserInfo_FieldNumber_Uid = 2,
  UserInfo_FieldNumber_Email = 3,
  UserInfo_FieldNumber_PhoneArray = 4,
};

@interface UserInfo : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *name;

@property(nonatomic, readwrite) int32_t uid;

@property(nonatomic, readwrite, copy, null_resettable) NSString *email;

// |phoneArray| contains |UserInfo_PhoneNumber|
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray *phoneArray;
@property(nonatomic, readonly) NSUInteger phoneArray_Count;

@end

#pragma mark - UserInfo_PhoneNumber

typedef GPB_ENUM(UserInfo_PhoneNumber_FieldNumber) {
  UserInfo_PhoneNumber_FieldNumber_Number = 1,
  UserInfo_PhoneNumber_FieldNumber_Type = 2,
};

@interface UserInfo_PhoneNumber : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *number;

@property(nonatomic, readwrite) UserInfo_PhoneType type;

@end

int32_t UserInfo_PhoneNumber_Type_RawValue(UserInfo_PhoneNumber *message);
void SetUserInfo_PhoneNumber_Type_RawValue(UserInfo_PhoneNumber *message, int32_t value);

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

// @@protoc_insertion_point(global_scope)
